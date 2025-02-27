// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice

#ifndef LA_MSGS__SRV__DETAIL__PTPS__TRAITS_HPP_
#define LA_MSGS__SRV__DETAIL__PTPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "la_msgs/srv/detail/ptps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace la_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ptps_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_frame
  {
    out << "desired_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ptps_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ptps_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace la_msgs

namespace rosidl_generator_traits
{

[[deprecated("use la_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const la_msgs::srv::Ptps_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  la_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use la_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const la_msgs::srv::Ptps_Request & msg)
{
  return la_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<la_msgs::srv::Ptps_Request>()
{
  return "la_msgs::srv::Ptps_Request";
}

template<>
inline const char * name<la_msgs::srv::Ptps_Request>()
{
  return "la_msgs/srv/Ptps_Request";
}

template<>
struct has_fixed_size<la_msgs::srv::Ptps_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<la_msgs::srv::Ptps_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<la_msgs::srv::Ptps_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'red_points'
// Member 'blue_points'
// Member 'yellow_points'
// Member 'green_points'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace la_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ptps_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: red_present
  {
    out << "red_present: ";
    rosidl_generator_traits::value_to_yaml(msg.red_present, out);
    out << ", ";
  }

  // member: blue_present
  {
    out << "blue_present: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_present, out);
    out << ", ";
  }

  // member: yellow_present
  {
    out << "yellow_present: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_present, out);
    out << ", ";
  }

  // member: green_present
  {
    out << "green_present: ";
    rosidl_generator_traits::value_to_yaml(msg.green_present, out);
    out << ", ";
  }

  // member: red_points
  {
    if (msg.red_points.size() == 0) {
      out << "red_points: []";
    } else {
      out << "red_points: [";
      size_t pending_items = msg.red_points.size();
      for (auto item : msg.red_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blue_points
  {
    if (msg.blue_points.size() == 0) {
      out << "blue_points: []";
    } else {
      out << "blue_points: [";
      size_t pending_items = msg.blue_points.size();
      for (auto item : msg.blue_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yellow_points
  {
    if (msg.yellow_points.size() == 0) {
      out << "yellow_points: []";
    } else {
      out << "yellow_points: [";
      size_t pending_items = msg.yellow_points.size();
      for (auto item : msg.yellow_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: green_points
  {
    if (msg.green_points.size() == 0) {
      out << "green_points: []";
    } else {
      out << "green_points: [";
      size_t pending_items = msg.green_points.size();
      for (auto item : msg.green_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ptps_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_present: ";
    rosidl_generator_traits::value_to_yaml(msg.red_present, out);
    out << "\n";
  }

  // member: blue_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_present: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_present, out);
    out << "\n";
  }

  // member: yellow_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_present: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_present, out);
    out << "\n";
  }

  // member: green_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_present: ";
    rosidl_generator_traits::value_to_yaml(msg.green_present, out);
    out << "\n";
  }

  // member: red_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.red_points.size() == 0) {
      out << "red_points: []\n";
    } else {
      out << "red_points:\n";
      for (auto item : msg.red_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: blue_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blue_points.size() == 0) {
      out << "blue_points: []\n";
    } else {
      out << "blue_points:\n";
      for (auto item : msg.blue_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: yellow_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yellow_points.size() == 0) {
      out << "yellow_points: []\n";
    } else {
      out << "yellow_points:\n";
      for (auto item : msg.yellow_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: green_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.green_points.size() == 0) {
      out << "green_points: []\n";
    } else {
      out << "green_points:\n";
      for (auto item : msg.green_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ptps_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace la_msgs

namespace rosidl_generator_traits
{

[[deprecated("use la_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const la_msgs::srv::Ptps_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  la_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use la_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const la_msgs::srv::Ptps_Response & msg)
{
  return la_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<la_msgs::srv::Ptps_Response>()
{
  return "la_msgs::srv::Ptps_Response";
}

template<>
inline const char * name<la_msgs::srv::Ptps_Response>()
{
  return "la_msgs/srv/Ptps_Response";
}

template<>
struct has_fixed_size<la_msgs::srv::Ptps_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<la_msgs::srv::Ptps_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<la_msgs::srv::Ptps_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<la_msgs::srv::Ptps>()
{
  return "la_msgs::srv::Ptps";
}

template<>
inline const char * name<la_msgs::srv::Ptps>()
{
  return "la_msgs/srv/Ptps";
}

template<>
struct has_fixed_size<la_msgs::srv::Ptps>
  : std::integral_constant<
    bool,
    has_fixed_size<la_msgs::srv::Ptps_Request>::value &&
    has_fixed_size<la_msgs::srv::Ptps_Response>::value
  >
{
};

template<>
struct has_bounded_size<la_msgs::srv::Ptps>
  : std::integral_constant<
    bool,
    has_bounded_size<la_msgs::srv::Ptps_Request>::value &&
    has_bounded_size<la_msgs::srv::Ptps_Response>::value
  >
{
};

template<>
struct is_service<la_msgs::srv::Ptps>
  : std::true_type
{
};

template<>
struct is_service_request<la_msgs::srv::Ptps_Request>
  : std::true_type
{
};

template<>
struct is_service_response<la_msgs::srv::Ptps_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LA_MSGS__SRV__DETAIL__PTPS__TRAITS_HPP_
