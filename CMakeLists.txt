project(ML_Calc C)
cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(GTK3 REQUIRED)
find_package(Doxygen)

if (DOXYGEN_FOUND)
    add_custom_target(doc ${DOXYGEN_EXECUTABLE} "${CMAKE_SOURCE_DIR}/Doxyfile")
endif()

set(ML_CALC_OUTPUT_LIB_PATH "${CMAKE_SOURCE_DIR}/lib")
set(ML_CALC_OUTPUT_BIN_PATH "${CMAKE_SOURCE_DIR}/bin")
set(ML_CALC_SRC_PATH "${CMAKE_SOURCE_DIR}/src")

set(CMAKE_C_FLAGS "${GTK3_CFLAGS} -Wall -Wextra -std=c99")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} -s -O2")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} -g")

add_subdirectory(src)
