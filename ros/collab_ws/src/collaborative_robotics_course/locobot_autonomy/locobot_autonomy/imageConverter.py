#!/usr/bin/env python3
import numpy as np
import cv2
from cv_bridge import CvBridge
import os
import google.generativeai as genai

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

class GeminiClass:
    def __init__(self, prompt=None):
        """
        Constructor for the GeminiClass.
        Initializes the generative model and sets a default prompt.

        Parameters:
        - prompt (optional): A string to set as the default prompt. Defaults to an empty string if not provided.
        """
        self.gemini_model = genai.GenerativeModel("gemini-1.5-flash")
        if prompt:
            self.prompt = prompt
        else:
            self.prompt = ""

    def set_prompt(self, prompt):
        """
        Sets or updates the prompt for the GeminiClass.

        Parameters:
        - prompt: A string that will serve as the base prompt for content generation.
        """
        #Add code to set self.prompt to the provided prompt
        self.prompt = prompt

    def generate_content(self, text, usePrompt):
        """
        Generates content using the generative model.

        Parameters:
        - text: A string input to provide to the model for content generation.
        - usePrompt: A boolean indicating whether to prepend the class's prompt to the input text.

        Returns:
        - The generated content as a string.
        """
        #Add code to generate content from text. The usePrompt boolean should determine if the prompt is used or not.
        if usePrompt:
            prompt = self.prompt + text
        else:
            prompt = text
        response = self.gemini_model.generate_content(prompt)
        return response.text

    def generate_from_image(self, image_bytes, textInput):
        """
        Generates content based on an image and optional text input.

        Parameters:
        - image_bytes: The binary data of the image.
        - textInput: A string input to accompany the image for content generation.

        Returns:
        - The generated content as a string.
        """
        # Add code that allows for the image and the text input to be passed to Gemini and return Gemini's response.
        if textInput:
          prompt = [image_bytes, textInput]
        else:
          prompt = image_bytes
        #Hint: Gemini can accept multiple inputs in the form of a list.
        response = self.gemini_model.generate_content(prompt)
        return response.text

class ImageConverterNode(Node):
    def __init__(self):
        super().__init__("image_converter_node")

        json_key_path = "/home/ubuntu/Desktop/collaborative/collaborative-robotics/winged-complex-448806-d7-1c422cf64607.json" #this is an example, update with your path following instructions above

        os.environ["GOOGLE_APPLICATION_CREDENTIALS"] = json_key_path

        self.bridge = CvBridge()

        self.grayscale_publisher = self.create_publisher(Image,"/locobot/camera_frame_sensor/image_grayed", 1)

        self.declare_parameter("scanImage", False)

        self.odom_subscription = self.create_subscription(
            Image,
            "/locobot/camera_frame_sensor/image_raw",
            self.ConvertImage,
            qos_profile=qos_profile_sensor_data  # Best effort QoS profile for sensor data [usual would be queue size: 1]
            ) #this says: listen to the odom message, of type odometry, and send that to the callback function specified
        self.odom_subscription  # prevent unused variable warning

        self.gemini = GeminiClass()
    
    @property
    def scanImage(self) -> bool:
        return self.get_parameter("scanImage").value
    
    def ConvertImage(self,colorImageMessage):
        cv_ColorImage = self.bridge.imgmsg_to_cv2(colorImageMessage, desired_encoding='passthrough')
        cv_GrayImage = cv2.cvtColor(cv_ColorImage,cv2.COLOR_RGB2GRAY)
        self.grayscale_publisher.publish(self.bridge.cv2_to_imgmsg(cv_GrayImage, encoding="passthrough"))
        if self.scanImage:
            self.get_logger().info(self.gemini.generate_from_image(cv_ColorImage, 'What do you see in this picture?'))
            self.scanImage = False


if __name__ == '__main__':
    rclpy.init()
    node = ImageConverterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()