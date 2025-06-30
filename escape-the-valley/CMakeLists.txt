cmake_minimum_required(VERSION 3.12)
project("Escape the Valley")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(include)

add_executable(escape-the-valley "src/main.cpp")
