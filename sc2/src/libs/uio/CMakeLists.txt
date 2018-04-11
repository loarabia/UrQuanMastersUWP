project(uio VERSION 0.7)

set(uio_SOURCES 
    charhashtable.c
    defaultfs.c
    fileblock.c
    fstypes.c
    gphys.c
    io.c
    ioaux.c
    match.c
    mount.c
    mounttree.c
    paths.c
    physical.c
    uiostream.c
    uioutils.c
    utils.c
    charhashtable.h defaultfs.h fileblock.h fstypes.h getint.h
	gphys.h ioaux.h io.h iointrn.h match.h mem.h mount.h mounttree.h
	paths.h physical.h types.h uioport.h uiostream.h uioutils.h utils.h
    stdio/stdio.c
    stdio/stdio.h
    regex/regcomp.ci
    regex/regex_internal.h
    regex/regex_internal.ci
    regex/regex.c
    regex/regex.h
    regex.regexec.ci)

if (USE_ZIP_FS)
    set(uio_SOURCES ${uio_SOURCES} zip/zip.c zip/zip.h)
endif()

add_library(uio ${uio_SOURCES})

target_include_directories(uio
    PRIVATE ../..)