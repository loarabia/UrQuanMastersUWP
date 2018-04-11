project(math VERSION 0.7)

add_library(math 
random.c random2.c sqrt.c
mthintrn.h random.h
)

target_include_directories(math
    PRIVATE ../..)