set(test_list .)

get_property( dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES )

foreach( dir ${dirs} )
    message( STATUS "[${AUTHOR}] -- include dir=${dir}" )
endforeach()

aux_source_directory(${test_list} EX_LIST)

add_library(test ${EX_LIST})
target_link_libraries(test lvgl)