project(file VERSION 0.7)

add_library(file 
    dirs.c 
    files.c
    filintrn.h
)

target_include_directories(file
    PRIVATE ../..)