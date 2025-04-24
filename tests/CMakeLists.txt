cmake_minimum_required(VERSION 3.30)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
set(INSTALL_GTEST OFF)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

#  Vector
add_executable(test_myvector test_MyVector.cpp)
target_link_libraries(test_myvector gtest_main MyVector)
gtest_discover_tests(test_myvector)

# Linked List
add_executable(test_singlylinkedlist test_SinglyLinkedList.cpp)
target_link_libraries(test_singlylinkedlist gtest_main MySinglyLinkedList)
gtest_discover_tests(test_singlylinkedlist)

# Unique Pointer
add_executable(MyUniquePtrTest test_MyUniquePtr.cpp)
target_link_libraries(MyUniquePtrTest gtest_main MyUniquePtr)
gtest_discover_tests(MyUniquePtrTest)