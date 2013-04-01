file(GLOB ml_calc_files *.c *.h)

include_directories(${ML_CALC_SRC_PATH}/ml_math)

set(EXECUTABLE_OUTPUT_PATH ${ML_CALC_OUTPUT_BIN_PATH})
add_executable(ml_calc ${ml_calc_files})

target_link_libraries(ml_calc ml_math)
