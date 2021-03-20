cmake_minimum_required(VERSION 3.17)
project(Raven LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(libs/googletest)

add_executable(raven src/main/main.cpp)
add_executable(raven_utest test/utest.cpp)
target_link_libraries(raven_utest gtest_main)

target_compile_options(raven PRIVATE -g -Wall -Wextra)