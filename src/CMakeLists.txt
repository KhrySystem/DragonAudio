add_library(${DragonAudio_LIB_NAME}
	engine_init.cpp
 	device_init.cpp
)
target_include_directories(${DragonAudio_LIB_NAME} PUBLIC 
	${DragonAudio_SOURCE_DIR}/include 
	${Vulkan_INCLUDE_DIR}
)
target_link_libraries(${DragonAudio_LIB_NAME} PUBLIC 
	OpenAL 
	Dragon::Core
)
