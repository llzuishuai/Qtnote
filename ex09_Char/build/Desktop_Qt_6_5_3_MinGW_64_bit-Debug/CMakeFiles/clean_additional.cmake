# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ex09_Char_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ex09_Char_autogen.dir\\ParseCache.txt"
  "ex09_Char_autogen"
  )
endif()
