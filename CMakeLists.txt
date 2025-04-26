cmake_minimum_required(VERSION 3.10)
project(cpp-ci-demo)

set(CMAKE_CXX_STANDARD 17)

# Library
add_library(can_signal
src/CANSignal.cpp
src/RPM_Signal.cpp
src/Gear_Signal.cpp
# Add more .cpp files if needed
 "tests/test_RPMSignal.cpp" "tests/test_GearSignal.cpp")

target_include_directories(can_signal PUBLIC sort)

#Test execution
add_executable(test_runner 
tests/test_main.cpp 
tests/test_CANSignal.cpp
 "tests/test_RPMSignal.cpp" "tests/test_GearSignal.cpp")

target_include_directories(test_runner PRIVATE external src)
target_link_libraries(test_runner can_signal)
