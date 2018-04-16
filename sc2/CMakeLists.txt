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
add_subdirectory( src/libs/memory)
add_subdirectory( src/libs/mikmod)
add_subdirectory( src/libs/resource)
add_subdirectory( src/libs/sound)
add_subdirectory( src/libs/strings)
add_subdirectory( src/libs/task)
add_subdirectory( src/libs/threads)
add_subdirectory( src/libs/time)
add_subdirectory( src/libs/uio )
add_subdirectory( src/libs/video)


# Using macros to help build the sources tree for the main executable. 
include("CMakeMacros.txt")

# the actual macro to add a subdirectory containing a list of files to the main build
mac_prefix_include(CMakeInclude.txt src/getopt/)
mac_prefix_include(CMakeInclude.txt src/)
mac_prefix_include(CMakeInclude.txt src/uqm/)
mac_prefix_include(CMakeInclude.txt src/uqm/lua/)
mac_prefix_include(CMakeInclude.txt src/uqm/lua/luafuncs/)
mac_prefix_include(CMakeInclude.txt src/uqm/planets/)
mac_prefix_include(CMakeInclude.txt src/uqm/planets/generate/)
mac_prefix_include(CMakeInclude.txt src/uqm/supermelee/)
# mac_prefix_include(CMakeInclude.txt src/uqm/supermelee/)
mac_prefix_include(CMakeInclude.txt src/uqm/comm/)
mac_prefix_include(CMakeInclude.txt src/uqm/ships/)

set(uqm_SOURCES
    ${uqm_SOURCES}  
    )

# TODO FIX ME Cross-compile variables?
# ???
# set(CMAKE_SYSTEM_NAME WindowsStore)
# set(CMAKE_SYSTEM_VERSION 10.0)

source_group(TREE ../../src FILES ${uqm_SOURCES})
if( ${MSVC})
    set(uqm_SOURCES
        ${uqm_SOURCES}
        src/config_vs2017.h)
        # config_vc6? TODO FIXME FIX ME
elseif( ${DARWIN})
    set(uqm_SOURCES
        ${uqm_SOURCES}
        darwin/SDLMain.h
        darwin/SDKMain.m)
endif()

# add the source
add_executable(uqm
    ${uqm_SOURCES})

target_link_libraries(uqm 
    callback
    cdp
    decomp
    file
    graphics
    heap
    input
    list
    log
    lua
    luauqm
    math
    md5
    memory
    mikmod
    resource
    sound
    strings
    task
    threads
    time
    uio
    video)

target_include_directories(uqm
    PRIVATE src/
    )

target_compile_definitions(uqm
    PRIVATE USE_INTERNAL_LUA HAVE_OPENAL USE_INTERNAL_MIKMOD)