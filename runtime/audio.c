/* Audio: renders the OPL2 in step with host time and queues it to SDL.
   CM_DUMP_AUDIO=file.wav also records everything that is rendered. */
#include "rt.h"
#include "opl2.h"
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

static SDL_AudioDeviceID dev;
static uint64_t t0, rendered;
static FILE *wav;
static uint32_t wav_samples;
static int active;

static void wav_close(void)
{
    uint32_t data = wav_samples * 2, riff = 36 + data;
    if (!wav) return;
    fseek(wav, 4, SEEK_SET); fwrite(&riff, 4, 1, wav);
    fseek(wav, 40, SEEK_SET); fwrite(&data, 4, 1, wav);
    fclose(wav);
    wav = NULL;
}

void audio_init(void)
{
    SDL_AudioSpec want, have;
    const char *dump = getenv("CM_DUMP_AUDIO");
    opl_init();
    if (SDL_InitSubSystem(SDL_INIT_AUDIO) == 0) {
        SDL_zero(want);
        want.freq = OPL_RATE;
        want.format = AUDIO_S16SYS;
        want.channels = 1;
        want.samples = 1024;
        dev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);   /* SDL converts to the device rate */
        if (dev) SDL_PauseAudioDevice(dev, 0);
        else fprintf(stderr, "[AUDIO] no output device: %s\n", SDL_GetError());
    }
    if (dump && (wav = fopen(dump, "wb")) != NULL) {
        static const uint8_t hdr[44] = { 'R', 'I', 'F', 'F', 0, 0, 0, 0, 'W', 'A', 'V', 'E', 'f', 'm', 't', ' ',
                                         16, 0, 0, 0, 1, 0, 1, 0, 0x34, 0xc2, 0, 0, 0x68, 0x84, 1, 0, 2, 0, 16, 0,
                                         'd', 'a', 't', 'a', 0, 0, 0, 0 };   /* 49716 Hz mono s16 */
        fwrite(hdr, 1, 44, wav);
        atexit(wav_close);
    }
    t0 = SDL_GetPerformanceCounter();
    active = 1;
}

/* render everything due up to now (call before each register write) */
void audio_sync(void)
{
    static int16_t buf[4096];
    uint64_t now, due;
    if (!active) return;
    now = SDL_GetPerformanceCounter() - t0;
    due = now * OPL_RATE / SDL_GetPerformanceFrequency();
    if (due - rendered > OPL_RATE / 4) rendered = due - OPL_RATE / 4;    /* after a stall, skip ahead */
    while (rendered < due) {
        int n = (int)(due - rendered > 4096 ? 4096 : due - rendered);
        opl_generate(buf, n);
        rendered += (uint64_t)n;
        if (dev && SDL_GetQueuedAudioSize(dev) < (Uint32)(OPL_RATE / 2 * 2)) SDL_QueueAudio(dev, buf, (Uint32)n * 2);
        if (wav) { fwrite(buf, 2, (size_t)n, wav); wav_samples += (uint32_t)n; }
    }
}
