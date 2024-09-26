cmake_minimum_required(VERSION 3.14)
project(CPP24)

add_executable(main main.cpp my_add.cpp)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

add_executable(tests my_add.cpp test_add.cpp)
target_link_libraries(tests gtest_main)
