cmake_minimum_required(VERSION 3.25)
project(TestFigureClass)

set(CMAKE_CXX_STANDARD 20)

add_executable(TestFigureClass main.cpp Figure.cpp Figure.h Triangle.cpp Triangle.h)
