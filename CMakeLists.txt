cmake_minimum_required(VERSION 3.2)
project(tanks)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(tanks ${SOURCE_FILES} tank.cpp tank.h win_console.cpp win_console.h bullet.cpp bullet.h)