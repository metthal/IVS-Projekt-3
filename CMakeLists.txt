project(ML_Calc)
cmake_minimum_required(VERSION 2.6)

set(ML_CALC_OUTPUT_LIB_PATH "${CMAKE_SOURCE_DIR}/lib")
set(ML_CALC_OUTPUT_BIN_PATH "${CMAKE_SOURCE_DIR}/bin")
set(ML_CALC_SRC_PATH "${CMAKE_SOURE_DIR}/src")

set(CMAKE_C_FLAGS "-Wall -Wextra -std=c99")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} -s -O2")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} -g")

add_subdirectory(src)
