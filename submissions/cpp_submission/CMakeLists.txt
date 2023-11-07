cmake_minimum_required(VERSION 3.10)

project(cpp_submission)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify the path to your LibTorch installation
set(LIBTORCH_DIR "./libtorch/installation")

# Find LibTorch
# find_package(Torch REQUIRED PATHS ${LIBTORCH_DIR})

# if(Torch_FOUND)
#     message(STATUS "LibTorch found!")
# else()
#     message(FATAL_ERROR "LibTorch not found! Please set LIBTORCH_DIR to the correct path.")
# endif()

# Define the source file
set(SOURCE_FILE source_file.cpp)

# Set the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

# Create an executable target
add_executable(source_file ${SOURCE_FILE})

# Link against LibTorch
# target_link_libraries(source_file ${Torch_LIBRARIES})