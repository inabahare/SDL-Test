cmake_minimum_required(VERSION 3.7)
project(SDL2Test)

# SET(CMAKE_CXX_COMPILER "/usr/bin/g++")

file(GLOB SRC_DIR
  src/*.h
  src/*.cpp
)

find_package(SDL2 REQUIRED)

include_directories(SDL2Test ${SDL2_INCLUDE_DIRS})

add_executable(SDL2Test ${SRC_DIR})
target_link_libraries(SDL2Test SDL2::SDL2)