#!/usr/bin/env python3
import numpy as np
import cv2
from cv_bridge import CvBridge
import os
from google.cloud import vision

import rclpy
from rclpy.node import Node
import sensor_msgs
from sensor_msgs.msg import Image

import geometry_msgs
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry

from rclpy.qos import qos_profile_sensor_data, QoSProfile 

class ScanApproachNode(Node):
    def __init__(self):
        super().__init__("scan_approach_node")

        self.json_key_path = "/home/ubuntu/Desktop/collaborative/collaborative-robotics/winged-complex-448806-d7-1c422cf64607.json"

        os.environ["GOOGLE_APPLICATION_CREDENTIALS"] = self.json_key_path

        self.bridge = CvBridge()

        self.client = vision.ImageAnnotatorClient()

        self.mobile_base_vel_publisher = self.create_publisher(Twist,"/locobot/mobile_base/cmd_vel", 1)

        msg = Twist()
        msg.angular.z = 0.5  # Set angular velocity (turn)
        self.mobile_base_vel_publisher.publish(msg)

        self.desiredObject = "Shoe"

        self.camera_subscription = self.create_subscription(
            Image,
            "/locobot/camera/color/image_raw",
            self.ScanImage,
            qos_profile=qos_profile_sensor_data  # Best effort QoS profile for sensor data [usual would be queue size: 1]
            ) #this says: listen to the image_raw message, of type Image, and send that to the callback function specified
        self.camera_subscription  # prevent unused variable warning
    
    def ScanImage(self,imageMessage):
        cv_ColorImage = self.bridge.imgmsg_to_cv2(imageMessage, desired_encoding='passthrough')
        success, encoded_image = cv2.imencode('.jpg', cv_ColorImage)
        content2 = encoded_image.tobytes()
        visionImage = vision.Image(content=content2)
        # Send the image to the API for object localization
        response = self.client.object_localization(image=visionImage)
        # Extract localized object annotations
        objects = response.localized_object_annotations
        for object in objects:
            if object.name.lower() == self.desiredObject:
                msg = Twist()
                msg.linear.x = 0.5  # Set linear velocity (forward)
                self.mobile_base_vel_publisher.publish(msg)
                break


if __name__ == '__main__':
    rclpy.init()
    node = ScanApproachNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()