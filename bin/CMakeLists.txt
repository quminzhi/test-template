cmake_minimum_required(VERSION 3.18.4)

set(CMAKE_BUILD_TYPE Debug)

set(BIN find)
set(SOURCES ${BIN}.c)

add_executable(${BIN} ${SOURCES})
target_link_libraries(${BIN} PUBLIC
  # link libraries needed
  libexternal
  comm
) 

#############################
# add other apps here
#############################

