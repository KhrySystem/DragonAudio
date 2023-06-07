cmake_minimum_required(VERSION 3.20)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 20)

project(DragonAudio VERSION 0.0.0.1)
set(DragonAudio_LIB_NAME dgaudio-${DragonAudio_VERSION_MAJOR})

find_package(Dragon REQUIRED)

add_subdirectory(external/openal-soft)
add_subdirectory(src)

option(DragonAudio_INSTALL ON)

if(DragonAudio_INSTALL)
    include(tools/cmake/install.cmake)
endif()