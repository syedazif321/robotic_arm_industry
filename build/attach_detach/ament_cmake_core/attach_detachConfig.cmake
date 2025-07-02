# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_attach_detach_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED attach_detach_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(attach_detach_FOUND FALSE)
  elseif(NOT attach_detach_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(attach_detach_FOUND FALSE)
  endif()
  return()
endif()
set(_attach_detach_CONFIG_INCLUDED TRUE)

# output package information
if(NOT attach_detach_FIND_QUIETLY)
  message(STATUS "Found attach_detach: 0.0.1 (${attach_detach_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'attach_detach' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${attach_detach_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(attach_detach_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${attach_detach_DIR}/${_extra}")
endforeach()
