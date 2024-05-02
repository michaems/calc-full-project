cmake_minimum_required(VERSION 3.20.0)

project(Calc VERSION 1.0.0 LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(EXTERNAL_PROJECTS_DIR extern)

add_subdirectory(src output)
#add_subdirectory(test)

#add gtest
include(FetchContent)
FetchContent_Declare(
    GoogleTest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)
FetchContent_GetProperties(GoogleTest)
if (NOT GoogleTest_POPULATED)

    FetchContent_Populate(GoogleTest)
    add_subdirectory( ${googletest_SOURCE_DIR} ${googletest_build_DIR})
endif()

add_executable(show_results src/main.cpp)
target_link_libraries(show_results calc gtest_main gmock_main)