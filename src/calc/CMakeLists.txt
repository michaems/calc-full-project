
add_library (
    calc
    STATIC
    calc.cpp
)

target_include_directories(calc PUBLIC include/calc)