#ifndef GCWSOUND_H_
#define GCWSOUND_H_

void init_sdlaudio();

// Modified by the audio thread to match VideoFastForwarded after it finds
// that the video thread has skipped a frame. The audio thread must deal
// with the condition as soon as possible.
extern volatile unsigned int AudioFastForwarded;

#if 0
#define AUDIO_OUTPUT_BUFFER_SIZE 1476 / 2
#else
#define AUDIO_OUTPUT_BUFFER_SIZE 2216 / 2
#endif

// OUTPUT_SOUND_FREQUENCY should be a power-of-2 fraction of SOUND_FREQUENCY;
// if not, gcwsound.c's feed_buffer() needs to resample the output.
#if 0
#define OUTPUT_SOUND_FREQUENCY 22050
#else
#define OUTPUT_SOUND_FREQUENCY 33075
#endif

#define OUTPUT_FREQUENCY_DIVISOR ((int) (SOUND_FREQUENCY) / (OUTPUT_SOUND_FREQUENCY))

#endif /* GCWSOUND_H_ */
