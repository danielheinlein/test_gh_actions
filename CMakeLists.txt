cmake_minimum_required(VERSION 3.10)
project(hello_world)

add_executable(hello_world src/main.cpp)

include(CTest)
# enable_testing()
add_test(NAME test_exec COMMAND hello_world)