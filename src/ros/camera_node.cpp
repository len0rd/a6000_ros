#include "camera_node_ros.h"

int main(int argc, char *argv[]) {
    
    ros::init(argc, argv, "a6000_ros_node");
    GphotoCameraROS camera;

    ros::NodeHandle nh("~");
    ros::spin();
    return 0;
}