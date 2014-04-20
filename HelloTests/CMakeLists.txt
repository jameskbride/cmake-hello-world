add_library (HelloTests 
  )

#Get dependencies
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

#Link test runner
add_executable(HelloTestsMain HelloTestsMain.cpp)
target_link_libraries(HelloTestsMain ${GTEST_LIBRARIES} pthread)
