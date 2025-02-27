from setuptools import find_packages
from setuptools import setup

setup(
    name='la_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('la_msgs', 'la_msgs.*')),
)
