import rclpy
from rclpy.node import Node
from std_msgs.msg import String
class SubNode(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        #创建订阅者，第一个参数是消息接口，第二个参数是话题名字，第三个参数是回调函数，
        #回调函数接收一个参数，即接收到的消息，第四个参数很久之后才会细讲，目前填个10先
        self.subscriber = self.create_subscription(String,'py_topic',self.sub_callback,10)

    def sub_callback(self,msg):
        self.get_logger().info(msg.data)#打印接收到的消息

def main():
    rclpy.init()
    node = SubNode('yyy')
    rclpy.spin(node)
    rclpy.shutdown()
