# CMAKE project for libopenSMSG (core OpenSMSG component)
cmake_minimum_required(VERSION 3.1)

add_executable(opensmsg-cli

        )

target_link_libraries(opensmsg-cli

        "-framework Cocoa"
        "-framework IOKit"
        "-framework OpenGL"
        "-framework CoreVideo"
        "-framework SDL2"
        "-framework SDL2_image"
        "-framework SDL2_mixer"
        )

