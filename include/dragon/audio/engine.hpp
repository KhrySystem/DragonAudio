#include "audio_core.h"
#include "device.h"

struct DgAudioEngineCreateInfo {
	
};

struct DgAudioEngine {
	uint deviceCount;
	DgAudioDevice* pDevices; // Multiple Devices
};

DGAPI DgResult dgCreateAudioEngine(DgAudioEngineCreateInfo createInfo, DgAudioEngine* pAudioEngine);
