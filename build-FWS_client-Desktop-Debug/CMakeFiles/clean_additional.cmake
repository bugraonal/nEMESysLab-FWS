# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/FWS_client_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/FWS_client_autogen.dir/ParseCache.txt"
  "FWS_client_autogen"
  )
endif()
