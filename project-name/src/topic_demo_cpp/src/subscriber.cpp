#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using namespace std;

class SubNode:public rclcpp::Node{
private:
    //定义订阅者
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription;
public:
    SubNode():Node("subnode"){
        //创建订阅者，指定泛型类型为string，方法第一个参数是话题名称，第二个参数填个10先
        //第三个参数是一个函数，这里用lambda，这个函数接受一个参数，即收到的消息
        subscription = this->create_subscription<std_msgs::msg::String>("topic_cpp",10,
        [&](std_msgs::msg::String msg){
            string data= msg.data;
            //打印INFO级别日志，这个c_str()函数用于将字符串转换为C风格的字符串
            RCLCPP_INFO(get_logger(),"2024080203 XuHaodong");
        });
    }
};

int main(int argc,char** argv){
    rclcpp::init(argc,argv);
    auto node = make_shared<SubNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
