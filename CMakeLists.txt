cmake_minimum_required(VERSION 3.17)
project(Raven LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(raven src/main.cpp)