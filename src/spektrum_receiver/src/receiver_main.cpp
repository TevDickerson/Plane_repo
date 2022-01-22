#include "ros/ros.h"
#include "std_msgs/String.h"
#include "SpektrumSatellite/src/SpektrumSatellite.h"
#include "wiringPi.h"
#include "iostream"

#include <sstream>

int main(int argc, char **argv)
{

   ros::init(argc, argv, "reveiver_main");

   ros::NodeHandle n;

   int count = 0;
   while (ros::ok())
   {
      std::cout << "count" << std::endl;
      ROS_ERROR_STREAM("This is my index: " << count);
      ++count;
   }

   return 0;
}
