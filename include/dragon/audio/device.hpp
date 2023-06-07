#pragma once
#include "audio_core.h"

struct DgAudioDevice {
	ALCdevice* device;
	ALCcontext* context;
};
