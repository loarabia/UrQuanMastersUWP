project(luauqm VERSION 0.7)

add_library(luauqm 
luauqm.c scriptres.c
luauqm.h scriptres.h
)

target_compile_definitions(luauqm
    PRIVATE -DUSE_INTERNAL_LUA)
target_include_directories(luauqm
    PRIVATE ../..)