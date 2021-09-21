cmake_minimum_required(VERSION 3.12)
project(Demo4 VERSION 1.0.0)

add_library(hello STATIC hello.h hello.cpp)

add_executable(Demo4 main.cpp)

target_link_libraries(Demo4 hello)