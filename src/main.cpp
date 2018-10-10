#include <ros/ros.h>
#include <iostream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "points2image_node");
    ros::NodeHandle nh;
    ros::NodeHandle private_nh("~");

    return 0;
}
