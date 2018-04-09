cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(UrQuanMasters VERSION 0.7)

# Add the libs
add_subdirectory(src/libs/callback)

# add the source
add_executable(uqm
    src/port.c)
    
target_link_libraries(uqm 
    callback)