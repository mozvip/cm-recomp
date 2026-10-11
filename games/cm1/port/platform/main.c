/* Start-up: the game's directory, its data, the machine, then the game's main().
 *
 *   cm1 [-g GAMEDIR] [-d DATADIR] [A|R]
 *
 * GAMEDIR (default: the current directory, or $CM1_DIR) holds the game's files.
 * DATADIR (default: $CM1_DATA, or "data" next to the executable) the data segments
 * extracted from EUROPE.EXE (tools/port/extract.py). A or R (AdLib, Roland) is the
 * game's own argument, the music device. */
#include "port.h"

void port_load_image(const char *dir);
void port_platform_init(void);
void game_main(int argc, char *argv[]);

int main(int argc, char **argv)
{
    const char *dir = getenv("CM1_DIR"), *data = getenv("CM1_DATA");
    char *args[3] = { argv[0], NULL, NULL };
    int n = 1, i;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-g") == 0 && i + 1 < argc)
            dir = argv[++i];
        else if (strcmp(argv[i], "-d") == 0 && i + 1 < argc)
            data = argv[++i];
        else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printf("usage: %s [-g GAMEDIR] [-d DATADIR] [A|R]\n", argv[0]);
            return 0;
        } else if (n < 2)
            args[n++] = argv[i];
    }
    port_load_image(data);              /* before the chdir: DATADIR may be relative */
    if (dir && chdir(dir) != 0) {
        perror(dir);
        return 1;
    }
    port_platform_init();
    game_main(n, args);
    return 0;
}
