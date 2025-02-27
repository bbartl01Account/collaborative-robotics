// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from locobot_autonomy:action/MoveBase.idl
// generated code does not contain a copyright notice

#ifndef LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__TRAITS_HPP_
#define LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "locobot_autonomy/action/detail/move_base__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
    out << ", ";
  }

  // member: control_base_angle_bool
  {
    out << "control_base_angle_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.control_base_angle_bool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: control_base_angle_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_base_angle_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.control_base_angle_bool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_Goal & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_Goal>()
{
  return "locobot_autonomy::action::MoveBase_Goal";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_Goal>()
{
  return "locobot_autonomy/action/MoveBase_Goal";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: done
  {
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_Result & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_Result>()
{
  return "locobot_autonomy::action::MoveBase_Result";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_Result>()
{
  return "locobot_autonomy/action/MoveBase_Result";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: angular_distance
  {
    out << "angular_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: angular_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_Feedback & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_Feedback>()
{
  return "locobot_autonomy::action::MoveBase_Feedback";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_Feedback>()
{
  return "locobot_autonomy/action/MoveBase_Feedback";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "locobot_autonomy/action/detail/move_base__traits.hpp"

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_SendGoal_Request & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_SendGoal_Request>()
{
  return "locobot_autonomy::action::MoveBase_SendGoal_Request";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_SendGoal_Request>()
{
  return "locobot_autonomy/action/MoveBase_SendGoal_Request";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<locobot_autonomy::action::MoveBase_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<locobot_autonomy::action::MoveBase_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_SendGoal_Response & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_SendGoal_Response>()
{
  return "locobot_autonomy::action::MoveBase_SendGoal_Response";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_SendGoal_Response>()
{
  return "locobot_autonomy/action/MoveBase_SendGoal_Response";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_SendGoal>()
{
  return "locobot_autonomy::action::MoveBase_SendGoal";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_SendGoal>()
{
  return "locobot_autonomy/action/MoveBase_SendGoal";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<locobot_autonomy::action::MoveBase_SendGoal_Request>::value &&
    has_fixed_size<locobot_autonomy::action::MoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<locobot_autonomy::action::MoveBase_SendGoal_Request>::value &&
    has_bounded_size<locobot_autonomy::action::MoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<locobot_autonomy::action::MoveBase_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<locobot_autonomy::action::MoveBase_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<locobot_autonomy::action::MoveBase_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_GetResult_Request & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_GetResult_Request>()
{
  return "locobot_autonomy::action::MoveBase_GetResult_Request";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_GetResult_Request>()
{
  return "locobot_autonomy/action/MoveBase_GetResult_Request";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "locobot_autonomy/action/detail/move_base__traits.hpp"

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_GetResult_Response & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_GetResult_Response>()
{
  return "locobot_autonomy::action::MoveBase_GetResult_Response";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_GetResult_Response>()
{
  return "locobot_autonomy/action/MoveBase_GetResult_Response";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<locobot_autonomy::action::MoveBase_Result>::value> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<locobot_autonomy::action::MoveBase_Result>::value> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_GetResult>()
{
  return "locobot_autonomy::action::MoveBase_GetResult";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_GetResult>()
{
  return "locobot_autonomy/action/MoveBase_GetResult";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<locobot_autonomy::action::MoveBase_GetResult_Request>::value &&
    has_fixed_size<locobot_autonomy::action::MoveBase_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<locobot_autonomy::action::MoveBase_GetResult_Request>::value &&
    has_bounded_size<locobot_autonomy::action::MoveBase_GetResult_Response>::value
  >
{
};

template<>
struct is_service<locobot_autonomy::action::MoveBase_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<locobot_autonomy::action::MoveBase_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<locobot_autonomy::action::MoveBase_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "locobot_autonomy/action/detail/move_base__traits.hpp"

namespace locobot_autonomy
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveBase_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveBase_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveBase_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace locobot_autonomy

namespace rosidl_generator_traits
{

[[deprecated("use locobot_autonomy::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const locobot_autonomy::action::MoveBase_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  locobot_autonomy::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use locobot_autonomy::action::to_yaml() instead")]]
inline std::string to_yaml(const locobot_autonomy::action::MoveBase_FeedbackMessage & msg)
{
  return locobot_autonomy::action::to_yaml(msg);
}

template<>
inline const char * data_type<locobot_autonomy::action::MoveBase_FeedbackMessage>()
{
  return "locobot_autonomy::action::MoveBase_FeedbackMessage";
}

template<>
inline const char * name<locobot_autonomy::action::MoveBase_FeedbackMessage>()
{
  return "locobot_autonomy/action/MoveBase_FeedbackMessage";
}

template<>
struct has_fixed_size<locobot_autonomy::action::MoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<locobot_autonomy::action::MoveBase_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<locobot_autonomy::action::MoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<locobot_autonomy::action::MoveBase_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<locobot_autonomy::action::MoveBase_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<locobot_autonomy::action::MoveBase>
  : std::true_type
{
};

template<>
struct is_action_goal<locobot_autonomy::action::MoveBase_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<locobot_autonomy::action::MoveBase_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<locobot_autonomy::action::MoveBase_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__TRAITS_HPP_
