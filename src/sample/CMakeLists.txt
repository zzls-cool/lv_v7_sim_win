set(list example)

get_property( dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES )

foreach( dir ${dirs} )
    message( STATUS "[${AUTHOR}] -- include dir=${dir}" )
endforeach()

aux_source_directory(${list} EX_LIST)

add_library(sample ${EX_LIST})
target_link_libraries(sample lvgl)