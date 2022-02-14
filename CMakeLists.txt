cmake_minimum_required(VERSION 3.17)
project(military)

set(CMAKE_CXX_STANDARD 20)

add_executable(military main.cpp military.cpp military.h planes.cpp planes.h tanks.cpp tanks.h ships.cpp ships.h)