include(GNUInstallDirs)

install(TARGETS ${DragonAudio_LIB_NAME} 
    EXPORT DragonExport
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

install(EXPORT DragonAudioExport
    FILE DragonAudioTargets.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/DragonAudio
)

include(CMakePackageConfigHelpers)
configure_package_config_file(${DragonAudio_SOURCE_DIR}/tools/cmake/DragonAudioConfig.cmake.in ${Dragon_BINARY_DIR}/DragonAudioConfig.cmake 
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/DragonAudio
)