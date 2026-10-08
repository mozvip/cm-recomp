/* @at 14d2:0008 */
/* @data 5d9c:1d00 */
/* @module */

#include <dos.h>
#include <fcntl.h>
#include <alloc.h>
#include <bios.h>
#include <conio.h>
#include <ctype.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

char far *next_text_buffer(void);
int vm_alloc(long size);                 /* allocate a block (EMS/extended memory) */
void far *vm_map(int handle, int dirty);
void unpack_ilbm(char far *src, char far *dst);
void show_ilbm(char far *buf, unsigned size);
void set_picture_palette(void);
void init_mouse(void);
void install_keyboard_handler(void);
void install_music_driver(void);
void load_music(void);
void present_screen(int noflip);
void show_pointer(void);
void wait_for_click(int mode);
void hide_pointer(void);
void copy_screen_page(void);
void save_planar_rect(unsigned left, unsigned top, unsigned right, unsigned bottom, char far *buf, unsigned seg);
void restore_planar_rect(unsigned x, unsigned y, char far *buf, unsigned seg);
void draw_line(unsigned from_x, unsigned from_y, unsigned to_x, unsigned to_y);
void draw_text_in_colour(int colour, int x, int y, char far *s);
void draw_char(int colour, int x, int y, char c);
void draw_glyph_planar(char far *glyph, int x, int y, int colour, int fill, int mode, int rows);
void poll_mouse(void);
void play_effect_stub(int effect);
long clock_ticks(void);
void draw_line_vga256(unsigned from_x, unsigned from_y, unsigned to_x, unsigned to_y, int colour);
void draw_line_planar(unsigned from_x, unsigned from_y, unsigned to_x, unsigned to_y, int colour);
void new_screen(char far *title);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_font2(float x, float y, int colour, char far *s);
void prompt_text_input(float x, int w, char far *prompt);
void restore_system(void);
void ems_free(int handle);
void remove_music_driver(void);
void remove_keyboard_handler(void);
void start_music(char far *music);
void mt32_music_setup(void);
int ems_init(void);                                  /* EMS present: 0 */
int ems_alloc(long size);                             /* allocate EMS */
void ems_write(long size, char far *buf, int handle, long off);   /* write to EMS */
void ems_read(long size, int handle, long off, char far *buf);   /* read from EMS */

extern char far *screen_buffer;           /* screen buffer */
extern char startup_video_mode;                /* video mode at start-up */
extern char video_mode;                /* 0 none, 1 EGA, 2 VGA */
extern int screen_vm_block, search_results_handle, asking_prices_handle, manager_points_handle, matchfax_handle, accounts_ems_handle;
extern int button_geometry_handle, d_5d9c_a342, d_5d9c_a340, past_winners_handle, season_best_players_handle, button_colours_handle;
extern int stats_print_handle, transfer_news_dest_handle, transfer_history_handle, button_labels_handle, transfer_news_handle, first_leg_ems_handle;
extern int club_long_records_handle, best_avg_rating_handle, hall_of_fame_handle, menu_texts_handle, refused_talks_handle, d_5d9c_a332;
extern int d_5d9c_a330, national_squads_handle, table_marks_handle;
extern int background_brightness, background_colour;
extern char small_font_glyphs[], medium_font_glyphs[], large_font_glyphs[];  /* fonts: another module's data */
extern int mouse_driver_present;
extern char far *sound_driver_mem;           /* sound driver memory */
extern char far *sound_driver;           /* the driver, paragraph aligned */
extern char sound_device;                /* sound device letter */
extern char far *vga_memory;           /* VGA memory */
extern unsigned char draw_colour, fill_colour;     /* drawing and fill colours */
extern int current_font_id, small_font_selected;
extern struct window far *current_font;  /* current font */
extern char text_opaque;                /* 1: text drawn with its background */
extern unsigned char text_buffer_index;
extern char far text_buffers[6][320];    /* text buffers */
extern char pointer_background[64];            /* 8x8 block under the mouse pointer */
extern float text_x;
extern long protection_answers[];              /* protection answers */
extern char far input_text[];          /* text typed in */
extern int vm_in_ems;                 /* virtual memory in EMS/extended memory */
extern int ems_handle;
extern char far *music_mem;           /* music memory */
extern char far *music_data;           /* the music, paragraph aligned */
extern char huge *vm_work_buffer;          /* virtual memory work buffer (64124 bytes) */
extern char ems_error;                /* EMS library error */
extern char mouse_initialised;                /* mouse initialised */
extern int pointer_drawn_x, pointer_drawn_y;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    long size;
    long off;                           /* in EMS or VM.$$$ */
};
extern struct vmblock vm_blocks[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char far *p;
};
extern struct vmslot vm_slots[40];

struct window {                         /* a font */
    char far *buf;
    int pad[4];
    int w, h, base;
};

unsigned char ega_colour_map[15] = { 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours of 17..31 */
struct window small_font = { small_font_glyphs, { 0, 0, 0, 0 }, 5, 5, 1 };
struct window medium_font = { medium_font_glyphs, { 0, 0, 0, 0 }, 7, 7, 0 };
struct window large_font = { large_font_glyphs, { 0, 0, 0, 0 }, 7, 14, 0 };
char d_5d9c_1d45 = 1;
int mouse_x = 0;                    /* mouse x */
int mouse_y = 0;                    /* mouse y */
int pointer_visible = 0;
int mouse_clicks = 0;                    /* clicks since last asked */
unsigned long random_seed = 1;          /* random seed */
long midnight_tick_offset = 0;                   /* ticks added after midnight */
long last_clock_ticks = 0;                   /* last time returned */
int vm_block_count = 0;                    /* virtual memory blocks allocated */
unsigned long vm_buffer_used = 0;          /* bytes of the work buffer in use */

/* Take the top bit of each of four plane bytes into one pixel value. */
char take_plane_pixel(char far *p0, char far *p1, char far *p2, char far *p3)
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
void planar_to_chunky(char far *src)
{
    char far *s;
    char far *d;
    char p0, p1, p2, p3;
    unsigned i, j;

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

char far *char_to_string(char ch)
{
    char far *buf;

    buf = next_text_buffer();
    buf[0] = ch;
    buf[1] = 0;
    return buf;
}

/* 0: no EGA, 1: EGA (mode 0Dh set), 2: VGA (mode 13h set). */
int detect_and_set_video_mode(void)
{
    volatile int adapter = 0;     /* kept in memory: the BIOS calls clobber registers */

    _AH = 0x12;
    _BL = 0x10;
    asm int 10h;
    if (_BL != 0x10) {
        _AH = 0x0f;
        asm int 10h;
        startup_video_mode = _AL;
        adapter = 1;
        _AX = 0x1a00;
        asm int 10h;
        if (_AL != 0x1a) {
            _AX = 0x0d;
            asm int 10h;
        } else {
            adapter = 2;
            _AX = 0x13;
            asm int 10h;
        }
    }
    return adapter;
}

void init_video_and_memory(void)
{
    int fd;

    if (!(video_mode = detect_and_set_video_mode())) {
        printf("Requires EGA or VGA\n");
        exit(1);
    }
    small_font.buf = small_font_glyphs;
    medium_font.buf = medium_font_glyphs;
    large_font.buf = large_font_glyphs;
    screen_vm_block = vm_alloc(video_mode == 1 ? 32000L : 64000L);
    search_results_handle = vm_alloc(3402L);
    asking_prices_handle = vm_alloc(6804L);
    manager_points_handle = vm_alloc(2600L);
    matchfax_handle = vm_alloc(6000L);
    accounts_ems_handle = vm_alloc(10240L);
    button_geometry_handle = vm_alloc(2800L);
    d_5d9c_a342 = vm_alloc(1000L);
    d_5d9c_a340 = vm_alloc(1020L);
    past_winners_handle = vm_alloc(768L);
    season_best_players_handle = vm_alloc(320L);
    button_colours_handle = vm_alloc(400L);
    stats_print_handle = vm_alloc(3200L);
    transfer_news_dest_handle = vm_alloc(24000L);
    transfer_history_handle = vm_alloc(64124L);
    button_labels_handle = vm_alloc(4000L);
    transfer_news_handle = vm_alloc(1200L);
    first_leg_ems_handle = vm_alloc(400L);
    club_long_records_handle = vm_alloc(2240L);
    best_avg_rating_handle = vm_alloc(560L);
    hall_of_fame_handle = vm_alloc(3200L);
    menu_texts_handle = vm_alloc(1600L);
    refused_talks_handle = vm_alloc(604L);
    d_5d9c_a332 = vm_alloc(604L);
    d_5d9c_a330 = vm_alloc(604L);
    national_squads_handle = vm_alloc(440L);
    table_marks_handle = vm_alloc(40L);
    screen_buffer = vm_map(screen_vm_block, 1);
    if (video_mode == 2) {
        fd = open("title.lbm", O_RDONLY);
        read(fd, screen_buffer + 0x7d00, 32000);
        close(fd);
        unpack_ilbm(screen_buffer + 0x7d00, screen_buffer);
        planar_to_chunky(screen_buffer);
        background_brightness = 4;
        background_colour = 5;
        set_picture_palette();
    } else {
        fd = open("titleega.lbm", O_RDONLY);
        read(fd, screen_buffer, 32000);
        close(fd);
        show_ilbm(screen_buffer, 0xa400);
    }
}

void set_palette_entry(int colour, char red, char green, char blue)
{
    if (video_mode == 2) {
        red <<= 2;
        green <<= 2;
        blue <<= 2;
        _AX = 0x1010;
        _BX = colour;
        _DH = red;
        _CH = green;
        _CL = blue;
        geninterrupt(0x10);
    }
}

void init_hardware(char device)
{
    int fd;

    init_mouse();
    if (mouse_driver_present == 0)
        install_keyboard_handler();
    device = toupper(device);
    if (device == 'A' || device == 'R') {
        sound_driver_mem = malloc(6000);
        sound_driver = MK_FP(FP_SEG(sound_driver_mem) + 1, 0);
        sound_device = device;
        if (device == 'A')
            fd = open("ADLIB.DRV", O_RDONLY);
        else
            fd = open("MT32.DRV", O_RDONLY);
        read(fd, sound_driver, 6000);
        close(fd);
        install_music_driver();
    }
    load_music();
    _OvrInitEms(0, 0, 0);
    vga_memory = MK_FP(0xa000, 0);
}

void show_screen_wait_click(void)
{
    present_screen(0);
    show_pointer();
    wait_for_click(1);
    present_screen(0);
}

void present_screen(int noflip)
{
    if (video_mode == 2) {
        screen_buffer = vm_map(screen_vm_block, 0);
        if (noflip == 0) {
            hide_pointer();
            asm push ds
            asm push di
            asm push si
            asm les di, vga_memory
            asm lds si, screen_buffer
            asm mov cx, 0fa00h
            asm rep movsw
            asm pop si
            asm pop di
            asm pop ds
            show_pointer();
        }
    } else if (noflip == 0) {
        hide_pointer();
        copy_screen_page();
        show_pointer();
    }
}

void present_screen_rect(unsigned left, unsigned top, unsigned right, unsigned bottom)
{
    char far *src;
    char far *dst;
    unsigned skip;
    unsigned off;
    unsigned tmp;

    hide_pointer();
    if (video_mode == 2) {
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
        asm push ds
        asm push es
        asm push si
        asm push di
        asm mov bx, bottom
        asm inc bx
        asm sub bx, top
        asm mov dx, right
        asm inc dx
        asm sub dx, left
        asm les di, dst
        asm lds si, src
line:
        asm mov cx, dx
        asm rep movsb
        asm add si, skip
        asm add di, skip
        asm dec bx
        asm jnz line
        asm pop di
        asm pop si
        asm pop es
        asm pop ds
    } else {
        if (top > bottom) {
            tmp = top;
            top = bottom;
            bottom = tmp;
        }
        screen_buffer = vm_map(screen_vm_block, 0);
        save_planar_rect(left, top, right, bottom, screen_buffer, 0xa400);
        restore_planar_rect(left, top, screen_buffer, 0xa000);
    }
    show_pointer();
}

void set_fill_colour(int colour)
{
    fill_colour = video_mode == 2 ? colour : ega_colour_map[colour - 17];
}

void set_draw_colour(int colour)
{
    draw_colour = video_mode == 2 ? colour : ega_colour_map[colour - 17];
}

void fill_rect(unsigned left, unsigned top, unsigned right, unsigned bottom)
{
    unsigned tmp;

    if (top > bottom) {
        tmp = top;
        top = bottom;
        bottom = tmp;
    }
    tmp = draw_colour;
    draw_colour = fill_colour;
    hide_pointer();
    for (; top <= bottom; top++)
        draw_line(left, top, right, top);
    show_pointer();
    draw_colour = tmp;
}

void draw_rect(unsigned left, unsigned top, unsigned right, unsigned bottom)
{
    unsigned tmp;

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

void select_font(int font)
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

void draw_text(int x, int y, char far *s)
{
    hide_pointer();
    draw_text_in_colour(draw_colour, x, y, s);
    show_pointer();
}

void draw_text_in_colour(int colour, int x, int y, char far *s)
{
    y -= current_font->h + current_font->base;
    while (*s) {
        draw_char(colour, x, y, *s++);
        x += current_font->w + 1;
    }
}

void draw_char(int colour, int x, int y, char c)
{
    char far *dst;
    char far *glyph;
    unsigned skip;
    char bits;
    unsigned row, col;

    glyph = current_font->buf + (c - 32) * (current_font->h + 1);
    if (video_mode == 2) {
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
    } else
        draw_glyph_planar(glyph, x, y, colour, fill_colour, text_opaque, current_font->h + 1);
}

void set_text_opaque(char mode)
{
    text_opaque = mode;
}

/* 1-based position of set in s, 0 if not found. */
unsigned find_substring(char far *haystack, char far *needle)
{
    char far *hit;
    unsigned pos;

    hit = strstr(haystack, needle);
    if (hit != NULL) {
        pos = hit - haystack + 1;
        if (strlen(haystack) >= pos)
            return pos;
    }
    return 0;
}

/* 1-based position of the last occurrence of set in s, 0 if not found. */
unsigned find_last_substring(char far *haystack, char far *needle)
{
    char far *hit;
    char far *next;
    unsigned next_pos;
    unsigned pos;

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

int get_mouse_y(void)
{
    return mouse_y;
}

int get_mouse_x(void)
{
    return mouse_x;
}

int take_mouse_clicks(void)
{
    int clicks;

    poll_mouse();
    clicks = mouse_clicks;
    mouse_clicks = 0;
    if (clicks)
        play_effect_stub(3);
    return clicks;
}

void empty_stub(void)
{
}

void play_effect_stub(int effect)
{
}

void wait_mouse_release(void)
{
    do
        poll_mouse();
    while (mouse_clicks != 0);
}

/* Read a "quoted" field, then skip to the end of the line. */
void read_quoted_field(FILE *fp, char far *dst)
{
    int ch;

    fgetc(fp);
    while ((ch = fgetc(fp)) != '"')
        *dst++ = ch;
    *dst = 0;
    while (fgetc(fp) != '\n')
        ;
}

void read_line(FILE *fp, char far *buf)
{
    fgets(buf, 160, fp);
    buf[strlen(buf) - 1] = 0;
}

void write_line(FILE *fp, char far *line)
{
    fprintf(fp, "%s\n", line);
}

char far *poll_key_string(void)
{
    char far *buf;
    int key;

    buf = next_text_buffer();
    key = 0;
    if (kbhit())
        key = getch();
    buf[0] = key;
    buf[1] = 0;
    return buf;
}

int random_next(void)
{
    random_seed = random_seed * 1103515245L + 12345;
    return (random_seed >> 16) & 0x7fff;
}

void seed_random_from_clock(void)
{
    random_seed = clock_ticks();
}

int random_below(int limit)
{
    if (limit)
        return random_next() % limit;
    return 0;
}

int file_exists(char far *path)
{
    if (access(path, 0))
        return 0;
    return -1;
}

void wait_ticks(int ticks)
{
    long start;

    start = clock_ticks();
    while (clock_ticks() < start + ticks * 4)
        ;
}

/* Clock ticks, x 11, not going back at midnight. */
long clock_ticks(void)
{
    long ticks;

    _bios_timeofday(0, &ticks);
    if (ticks + midnight_tick_offset < last_clock_ticks)
        midnight_tick_offset += 300000L;
    last_clock_ticks = ticks + midnight_tick_offset;
    return last_clock_ticks * 11;
}

char far *upper_case(char far *src)
{
    char far *buf;

    buf = next_text_buffer();
    strcpy(buf, src);
    strupr(buf);
    return buf;
}

/* The next of six text buffers. */
char far *next_text_buffer(void)
{
    char far *buf = text_buffers[text_buffer_index++];

    if (text_buffer_index > 5)
        text_buffer_index = 0;
    return buf;
}

/* The last n characters of s. */
char far *right_chars(char far *src, unsigned count)
{
    char far *buf;
    unsigned len;

    buf = next_text_buffer();
    len = strlen(src);
    if (count <= len)
        strcpy(buf, src + (len - count));
    else
        strcpy(buf, src);
    return buf;
}

/* n characters of s from position i (1-based). */
char far *mid_chars(char far *src, unsigned start, unsigned count)
{
    unsigned len;
    char far *buf;

    buf = next_text_buffer();
    len = strlen(src);
    if (start > len)
        *buf = 0;
    else
        sprintf(buf, "%.*s", count, src + (start - 1));
    return buf;
}

void draw_line(unsigned from_x, unsigned from_y, unsigned to_x, unsigned to_y)
{
    hide_pointer();
    if (video_mode == 2)
        draw_line_vga256(from_x, from_y, to_x, to_y, draw_colour);
    else
        draw_line_planar(from_x, from_y, to_x, to_y, draw_colour);
    show_pointer();
}

/* s without leading and trailing spaces. */
char far *trim_spaces(char far *src)
{
    char far *buf;
    int i;

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

void save_pointer_background(int x, int y)
{
    char far *screen;
    char far *saved;
    unsigned col, row;

    screen = vga_memory + y * 320 + x;
    saved = pointer_background;
    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++)
            *saved++ = *screen++;
        screen += 312;
    }
}

void restore_pointer_background(int x, int y)
{
    char far *saved;
    char far *screen;
    unsigned col, row;

    screen = vga_memory + y * 320 + x;
    saved = pointer_background;
    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++)
            *screen++ = *saved++;
        screen += 312;
    }
}

/* Move the rectangle up by dy rows and fill the rows it leaves with colour. */
void scroll_rect_up(unsigned left, int top, unsigned right, unsigned bottom, int lines, int colour)
{
    char far *src_row;
    char far *dst_row;
    char far *src;
    char far *dst;
    char saved_colour;
    unsigned col;

    hide_pointer();
    if (video_mode == 2) {
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
    } else {
        saved_colour = draw_colour;
        screen_buffer = vm_map(screen_vm_block, 0);
        save_planar_rect(left, top, right, bottom, screen_buffer, 0xa000);
        restore_planar_rect(left, top - lines, screen_buffer, 0xa000);
        draw_colour = ega_colour_map[colour - 17];
        for (top = bottom - lines + 1; top <= bottom; top++)
            draw_line(left, top, right, top);
        draw_colour = saved_colour;
    }
    show_pointer();
}

void protection_check(void)
{
    long answer;
    unsigned season_idx;
    unsigned division;
    char buf[160];
    register unsigned question;

    _SI = 0;                                /* tries: never counted since the patch */
    new_screen("PROTECTION SCREEN");
    question = random_below(180);
    season_idx = question % 45;
    division = question / 45;
    text_x = 11.0;
    set_fill_colour(16);
    fill_rect(text_x * 8.0 + 6.0, 40, (text_x + 16.0) * 8.0 + 19.0, 54);
    draw_text_box(text_x, -5.0, 1, 4, 0, " REFER TO BOX LID ");
    sprintf(buf, "What was the league attendance in");
    draw_text_font2(5.0, 10.0, 6, buf);
    sprintf(buf, "division %d in %d/%d season.", division + 1, season_idx + 46, season_idx + 47);
    draw_text_font2(8.0, 13.0, 6, buf);
    set_draw_colour(17);
    select_font(0);
    draw_text(273, 199, "V 1.02");
    prompt_text_input(2.0, 10, "Input");
    answer = atol(input_text);
    /* The comparison with the answer, protection_answers[question], is patched out in this copy of
       the game (a crack: the jump and what followed are NOPs, and the tries in SI are
       never counted). No C gives these bytes; they are reproduced as they are. */
    asm db 8Bh, 0DFh                    /* mov bx, di (question): the compiler's encoding */
    asm mov cl, 2
    asm shl bx, cl
    asm mov ax, word ptr protection_answers[bx+2]
    asm mov dx, word ptr protection_answers[bx]
    asm cmp ax, word ptr answer+2
    asm jne patched
    asm cmp dx, word ptr answer
    asm nop
    asm nop
patched:
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    asm nop
    if (_SI == 3) {
        restore_system();
        exit(0);
    }
}

void restore_system(void)
{
    if (vm_in_ems)
        ems_free(ems_handle);
    else
        remove("VM.$$$");
    _AH = 0;
    _AL = startup_video_mode;
    geninterrupt(0x10);
    if (sound_device)
        remove_music_driver();
    if (mouse_driver_present == 0)
        remove_keyboard_handler();
}

void load_music(void)
{
    int fd;

    if (sound_device) {
        music_mem = malloc(sound_device == 'A' ? 9100 : 22232);
        music_data = MK_FP(FP_SEG(music_mem) + 1, 0);
        if (sound_device == 'A')
            fd = open("CMAN2.ALB", O_RDONLY);
        else
            fd = open("CMANRLD.RLD", O_RDONLY);
        read(fd, music_data, 25000);
        close(fd);
        start_music(music_data);
        if (sound_device == 'R')
            mt32_music_setup();
    }
}

float max_float(float lhs, float rhs)
{
    return lhs > rhs ? lhs : rhs;
}

int max_int(int lhs, int rhs)
{
    return lhs > rhs ? lhs : rhs;
}

long max_long(long lhs, long rhs)
{
    return lhs > rhs ? lhs : rhs;
}

float min_float(float lhs, float rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int min_int(int lhs, int rhs)
{
    return lhs < rhs ? lhs : rhs;
}

long min_long(long lhs, long rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int always_true(void)
{
    return 1;
}

void swap_bytes(char far *buf_a, char far *buf_b, unsigned len)
{
    char tmp;
    unsigned i;

    for (i = 0; i < len; i++) {
        tmp = *buf_a;
        *buf_a++ = *buf_b;
        *buf_b++ = tmp;
    }
}

/* Allocate a virtual memory block of size bytes; returns its handle. */
int vm_alloc(long size)
{
    int fd;

    if (vm_block_count == 0) {
        if ((vm_work_buffer = farcalloc(64124L, 1L)) == NULL) {
            printf("No room for virtual memory\n");
            exit(-1);
        }
        if (ems_init() == 0) {
            ems_handle = ems_alloc(300000L);
            if (ems_error == 0)
                vm_in_ems = -1;
        }
        if (vm_in_ems == 0) {
            fd = open("VM.$$$", O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
            write(fd, vm_work_buffer, 1);
            close(fd);
        }
        for (fd = 0; fd < 40; fd++) {
            vm_slots[fd].block = -1;
            vm_blocks[fd].size = 0;
        }
    }
    vm_blocks[vm_block_count].size = size;
    if (vm_in_ems) {
        vm_blocks[vm_block_count].off = vm_block_count == 0 ? 0 :
            vm_blocks[vm_block_count - 1].off + vm_blocks[vm_block_count - 1].size;
        ems_write(vm_blocks[vm_block_count].size, vm_work_buffer, ems_handle, vm_blocks[vm_block_count].off);
    } else {
        vm_blocks[vm_block_count].off = vm_block_count == 0 ? 0 :
            vm_blocks[vm_block_count - 1].off + vm_blocks[vm_block_count - 1].size;
        fd = open("VM.$$$", O_RDWR);
        lseek(fd, vm_blocks[vm_block_count].off, 0);
        write(fd, vm_work_buffer, size);
        close(fd);
    }
    return vm_block_count++;
}

/* Map a virtual memory block into the work buffer (dirty: it will be changed). */
void far *vm_map(int handle, int dirty)
{
    char far *mem;
    int i;
    int fd;

    for (i = 0; i < 40; i++)
        if (vm_slots[i].block == handle) {
            if (dirty == 1)
                vm_slots[i].dirty = dirty;
            return vm_slots[i].p;
        }
    if (vm_in_ems == 0)
        fd = open("VM.$$$", O_RDWR);
    if (vm_buffer_used + vm_blocks[handle].size > 64124L) {
        for (i = 0; i < 40; i++)
            if (vm_slots[i].block >= 0) {
                if (vm_slots[i].dirty == 1) {
                    if (vm_in_ems == 0) {
                        lseek(fd, vm_blocks[vm_slots[i].block].off, 0);
                        write(fd, vm_slots[i].p, vm_blocks[vm_slots[i].block].size);
                    } else
                        ems_write(vm_blocks[vm_slots[i].block].size, vm_slots[i].p, ems_handle,
                                    vm_blocks[vm_slots[i].block].off);
                }
                vm_slots[i].block = -1;
            }
        vm_buffer_used = 0;
    }
    for (i = 0; i < 40; i++)
        if (vm_slots[i].block == -1)
            break;
    mem = vm_work_buffer + vm_buffer_used;
    if (vm_in_ems == 0) {
        lseek(fd, vm_blocks[handle].off, 0);
        read(fd, mem, vm_blocks[handle].size);
        close(fd);
    } else
        ems_read(vm_blocks[handle].size, ems_handle, vm_blocks[handle].off, mem);
    vm_slots[i].block = handle;
    vm_slots[i].dirty = dirty;
    vm_slots[i].p = mem;
    vm_buffer_used = vm_buffer_used + vm_blocks[handle].size;
    return mem;
}

void init_mouse(void)
{
    asm mov ax, 0                           /* not xor: the flags are not changed */
    geninterrupt(0x33);
    mouse_driver_present = _AX;
    mouse_initialised = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void show_pointer(void)
{
    int font;
    char colour;
    char mode;

    if (mouse_driver_present) {
        _AX = 1;
        geninterrupt(0x33);
    } else if (pointer_visible == 0 && mouse_initialised) {
        font = current_font_id;
        colour = draw_colour;
        mode = text_opaque;
        pointer_drawn_x = mouse_x;
        pointer_drawn_y = mouse_y;
        if (video_mode == 1)
            save_planar_rect(pointer_drawn_x, pointer_drawn_y, pointer_drawn_x + 8, pointer_drawn_y + 8, pointer_background, 0xa000);
        else
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
        _AX = 2;
        geninterrupt(0x33);
    } else if (pointer_visible) {
        if (video_mode == 1)
            restore_planar_rect(pointer_drawn_x, pointer_drawn_y, pointer_background, 0xa000);
        else
            restore_pointer_background(pointer_drawn_x, pointer_drawn_y);
        pointer_visible = 0;
    }
}

void poll_mouse(void)
{
    if (mouse_driver_present) {
        _AX = 3;
        geninterrupt(0x33);
        mouse_clicks = _BX;
        mouse_x = _CX;
        mouse_y = _DX;
        mouse_x >>= 1;
    } else if (pointer_drawn_x != mouse_x || pointer_drawn_y != mouse_y) {
        hide_pointer();
        show_pointer();
    }
}
