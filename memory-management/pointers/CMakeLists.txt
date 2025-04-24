cmake_minimum_required(VERSION 3.30)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 20)

add_library(MyUniquePtr INTERFACE)
target_include_directories(MyUniquePtr INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

