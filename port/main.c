/* Start-up: the game's directory, its data, the machine, then the game's main().
 *
 *   cm1 [-g GAMEDIR] [-d DATADIR] [ARG]
 *
 * GAMEDIR (default: the current directory, or $<GAME_ENV>_DIR, CM1_DIR for CM1) holds
 * the game's files. DATADIR (default: $<GAME_ENV>_DATA, or "data" next to the
 * executable) the data segments extracted from the game's executable
 * (tools/port/extract.py). ARG is the game's own argument, the music device (CM1: A or
 * R, AdLib or Roland). */
#include "port.h"

void port_load_image(const char *dir);
void port_platform_init(void);
void game_main(int argc, char *argv[]);

int main(int argc, char **argv)
{
    const char *dir = getenv(GAME_ENV "_DIR"), *data = getenv(GAME_ENV "_DATA");
    char *args[3] = { argv[0], NULL, NULL };
    int n = 1, i;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-g") == 0 && i + 1 < argc)
            dir = argv[++i];
        else if (strcmp(argv[i], "-d") == 0 && i + 1 < argc)
            data = argv[++i];
        else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printf("usage: %s [-g GAMEDIR] [-d DATADIR] [" GAME_ARGS "]\n", argv[0]);
            return 0;
        } else if (n < 2)
            args[n++] = argv[i];
    }
    port_load_image(data);              /* before the chdir: DATADIR may be relative */
    if (dir && chdir(dir) != 0) {
        perror(dir);
        return 1;
    }
    /* the game does not check that its files opened: without them it reads garbage */
    if (access(GAME_FILE, R_OK) != 0) {
        fprintf(stderr, "%s: no " GAME_FILE " here: give the game's directory "
                "(-g GAMEDIR, or $" GAME_ENV "_DIR)\n", dir ? dir : "the current directory");
        return 1;
    }
    port_platform_init();
    game_main(n, args);
    return 0;
}
