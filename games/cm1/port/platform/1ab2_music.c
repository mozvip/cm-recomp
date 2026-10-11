/* Replaces decomp/src/1AB2.ASM, the interface to the music driver (ADLIB.DRV or
 * MT32.DRV, real-mode code called through INT 91h). The drivers cannot run natively:
 * for now the music is silent (see ../README.md). */
#include "port.h"

void install_music_driver(void)
{
}

void start_music(char *music)
{
    (void)music;
}

void music_on(void)
{
}

void music_off(void)
{
}

void mt32_music_setup(void)
{
}

void remove_music_driver(void)
{
}
