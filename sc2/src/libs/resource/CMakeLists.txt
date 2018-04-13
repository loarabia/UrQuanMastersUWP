project(resource VERSION 0.7)

set(uqm_CFILES direct.c filecntl.c getres.c loadres.c stringbank.c
		propfile.c resinit.c)
set(uqm_HFILES index.h propfile.h resintrn.h stringbank.h)

set(resource_SOURCES ${uqm_CFILES} ${uqm_HFILES})

add_library(resource ${resource_SOURCES} )

target_include_directories(resource
    PRIVATE ../..)