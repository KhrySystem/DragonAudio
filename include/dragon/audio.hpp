#pragma once

#include "audio/device.hpp"
#include "audio/engine.hpp"
#include "audio/result.hpp"

DGAPI DgAudioResult dgCreateAudioEngine(std::shared_ptr<DgAudioEngine> pAudioEngine);
