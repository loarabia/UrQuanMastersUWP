project(threads VERSION 0.7)


set(uqm_CFILES thrcommon.c)
set(uqm_HFILES thrcommon.h)

set(threads_SOURCES ${uqm_CFILES} ${uqm_HFILES})

if( ${USE_SDL_THREADS})
    set(threads_SOURCES
         ${threads_SOURCES}
         sdlthreads.c
         sdlthreads.h)
elseif( ${USE_PTHREADS})
    set(threads_SOURCES
         ${threads_SOURCES}
         posixthreads.c
         posixthreads.h)
endif()

add_library(threads ${threads_SOURCES} )

target_include_directories(threads
    PRIVATE ../..)