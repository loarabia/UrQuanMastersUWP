project(task VERSION 0.7)

set(uqm_CFILES tasklib.c)

set(task_SOURCES ${uqm_CFILES} ${uqm_HFILES})

add_library(task ${task_SOURCES} )

target_include_directories(task
    PRIVATE ../..)