#include "rclcpp/rclcpp.hpp"
#include <iostream>
using namespace std;
int main(int argc,char** argv){
    rclcpp::init(argc,argv);
    auto node = make_shared<rclcpp::Node>("cppnode");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
