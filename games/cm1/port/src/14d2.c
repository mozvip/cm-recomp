/* Native port of decomp/src/14D2.C (see ../README.md). */
/* @at 14d2:0008 */
/* @data 5d9c:1d00 */
/* @module */

#include "port.h"

char *next_text_buffer(void);
int16_t vm_alloc(int32_t size);                 /* allocate a block (EMS/extended memory) */
void *vm_map(int16_t handle, int16_t dirty);
void unpack_ilbm(char *src, char *dst);
void show_ilbm(char *buf, uint16_t size);
void set_picture_palette(void);
void init_mouse(void);
void install_keyboard_handler(void);
void install_music_driver(void);
void load_music(void);
void present_screen(int16_t noflip);
void show_pointer(void);
void wait_for_click(int16_t mode);
void hide_pointer(void);
void copy_screen_page(void);
void save_planar_rect(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom, char *buf, uint16_t seg);
void restore_planar_rect(uint16_t x, uint16_t y, char *buf, uint16_t seg);
void draw_line(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y);
void draw_text_in_colour(int16_t colour, int16_t x, int16_t y, char *s);
void draw_char(int16_t colour, int16_t x, int16_t y, char c);
void draw_glyph_planar(char *glyph, int16_t x, int16_t y, int16_t colour, int16_t fill, int16_t mode, int16_t rows);
void poll_mouse(void);
void play_effect_stub(int16_t effect);
int32_t clock_ticks(void);
void draw_line_vga256(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y, int16_t colour);
void draw_line_planar(uint16_t from_x, uint16_t from_y, uint16_t to_x, uint16_t to_y, int16_t colour);
void new_screen(char *title);
void draw_text_box(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
void draw_text_font2(float x, float y, int16_t colour, char *s);
void prompt_text_input(float x, int16_t w, char *prompt);
void restore_system(void);
void remove_music_driver(void);
void remove_keyboard_handler(void);
void start_music(char *music);
void mt32_music_setup(void);

extern char *screen_buffer;           /* screen buffer */
extern char startup_video_mode;                /* video mode at start-up */
extern char video_mode;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t screen_vm_block, search_results_handle, asking_prices_handle, manager_points_handle, matchfax_handle, accounts_ems_handle;
extern int16_t button_geometry_handle, d_5d9c_a342, d_5d9c_a340, past_winners_handle, season_best_players_handle, button_colours_handle;
extern int16_t stats_print_handle, transfer_news_dest_handle, transfer_history_handle, button_labels_handle, transfer_news_handle, first_leg_ems_handle;
extern int16_t club_long_records_handle, best_avg_rating_handle, hall_of_fame_handle, menu_texts_handle, refused_talks_handle, d_5d9c_a332;
extern int16_t d_5d9c_a330, national_squads_handle, table_marks_handle;
extern int16_t background_brightness, background_colour;
extern char small_font_glyphs[], medium_font_glyphs[], large_font_glyphs[];  /* fonts: another module's data */
extern int16_t mouse_driver_present;
extern char *sound_driver_mem;           /* sound driver memory */
extern char *sound_driver;           /* the driver, paragraph aligned */
extern char sound_device;                /* sound device letter */
extern char *vga_memory;           /* VGA memory */
extern unsigned char draw_colour, fill_colour;     /* drawing and fill colours */
extern int16_t current_font_id, small_font_selected;
extern struct window *current_font;  /* current font */
extern char text_opaque;                /* 1: text drawn with its background */
extern unsigned char text_buffer_index;
extern char text_buffers[6][320];    /* text buffers */
extern char pointer_background[64];            /* 8x8 block under the mouse pointer */
extern float text_x;
extern int32_t protection_answers[];              /* protection answers */
extern char input_text[];          /* text typed in */
extern char *music_mem;           /* music memory */
extern char *music_data;           /* the music, paragraph aligned */
extern char *vm_work_buffer;          /* virtual memory work buffer (64124 bytes) */
extern char mouse_initialised;                /* mouse initialised */
extern int16_t pointer_drawn_x, pointer_drawn_y;    /* where the pointer is drawn */

struct vmblock {                        /* a virtual memory block */
    int32_t size;
    int32_t off;                           /* in vm_store */
};
extern struct vmblock vm_blocks[40];

struct vmslot {                         /* a block in the work buffer */
    signed char block;
    char dirty;
    char *p;
};
struct vmslot vm_slots[40];             /* port: native, it holds a pointer */
static char *vm_store;                  /* port: the blocks, in memory: not in EMS or VM.$$$ */

struct window {                         /* a font */
    char *buf;
    int16_t pad[4];
    int16_t w, h, base;
};

unsigned char ega_colour_map[15] = { 15, 12, 10, 9, 11, 14, 13, 7, 6, 1, 5, 3, 4, 8, 2 };  /* EGA colours of 17..31 */
struct window small_font = { small_font_glyphs, { 0, 0, 0, 0 }, 5, 5, 1 };
struct window medium_font = { medium_font_glyphs, { 0, 0, 0, 0 }, 7, 7, 0 };
struct window large_font = { large_font_glyphs, { 0, 0, 0, 0 }, 7, 14, 0 };
char d_5d9c_1d45 = 1;
int16_t mouse_x = 0;                    /* mouse x */
int16_t mouse_y = 0;                    /* mouse y */
int16_t pointer_visible = 0;
int16_t mouse_clicks = 0;                    /* clicks since last asked */
uint32_t random_seed = 1;          /* random seed */
int32_t midnight_tick_offset = 0;                   /* ticks added after midnight */
int32_t last_clock_ticks = 0;                   /* last time returned */
int16_t vm_block_count = 0;                    /* virtual memory blocks allocated */
uint32_t vm_buffer_used = 0;          /* bytes of the work buffer in use */

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

void init_video_and_memory(void)
{
    int16_t fd;

    if (!(video_mode = detect_and_set_video_mode())) {
        printf("Requires EGA or VGA\n");
        exit(1);
    }
    small_font.buf = small_font_glyphs;
    medium_font.buf = medium_font_glyphs;
    large_font.buf = large_font_glyphs;
    screen_vm_block = vm_alloc(video_mode == 1 ? 32000 : 64000);
    search_results_handle = vm_alloc(3402);
    asking_prices_handle = vm_alloc(6804);
    manager_points_handle = vm_alloc(2600);
    matchfax_handle = vm_alloc(6000);
    accounts_ems_handle = vm_alloc(10240);
    button_geometry_handle = vm_alloc(2800);
    d_5d9c_a342 = vm_alloc(1000);
    d_5d9c_a340 = vm_alloc(1020);
    past_winners_handle = vm_alloc(768);
    season_best_players_handle = vm_alloc(320);
    button_colours_handle = vm_alloc(400);
    stats_print_handle = vm_alloc(3200);
    transfer_news_dest_handle = vm_alloc(24000);
    transfer_history_handle = vm_alloc(64124);
    button_labels_handle = vm_alloc(4000);
    transfer_news_handle = vm_alloc(1200);
    first_leg_ems_handle = vm_alloc(400);
    club_long_records_handle = vm_alloc(2240);
    best_avg_rating_handle = vm_alloc(560);
    hall_of_fame_handle = vm_alloc(3200);
    menu_texts_handle = vm_alloc(1600);
    refused_talks_handle = vm_alloc(604);
    d_5d9c_a332 = vm_alloc(604);
    d_5d9c_a330 = vm_alloc(604);
    national_squads_handle = vm_alloc(440);
    table_marks_handle = vm_alloc(40);
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

void set_palette_entry(int16_t colour, char red, char green, char blue)
{
    if (video_mode == 2) {
        unsigned char rgb[3];

        rgb[0] = red << 2;
        rgb[1] = green << 2;
        rgb[2] = blue << 2;
        port_vga_set_palette(colour, 1, rgb);   /* INT 10h AX=1010h */
    }
}

void init_hardware(char device)
{
    int16_t fd;

    init_mouse();
    if (mouse_driver_present == 0)
        install_keyboard_handler();
    device = toupper(device);
    if (device == 'A' || device == 'R') {
        sound_driver_mem = malloc(6000);
        sound_driver = sound_driver_mem;    /* paragraph alignment: not needed here */
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
    vga_memory = (char *)port_vga_memory();
}

void show_screen_wait_click(void)
{
    present_screen(0);
    show_pointer();
    wait_for_click(1);
    present_screen(0);
}

void present_screen(int16_t noflip)
{
    if (video_mode == 2) {
        screen_buffer = vm_map(screen_vm_block, 0);
        if (noflip == 0) {
            hide_pointer();
            memcpy(vga_memory, screen_buffer, 64000);
            show_pointer();
        }
    } else if (noflip == 0) {
        hide_pointer();
        copy_screen_page();
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
        for (tmp = top; tmp <= bottom; tmp++) {
            memcpy(dst, src, right - left + 1);
            src += right - left + 1 + skip;
            dst += right - left + 1 + skip;
        }
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

void set_fill_colour(int16_t colour)
{
    fill_colour = video_mode == 2 ? colour : ega_colour_map[colour - 17];
}

void set_draw_colour(int16_t colour)
{
    draw_colour = video_mode == 2 ? colour : ega_colour_map[colour - 17];
}

void fill_rect(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)
{
    uint16_t tmp;

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

void draw_char(int16_t colour, int16_t x, int16_t y, char c)
{
    char *dst;
    char *glyph;
    uint16_t skip;
    char bits;
    uint16_t row, col;

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

int16_t take_mouse_clicks(void)
{
    int16_t clicks;

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

int16_t random_next(void)
{
    random_seed = random_seed * 1103515245 + 12345;
    return (random_seed >> 16) & 0x7fff;
}

void seed_random_from_clock(void)
{
    random_seed = clock_ticks();
}

int16_t random_below(int16_t limit)
{
    if (limit)
        return random_next() % limit;
    return 0;
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

char *upper_case(char *src)
{
    char *buf;

    buf = next_text_buffer();
    strcpy(buf, src);
    strupr(buf);
    return buf;
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
    if (video_mode == 2)
        draw_line_vga256(from_x, from_y, to_x, to_y, draw_colour);
    else
        draw_line_planar(from_x, from_y, to_x, to_y, draw_colour);
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
    char saved_colour;
    uint16_t col;

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
    int32_t answer;
    uint16_t season_idx;
    uint16_t division;
    char buf[160];
    uint16_t question;
    int16_t tries = 0;                      /* never counted since the patch */
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
       never counted): whatever the answer, the game goes on. */
    (void)answer;
    if (tries == 3) {
        restore_system();
        exit(0);
    }
}

void restore_system(void)
{
    port_vga_restore_text_mode();       /* INT 10h AH=0, AL=startup_video_mode */
    if (sound_device)
        remove_music_driver();
    if (mouse_driver_present == 0)
        remove_keyboard_handler();
}

void load_music(void)
{
    int16_t fd;

    if (sound_device) {
        music_mem = malloc(sound_device == 'A' ? 9100 : 22232);
        music_data = music_mem;             /* paragraph alignment: not needed here */
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

int16_t always_true(void)
{
    return 1;
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
    int16_t fd;

    if (vm_block_count == 0) {
        if ((vm_work_buffer = farcalloc(64124, 1)) == NULL) {
            printf("No room for virtual memory\n");
            exit(-1);
        }
        for (fd = 0; fd < 40; fd++) {
            vm_slots[fd].block = -1;
            vm_blocks[fd].size = 0;
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

void init_mouse(void)
{
    mouse_driver_present = -1;              /* INT 33h AX=0: the platform's mouse */
    mouse_initialised = 1;
}

/* Show the mouse pointer (drawn by hand without a mouse driver). */
void show_pointer(void)
{
    int16_t font;
    char colour;
    char mode;

    if (mouse_driver_present) {
        port_mouse_show(1);                 /* INT 33h AX=1 */
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
        port_mouse_show(0);                 /* INT 33h AX=2 */
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
    port_pump();
    if (mouse_driver_present) {
        port_mouse_state(&mouse_clicks, &mouse_x, &mouse_y);   /* INT 33h AX=3 */
        mouse_x >>= 1;
    } else if (pointer_drawn_x != mouse_x || pointer_drawn_y != mouse_y) {
        hide_pointer();
        show_pointer();
    }
}
