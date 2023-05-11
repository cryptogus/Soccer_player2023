cmake_minimum_required (VERSION 3.1)

project(soccer LANGUAGE CXX)

target_include_directories(include)
set()
add_executable(status test/status_test.cpp)