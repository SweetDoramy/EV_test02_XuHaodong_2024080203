// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msg:msg/A.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_msg/msg/a.hpp"


#ifndef MY_MSG__MSG__DETAIL__A__BUILDER_HPP_
#define MY_MSG__MSG__DETAIL__A__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msg/msg/detail/a__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msg
{

namespace msg
{

namespace builder
{

class Init_A_str
{
public:
  explicit Init_A_str(::my_msg::msg::A & msg)
  : msg_(msg)
  {}
  ::my_msg::msg::A str(::my_msg::msg::A::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msg::msg::A msg_;
};

class Init_A_image
{
public:
  Init_A_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_A_str image(::my_msg::msg::A::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_A_str(msg_);
  }

private:
  ::my_msg::msg::A msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msg::msg::A>()
{
  return my_msg::msg::builder::Init_A_image();
}

}  // namespace my_msg

#endif  // MY_MSG__MSG__DETAIL__A__BUILDER_HPP_
