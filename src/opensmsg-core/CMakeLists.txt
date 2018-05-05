# CMAKE project for libopenSMSG (core OpenSMSG component)
cmake_minimum_required(VERSION 3.1)

#set(HEADERS Game.hpp )
#set(SRC_LIST main.cpp Game.cpp)

add_executable(opensmsg-core
#        ${SRC_LIST} ${HEADERS}
        main.c
        )

target_link_libraries(opensmsg-core
        "-framework SDL2"
        "-framework SDL2_image"
        "-framework SDL2_mixer"
        )