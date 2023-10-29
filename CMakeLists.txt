cmake_minimum_required(VERSION 3.20)

# Check if the CMP0077 policy is set and if so, set it to NEW
if(POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)
endif()

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 20)

project(DragonAudio VERSION 0.0.0.1)
set(DragonAudio_LIB_NAME dgaudio-${DragonAudio_VERSION_MAJOR})

set(ALSOFT_EXAMPLES ${Dragon_BUILD_EXAMPLES})
set(ALSOFT_INSTALL ${Dragon_INSTALL})
set(ALSOFT_INSTALL_CONFIG ${Dragon_INSTALL})
set(ALSOFT_INSTALL_HRTF_DATA ${Dragon_INSTALL})
set(ALSOFT_INSTALL_AMBDEC_PRESETS ${Dragon_INSTALL})
set(ALSOFT_INSTALL_EXAMPLES ${Dragon_INSTALL})
set(ALSOFT_INSTALL_UTILS ${Dragon_INSTALL})

#add_subdirectory(external/openal-soft)

if(DragonAudio_INSTALL)
    #include(tools/cmake/install.cmake)
endif()