# CMAKE project for libopenSMSG (core OpenSMSG component)
cmake_minimum_required(VERSION 3.1)



add_executable(opensmsg-terrain
        Terrain.cpp
        Terrain.h
        Tile.cpp
        Tile.h
        )

target_link_libraries(opensmsg-terrain
        "-framework Cocoa"
        "-framework IOKit"
        "-framework OpenGL"
        "-framework CoreVideo"
        "-framework SDL2"
        "-framework SDL2_image"
        "-framework SDL2_mixer"
        )

