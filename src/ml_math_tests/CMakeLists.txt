file(GLOB ml_math_tests_files *.c *.h)

set(EXECUTABLE_OUTPUT_PATH ${ML_CALC_OUTPUT_BIN_PATH})
add_executable(test EXCLUDE_FROM_ALL ${ml_math_tests_files})

include_directories("${ML_CALC_SRC_PATH}/ml_math")
target_link_libraries(test ml_math)