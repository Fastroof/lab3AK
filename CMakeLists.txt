project(calculator)

add_library(calculator STATIC calculator.h calculator.cpp)
add_executable(calc_exe main.cpp calculator.h calculator.cpp)

