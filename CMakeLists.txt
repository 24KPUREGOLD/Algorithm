cmake_minimum_required(VERSION 3.20)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm main.cpp ViewAlgorithm/ReverseList.cpp ViewAlgorithm/JumpFloor.cpp ViewAlgorithm/MaxLengthSubArray.cpp)

add_executable(ReverseList ViewAlgorithm/ReverseList.cpp)
add_executable(JumpFloor ViewAlgorithm/JumpFloor.cpp)
add_executable(MaxLengthSubArray ViewAlgorithm/MaxLengthSubArray.cpp)