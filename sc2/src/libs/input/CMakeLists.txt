project(input VERSION 0.7)

add_library(input 
    input_common.c
    inpintrn.h input_common.h
    sdl/input.c sdl/keynames.c sdl/vcontrol.c
    sdl/input.h sdl/keynames.h sdl/vcontrol.h
)

target_include_directories(input
    PRIVATE ../..)