# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\exp03_cmake_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\exp03_cmake_autogen.dir\\ParseCache.txt"
  "exp03_cmake_autogen"
  )
endif()
