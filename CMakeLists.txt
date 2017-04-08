cmake_minimum_required(VERSION 3.7)

project(Master-Android-Desktop)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp")
set(
        SOURCE_FILES
        main.cpp
        cpp-shared/simple_pi_calculations.cpp
        cpp-shared/simple_pi_calculations.h
        cpp-shared/parallel_pi_calculations.cpp
        cpp-shared/parallel_pi_calculations.h)

add_executable(Master-Android-Desktop ${SOURCE_FILES})