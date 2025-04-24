cmake_minimum_required(VERSION 3.10)
project(SimpleAdd)

set(CMAKE_CXX_STANDARD 17)

add_library(math STATIC src/main.cpp)
add_executable(test_runner tests/test_main.cpp)
target_link_libraries(test_runner math)
