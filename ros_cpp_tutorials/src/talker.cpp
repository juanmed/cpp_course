#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv){

	ros::init(argc, argv, "talker");
	ros::NodeHandle nodo;

	ros::Publisher emisor = nodo.advertise<std_msgs::String>("mensajes", 10);
	ros::Rate freq(10);

	int i = 0;
	std_msgs::String mensaje;

	while(ros::ok()){
		std::stringstream ss;

		ss << "hola mundo " << i;
		mensaje.data = ss.str();

		ROS_INFO("%s", mensaje.data.c_str());

		emisor.publish(mensaje);
		ros::spinOnce();
		freq.sleep();
		i++;
	}

	return 0;

}