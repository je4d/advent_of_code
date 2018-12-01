cmake_minimum_required (VERSION 2.8.12)
set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_C_COMPILER "gcc-8")
set(CMAKE_CXX_COMPILER "g++-8")

project (AOC)

include_directories("${CMAKE_SOURCE_DIR}")
SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g -std=c++2a -fsanitize=address -fsanitize=undefined")

add_executable(day1_star1 day1_star1.cpp)
add_executable(day1_star2 day1_star2.cpp)
#add_executable(pll src/pll.cpp)
#add_executable(every_colour_every_face src/every_colour_every_face.cpp)
#add_executable(zygoloid src/zygoloid.cpp)
#target_link_libraries(cube readline)
#target_link_libraries(pll readline)
