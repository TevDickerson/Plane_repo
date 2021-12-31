#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv)
{

   ros::init(argc, argv, "reveiver_main");

   ros::NodeHandle n;

   int count = 0;
   while (ros::ok())
   {

      ++count;
   }

   return 0;
}
