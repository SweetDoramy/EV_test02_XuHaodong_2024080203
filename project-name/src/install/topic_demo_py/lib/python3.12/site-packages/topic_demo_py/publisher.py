import rclpy
from rclpy.node import Node
from std_msgs.msg import String#导入消息接口
class PubNode(Node):#自定义一个节点
    def __init__(self,node_name):
        super().__init__(node_name)
        #创建一个定时器，用于定时发布消息，的一个参数是间隔时间，单位是秒
        #第二个参数是一个回调函数，用与周期性执行操作
        self.timer = self.create_timer(1,self.timer_callback)
        #创建发布者，第一个参数是信息接口，第二个参数是话题名字，第三个参数很久之后才会细讲，目前填个10先
        self.publisher = self.create_publisher(String,'py_topic',10)
    def timer_callback(self):
        msg = String()#创建消息接口
        msg.data = '你好'
        self.publisher.publish(msg)#发布消息
def main():
    rclpy.init()
    node = PubNode('xxx')
    rclpy.spin(node)
    rclpy.shutdown()        
