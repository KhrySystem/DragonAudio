#pragma once

#include <AL/alc.h>
#include <AL/al.h>
#include <AL/alext.h>
#include <AL/efx-creative.h>
#include <AL/efx-presets.h>
#include <AL/efx.h>

#include "device.hpp"


namespace Dragon::Audio {
	struct EngineCreateInfo {
		
	};

	struct Engine {
		private:
			size_t deviceCount;
			std::vector<Device>; // Multiple Devices
	};
}