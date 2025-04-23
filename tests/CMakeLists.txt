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

# Test 1: Linked List
add_executable(test_singlylinkedlist test_SinglyLinkedList.cpp)
target_link_libraries(test_singlylinkedlist gtest_main MySinglyLinkedList)
gtest_discover_tests(test_singlylinkedlist)