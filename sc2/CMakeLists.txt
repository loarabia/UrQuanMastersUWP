cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(UrQuanMasters VERSION 0.7)

# Add the libs
add_subdirectory( src/libs/callback )
add_subdirectory( src/libs/cdp )
add_subdirectory( src/libs/decomp )
add_subdirectory( src/libs/file)
add_subdirectory( src/libs/graphics)
add_subdirectory( src/libs/heap)
add_subdirectory( src/libs/input)
add_subdirectory( src/libs/list)
add_subdirectory( src/libs/log)
add_subdirectory( src/libs/lua)
add_subdirectory( src/libs/luauqm)
add_subdirectory( src/libs/math)
add_subdirectory( src/libs/md5)
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
    input
    list
    log
    lua
    luauqm
    math
    md5
    uio
    video)