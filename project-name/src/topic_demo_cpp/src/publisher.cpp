#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using namespace std;
class PubNode:public rclcpp::Node{
private:
    //定义发布者
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher;
    //定时器，用于周期性向话题发布消息
    rclcpp::TimerBase::SharedPtr timer;
public:
    PubNode():Node("pubnode"){
        //创建发布者，泛型类型指定为string，方法第一个参数为话题名字，第二个参数很久之后才会细讲，填10先
        publisher = this->create_publisher<std_msgs::msg::String>("topic_cpp",10);
        //创建定时器，第一个参数为间隔时间，第二个参数是一个回调函数，无参无返回值
        timer = this->create_wall_timer(1000ms,[&](){
            //创建消息
            auto msg = std_msgs::msg::String();
            //写入内容
            msg.data = "hello,ros2";
            //发布消息
            RCLCPP_INFO(this->get_logger(), "ciallo~ros2!");  // ROS2日志输出
            publisher->publish(msg);
        });
    }
};

int main(int argc,char** argv){
    rclcpp::init(argc,argv);
    auto node = make_shared<PubNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
