aux_source_directory(. DIR_SRC)

set(moudle lvgl lv_drivers img sample)

foreach(sub_moudle ${moudle})
    message("add_moudle+=${sub_moudle}")
    add_subdirectory(${sub_moudle})
    include_directories(./${sub_moudle})
endforeach()

add_executable(LVGL_App ${DIR_SRC})

target_link_libraries(LVGL_App ${moudle})