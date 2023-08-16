#pragma once
#include "audio_core.hpp"

struct DgAudioDevice {
	ALCdevice* device;
	ALCcontext* context;
};
