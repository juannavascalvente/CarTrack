cmake_minimum_required(VERSION 3.17)
project(CarTrack)

################################ Flags ########################################
set(CMAKE_CXX_STANDARD 14)

################################ Paths ########################################
set(BUILD_PATH .)

################################ Source code ##################################
file(GLOB HEADER_FILES
        ${BUILD_PATH}/inc
        )

file(GLOB SRC_FILES
        ${BUILD_PATH}/src/*.cpp
        )

################################ Executable ###################################
add_executable(CarTrack ${SRC_FILES})
target_include_directories(CarTrack
        PUBLIC
        ${HEADER_FILES}
        )