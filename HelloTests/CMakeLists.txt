cmake_minimum_required(VERSION 2.8)
project(Hello)

#Get dependencies
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(HELLO_TESTS_SRCS
  #  ${PROJECT_SOURCE_DIR}/Speaker.cpp
)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

add_library(${PROJECT_NAME} SHARED ${HELLO_TESTS_SRCS})
#Link test runner
add_executable(HelloTestsMain HelloTestsMain.cpp)
target_link_libraries(HelloTestsMain ${GTEST_LIBRARIES} pthread)
