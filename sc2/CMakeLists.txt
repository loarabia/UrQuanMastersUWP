cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(UrQuanMasters VERSION 0.7)

# Add the libs
add_subdirectory( src/libs/callback )
add_subdirectory( src/libs/cdp )
add_subdirectory( src/libs/decomp )
add_subdirectory( src/libs/file)
add_subdirectory( src/libs/graphics)
add_subdirectory( src/libs/heap)
add_subdirectory( src/libs/input)
add_subdirectory( src/libs/list)
add_subdirectory( src/libs/log)
add_subdirectory( src/libs/lua)
add_subdirectory( src/libs/luauqm)
add_subdirectory( src/libs/math)
add_subdirectory( src/libs/md5)
add_subdirectory( src/libs/memory)
add_subdirectory( src/libs/mikmod)
add_subdirectory( src/libs/resource)
add_subdirectory( src/libs/sound)
add_subdirectory( src/libs/strings)
add_subdirectory( src/libs/task)
add_subdirectory( src/libs/threads)
add_subdirectory( src/libs/time)
add_subdirectory( src/libs/uio )
add_subdirectory( src/libs/video)


set(uqm_SOURCES
    src/port.c
    src/options.c
    src/uqm.c
    src/config.h 
    src/endian_uqm.h
    src/options.h
    src/port.h 
    src/types.h
    src/uqmversion.h
    
    src/uqm/battlecontrols.h
    src/uqm/battle.h
    src/uqm/build.h
    src/uqm/clock.h
    src/uqm/cnctdlg.h
    src/uqm/coderes.h
    src/uqm/collide.h
    src/uqm/colors.h
    src/uqm/commanim.h
    src/uqm/commglue.h
    src/uqm/comm.h
    src/uqm/cons_res.h
    src/uqm/controls.h
    src/uqm/corecode.h
    src/uqm/credits.h
    src/uqm/demo.h
    src/uqm/displist.h
    src/uqm/dummy.h
    src/uqm/element.h
    src/uqm/encount.h
    src/uqm/flash.h
    src/uqm/fmv.h
    src/uqm/gameev.h
    src/uqm/gameopt.h
    src/uqm/gamestr.h
    src/uqm/gendef.h
    src/uqm/globdata.h
    src/uqm/grpinfo.h
    src/uqm/hyper.h
    src/uqm/ifontres.h
    src/uqm/igfxres.h
    src/uqm/ikey_con.h
    src/uqm/imusicre.h
    src/uqm/init.h
    src/uqm/intel.h
    src/uqm/ipdisp.h
    src/uqm/isndres.h
    src/uqm/istrtab.h
    src/uqm/master.h
    src/uqm/menustat.h
    src/uqm/nameref.h
    src/uqm/oscill.h
    src/uqm/pickship.h
    src/uqm/process.h
    src/uqm/races.h
    src/uqm/resinst.h
#    src/uqm/respkg.h
    src/uqm/restart.h
    src/uqm/save.h
    src/uqm/settings.h
    src/uqm/setup.h
    src/uqm/setupmenu.h
    src/uqm/shipcont.h
    src/uqm/ship.h
    src/uqm/sis.h
    src/uqm/sounds.h
    src/uqm/starbase.h
    src/uqm/starcon.h
    src/uqm/state.h
    src/uqm/status.h
    src/uqm/tactrans.h
    src/uqm/starmap.h
    src/uqm/units.h
    src/uqm/uqmdebug.h
    src/uqm/util.h
    src/uqm/velocity.h
    src/uqm/weapon.h

    src/uqm/battle.c
    src/uqm/battlecontrols.c
    src/uqm/border.c
    src/uqm/build.c
    src/uqm/cleanup.c
    src/uqm/clock.c
    src/uqm/cnctdlg.c
    src/uqm/collide.c
    src/uqm/comm.c
    src/uqm/commanim.c
    src/uqm/commglue.c
    src/uqm/confirm.c
    src/uqm/credits.c
    src/uqm/cyborg.c
    src/uqm/demo.c
    src/uqm/displist.c
    src/uqm/dummy.c
    src/uqm/encount.c
    src/uqm/flash.c
    src/uqm/fmv.c
    src/uqm/galaxy.c
    src/uqm/gameev.c
    src/uqm/gameinp.c
    src/uqm/gameopt.c
    src/uqm/gendef.c
    src/uqm/getchar.c
    src/uqm/globdata.c
    src/uqm/gravity.c
    src/uqm/cons_res.c
    src/uqm/grpinfo.c
    src/uqm/hyper.c
    src/uqm/init.c
    src/uqm/intel.c
    src/uqm/intro.c
    src/uqm/ipdisp.c
    src/uqm/load.c
    src/uqm/load_legacy.c
    src/uqm/loadship.c
    src/uqm/master.c
    src/uqm/menu.c
    src/uqm/misc.c
    src/uqm/oscill.c
    src/uqm/outfit.c
    src/uqm/pickship.c
    src/uqm/plandata.c
    src/uqm/process.c
    src/uqm/restart.c
    src/uqm/save.c
    src/uqm/settings.c
    src/uqm/setup.c
    src/uqm/setupmenu.c
    src/uqm/ship.c
    src/uqm/shipstat.c
    src/uqm/shipyard.c
    src/uqm/sis.c
    src/uqm/sounds.c
    src/uqm/starbase.c
    src/uqm/starcon.c
    src/uqm/starmap.c
    src/uqm/state.c
    src/uqm/status.c
    src/uqm/tactrans.c
    src/uqm/trans.c
    src/uqm/uqmdebug.c
    src/uqm/util.c
    src/uqm/velocity.c
    src/uqm/weapon.c
    
    src/uqm/comm/commall.h
    src/uqm/comm/arilou/arilouc.c
    src/uqm/comm/arilou/resinst.h
    src/uqm/comm/arilou/strings.h
    src/uqm/comm/blackur/blackurc.c
    src/uqm/comm/blackur/resinst.h
    src/uqm/comm/blackur/strings.h
    src/uqm/comm/chmmr/chmmrc.c
    src/uqm/comm/chmmr/resinst.h
    src/uqm/comm/chmmr/strings.h
    src/uqm/comm/comandr/comandr.c
    src/uqm/comm/comandr/resinst.h
    src/uqm/comm/comandr/strings.h
    src/uqm/comm/druuge/druugec.c
    src/uqm/comm/druuge/resinst.h
    src/uqm/comm/druuge/strings.h
    src/uqm/comm/ilwrath/ilwrathc.c
    src/uqm/comm/ilwrath/resinst.h
    src/uqm/comm/ilwrath/strings.h
    src/uqm/comm/melnorm/melnorm.c
    src/uqm/comm/melnorm/resinst.h
    src/uqm/comm/melnorm/strings.h
    src/uqm/comm/mycon/myconc.c
    src/uqm/comm/mycon/resinst.h
    src/uqm/comm/mycon/strings.h
    src/uqm/comm/orz/orzc.c
    src/uqm/comm/orz/resinst.h
    src/uqm/comm/orz/strings.h
    src/uqm/comm/pkunk/pkunkc.c
    src/uqm/comm/pkunk/resinst.h
    src/uqm/comm/pkunk/strings.h
    src/uqm/comm/rebel/rebel.c
    src/uqm/comm/rebel/strings.h
    src/uqm/comm/shofixt/resinst.h
    src/uqm/comm/shofixt/shofixt.c
    src/uqm/comm/shofixt/strings.h
    src/uqm/comm/slyhome/resinst.h
    src/uqm/comm/slyhome/slyhome.c
    src/uqm/comm/slyhome/strings.h
    src/uqm/comm/slyland/resinst.h
    src/uqm/comm/slyland/slyland.c
    src/uqm/comm/slyland/strings.h
    src/uqm/comm/spahome/spahome.c
    src/uqm/comm/spahome/strings.h
    src/uqm/comm/spathi/resinst.h
    src/uqm/comm/spathi/spathic.c
    src/uqm/comm/spathi/strings.h
    src/uqm/comm/starbas/starbas.c
    src/uqm/comm/starbas/strings.h
    src/uqm/comm/supox/resinst.h
    src/uqm/comm/supox/strings.h
    src/uqm/comm/supox/supoxc.c
    src/uqm/comm/syreen/resinst.h
    src/uqm/comm/syreen/strings.h
    src/uqm/comm/syreen/syreenc.c
    src/uqm/comm/talkpet/resinst.h
    src/uqm/comm/talkpet/strings.h
    src/uqm/comm/talkpet/talkpet.c
    src/uqm/comm/thradd/resinst.h
    src/uqm/comm/thradd/strings.h
    src/uqm/comm/thradd/thraddc.c
    src/uqm/comm/umgah/resinst.h
    src/uqm/comm/umgah/strings.h
    src/uqm/comm/umgah/umgahc.c
    src/uqm/comm/urquan/resinst.h
    src/uqm/comm/urquan/strings.h
    src/uqm/comm/urquan/urquanc.c
    src/uqm/comm/utwig/resinst.h
    src/uqm/comm/utwig/strings.h
    src/uqm/comm/utwig/utwigc.c
    src/uqm/comm/vux/resinst.h
    src/uqm/comm/vux/strings.h
    src/uqm/comm/vux/vuxc.c
    src/uqm/comm/yehat/resinst.h
    src/uqm/comm/yehat/strings.h
    src/uqm/comm/yehat/yehatc.c
    src/uqm/comm/zoqfot/resinst.h
    src/uqm/comm/zoqfot/strings.h
    src/uqm/comm/zoqfot/zoqfotc.c

    src/uqm/lua/luafuncs
    src/uqm/lua/luacomm.c
    src/uqm/lua/luacomm.h
    src/uqm/lua/luadebug.c
    src/uqm/lua/luadebug.h
    src/uqm/lua/luaevent.c
    src/uqm/lua/luaevent.h
    src/uqm/lua/luainit.c
    src/uqm/lua/luainit.h
    src/uqm/lua/luastate.c
    src/uqm/lua/luastate.h
    src/uqm/lua/luafuncs/commfuncs.c
    src/uqm/lua/luafuncs/commfuncs.h
    src/uqm/lua/luafuncs/customfuncs.c
    src/uqm/lua/luafuncs/customfuncs.h
    src/uqm/lua/luafuncs/eventfuncs.c
    src/uqm/lua/luafuncs/eventfuncs.h
    src/uqm/lua/luafuncs/logfuncs.c
    src/uqm/lua/luafuncs/logfuncs.h
    src/uqm/lua/luafuncs/statefuncs.c
    src/uqm/lua/luafuncs/statefuncs.h

    src/uqm/planets/calc.c
    src/uqm/planets/cargo.c
    src/uqm/planets/devices.c
    src/uqm/planets/elemdata.h
    src/uqm/planets/generate.h
    src/uqm/planets/gentopo.c
    src/uqm/planets/lander.c
    src/uqm/planets/lander.h
    src/uqm/planets/lifeform.h
    src/uqm/planets/orbits.c
    src/uqm/planets/oval.c
    src/uqm/planets/plandata.h
    src/uqm/planets/planets.c
    src/uqm/planets/planets.h
    src/uqm/planets/plangen.c
    src/uqm/planets/pl_stuff.c
    src/uqm/planets/pstarmap.c
    src/uqm/planets/report.c
    src/uqm/planets/roster.c
    src/uqm/planets/scan.c
    src/uqm/planets/scan.h
    src/uqm/planets/solarsys.c
    src/uqm/planets/solarsys.h
    src/uqm/planets/sundata.h
    src/uqm/planets/surface.c
    src/uqm/planets/generate/genall.h
    src/uqm/planets/generate/genand.c
    src/uqm/planets/generate/genburv.c
    src/uqm/planets/generate/genchmmr.c
    src/uqm/planets/generate/gencol.c
    src/uqm/planets/generate/gendefault.c
    src/uqm/planets/generate/gendefault.h
    src/uqm/planets/generate/gendru.c
    src/uqm/planets/generate/genilw.c
    src/uqm/planets/generate/genmel.c
    src/uqm/planets/generate/genmyc.c
    src/uqm/planets/generate/genorz.c
    src/uqm/planets/generate/genpet.c
    src/uqm/planets/generate/genpku.c
    src/uqm/planets/generate/genrain.c
    src/uqm/planets/generate/gensam.c
    src/uqm/planets/generate/genshof.c
    src/uqm/planets/generate/gensly.c
    src/uqm/planets/generate/gensol.c
    src/uqm/planets/generate/genspa.c
    src/uqm/planets/generate/gensup.c
    src/uqm/planets/generate/gensyr.c
    src/uqm/planets/generate/genthrad.c
    src/uqm/planets/generate/gentrap.c
    src/uqm/planets/generate/genutw.c
    src/uqm/planets/generate/genvault.c
    src/uqm/planets/generate/genvux.c
    src/uqm/planets/generate/genwreck.c
    src/uqm/planets/generate/genyeh.c
    src/uqm/planets/generate/genzfpscout.c
    src/uqm/planets/generate/genzoq.c

    src/uqm/ships/ship.h
    src/uqm/ships/androsyn/androsyn.c
    src/uqm/ships/androsyn/androsyn.h
    src/uqm/ships/androsyn/icode.h
    src/uqm/ships/androsyn/resinst.h
    src/uqm/ships/arilou/arilou.c
    src/uqm/ships/arilou/arilou.h
    src/uqm/ships/arilou/icode.h
    src/uqm/ships/arilou/resinst.h
    src/uqm/ships/blackurq/blackurq.c
    src/uqm/ships/blackurq/blackurq.h
    src/uqm/ships/blackurq/icode.h
    src/uqm/ships/blackurq/resinst.h
    src/uqm/ships/chenjesu/chenjesu.c
    src/uqm/ships/chenjesu/chenjesu.h
    src/uqm/ships/chenjesu/icode.h
    src/uqm/ships/chenjesu/resinst.h
    src/uqm/ships/chmmr/chmmr.c
    src/uqm/ships/chmmr/chmmr.h
    src/uqm/ships/chmmr/icode.h
    src/uqm/ships/chmmr/resinst.h
    src/uqm/ships/druuge/druuge.c
    src/uqm/ships/druuge/druuge.h
    src/uqm/ships/druuge/icode.h
    src/uqm/ships/druuge/resinst.h
    src/uqm/ships/human/human.c
    src/uqm/ships/human/human.h
    src/uqm/ships/human/icode.h
    src/uqm/ships/human/resinst.h
    src/uqm/ships/ilwrath/icode.h
    src/uqm/ships/ilwrath/ilwrath.c
    src/uqm/ships/ilwrath/ilwrath.h
    src/uqm/ships/ilwrath/resinst.h
    src/uqm/ships/lastbat/icode.h
    src/uqm/ships/lastbat/lastbat.c
    src/uqm/ships/lastbat/lastbat.h
    src/uqm/ships/lastbat/resinst.h
    src/uqm/ships/melnorme/icode.h
    src/uqm/ships/melnorme/melnorme.c
    src/uqm/ships/melnorme/melnorme.h
    src/uqm/ships/melnorme/resinst.h
    src/uqm/ships/mmrnmhrm/icode.h
    src/uqm/ships/mmrnmhrm/mmrnmhrm.c
    src/uqm/ships/mmrnmhrm/mmrnmhrm.h
    src/uqm/ships/mmrnmhrm/resinst.h
    src/uqm/ships/mycon/icode.h
    src/uqm/ships/mycon/mycon.c
    src/uqm/ships/mycon/mycon.h
    src/uqm/ships/mycon/resinst.h
    src/uqm/ships/orz/icode.h
    src/uqm/ships/orz/orz.c
    src/uqm/ships/orz/orz.h
    src/uqm/ships/orz/resinst.h
    src/uqm/ships/pkunk/icode.h
    src/uqm/ships/pkunk/pkunk.c
    src/uqm/ships/pkunk/pkunk.h
    src/uqm/ships/pkunk/resinst.h
    src/uqm/ships/probe/icode.h
    src/uqm/ships/probe/probe.c
    src/uqm/ships/probe/probe.h
    src/uqm/ships/probe/resinst.h
    src/uqm/ships/shofixti/icode.h
    src/uqm/ships/shofixti/resinst.h
    src/uqm/ships/shofixti/shofixti.c
    src/uqm/ships/shofixti/shofixti.h
    src/uqm/ships/sis_ship/icode.h
    src/uqm/ships/sis_ship/resinst.h
    src/uqm/ships/sis_ship/sis_ship.c
    src/uqm/ships/sis_ship/sis_ship.h
    src/uqm/ships/slylandr/icode.h
    src/uqm/ships/slylandr/resinst.h
    src/uqm/ships/slylandr/slylandr.c
    src/uqm/ships/slylandr/slylandr.h
    src/uqm/ships/spathi/icode.h
    src/uqm/ships/spathi/resinst.h
    src/uqm/ships/spathi/spathi.c
    src/uqm/ships/spathi/spathi.h
    src/uqm/ships/supox/icode.h
    src/uqm/ships/supox/resinst.h
    src/uqm/ships/supox/supox.c
    src/uqm/ships/supox/supox.h
    src/uqm/ships/syreen/icode.h
    src/uqm/ships/syreen/resinst.h
    src/uqm/ships/syreen/syreen.c
    src/uqm/ships/syreen/syreen.h
    src/uqm/ships/thradd/icode.h
    src/uqm/ships/thradd/resinst.h
    src/uqm/ships/thradd/thradd.c
    src/uqm/ships/thradd/thradd.h
    src/uqm/ships/umgah/icode.h
    src/uqm/ships/umgah/resinst.h
    src/uqm/ships/umgah/umgah.c
    src/uqm/ships/umgah/umgah.h
    src/uqm/ships/urquan/icode.h
    src/uqm/ships/urquan/resinst.h
    src/uqm/ships/urquan/urquan.c
    src/uqm/ships/urquan/urquan.h
    src/uqm/ships/utwig/icode.h
    src/uqm/ships/utwig/resinst.h
    src/uqm/ships/utwig/utwig.c
    src/uqm/ships/utwig/utwig.h
    src/uqm/ships/vux/icode.h
    src/uqm/ships/vux/resinst.h
    src/uqm/ships/vux/vux.c
    src/uqm/ships/vux/vux.h
    src/uqm/ships/yehat/icode.h
    src/uqm/ships/yehat/resinst.h
    src/uqm/ships/yehat/yehat.c
    src/uqm/ships/yehat/yehat.h
    src/uqm/ships/zoqfot/icode.h
    src/uqm/ships/zoqfot/resinst.h
    src/uqm/ships/zoqfot/zoqfot.c
    src/uqm/ships/zoqfot/zoqfot.h

    #src/uqm/supermelee/netplay/proto/npconfirm.c
    #src/uqm/supermelee/netplay/proto/npconfirm.h
    #src/uqm/supermelee/netplay/proto/ready.c
    #src/uqm/supermelee/netplay/proto/ready.h
    #src/uqm/supermelee/netplay/proto/reset.c
    #src/uqm/supermelee/netplay/proto/reset.h
    #src/uqm/supermelee/netplay/checkbuf.c
    #src/uqm/supermelee/netplay/checkbuf.h
    #src/uqm/supermelee/netplay/checksum.c
    #src/uqm/supermelee/netplay/checksum.h
    #src/uqm/supermelee/netplay/crc.c
    #src/uqm/supermelee/netplay/crc.h
    #src/uqm/supermelee/netplay/nc_connect.ci
    #src/uqm/supermelee/netplay/netconnection.c
    #src/uqm/supermelee/netplay/netconnection.h
    #src/uqm/supermelee/netplay/netinput.c
    #src/uqm/supermelee/netplay/netinput.h
    #src/uqm/supermelee/netplay/netmelee.c
    #src/uqm/supermelee/netplay/netmelee.h
    #src/uqm/supermelee/netplay/netmisc.c
    #src/uqm/supermelee/netplay/netmisc.h
    #src/uqm/supermelee/netplay/netoptions.c
    #src/uqm/supermelee/netplay/netoptions.h
    #src/uqm/supermelee/netplay/netplay.h
    #src/uqm/supermelee/netplay/netrcv.c
    #src/uqm/supermelee/netplay/netrcv.h
    #src/uqm/supermelee/netplay/netsend.c
    #src/uqm/supermelee/netplay/netsend.h
    #src/uqm/supermelee/netplay/netstate.c
    #src/uqm/supermelee/netplay/netstate.h
    #src/uqm/supermelee/netplay/notify.c
    #src/uqm/supermelee/netplay/notify.h
    #src/uqm/supermelee/netplay/notifyall.c
    #src/uqm/supermelee/netplay/notifyall.h
    #src/uqm/supermelee/netplay/packet.c
    #src/uqm/supermelee/netplay/packet.h
    #src/uqm/supermelee/netplay/packethandlers.c
    #src/uqm/supermelee/netplay/packethandlers.h
    #src/uqm/supermelee/netplay/packetq.c
    #src/uqm/supermelee/netplay/packetq.h
    #src/uqm/supermelee/netplay/packetsenders.c
    #src/uqm/supermelee/netplay/packetsenders.h
    src/uqm/supermelee/buildpick.c
    src/uqm/supermelee/buildpick.h
    src/uqm/supermelee/loadmele.c
    src/uqm/supermelee/loadmele.h
    src/uqm/supermelee/melee.c
    src/uqm/supermelee/melee.h
    src/uqm/supermelee/meleesetup.c
    src/uqm/supermelee/meleesetup.h
    src/uqm/supermelee/meleeship.h
    src/uqm/supermelee/pickmele.c
    src/uqm/supermelee/pickmele.h

    src/getopt/getopt.c
    src/getopt/getopt.h
    src/getopt/getopt1.c
    )



# TODO FIX ME Cross-compile variables?
# ???
# set(CMAKE_SYSTEM_NAME WindowsStore)
# set(CMAKE_SYSTEM_VERSION 10.0)

if( ${MSVC})
    set(uqm_SOURCES
        ${uqm_SOURCES}
        src/config_vs2017.h)
        # config_vc6? TODO FIXME FIX ME
elseif( ${DARWIN})
    set(uqm_SOURCES
        ${uqm_SOURCES}
        darwin/SDLMain.h
        darwin/SDKMain.m)
endif()

# add the source
add_executable(uqm
    ${uqm_SOURCES})

target_link_libraries(uqm 
    callback
    cdp
    decomp
    file
    graphics
    heap
    input
    list
    log
    lua
    luauqm
    math
    md5
    memory
    mikmod
    resource
    sound
    strings
    task
    threads
    time
    uio
    video)

target_include_directories(uqm
    PRIVATE src/
    )

target_compile_definitions(uqm
    PRIVATE USE_INTERNAL_LUA HAVE_OPENAL)