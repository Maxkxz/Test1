cmake_minimum_required(VERSION 3.14)
project(CPP24)

include_directories(include)


add_executable(main main.cpp src/my_add.cpp)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.9.0
)
FetchContent_MakeAvailable(benchmark)


add_executable(tests src/my_add.cpp test_add.cpp)
target_link_libraries(tests gtest_main)

add_executable(bench_add src/my_add.cpp bench_add.cpp)
target_link_libraries(bench_add benchmark::benchmark)
