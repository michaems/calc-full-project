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