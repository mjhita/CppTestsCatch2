cmake_minimum_required(VERSION 3.6.2)
project (FactorialTests)

#configure_file (
#  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
#  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
#  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
#include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_executable(FactorialTests FactorialTests.cpp)

