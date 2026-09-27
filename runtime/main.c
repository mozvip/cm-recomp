/* Loader for the recompiled EUROPE.EXE: builds the DOS machine state and jumps to the entry point. */
#include "rt.h"
#include "mod.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint16_t rc_image_end_seg;

extern const uint8_t rc_image[];
extern const uint32_t rc_image_size;
extern const uint16_t rc_image_entry[4];      /* cs ip ss sp, already relocated */

/* the relocated load image is embedded at build time (gen/image.c) */
static void load_image(uint16_t *cs, uint16_t *ip, uint16_t *ss, uint16_t *sp)
{
    memcpy(&rc_ram[0x10000], rc_image, rc_image_size);
    rc_image_end_seg = (uint16_t)((0x10000 + rc_image_size + 15) >> 4);
    *cs = rc_image_entry[0]; *ip = rc_image_entry[1];
    *ss = rc_image_entry[2]; *sp = rc_image_entry[3];
    fprintf(stderr, "[LOAD] %u bytes at 1000:0000, entry %04x:%04x stack %04x:%04x\n",
            rc_image_size, *cs, *ip, *ss, *sp);
}

int main(int argc, char **argv)
{
    uint16_t cs, ip, ss, sp;
    char tail[128] = "";
    int n, i;

    setvbuf(stdout, NULL, _IONBF, 0);
    rc_trace = getenv("RC_TRACE") != NULL;
    rc_mods_load();
    plat_init();
    audio_init();
    load_image(&cs, &ip, &ss, &sp);

    for (n = 0; n < 256; n++) { WW(0, n * 4, (uint16_t)n); WW(0, n * 4 + 2, RC_BIOS_SEG); }
    WW(0x40, 0x10, 0x0003);            /* equipment: FPU, EGA/VGA */
    WW(0x40, 0x13, 640);
    WB(0x40, 0x49, 3);
    WW(0x40, 0x4a, 80);
    WW(0x40, 0x63, 0x3d4);
    WB(0x40, 0x84, 24);
    WW(0x40, 0x85, 16);
    WB(RC_BIOS_SEG, 0xfffe, 0xfc);     /* AT */

    dos_init();
    for (i = 1; i < argc; i++) {
        strncat(tail, " ", sizeof(tail) - strlen(tail) - 1);
        strncat(tail, argv[i], sizeof(tail) - strlen(tail) - 1);
    }
    if (argc == 1) strcpy(tail, " a");     /* like MANAGER.BAT / CM.BAT: AdLib music */
    dos_set_cmdline(tail);
    rc_hooks_init();

    memset(&cpu, 0, sizeof(cpu));
    cpu.cs = cs; cpu.ss = ss; cpu.sp = sp;
    cpu.ds = cpu.es = RC_PSP_SEG;
    cpu.if_ = 1;
    rc_call(cs, ip);
    fprintf(stderr, "[RC] entry point returned\n");
    return 0;
}
