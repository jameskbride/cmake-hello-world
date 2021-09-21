# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.21)
project (Demo1)

#version number
set (Demo1_VERSION_MAJOR 1)
set (Demo1_VERSION_MINOR 0)

#include the subdirectory containing our libs
# add_subdirectory (Hello)
# include_directories(Hello)

# 项目信息
add_executable (Demo1 HelloWorld.cpp)
