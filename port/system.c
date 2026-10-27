/* The games' system module (CM1's 14D2.C, CM93's 1BD3.C, CM94's 2162.C, Italia's 1D5E.C,
 * Italia 95's 215D.C), as far as it is the same in all of them: the screen buffer and the
 * VGA, the palette, rectangles, lines and text, the mouse and its pointer, the clock and
 * random numbers, strings and files, and the virtual memory. The EGA paths CM1 had are
 * gone: the ports always run in VGA mode. What the later games changed or added is in
 * system93.c; what is a game's own (its fonts, its virtual memory blocks, its music) is
 * still in its module.
 *
 * The names are CM1's: another game's game.h maps them to its own, functions and data,
 * and tools/port/mkdata.py reads this file with them (the data it does not define is at
 * the game's addresses in its original data). game.h also gives FONT_FIRST_CHAR (the
 * fonts' first character) and DEFAULT_BRIGHTNESS (a new picture's). */
#include "port.h"

int16_t vm_alloc(int32_t size);
void *vm_map(int16_t handle, int16_t dirty);
char *next_text_buffer(void);
void present_screen(int16_t noflip);
void set_picture_palette(void);
void show_pointer(void);
void hide_pointer(void);
void poll_mouse(void);
void draw_line(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y);
void draw_text_in_colour(int16_t colour, int16_t x, int16_t y, char *s);
void draw_char(int16_t colour, int16_t x, int16_t y, char c);
void select_font(int16_t font);
void set_draw_colour(int16_t colour);
void set_text_opaque(char mode);
int32_t clock_ticks(void);
void unpack_ilbm(char *src, char *dst);
void draw_line_vga256(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y, int16_t colour);
void remove_music_driver(void);
void remove_keyboard_handler(void);

extern char *screen_buffer;             /* screen buffer */
extern int16_t screen_vm_block;         /* its virtual memory block */
extern char startup_video_mode;         /* video mode at start-up */
extern char *vga_memory;                /* VGA memory */
extern int16_t mouse_driver_present;
extern char sound_device;               /* sound device letter */
extern unsigned char draw_colour, fill_colour;     /* drawing and fill colours */
extern int16_t current_font_id, small_font_selected;
extern struct window *current_font;     /* current font */
extern struct window small_font, medium_font, large_font;  /* the game's fonts */
extern char text_opaque;                /* 1: text drawn with its background */
extern unsigned char text_buffer_index;
extern char text_buffers[6][320];       /* text buffers */
extern char pointer_background[64];     /* 8x8 block under the mouse pointer */
extern char *vm_work_buffer;            /* virtual memory work buffer (64124 bytes) */
extern char mouse_initialised;          /* mouse initialised */
extern int16_t pointer_drawn_x, pointer_drawn_y;    /* where the pointer is drawn */
extern char picture_file[];             /* the picture wanted */
extern char loaded_picture[];           /* the picture shown */
extern char picture_palette_pending;    /* the picture's palette is to be set */
extern int16_t picture_palette[];       /* the picture's palette, 0RGB */
extern int16_t background_brightness, background_colour;   /* palette brightness, tint */
extern int16_t loop_i, loop_j, palette_green, palette_red;  /* set_picture_palette's */

struct vmblock {                        /* a virtual memory block */
    int32_t size;
    int32_t off;                        /* in vm_store */
};
extern struct vmblock vm_blocks[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char *p;
};
struct vmslot vm_slots[40];             /* port: native, it holds a pointer */
static char *vm_store;                  /* port: the blocks, in memory: not in EMS or VM.$$$ */

int16_t mouse_x = 0;                    /* mouse x */
int16_t mouse_y = 0;                    /* mouse y */
int16_t pointer_visible = 0;
int16_t mouse_clicks = 0;               /* clicks since last asked */
uint32_t random_seed = 1;               /* random seed */
int32_t midnight_tick_offset = 0;       /* ticks added after midnight */
int32_t last_clock_ticks = 0;           /* last time returned */
int16_t vm_block_count = 0;             /* virtual memory blocks allocated */
uint32_t vm_buffer_used = 0;            /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char take_plane_pixel(char *p0, char *p1, char *p2, char *p3)
{
    char pixel = 0;

    if (*p0 & 0x80)
        pixel |= 1;
    if (*p1 & 0x80)
        pixel |= 2;
    if (*p2 & 0x80)
        pixel |= 4;
    if (*p3 & 0x80)
        pixel |= 8;
    *p0 <<= 1;
    *p1 <<= 1;
    *p2 <<= 1;
    *p3 <<= 1;
    return pixel;
}

/* Planar (4 x 8000 bytes) to one byte per pixel. */
void planar_to_chunky(char *src)
{
    char *s;
    char *d;
    char p0, p1, p2, p3;
    uint16_t i, j;

    s = src;
    d = screen_buffer + 0x7d00;
    for (i = 0; i < 8000; i++) {
        *d++ = *s++;
        *d++ = s[7999];
        *d++ = s[15999];
        *d++ = s[23999];
    }
    s = screen_buffer + 0x7d00;
    d = screen_buffer;
    for (i = 0; i < 8000; i++) {
        p0 = *s++;
        p1 = *s++;
        p2 = *s++;
        p3 = *s++;
        for (j = 0; j < 8; j++)
            *d++ = take_plane_pixel(&p0, &p1, &p2, &p3);
    }
}

char *char_to_string(char ch)
{
    char *buf;

    buf = next_text_buffer();
    buf[0] = ch;
    buf[1] = 0;
    return buf;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set).
 * Port: always VGA (the platform layer shows mode 13h); started from text mode 3. */
int16_t detect_and_set_video_mode(void)
{
    startup_video_mode = 3;
    return 2;
}

void set_palette_entry(int16_t colour, char red, char green, char blue)
{
    unsigned char rgb[3];

    rgb[0] = red << 2;
    rgb[1] = green << 2;
    rgb[2] = blue << 2;
    port_vga_set_palette(colour, 1, rgb);   /* INT 10h AX=1010h */
}

/* Loads picture_file unless it is the one shown (loaded_picture). */
void load_title_picture(char reset_palette)
{
    int16_t handle;

    if (strcmp(picture_file, loaded_picture) != 0) {
        if ((handle = open(picture_file, O_RDONLY)) >= 0) {
            screen_buffer = vm_map(screen_vm_block, 1);
            read(handle, screen_buffer + 0x7d00, 32000);
            close(handle);
            unpack_ilbm(screen_buffer + 0x7d00, screen_buffer);
            planar_to_chunky(screen_buffer);
        }
        if (reset_palette) {
            background_colour = 5;
            background_brightness = DEFAULT_BRIGHTNESS;
        }
        picture_palette_pending = -1;
        strcpy(loaded_picture, picture_file);
    }
}

/* The palette: the picture's colours (picture_palette, 4 bits each) at brightness
   background_brightness, tinted by background_colour (1-4; 5 and above: as they are). */
void set_picture_palette(void)
{
    char pal[48];
    float brightness;
    char *p;
    int16_t grey;

    p = pal;
    brightness = background_brightness * 0.15 + 0.4;
    for (loop_i = 0; loop_i <= 15; loop_i++) {
        loop_j = picture_palette[loop_i] & 15;
        palette_green = picture_palette[loop_i] >> 4 & 15;
        palette_red = picture_palette[loop_i] >> 8 & 15;
        grey = (palette_red + palette_green + loop_j) / 3;
        if (background_colour < 5) {
            if (background_colour == 1) {
                palette_red = grey / 2;
                palette_green = grey / 2;
                loop_j = grey;
            } else if (background_colour == 2) {
                palette_red = grey;
                palette_green = grey;
                loop_j = grey;
            } else if (background_colour == 3) {
                palette_red = grey;
                palette_green = grey / 2;
                loop_j = grey / 2;
            } else {
                palette_red = grey / 2;
                palette_green = grey;
                loop_j = grey / 2;
            }
        }
        *p++ = (char)(palette_red * brightness) << 2;
        *p++ = (char)(palette_green * brightness) << 2;
        *p++ = (char)(loop_j * brightness) << 2;
    }
    port_vga_set_palette(0, 16, (unsigned char *)pal);   /* INT 10h AX=1012h, ES:DX = pal */
}

/* Blacks the screen out: an all-black palette, then the picture with its own palette. */
void blank_and_flip_screen(void)
{
    char pal[48];

    memset(pal, 0, 48);
    set_text_opaque(1);
    if (picture_palette_pending)
        port_vga_set_palette(0, 16, (unsigned char *)pal);   /* INT 10h AX=1012h, ES:DX = pal */
    present_screen(0);
    if (picture_palette_pending) {
        set_picture_palette();
        picture_palette_pending = 0;
    }
}

/* The screen buffer to the screen (noflip: only mapped). The later games' version takes
   no argument: their callers pass 0 (port). */
void present_screen(int16_t noflip)
{
    screen_buffer = vm_map(screen_vm_block, 0);
    if (noflip == 0) {
        hide_pointer();
        memcpy(vga_memory, screen_buffer, 64000);
        show_pointer();
    }
}

void present_screen_rect(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)
{
    char *src;
    char *dst;
    uint16_t skip;
    uint16_t off;
    uint16_t tmp;

    hide_pointer();
    screen_buffer = vm_map(screen_vm_block, 0);
    src = screen_buffer;
    dst = vga_memory;
    if (top > bottom) {
        tmp = top;
        top = bottom;
        bottom = tmp;
    }
    off = top * 320 + left;
    src += off;
    dst += off;
    skip = 320 - (right - left + 1);
    for (tmp = top; tmp <= bottom; tmp++) {
        memcpy(dst, src, right - left + 1);
        src += right - left + 1 + skip;
        dst += right - left + 1 + skip;
    }
    show_pointer();
}

void set_fill_colour(int16_t colour)
{
    fill_colour = colour;
}

void set_draw_colour(int16_t colour)
{
    draw_colour = colour;
}

void fill_rect(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)
{
    uint16_t tmp;

    if (top > bottom) {
        tmp = top;
        top = bottom;
        bottom = tmp;
    }
    hide_pointer();
    for (; top <= bottom; top++)
        draw_line_vga256(left, top, right, top, fill_colour);
    show_pointer();
}

void draw_rect(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)
{
    uint16_t tmp;

    if (top > bottom) {
        tmp = top;
        top = bottom;
        bottom = tmp;
    }
    hide_pointer();
    draw_line(left, top, right, top);
    draw_line(left, bottom, right, bottom);
    draw_line(left, top, left, bottom);
    draw_line(right, top, right, bottom);
    show_pointer();
}

void forget_font(void)
{
    current_font_id = -1;
}

void select_font(int16_t font)
{
    switch (font) {
    case 0:
        current_font = &small_font;
        small_font_selected = 1;
        break;
    case 1:
        current_font = &medium_font;
        small_font_selected = 0;
        break;
    case 2:
        current_font = &large_font;
        small_font_selected = 0;
        break;
    }
    current_font_id = font;
}

void draw_text(int16_t x, int16_t y, char *s)
{
    hide_pointer();
    draw_text_in_colour(draw_colour, x, y, s);
    show_pointer();
}

void draw_text_in_colour(int16_t colour, int16_t x, int16_t y, char *s)
{
    y -= current_font->h + current_font->base;
    while (*s) {
        draw_char(colour, x, y, *s++);
        x += current_font->w + 1;
    }
}

/* CM1's fonts start at the space (FONT_FIRST_CHAR 32), the later games' at 0. */
void draw_char(int16_t colour, int16_t x, int16_t y, char c)
{
    char *dst;
    char *glyph;
    uint16_t skip;
    char bits;
    uint16_t row, col;

    glyph = current_font->buf + ((unsigned char)c - FONT_FIRST_CHAR) * (current_font->h + 1);
    dst = vga_memory + y * 320 + x;
    skip = 320 - current_font->w - 1;
    for (row = 0; row <= current_font->h; row++) {
        bits = *glyph++;
        for (col = 0; col <= current_font->w; col++) {
            if (bits & 0x80)
                *dst = colour;
            else if (text_opaque == 1)
                *dst = fill_colour;
            dst++;
            bits <<= 1;
        }
        dst += skip;
    }
}

void set_text_opaque(char mode)
{
    text_opaque = mode;
}

/* 1-based position of set in s, 0 if not found. */
uint16_t find_substring(char *haystack, char *needle)
{
    char *hit;
    uint16_t pos;

    hit = strstr(haystack, needle);
    if (hit != NULL) {
        pos = hit - haystack + 1;
        if (strlen(haystack) >= pos)
            return pos;
    }
    return 0;
}

/* 1-based position of the last occurrence of set in s, 0 if not found. */
uint16_t find_last_substring(char *haystack, char *needle)
{
    char *hit;
    char *next;
    uint16_t next_pos;
    uint16_t pos;

    hit = strstr(haystack, needle);
    if (hit != NULL) {
        for (;;) {
            if ((next = strstr(hit + 1, needle)) == NULL)
                break;
            next_pos = next - haystack + 1;
            if (strlen(haystack) < next_pos)
                break;
            hit = next;
        }
        pos = hit - haystack + 1;
        if (strlen(haystack) >= pos)
            return pos;
    }
    return 0;
}

int16_t get_mouse_y(void)
{
    return mouse_y;
}

int16_t get_mouse_x(void)
{
    return mouse_x;
}

/* (CM1's also called play_effect_stub(3), which does nothing.) */
int16_t take_mouse_clicks(void)
{
    int16_t clicks;

    poll_mouse();
    clicks = mouse_clicks;
    mouse_clicks = 0;
    return clicks;
}

void play_effect_stub(int16_t effect)
{
}

void wait_mouse_release(void)
{
    do
        poll_mouse();
    while (mouse_clicks != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void read_quoted_field(FILE *fp, char *dst)
{
    int16_t ch;

    fgetc(fp);
    while ((ch = fgetc(fp)) != '"')
        *dst++ = ch;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void read_line(FILE *fp, char *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void write_line(FILE *fp, char *line)
{
    fprintf(fp, "%s\n", line);
}

char *poll_key_string(void)
{
    char *buf;
    int16_t key;

    buf = next_text_buffer();
    key = 0;
    if (kbhit())
        key = getch();
    buf[0] = key;
    buf[1] = 0;
    return buf;
}

void seed_random_from_clock(void)
{
    random_seed = clock_ticks();
}

int16_t file_exists(char *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void wait_ticks(int16_t ticks)
{
    int32_t start;

    start = clock_ticks();
    while (clock_ticks() < start + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
int32_t clock_ticks(void)
{
    int32_t ticks;

    _bios_timeofday(0, &ticks);
    if (ticks + midnight_tick_offset < last_clock_ticks)
        midnight_tick_offset += 300000;
    last_clock_ticks = ticks + midnight_tick_offset;
    return last_clock_ticks * 11;
}

/* The next of six text buffers. */
char *next_text_buffer(void)
{
    char *buf = text_buffers[text_buffer_index++];

    if (text_buffer_index > 5)
        text_buffer_index = 0;
    return buf;
}

/* The last n characters of s. */
char *right_chars(char *src, uint16_t count)
{
    char *buf;
    uint16_t len;

    buf = next_text_buffer();
    len = strlen(src);
    if (count <= len)
        strcpy(buf, src + (len - count));
    else
        strcpy(buf, src);
    return buf;
}

/* n characters of s from position i (1-based). */
char *mid_chars(char *src, uint16_t start, uint16_t count)
{
    uint16_t len;
    char *buf;

    buf = next_text_buffer();
    len = strlen(src);
    if (start > len)
        *buf = 0;
    else
        sprintf(buf, "%.*s", count, src + (start - 1));
    return buf;
}

void draw_line(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y)
{
    hide_pointer();
    draw_line_vga256(from_x, from_y, to_x, to_y, draw_colour);
    show_pointer();
}

/* s without leading and trailing spaces. */
char *trim_spaces(char *src)
{
    char *buf;
    int16_t i;

    buf = next_text_buffer();
    for (i = 0; src[i] == ' '; i++)
        ;
    strcpy(buf, src + i);
    if (strlen(buf))
        for (i = strlen(buf) - 1; i >= 0; i--)
            if (buf[i] == ' ')
                buf[i] = 0;
            else
                break;
    return buf;
}

float random_fraction(void)
{
    return rand() / 32767.0;
}

void save_pointer_background(int16_t x, int16_t y)
{
    char *screen;
    char *saved;
    uint16_t col, row;

    screen = vga_memory + y * 320 + x;
    saved = pointer_background;
    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++)
            *saved++ = *screen++;
        screen += 312;
    }
}

void restore_pointer_background(int16_t x, int16_t y)
{
    char *saved;
    char *screen;
    uint16_t col, row;

    screen = vga_memory + y * 320 + x;
    saved = pointer_background;
    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++)
            *screen++ = *saved++;
        screen += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void scroll_rect_up(uint16_t left, int16_t top, uint16_t right, uint16_t bottom, int16_t lines, int16_t colour)
{
    char *src_row;
    char *dst_row;
    char *src;
    char *dst;
    uint16_t col;

    hide_pointer();
    src_row = vga_memory + top * 320 + left;
    dst_row = src_row - lines * 320;
    for (; top <= bottom; top++) {
        src = src_row;
        dst = dst_row;
        for (col = left; col <= right; col++)
            *dst++ = *src++;
        src_row += 320;
        dst_row += 320;
    }
    for (top = 0; top < lines; top++) {
        dst = dst_row;
        for (col = left; col <= right; col++)
            *dst++ = colour;
        src_row += 320;
        dst_row += 320;
    }
    show_pointer();
}

void restore_system(void)
{
    port_vga_restore_text_mode();       /* INT 10h AH=0, AL=startup_video_mode */
    if (sound_device)
        remove_music_driver();
    if (mouse_driver_present == 0)
        remove_keyboard_handler();
}

float max_float(float lhs, float rhs)
{
    return lhs > rhs ? lhs : rhs;
}

int16_t max_int(int16_t lhs, int16_t rhs)
{
    return lhs > rhs ? lhs : rhs;
}

int32_t max_long(int32_t lhs, int32_t rhs)
{
    return lhs > rhs ? lhs : rhs;
}

float min_float(float lhs, float rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int16_t min_int(int16_t lhs, int16_t rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int32_t min_long(int32_t lhs, int32_t rhs)
{
    return lhs < rhs ? lhs : rhs;
}

void swap_bytes(char *buf_a, char *buf_b, uint16_t len)
{
    char tmp;
    uint16_t i;

    for (i = 0; i < len; i++) {
        tmp = *buf_a;
        *buf_a++ = *buf_b;
        *buf_b++ = tmp;
    }
}

/* Allocate a virtual memory block of size bytes; returns its handle. */
int16_t vm_alloc(int32_t size)
{
    int16_t i;

    if (vm_block_count == 0) {
        if ((vm_work_buffer = farcalloc(64124, 1)) == NULL) {
            printf("Not enough memory.\n");
            exit(-1);
        }
        for (i = 0; i < 40; i++) {
            vm_slots[i].block = -1;
            vm_blocks[i].size = 0;
        }
    }
    vm_blocks[vm_block_count].size = size;
    vm_blocks[vm_block_count].off = vm_block_count == 0 ? 0 :
        vm_blocks[vm_block_count - 1].off + vm_blocks[vm_block_count - 1].size;
    if ((vm_store = realloc(vm_store, vm_blocks[vm_block_count].off + size)) == NULL) {
        printf("Not enough memory.\n");
        exit(-1);
    }
    memcpy(vm_store + vm_blocks[vm_block_count].off, vm_work_buffer, size);
    return vm_block_count++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void *vm_map(int16_t handle, int16_t dirty)
{
    char *mem;
    int16_t i;

    for (i = 0; i < 40; i++)
        if (vm_slots[i].block == handle) {
            if (dirty == 1)
                vm_slots[i].dirty = dirty;
            return vm_slots[i].p;
        }
    if (vm_buffer_used + vm_blocks[handle].size > 64124) {
        for (i = 0; i < 40; i++)
            if (vm_slots[i].block >= 0) {
                if (vm_slots[i].dirty == 1)
                    memcpy(vm_store + vm_blocks[vm_slots[i].block].off, vm_slots[i].p,
                           vm_blocks[vm_slots[i].block].size);
                vm_slots[i].block = -1;
            }
        vm_buffer_used = 0;
    }
    for (i = 0; i < 40; i++)
        if (vm_slots[i].block == -1)
            break;
    mem = vm_work_buffer + vm_buffer_used;
    memcpy(mem, vm_store + vm_blocks[handle].off, vm_blocks[handle].size);
    vm_slots[i].block = handle;
    vm_slots[i].dirty = dirty;
    vm_slots[i].p = mem;
    vm_buffer_used = vm_buffer_used + vm_blocks[handle].size;
    return mem;
}

/* (The later games also set a flag here, that the driver counts x in 0-639, which only
   poll_mouse read: x is halved in all.) */
void init_mouse(void)
{
    mouse_driver_present = -1;          /* INT 33h AX=0: the platform's mouse */
    mouse_initialised = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void show_pointer(void)
{
    int16_t font;
    char colour;
    char mode;

    if (mouse_driver_present) {
        port_mouse_show(1);             /* INT 33h AX=1 */
    } else if (pointer_visible == 0 && mouse_initialised) {
        font = current_font_id;
        colour = draw_colour;
        mode = text_opaque;
        pointer_drawn_x = mouse_x;
        pointer_drawn_y = mouse_y;
        save_pointer_background(pointer_drawn_x, pointer_drawn_y);
        select_font(1);
        text_opaque = 0;
        set_draw_colour(17);
        draw_char(draw_colour, pointer_drawn_x, pointer_drawn_y, 0x7e);
        set_draw_colour(16);
        draw_char(draw_colour, pointer_drawn_x, pointer_drawn_y, 0x7f);
        text_opaque = mode;
        draw_colour = colour;
        select_font(font);
        pointer_visible = 1;
    }
}

void hide_pointer(void)
{
    if (mouse_driver_present) {
        port_mouse_show(0);             /* INT 33h AX=2 */
    } else if (pointer_visible) {
        restore_pointer_background(pointer_drawn_x, pointer_drawn_y);
        pointer_visible = 0;
    }
}

void poll_mouse(void)
{
    port_pump();
    if (mouse_driver_present) {
        port_mouse_state(&mouse_clicks, &mouse_x, &mouse_y);   /* INT 33h AX=3 */
        mouse_x >>= 1;                  /* the driver counts x in 0-639 */
    } else if (pointer_drawn_x != mouse_x || pointer_drawn_y != mouse_y) {
        hide_pointer();
        show_pointer();
    }
}
