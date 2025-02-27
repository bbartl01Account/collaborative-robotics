# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_stanford_locobot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED stanford_locobot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(stanford_locobot_FOUND FALSE)
  elseif(NOT stanford_locobot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(stanford_locobot_FOUND FALSE)
  endif()
  return()
endif()
set(_stanford_locobot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT stanford_locobot_FIND_QUIETLY)
  message(STATUS "Found stanford_locobot: 0.0.0 (${stanford_locobot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'stanford_locobot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${stanford_locobot_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(stanford_locobot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${stanford_locobot_DIR}/${_extra}")
endforeach()
