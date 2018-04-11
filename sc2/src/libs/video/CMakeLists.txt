project(video VERSION 0.7)

add_library(video 
    vfileins.c
    vresins.c
    video.c
    videodec.c
    vidplayer.c
    dukvid.c
    legacyplayer.c
    dukvid.h
    videodec.h
    video.h
    vidintrn.h
    vidplayer.h)

target_include_directories(video
    PRIVATE ../..)