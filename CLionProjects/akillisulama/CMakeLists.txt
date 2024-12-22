cmake_minimum_required(VERSION 3.29)
project(akillisulama)

set(CMAKE_CXX_STANDARD 20)

add_executable(akillisulama main.cpp
        sensors.h
        sensors.cpp
        sensors.cpp)
