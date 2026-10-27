/* Native port of decomp/src/14D2.C (see ../README.md). */
/* @at 14d2:0008 */
/* @data 5d9c:1d00 */
/* @module */

#include "port.h"

char *next_text_buffer(void);
int16_t detect_and_set_video_mode(void);
int16_t vm_alloc(int32_t size);
void *vm_map(int16_t handle, int16_t dirty);
void unpack_ilbm(char *src, char *dst);
void planar_to_chunky(char *src);
void set_picture_palette(void);
void init_mouse(void);
void install_keyboard_handler(void);
void install_music_driver(void);
void load_music(void);
void present_screen(int16_t noflip);
void show_pointer(void);
void wait_for_click(int16_t mode);
void new_screen(char *title);
void set_fill_colour(int16_t colour);
void set_draw_colour(int16_t colour);
void fill_rect(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom);
void select_font(int16_t font);
void draw_text(int16_t x, int16_t y, char *s);
void draw_text_box(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
void draw_text_font2(float x, float y, int16_t colour, char *s);
void prompt_text_input(float x, int16_t w, char *prompt);
void restore_system(void);
void start_music(char *music);
void mt32_music_setup(void);

/* The rest of the module is the platform's (../../../../port/system.c): this is what is
   CM1's own. */

extern char *screen_buffer;           /* screen buffer */
extern char video_mode;                /* 0 none, 1 EGA, 2 VGA: always 2 */
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
extern float text_x;
extern int32_t protection_answers[];              /* protection answers */
extern char input_text[];          /* text typed in */
extern char *music_mem;           /* music memory */
extern char *music_data;           /* the music, paragraph aligned */
extern uint32_t random_seed;          /* random seed (system.c) */

struct window small_font = { small_font_glyphs, { 0, 0 }, 5, 5, 1 };
struct window medium_font = { medium_font_glyphs, { 0, 0 }, 7, 7, 0 };
struct window large_font = { large_font_glyphs, { 0, 0 }, 7, 14, 0 };

void init_video_and_memory(void)
{
    int16_t fd;

    if (!(video_mode = detect_and_set_video_mode())) {
        printf("Requires VGA\n");
        exit(1);
    }
    small_font.buf = small_font_glyphs;
    medium_font.buf = medium_font_glyphs;
    large_font.buf = large_font_glyphs;
    screen_vm_block = vm_alloc(64000);
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
    fd = open("title.lbm", O_RDONLY);
    read(fd, screen_buffer + 0x7d00, 32000);
    close(fd);
    unpack_ilbm(screen_buffer + 0x7d00, screen_buffer);
    planar_to_chunky(screen_buffer);
    background_brightness = 4;
    background_colour = 5;
    set_picture_palette();
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

void empty_stub(void)
{
}

int16_t random_next(void)
{
    random_seed = random_seed * 1103515245 + 12345;
    return (random_seed >> 16) & 0x7fff;
}

int16_t random_below(int16_t limit)
{
    if (limit)
        return random_next() % limit;
    return 0;
}

char *upper_case(char *src)
{
    char *buf;

    buf = next_text_buffer();
    strcpy(buf, src);
    strupr(buf);
    return buf;
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

int16_t always_true(void)
{
    return 1;
}
