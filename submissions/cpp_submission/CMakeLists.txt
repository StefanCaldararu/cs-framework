cmake_minimum_required (VERSION 3.0)
project (cpp_submission)
 
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
 
add_executable (source_file source_file.cpp)
target_link_libraries (source_file Eigen3::Eigen)