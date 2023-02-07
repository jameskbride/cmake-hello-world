# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.21)
project (Demo2)

#version number
set (Demo2_VERSION_MAJOR 1)
set (Demo2_VERSION_MINOR 0)

#include the subdirectory containing our libs
# add_subdirectory (Hello)
# include_directories(Hello)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 项目信息
add_executable (Demo2 ${DIR_SRCS})
