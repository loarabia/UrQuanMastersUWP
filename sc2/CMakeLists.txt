cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(UrQuanMasters VERSION 0.7)

# Add the libs
add_subdirectory( src/libs/callback )
add_subdirectory( src/libs/cdp )
add_subdirectory( src/libs/decomp )
add_subdirectory( src/libs/file)
add_subdirectory( src/libs/graphics)
add_subdirectory( src/libs/heap)
add_subdirectory( src/libs/list)
add_subdirectory( src/libs/log)
add_subdirectory( src/libs/uio )
add_subdirectory( src/libs/video)

# add the source
add_executable(uqm
    src/port.c)

target_link_libraries(uqm 
    callback
    cdp
    decomp
    file
    heap
    graphics
    list
    log
    uio
    video)