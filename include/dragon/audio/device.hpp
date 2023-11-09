#pragma once
#include <AL/alc.h>
#include <AL/al.h>
#include <AL/alext.h>
#include <AL/efx-creative.h>
#include <AL/efx-presets.h>
#include <AL/efx.h>

namespace Dragon::Audio {
	struct DgAudioDevice {
		ALCdevice* device;
		ALCcontext* context;
	};
}