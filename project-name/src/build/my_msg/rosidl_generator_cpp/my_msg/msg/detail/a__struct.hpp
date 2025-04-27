// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msg:msg/A.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_msg/msg/a.hpp"


#ifndef MY_MSG__MSG__DETAIL__A__STRUCT_HPP_
#define MY_MSG__MSG__DETAIL__A__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_msg__msg__A __attribute__((deprecated))
#else
# define DEPRECATED__my_msg__msg__A __declspec(deprecated)
#endif

namespace my_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct A_
{
  using Type = A_<ContainerAllocator>;

  explicit A_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  explicit A_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _str_type str;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msg::msg::A_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msg::msg::A_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msg::msg::A_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msg::msg::A_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msg::msg::A_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msg::msg::A_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msg::msg::A_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msg::msg::A_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msg::msg::A_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msg::msg::A_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msg__msg__A
    std::shared_ptr<my_msg::msg::A_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msg__msg__A
    std::shared_ptr<my_msg::msg::A_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const A_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->str != other.str) {
      return false;
    }
    return true;
  }
  bool operator!=(const A_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct A_

// alias to use template instance with default allocator
using A =
  my_msg::msg::A_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msg

#endif  // MY_MSG__MSG__DETAIL__A__STRUCT_HPP_
