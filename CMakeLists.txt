cmake_minimum_required(VERSION 3.7)
project(test)

set(CMAKE_CXX_STANDARD 17)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB SRC_DIR
  src/*.h
  src/*.cpp
)

add_executable(main ${SRC_DIR})
# target_include_directories(main ${SDL2_INCLUDE_DIR})
target_link_libraries(main ${SDL2_LIBRARIES})