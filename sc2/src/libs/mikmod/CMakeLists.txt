project(mikmod VERSION 0.7)

set(uqm_CFILES drv_nos.c load_it.c load_mod.c load_s3m.c load_stm.c load_xm.c
		mdreg.c mdriver.c mloader.c
		mlreg.c mlutil.c mmalloc.c mmerror.c mmio.c mplayer.c munitrk.c
		mwav.c npertab.c sloader.c virtch.c virtch2.c virtch_common.c)

set(uqm_HFILES mikmod_build.h mikmod.h mikmod_internals.h)

set(mikmod_SOURCES ${uqm_CFILES} ${uqm_HFILES})

add_library(mikmod ${mikmod_SOURCES} )

target_include_directories(mikmod
    PRIVATE ../..)