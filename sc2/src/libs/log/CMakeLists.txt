project(log VERSION 0.7)

add_library(log 
uqmlog.c
loginternal.h msgbox.h uqmlog.h msgbox_stub.c
)

target_include_directories(log
    PRIVATE ../..)

# HANDLE MSG BOXES ON OTHER PLATFORMS
# TODO FIX FIXME
# case "$HOST_SYSTEM" in
# 	Darwin)
# 		uqm_MFILES="msgbox_macosx.m"
# 		;;
# 	MINGW32*|CYGWIN*)
# 		uqm_CFILES="$uqm_CFILES msgbox_win.c"
# 		;;
# 	*)
# 		uqm_CFILES="$uqm_CFILES msgbox_stub.c"
# 		;;
# esac