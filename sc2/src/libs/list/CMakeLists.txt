project(list VERSION 0.7)

add_library(list 
    list.c
    list.h)

target_include_directories(list
    PRIVATE ../..)