# pkg-config
find_package(PkgConfig REQUIRED)

# GTK+ 3.0
set(GTK3_FOUND 0)
pkg_check_modules(PC_GTK3 REQUIRED gtk+-3.0)

if (PC_GTK3_FOUND)
    set(GTK3_FOUND 1)
    set(GTK3_INCLUDE_DIRS ${PC_GTK3_INCLUDE_DIRS})
    set(GTK3_LIBS ${PC_GTK3_LIBRARIES})
    set(GTK3_CFLAGS ${PC_GTK3_CFLAGS_OTHER})
endif()
