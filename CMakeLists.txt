cmake_minimum_required(VERSION 3.30)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_practice main.cpp)

add_subdirectory(memory-management/dynamic-array)
add_subdirectory(data-structures/linked-list)
add_subdirectory(memory-management/pointers)

# Add tests
enable_testing()
add_subdirectory(tests)