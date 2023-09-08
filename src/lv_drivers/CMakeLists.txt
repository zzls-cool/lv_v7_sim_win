aux_source_directory(./display DIR_DRV_SRC)
aux_source_directory(./indev DIR_DRV_SRC)
aux_source_directory(. DIR_DRV_SRC)
add_library(lv_drivers ${DIR_DRV_SRC})
