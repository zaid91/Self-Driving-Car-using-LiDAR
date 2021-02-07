# Self-Driving-Car-using-LiDAR
A Rasspberry Pi based autonomous vehicle that can  traverse an obstacle course guided by a black line. The vehicle follows the black line as much as possible while avoiding obstacles impeding its path using LiDAR sensor.

Implemented in C and C++ using our own aswell as WiringPi libraries

Video for the working project can be found here - https://www.youtube.com/watch?v=QYSw9-s8noM

The references used for the the RPLidar are given here - http://www.slamtec.com/en/Support#rplidar-a-series

For the Lidar code I have made changes in the file /sdk/app/ultra_simple/main.cpp

This file writes to a fifo created by testingpipe.c and testingpipe.c reads from this fifo
