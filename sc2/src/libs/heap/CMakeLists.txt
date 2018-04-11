project(heap VERSION 0.7)

add_library(heap 
    heap.c
    heap.h)

target_include_directories(heap
    PRIVATE ../..)