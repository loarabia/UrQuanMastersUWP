project(decomp VERSION 0.7)

add_library(decomp 
    lzdecode.c lzencode.c update.c
    lzh.h
)

target_include_directories(decomp
    PRIVATE ../..)