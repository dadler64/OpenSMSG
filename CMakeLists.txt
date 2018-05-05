cmake_minimum_required(VERSION 3.10)
project(OpenSMSG)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 11)


if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
        "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(warnings "/W4 /WX /EHsc")
endif()
if (NOT CONFIGURED_ONCE)
    set(CMAKE_CXX_FLAGS "${warnings}"
            CACHE STRING "Flags used by the compiler during all build types." FORCE)
    set(CMAKE_C_FLAGS   "${warnings}"
            CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src/opensmsg-core)
#add_subdirectory(src/opensmsg-cli)
#add_subdirectory(src/opensmsg-ui)
add_subdirectory(src/opensmsg-terrain)
#add_subdirectory(src/2d-game-engine)
#add_subdirectory(src/3d-game-engine)
