#include <dragon/audio.hpp>


static void list_audio_devices(const ALCchar* devices)
{
    const ALCchar* device = devices, * next = devices + 1;
    size_t len = 0;

    fprintf(stdout, "Devices list:\n");
    fprintf(stdout, "----------\n");
    while (device && *device != '\0' && next && *next != '\0') {
        fprintf(stdout, "%s\n", device);
        len = strlen(device);
        device += (len + 1);
        next += (len + 2);
    }
    fprintf(stdout, "----------\n");
}

DGAPI DgAudioResult dgCreateAudioEngine(std::shared_ptr<DgAudioEngine> pAudioEngine) {
	ALboolean enumeration = alcIsExtensionPresent(NULL, "ALC_ENUMERATION_EXT");
	if (enumeration) {

	}
	else {

	}
	return DG_AUDIO_SUCCESS;
}
