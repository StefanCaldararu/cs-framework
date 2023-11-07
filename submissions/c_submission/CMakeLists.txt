cmake_minimum_required(VERSION 3.10)

project(c_submission)

# Optionally Set the C compiler flags for optimization
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2")

# Set the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

# Create an executable target for the C program
add_executable(source_file source_file.c)