// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_msg:msg/A.idl
// generated code does not contain a copyright notice
#include "my_msg/msg/detail/a__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `str`
#include "rosidl_runtime_c/string_functions.h"

bool
my_msg__msg__A__init(my_msg__msg__A * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    my_msg__msg__A__fini(msg);
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__init(&msg->str)) {
    my_msg__msg__A__fini(msg);
    return false;
  }
  return true;
}

void
my_msg__msg__A__fini(my_msg__msg__A * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // str
  rosidl_runtime_c__String__fini(&msg->str);
}

bool
my_msg__msg__A__are_equal(const my_msg__msg__A * lhs, const my_msg__msg__A * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->str), &(rhs->str)))
  {
    return false;
  }
  return true;
}

bool
my_msg__msg__A__copy(
  const my_msg__msg__A * input,
  my_msg__msg__A * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__copy(
      &(input->str), &(output->str)))
  {
    return false;
  }
  return true;
}

my_msg__msg__A *
my_msg__msg__A__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msg__msg__A * msg = (my_msg__msg__A *)allocator.allocate(sizeof(my_msg__msg__A), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_msg__msg__A));
  bool success = my_msg__msg__A__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_msg__msg__A__destroy(my_msg__msg__A * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_msg__msg__A__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_msg__msg__A__Sequence__init(my_msg__msg__A__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msg__msg__A * data = NULL;

  if (size) {
    data = (my_msg__msg__A *)allocator.zero_allocate(size, sizeof(my_msg__msg__A), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_msg__msg__A__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_msg__msg__A__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_msg__msg__A__Sequence__fini(my_msg__msg__A__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_msg__msg__A__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_msg__msg__A__Sequence *
my_msg__msg__A__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msg__msg__A__Sequence * array = (my_msg__msg__A__Sequence *)allocator.allocate(sizeof(my_msg__msg__A__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_msg__msg__A__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_msg__msg__A__Sequence__destroy(my_msg__msg__A__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_msg__msg__A__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_msg__msg__A__Sequence__are_equal(const my_msg__msg__A__Sequence * lhs, const my_msg__msg__A__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_msg__msg__A__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_msg__msg__A__Sequence__copy(
  const my_msg__msg__A__Sequence * input,
  my_msg__msg__A__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_msg__msg__A);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_msg__msg__A * data =
      (my_msg__msg__A *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_msg__msg__A__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_msg__msg__A__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_msg__msg__A__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
