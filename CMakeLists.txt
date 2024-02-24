cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 23)
file(GLOB_RECURSE SRC solutions/*)
add_executable(leetcode ${SRC})
