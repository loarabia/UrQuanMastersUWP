project(threads VERSION 0.7)


set(uqm_CFILES thrcommon.c)
set(uqm_HFILES thrcommon.h)

set(threads_SOURCES ${uqm_CFILES} ${uqm_HFILES})

set(USE_SDL_THREADS ON)

if(USE_SDL_THREADS)
    set(threads_SOURCES
         ${threads_SOURCES}
         sdl/sdlthreads.h
         sdl/sdlthreads.c)
elseif(USE_PTHREADS)
    set(threads_SOURCES
         ${threads_SOURCES}
         pthread/posixthreads.c
         pthread/posixthreads.h)
endif()

add_library(threads ${threads_SOURCES} )

target_include_directories(threads
    PRIVATE ../..)

target_compile_definitions(threads
    PRIVATE THREADLIB_SDL)