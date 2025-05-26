cmake_minimum_required(VERSION 3.10)
project(BacktestX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Include directories
include_directories(include)

# Add executable
add_executable(BacktestX ${SOURCES})