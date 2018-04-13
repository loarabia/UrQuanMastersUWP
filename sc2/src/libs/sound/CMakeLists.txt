project(sound VERSION 0.7)


set(uqm_CFILES audiocore.c fileinst.c resinst.c sound.c sfx.c music.c stream.c trackplayer.c)
set(uqm_HFILES audiocore.h sndintrn.h sound.h stream.h trackint.h trackplayer.h)

set(sound_SOURCES ${uqm_CFILES} ${uqm_HFILES})

set(sound_sources 
    ${sound_SOURCES} 
    mixer/nosound/audiodrv_nosound.c
    mixer/nosound/audiodrv_nosound.h
    mixer/sdl/audiodrv_sdl.c
    mixer/sdl/audiodrv_sdl.h
    mixer/mixer.c
    mixer/mixer.h
    mixer/mixerint.h
    decoders/decoder.c decoders/aiffaud.c decoders/wav.c decoders/dukaud.c decoders/modaud.c
    decoders/aiffaud.h decoders/decoder.h decoders/dukaud.h decoders/modaud.h decoders/wav.h
    )

if( ${OPENAL})
    set(sound_SOURCES 
        ${sound_SOURCES}
        openal/audiodrv_openal.c
        openal/audiodrv_openal.h)
endif()

if( ${OGGVORBIS})
    set(sound_SOURCES
        ${sound_SOURCES}
	    decoders/oggaud.c
	    decoders/oggaud.h)
endif()

add_library(sound ${sound_SOURCES} )

target_include_directories(sound
    PRIVATE ../..)