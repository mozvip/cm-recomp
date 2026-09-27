/* Runtime-internal declarations (not needed by generated code). */
#ifndef RC_RT_H
#define RC_RT_H

#include "cpu.h"

#define RC_BIOS_SEG 0xF000    /* default interrupt vectors point to F000:<n> */
#define RC_MEM_TOP 0xF000     /* first paragraph past DOS-managed memory */
#define RC_PSP_SEG 0x0FF0
#define RC_ENV_SEG 0x0FC0

typedef void (*rc_hook_t)(void);

extern int rc_trace;
extern int rc_dac_dirty;

void rc_dump_stack(void);
void rc_irq(uint8_t n);
void rc_hle_int(uint8_t n);
void rc_emu3e(uint8_t code);

/* ports / VGA */
const uint8_t *rc_dac(void);
void rc_dac_set(int i, uint8_t r, uint8_t g, uint8_t b);
void rc_dac_get(int i, uint8_t *r, uint8_t *g, uint8_t *b);
double rc_pit_hz(void);
uint32_t rc_pit_counter(void);
void rc_timer_reprogram(void);

/* audio (audio.c) */
void audio_init(void);
void audio_sync(void);

/* platform (platform.c) */
void plat_init(void);
void plat_present(void);
void plat_pump(void);
uint32_t plat_ms(void);
extern int plat_mouse_x, plat_mouse_y, plat_mouse_buttons;
extern int rc_video_mode;
extern int rc_mouse_visible;
uint8_t rc_kbd_port60(void);
void rc_kbd_push(uint16_t scan_ascii, uint8_t scancode);
int rc_kbd_peek(uint16_t *key);
int rc_kbd_get(uint16_t *key);

/* DOS (dos.c) */
void dos_int21(void);
void dos_init(void);
void dos_set_cmdline(const char *tail);

/* per-game configuration and hooks (games/<game>/hooks.c) */
extern const char *rc_game_dos_path;  /* argv[0] as DOS sees it, e.g. "C:\\EUROPE.EXE" */
extern const char *rc_game_title;
void rc_hooks_init(void);
extern uint16_t rc_image_end_seg;

#endif
