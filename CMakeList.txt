cmake_minimum_required(VERSION 3.10)
project(lab_2_ak)

set(CMAKE_CXX_STANDARD 17)

# Source files
set(SOURCES src/main.cpp src/calculator.cpp)
set(HEADERS src/calculator.h)

# Create static library
add_library(calculator STATIC src/calculator.cpp)

# Executable
add_executable(app src/main.cpp)

# Link executable with library
target_link_libraries(app PRIVATE calculator)
