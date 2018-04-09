project(callback VERSION 0.7)

add_library(callback 
    alarm.c
    async.c
    callback.c)

target_include_directories(callback
    PRIVATE ../..)