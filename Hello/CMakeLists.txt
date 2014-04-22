cmake_minimum_required(VERSION 2.8)
project(Hello)

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(Hello ${PROJECT_SOURCE_DIR})

set(HELLO_SRCS
  ${PROJECT_SOURCE_DIR}/Speaker.cpp
  ${PROJECT_SOURCE_DIR}/Speaker.h
)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

add_library(${PROJECT_NAME} SHARED ${HELLO_SRCS})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
