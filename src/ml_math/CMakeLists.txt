file(GLOB ml_math_files *.c *.h)

set(LIBRARY_OUTPUT_PATH ${ML_CALC_OUTPUT_LIB_PATH})
add_library(ml_math SHARED ${ml_math_files})

install(TARGETS ml_math DESTINATION /usr/lib/)
