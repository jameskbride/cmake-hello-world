cmake_minimum_required(VERSION 2.8)
project(HelloTests)

#Get dependencies
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(HELLO_TESTS_SRCS
    ${PROJECT_SOURCE_DIR}/HelloTestsMain.cpp
    ${PROJECT_SOURCE_DIR}/SpeakerTests.cpp
)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")
#add_library(Hello ${HELLO_SRCS})

#add_executable(HelloTestsMain ${PROJECT_SOURCE_DIR}/HelloTestsMain.cpp)
add_executable(HelloTestsMain ${HELLO_TESTS_SRCS})
add_test(
NAME HelloTestsMain
COMMAND HelloTestsMain
)
#Link test runner
target_link_libraries(HelloTestsMain
${GTEST_LIBRARIES}
pthread
Hello
)
