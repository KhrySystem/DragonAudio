#pragma once

#include "audio_core.hpp"
#include "device.hpp"

struct DgAudioEngineCreateInfo {
	
};

struct DgAudioEngine {
	uint32_t ENGINE_TYPE;
	size_t deviceCount;
	DgAudioDevice* pDevices; // Multiple Devices
};

DGAPI DgResult dgCreateAudioEngine(DgAudioEngineCreateInfo createInfo, DgAudioEngine* pAudioEngine);
