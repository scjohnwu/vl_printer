SET( CMAKE_C_COMPILER /usr/bin/gcc-7 )
SET( CMAKE_CXX_COMPILER /usr/bin/g++-7)
SET( CMAKE_CXX_STANDARD 17)
SET( CMAKE_CXX_STANDARD_REQUIRED ON)
SET( CMAKE_CXX_EXTENSIONS OFF)

cmake_minimum_required(VERSION 3.5.1)
project(variant_loop)
add_executable(vl main.cpp)

