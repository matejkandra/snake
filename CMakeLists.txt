cmake_minimum_required(VERSION 3.23)
project(snake)

set(CMAKE_CXX_STANDARD 20)

find_package(raylib)
add_executable(${PROJECT_NAME} main.cpp snake.cpp snake.h Helper.cpp Helper.h)
target_link_libraries(${PROJECT_NAME} raylib)