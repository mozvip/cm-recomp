/* What the later games (CM93, CM94, Italia, Italia 95) changed in, or added to, the system
 * module (system.c): the sound and screen set-up, the title screens, random numbers drawn
 * twice for 30 bits, capitals of accented letters too, the music, the pointer around
 * typing, and empty functions. CM1 keeps its own (14d2.c). The names are CM1's, or new
 * where CM1 has no such function; game.h maps them, and gives LOGO_FILE (the publisher's
 * picture, before the title). */
#include "port.h"

void *vm_map(int16_t handle, int16_t dirty);
char *next_text_buffer(void);
void present_screen(int16_t noflip);
void set_picture_palette(void);
void show_pointer(void);
void hide_pointer(void);
int16_t take_mouse_clicks(void);
void wait_ticks(int16_t ticks);
void planar_to_chunky(char *src);
void load_music(void);
void unpack_ilbm(char *src, char *dst);
void install_music_driver(void);
void start_music(char *music);
void mt32_music_setup(void);
void music_off(void);
void install_keyboard_handler(void);
void remove_keyboard_handler(void);

extern char *screen_buffer;             /* screen buffer */
extern int16_t screen_vm_block;         /* its virtual memory block */
extern char *vga_memory;                /* VGA memory */
extern int16_t mouse_driver_present;
extern char *sound_driver_mem;          /* sound driver memory */
extern char *sound_driver;              /* the driver, paragraph aligned */
extern char sound_device;               /* sound device letter */
extern char *music_mem;                 /* music memory */
extern char *music_data;                /* the music, paragraph aligned */
extern char mouse_initialised;          /* mouse initialised */
extern uint32_t random_seed;            /* random seed */
extern int16_t background_brightness, background_colour;   /* palette brightness, tint */

/* Called around the waits for a click and for typing (0: before, 1: after). */
void input_wait_stub(char on)
{
}

/* The sound driver ('A' AdLib, 'R' Roland MT-32), the music, the screen. */
void init_hardware(char device)
{
    int16_t fd;

    device = toupper(device);
    if (device == 'A' || device == 'R') {
        sound_driver_mem = malloc(6100);
        sound_driver = sound_driver_mem;    /* port: paragraph alignment, not needed here */
        sound_device = device;
        if (device == 'A')
            fd = open("ADLIB.DRV", O_RDONLY);
        else
            fd = open("MT32.DRV", O_RDONLY);
        read(fd, sound_driver, 6100);
        close(fd);
        install_music_driver();
    }
    load_music();
    _OvrInitEms(0, 0, 0);
    vga_memory = (char *)port_vga_memory();
}

/* The publisher's picture (LOGO_FILE) and the title, until a key or click. */
void show_title_screens(void)
{
    int16_t fd;

    screen_buffer = vm_map(screen_vm_block, 1);
    fd = open(LOGO_FILE, O_RDONLY);
    read(fd, screen_buffer + 0x7d00, 32000);
    close(fd);
    unpack_ilbm(screen_buffer + 0x7d00, screen_buffer);
    planar_to_chunky(screen_buffer);
    background_brightness = 4;
    background_colour = 5;
    set_picture_palette();
    present_screen(0);
    show_pointer();
    wait_ticks(200);
    screen_buffer = vm_map(screen_vm_block, 1);
    fd = open("title.lbm", O_RDONLY);
    read(fd, screen_buffer + 0x7d00, 32000);
    close(fd);
    unpack_ilbm(screen_buffer + 0x7d00, screen_buffer);
    planar_to_chunky(screen_buffer);
    background_brightness = 4;
    background_colour = 5;
    set_picture_palette();
    present_screen(0);
    while (take_mouse_clicks() == 0)
        ;
    if (sound_device)
        music_off();
}

uint32_t random_next(void)
{
    random_seed = random_seed * 1103515245 + 12345;
    return (random_seed >> 16) & 0x7fff;
}

/* A random number below n (two draws make 30 bits). */
uint32_t random_below(uint32_t limit)
{
    if (limit)
        return ((random_next() << 16) + random_next()) % limit;
    return 0;
}

/* s in capitals, accented letters too, in a new string. */
char *upper_case(char *src)
{
    char *buf;
    char i;

    buf = next_text_buffer();
    i = 0;
    strcpy(buf, src);
    for (; buf[i]; i++)
        if (buf[i] >= 'a' && buf[i] <= 'z' || buf[i] >= '\xe0' && buf[i] <= '\xff')
            buf[i] = buf[i] - 32;
    return buf;
}

void load_music(void)
{
    int16_t fd;

    if (sound_device) {
        music_mem = malloc(11000);
        music_data = music_mem;         /* port: paragraph alignment, not needed here */
        if (sound_device == 'A')
            fd = open("MUSIC93.ALB", O_RDONLY);
        else
            fd = open("MUSIC93.RLD", O_RDONLY);
        read(fd, music_data, 11000);
        close(fd);
        start_music(music_data);
        if (sound_device == 'R')
            mt32_music_setup();
    }
}

void empty_stub_a(void)
{
}

void empty_stub_b(void)
{
}

void empty_stub_c(void)
{
}

/* Without a mouse driver: the keyboard driver off, and the pointer hidden. */
void pointer_off_for_typing(void)
{
    if (mouse_driver_present == 0) {
        mouse_initialised = 0;
        hide_pointer();
        remove_keyboard_handler();
    }
}

/* Without a mouse driver: the keyboard driver back, and the pointer. */
void pointer_on_after_typing(void)
{
    if (mouse_driver_present == 0) {
        install_keyboard_handler();
        mouse_initialised = 1;
        show_pointer();
    }
}
