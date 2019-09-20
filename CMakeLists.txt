cmake_minimum_required(VERSION 3.7)
project(SDL2Test)

add_compile_options("-Wall" "-g")

file(GLOB SRC_DIR
  src/*.h
  src/*.cpp
)

include(FindPkgConfig)
pkg_search_module(SDL2 REQUIRED sdl2)
pkg_search_module(SDL2IMAGE REQUIRED SDL2_image)

add_executable(SDL2Test ${SRC_DIR})
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})
target_link_libraries(SDL2Test ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})