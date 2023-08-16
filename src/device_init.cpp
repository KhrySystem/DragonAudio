#include <dragon/audio.hpp>

DGAPI DgResult dgCreateAudioDevice(std::shared_ptr<DgAudioDevice> pAudioDevice, ALCchar* pName) {
	alGetError();
	pAudioDevice->device = alcOpenDevice(pName);
	pAudioDevice->context = alcCreateContext(pAudioDevice->device, NULL);
	return DG_SUCCESS;
}
