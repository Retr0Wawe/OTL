cmake_minimum_required(VERSION 3.14)

project(OTL)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOCKET_INCLUDE ${PROJECT_SOURCE_DIR}/include/*.hpp)

add_executable(${PROJECT_NAME} main.cpp)
