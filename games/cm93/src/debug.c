/* Championship Manager 93: TEMPORARY diagnostic for the average ratings losing their sums.
 * CM_DEBUG_RATINGS=1 logs to stderr whenever the block holding the season rating sums
 * (VM handle DS:fde6, word table at +0x1d10, one word per player) comes back from the VM
 * fetch, 1bd3:1617 (void far *vm_fetch(int handle, int dirty)), with a total lower than
 * the last time it was seen (by more than a transferred player accounts for), with the
 * caller of the fetch. */
#include "hand.h"
#include <stdio.h>
#include <stdlib.h>

#define RATING_BLOCK_HANDLE 0xfde6 /* DS: VM handle of the ratings block */
#define RATING_SUMS 0x1d10         /* offset of the season sums in the block */
#define GAMES_SEG 0x3c35           /* byte per player: games this season */
#define GAMES_OFS 0x5730
#define NPLAYERS 1860

void f_1bd3_1617_orig(void);

static int cached(uint16_t id)
{
    int i;
    for (i = 0; i < 40; i++)
        if ((int8_t)RB(cpu.ds, (uint16_t)(0xfc52 + 6 * i)) == (int8_t)id) return 1 + RB(cpu.ds, (uint16_t)(0xfc53 + 6 * i));
    return 0;
}

void f_1bd3_1617(void)
{
    static int on = -1;
    static long last_sum = -1;
    uint16_t id = FAR_ARG(0), dirty = FAR_ARG(1);
    uint16_t ret_ip = RW(cpu.ss, cpu.sp), ret_cs = RW(cpu.ss, (uint16_t)(cpu.sp + 2));
    int was;
    if (on < 0) on = getenv("CM_DEBUG_RATINGS") != NULL;
    if (!on || id != RW(cpu.ds, RATING_BLOCK_HANDLE)) { f_1bd3_1617_orig(); return; }
    was = cached(id);
    f_1bd3_1617_orig();
    {
        uint16_t seg = cpu.dx, off = cpu.ax;
        long sum = 0, games = 0;
        int p;
        for (p = 0; p < NPLAYERS; p++) {
            sum += RW(seg, (uint16_t)(off + RATING_SUMS + 2 * p));
            games += RB(GAMES_SEG, (uint16_t)(GAMES_OFS + p));
        }
        if (last_sum >= 0 && last_sum - sum > 100 && last_sum - sum > last_sum / 20) /* not one player's transfer */
            fprintf(stderr, "[RATINGS] sums dropped %ld -> %ld (games %ld), fetch(%d, %d) from %04x:%04x, block was %s\n",
                    last_sum, sum, games, id, dirty, ret_cs, ret_ip,
                    was == 0 ? "not cached (read from VM.$$$)" : was == 1 ? "cached, clean" : "cached, dirty");
        last_sum = sum;
    }
}
