project(cdp VERSION 0.7)

add_library(cdp 
    cdp.c cdpapi.c
    cdp_alli.h cdpapi.h cdp.h cdp_iio.h cdp_imem.h cdpint.h
		cdp_isnd.h cdp_ivid.h cdpmod.h windl.h
)

target_include_directories(cdp
    PRIVATE ../.. ..)