cmake_minimum_required( VERSION 3.7.0 )
project(test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB SRC_DIR
  src/*.h
  src/*.cpp
)

add_executable(test ${SRC_DIR})
target_link_libraries(test ${SDL2_LIBRARIES})