cmake_minimum_required(VERSION 3.17)
project(CarTrack)

set(CMAKE_CXX_STANDARD 14)

add_executable(CarTrack src/main.cpp src/GpsCoordinateBuilder.cpp inc/GpsCoordinateBuilder.h src/GpsCoordinates.cpp inc/GpsCoordinates.h)