cmake_minimum_required(VERSION 3.17)
project(CarTrack)

################################ Flags ########################################
set(CMAKE_CXX_STANDARD 14)

################################ Paths ########################################
set(BUILD_PATH .)

################################ Source code ##################################
file(GLOB HEADER_FILES
        ${BUILD_PATH}/inc
        ${BUILD_PATH}/inc/Gga
        )

file(GLOB SRC_FILES
        ${BUILD_PATH}/src/*.cpp
        ${BUILD_PATH}/src/Gga/*.cpp
        )

################################ Executable ###################################
add_executable(CarTrack ${SRC_FILES})
target_include_directories(CarTrack
        PUBLIC
        ${HEADER_FILES}
        )