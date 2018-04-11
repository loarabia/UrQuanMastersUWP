project(md5 VERSION 0.7)

add_library(md5 
    md5.c
    md5.h
    )

target_include_directories(md5
    PRIVATE ../..)