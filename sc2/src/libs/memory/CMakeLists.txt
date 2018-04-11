project(memory VERSION 0.7)

add_library(memory 
w_memlib.c
)

target_include_directories(memory
    PRIVATE ../..)