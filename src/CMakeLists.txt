add_library(${DragonAudio_LIB_NAME} ${DragonAudio_BUILD_SHARED} 
	engine_init.cpp
 "device_init.cpp")
target_include_directories(${DragonAudio_LIB_NAME} PRIVATE ${DragonAudio_SOURCE_DIR}/include ${Dragon_INCLUDE_DIR} ${Vulkan_INCLUDE_DIR})
target_link_libraries(${DragonAudio_LIB_NAME} PRIVATE OpenAL)
