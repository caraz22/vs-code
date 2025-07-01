cmake_minimum_required(VERSION 3.12)
project("Escape the Valley")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")

add_executable(escape-the-valley ${SRC_FILES})

target_include_directories(escape-the-valley PRIVATE include)