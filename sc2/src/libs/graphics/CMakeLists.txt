project(graphics VERSION 0.7)

add_library(graphics 
boxint.c clipline.c cmap.c context.c drawable.c filegfx.c
bbox.c dcqueue.c gfxload.c
font.c frame.c gfx_common.c intersec.c loaddisp.c
pixmap.c resgfx.c tfb_draw.c tfb_prim.c widgets.c

bbox.h cmap.h context.h dcqueue.h drawable.h drawcmd.h font.h
gfx_common.h gfxintrn.h prim.h tfb_draw.h tfb_prim.h widgets.h

sdl/palette.c sdl/primitives.c sdl/pure.c sdl/sdl_common.c sdl/scalers.c
sdl/2xscalers.c sdl/2xscalers_mmx.c sdl/2xscalers_sse.c sdl/2xscalers_3dnow.c
sdl/nearest2x.c sdl/bilinear2x.c sdl/biadv2x.c sdl/triscan2x.c sdl/hq2x.c sdl/canvas.c
sdl/sdluio.c sdl/rotozoom.c
sdl/2xscalers.h sdl/2xscalers_mmx.h sdl/palette.h sdl/primitives.h
sdl/pure.h sdl/rotozoom.h sdl/scaleint.h sdl/scalemmx.h sdl/scalers.h sdl/sdl_common.h
sdl/sdluio.h
)

target_include_directories(graphics
    PRIVATE ../..)