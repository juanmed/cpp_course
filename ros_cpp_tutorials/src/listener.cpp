#include "ros/ros.h"
#include "std_msgs/String.h"

void emisor_cb(const std_msgs::String::ConstPtr & msg){
	ROS_INFO("I heard: %s", msg -> data.c_str());
}

int main(int argc, char **argv){
	ros::init(argc, argv, "receptor");
	ros::NodeHandle n;

	ros::Subscriber receptor = n.subscribe("mensajes", 10, emisor_cb);

	ros::spin();

	return 0;
}