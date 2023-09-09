include_directories(../)

set(img_dir .)

foreach(_img_dir ${img_dir})
    aux_source_directory(${_img_dir} DIR_IMG_SRC)
    message(STATUS "[${AUTHOR}] -- img_dir += ${_img_dir}")
endforeach()
add_library(img ${DIR_IMG_SRC})