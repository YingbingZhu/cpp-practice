include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
set(INSTALL_GTEST OFF)
FetchContent_MakeAvailable(googletest)

add_executable(test_myvector test_MyVector.cpp)
target_link_libraries(test_myvector gtest_main MyVector)

include(GoogleTest)
gtest_discover_tests(test_myvector)