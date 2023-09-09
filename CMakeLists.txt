cmake_minimum_required(VERSION 3.10)

project(LVGL_App)

#config project
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(AUTHOR zzls-cool)

add_subdirectory(src)
