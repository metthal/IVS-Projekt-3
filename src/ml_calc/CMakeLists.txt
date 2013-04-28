file(GLOB ml_calc_files *.c *.h)

set(EXECUTABLE_OUTPUT_PATH ${ML_CALC_OUTPUT_BIN_PATH})
add_executable(ml_calc ${ml_calc_files})

include_directories(${ML_CALC_SRC_PATH}/ml_math ${GTK3_INCLUDE_DIRS})
target_link_libraries(ml_calc ml_math ${GTK3_LIBS})

install(TARGETS ml_calc DESTINATION /usr/bin/)
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/calc.glade" DESTINATION /usr/local/share/ml_calc/)
