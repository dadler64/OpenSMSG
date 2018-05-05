# CMAKE project for libopenSMSG (core OpenSMSG component)
cmake_minimum_required(VERSION 3.1)

add_executable(3d-game-engine
        main.cpp
        Game.cpp
        Game.h
        TextureManager.cpp
        TextureManager.h
        )

target_link_libraries(3d-game-engine
        "-framework Cocoa"
        "-framework IOKit"
        "-framework OpenGL"
        "-framework CoreVideo"
        "-framework SDL2"
        "-framework SDL2_image"
        "-framework SDL2_mixer"
        )

