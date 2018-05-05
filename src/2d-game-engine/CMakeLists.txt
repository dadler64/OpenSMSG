# CMAKE project for libopenSMSG (core OpenSMSG component)
cmake_minimum_required(VERSION 3.1)

#set(HEADERS Game.hpp )
#set(SRC_LIST main.cpp Game.cpp)

add_executable(2d-game-engine
#        ${SRC_LIST} ${HEADERS}
        main.cpp
        Game.cpp
        Game.h
        TextureManager.cpp
        TextureManager.h
        )

target_link_libraries(2d-game-engine

        "-framework Cocoa"
        "-framework IOKit"
        "-framework OpenGL"
        "-framework CoreVideo"
        "-framework SDL2"
        "-framework SDL2_image"
        "-framework SDL2_mixer"
        )

