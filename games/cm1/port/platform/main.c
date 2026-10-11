/* Start-up: the game's directory, its data, the machine, then the game's main().
 *
 *   cm1 [-g GAMEDIR] [A|R]
 *
 * GAMEDIR (default: the current directory, or $CM1_DIR) holds the game's files,
 * EUROPE.EXE included. A or R (AdLib, Roland) is the game's own argument, the music
 * device. */
#include "port.h"

void port_load_image(void);
void port_platform_init(void);
void game_main(int argc, char *argv[]);

int main(int argc, char **argv)
{
    const char *dir = getenv("CM1_DIR");
    char *args[3] = { argv[0], NULL, NULL };
    int n = 1, i;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-g") == 0 && i + 1 < argc)
            dir = argv[++i];
        else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printf("usage: %s [-g GAMEDIR] [A|R]\n", argv[0]);
            return 0;
        } else if (n < 2)
            args[n++] = argv[i];
    }
    if (dir && chdir(dir) != 0) {
        perror(dir);
        return 1;
    }
    port_load_image();
    port_platform_init();
    game_main(n, args);
    return 0;
}
