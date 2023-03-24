cmake_minimum_required(VERSION 3.20)

project(DragonAudio VERSION 0.0.0.1)
set(DragonAudio_LIB_NAME dgaudio-${DragonAudio_VERSION_MAJOR})

find_package(Dragon REQUIRED)

add_subdirectory(external/openal-soft)
add_subdirectory(src)