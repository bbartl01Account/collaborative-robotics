#!/usr/bin/env python3
import numpy as np
import time

import rclpy
from rclpy.node import Node

import geometry_msgs
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry

from rclpy.qos import qos_profile_sensor_data, QoSProfile 

class CircleDriverNode(Node):
    def __init__(self):
        super().__init__("circle_driver_node")

        self.k = 0.5
        self.filename = "K_"+str(self.k)+".csv"

        self.writtenCSV = False

        self.L = 0.1

        self.dataArray = np.array([[0,self.L,0]])

        self.mobile_base_vel_publisher = self.create_publisher(Twist,"/locobot/diffdrive_controller/cmd_vel_unstamped", 1)

        self.odom_subscription = self.create_subscription(
            Odometry,
            "/locobot/sim_ground_truth_pose",
            self.CommandGenerator,
            qos_profile=qos_profile_sensor_data  # Best effort QoS profile for sensor data [usual would be queue size: 1]
            ) #this says: listen to the odom message, of type odometry, and send that to the callback function specified
        self.odom_subscription  # prevent unused variable warning

        self.t_init = self.get_clock().now().nanoseconds / 1e9
    
    def CommandGenerator(self,data):
        realTime = self.get_clock().now().nanoseconds / 1e9
        deltaTime = realTime - self.t_init
        r_des = np.array([0.5*np.cos(2*np.pi*deltaTime/10),0.5*np.sin(2*np.pi*deltaTime/10)])

        x_data = data.pose.pose.position.x
        y_data = data.pose.pose.position.y
        z_data = data.pose.pose.position.z
        qw = data.pose.pose.orientation.w
        qx = data.pose.pose.orientation.x
        qy = data.pose.pose.orientation.y
        qz = data.pose.pose.orientation.z

        #frame rotation:
        R11 = qw**2 + qx**2 - qy**2 -qz**2
        R12 = 2*qx*qz + 2*qw*qz
        R21 = 2*qx*qz - 2*qw*qz
        R22 = qw**2 - qx**2 + qy**2 -qz**2

        current_angle = np.arctan2(R12,R22)

        r_actual = np.array([x_data + self.L*R11,y_data + self.L*R21])

        error = r_des - r_actual

        K = np.diag([self.k,self.k])

        M = np.array([[np.cos(current_angle), -self.L*np.sin(current_angle)],
                      [np.sin(current_angle),self.L*np.cos(current_angle)]])
        
        u = np.linalg.inv(M) @ K @ error

        control_msg = Twist()
        control_msg.linear.x = float(u.item(0))
        control_msg.angular.z = float(u.item(1))

        self.mobile_base_vel_publisher.publish(control_msg)

        if deltaTime <= 20:
            self.dataArray = np.vstack((self.dataArray,np.array([deltaTime,r_actual[0],r_actual[1]])))
        else:
            if ~self.writtenCSV:
                np.savetxt(self.filename,self.dataArray,delimiter=',')
                self.writtenCSV = True
            self.get_logger().info('20 seconds has elapsed!')


if __name__ == '__main__':
    rclpy.init()
    node = CircleDriverNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()