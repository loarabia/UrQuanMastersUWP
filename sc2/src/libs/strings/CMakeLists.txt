project(strings VERSION 0.7)


set(uqm_CFILES getstr.c sfileins.c sresins.c stringhashtable.c strings.c unicode.c)
set(uqm_HFILES stringhashtable.c strintrn.h)

set(strings_SOURCES ${uqm_CFILES} ${uqm_HFILES})

add_library(strings ${strings_SOURCES} )

target_include_directories(strings
    PRIVATE ../..)