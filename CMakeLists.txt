cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

#version number
set (CMakeHelloWorld_VERSION_MAJOR 1)
set (CMakeHelloWorld_VERSION_MINOR 0)

#include the subdirectory containing our libs
include_directories(Hello)
#indicate the entry point for the executable
add_executable(CMakeHelloWorld Hello HelloWorld.cpp)

#include the test subproject
include_directories(HelloTests)


# Indicate which libraries to include during the link process.
target_link_libraries(CMakeHelloWorld HelloTests)

install (TARGETS CMakeHelloWorld HelloTests DESTINATION bin)
