cmake_minimum_required(VERSION 3.10)
#config project
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(AUTHOR zzls-cool)

#project name
project(LVGL_App)

aux_source_directory(. DIR_SRC)

set(moudle lvgl lv_drivers img sample test)

foreach(sub_moudle ${moudle})
    message(STATUS "[${AUTHOR}] -- add_moudle += ${sub_moudle}")
    add_subdirectory(${sub_moudle})
    include_directories(${sub_moudle})
endforeach()

add_executable(LVGL_App ${DIR_SRC})

target_link_libraries(LVGL_App ${moudle})