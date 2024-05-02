add_executable(
    unit_tests
    tests.cpp
)

target_link_libraries(unit_tests calc gtest_main gmock_main)

target_include_directories (
    unit_tests 
    PUBLIC 
    ${CMAKE_SOURCE_DIR}/src/calc/include/calc
)