/* Championship Manager Italia 95: game configuration and hand-written hooks. */
#include "rt.h"
#include <stdio.h>

const char *rc_game_dos_path = "C:\\CM.EXE";
const char *rc_game_title = "Championship Manager Italia 95 - recompiled";
/* this release has no sound driver (ADLIB.DRV) or music: no sound unless asked for */
const char *rc_game_default_args = " n";

void rc_hooks_init(void)
{
}
