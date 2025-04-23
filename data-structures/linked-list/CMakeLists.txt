cmake_minimum_required(VERSION 3.30)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 20)

#add_executable(
#        main.cpp
#)


add_library(MySinglyLinkedList INTERFACE)
target_include_directories(MySinglyLinkedList INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

#add_executable(dynamic_array_demo main.cpp)
#target_link_libraries(dynamic_array_demo MyVector)
