cmake_minimum_required(VERSION 3.18.4)

set(CMAKE_BUILD_TYPE Debug)

set(LIB_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

###########################
# add your own library here
###########################

add_library(
  comm SHARED
  include/comm.h
  src/comm.c
)
target_include_directories(comm PUBLIC "${LIB_INCLUDE_DIR}")

###########################
# external link_libraries
###########################

# # add a shared library as the external library, csapp
# add_library(
#   csapp SHARED
#   include/csapp.h
#   src/csapp.c
# )
# target_include_directories(csapp PUBLIC "${LIB_INCLUDE_DIR}")
# target_link_libraries(csapp -lpthread)

# aggregate all auxiliary libraries into libcomm 
# todo: add library to import in libcomm
add_library(
  libexternal INTERFACE
)

target_link_libraries(
  libexternal INTERFACE
  # csapp
)
target_include_directories(libexternal INTERFACE "${LIB_INCLUDE_DIR}")
