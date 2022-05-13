cmake_minimum_required(VERSION 3.21)
project(ee205_final_exam)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_final_exam main.cpp Shape.h Square.h Rectangle.h Rectangle.cpp Shape.cpp Square.cpp)
