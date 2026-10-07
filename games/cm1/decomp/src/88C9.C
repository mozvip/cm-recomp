/* @at 88c9:0000 */
/* @data 5d9c:628a */
/* @module */

/* Overlay 6: players and staff: approaches for your players and their requests to leave,
 * valuations and free transfers, player values and wages, transfer news, finding
 * players (the search, the transfer list and the shortlist), scouts' recommendations
 * and retirements, managers sacked, resigning and appointed, job offers, appointing and
 * sacking staff, the staff screen, and the board's messages. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void offer_new_contract(int player, int club, int manager);
char check_player_approach(int player, int team);
void player_approach_screen(int player, int team);
char player_wants_to_leave(int player);
char check_leave_request(int player);
void leave_request_screen(int player);
char check_stay_request(int player);
void stay_request_screen(int player);
void transfer_list_player(int player, char kind);
void remove_from_transfer_list(int player);
void revalue_listed_player(int player);
long set_asking_price(int player);
long player_value(int player, int buyer);
void pay_rise_talks(int player);
void player_fine_reaction(int player, char flag);
long insurance_premium(int player);
void add_transfer_news(int player, int team, char far *dest);
void draw_transfer_news_row(int entry);
void print_screen_line(int line, char far *text);
void flash_message(char far *text);
void message_box(char far *text);
char confirm_yes_no(void);
long round_fee(long amount, char coarse);
long round_value_estimate(long amount);
char far *format_fee(long amount);
void find_player_menu(void);
void view_shortlist(int team);
void search_options_menu(int first_opt, int last_opt, int bg, int fg, char far *what, char far *choices);
void toggle_search_option(int item, char on, int base);
void search_players(char far *title);
void draw_player_list_header(void);
void draw_list_scroll_buttons(void);
void draw_player_list_row(int player, int row);
void show_scout_recommendations(int mode, char advance);
char scout_recommends(int player, int team, int scout);
void generate_all_staff(void);
void generate_staff_member(int staff, int club, char youngest);
void develop_staff_skill(int staff, int skill);
void staff_retirements(void);
void weekly_board_review(void);
void manager_leaves_club(int club, int reason);
void collect_manager_candidates(void);
void remove_manager_candidate(int staff);
void appoint_new_managers(void);
char job_offer_screen(int manager, int team);
void fill_staff_vacancy(int club, int role);
void appoint_staff(int staff, int team, int role);
char staff_accepts_job(int staff, int team, int role);
int appoint_staff_menu(int team, int role);
void search_staff(int team, int role);
int role_skill_index(int role);
void staff_screen(int team);
void draw_staff_panel(float x, float y, int title_colour, int colour, int role, int team);
char far *staff_rating_text(int staff, int role);
void update_board_confidence(void);
void board_reaction_to_leaving(int club);
void board_message(int team, char far *text);
char far *staff_role_name(int role);
void draw_loading_box(void);
void draw_loading_label(int line, char done);
void draw_loading_progress(int line, char done, int count, int total);

char player_available(int player);
void negotiate_contract(int player, int club);
void print_negotiation_line(int colour, char far *s);
void far *vm_map(int handle, int page);
long min_long(long a, long b);
int contract_period_of_week(int x);
char is_human_team(int x);
float team_rating(int x);
int player_rating(int x);
char is_indispensable_player(int x);
void show_menu(int n, char far *title, char far *items);
void wait_menu_choice(int last);
void draw_team_label(float x, float y, int team);
void new_screen(char far *title);
char far *player_full_name(int player);
char far *player_surname(int player);
long transfer_budget(int team);
void player_details_screen(int player, int a, char b);
extern int current_week;
extern int season;
extern int contract_years_agreed;
extern int wage_agreed;
extern int refused_talks_handle;
extern int menu_choice;
extern char contract_agreed;
extern char d_5d9c_9b4e;
extern char redo_menu;
extern char exit_chosen;
extern char menu_choice_done;
extern long d_5d9c_9a1c;
extern char (far *talks_refused_this_week)[151];
extern char near *team_names[];
extern int far contract_expiry[];
extern int far player_wages[];
extern int far team_manager[][80];
extern int far club_coaches[];
extern unsigned char far staff_character[];
extern unsigned char far character_clash[][10];
extern char far is_unapproachable[];
extern char far is_transfer_listed[];
extern char far is_free_transfer[];
extern unsigned char huge player_attrs[][1702];
extern char player_unhappy;
extern char d_5d9c_9b49;
extern int status_choice;
extern char d_5d9c_9b4c;
extern int d_5d9c_9d65;
extern long far team_finances[][80];
extern char d_5d9c_9b4d;
extern char d_5d9c_9b4b;
extern char d_5d9c_9b4a;
extern int disallowed_reason;
extern int d_5d9c_9d3b;
extern int d_5d9c_9d39;
extern int d_5d9c_9d37;
extern int d_5d9c_9d35;
extern char far disallowed_text[];
extern char far player_moved_club[];
extern char far d_1f3e_f4d2[];
extern char far player_is_picked[];
extern char far fined_unfairly[];
extern char far player_flags[][0x6a6];
int match_squad_slot(int player);
int player_wage_demand(int player, int team);
extern unsigned char huge player_stats[][1702];
int max_int(int a, int b);
int min_int(int a, int b);
long max_long(long a, long b);
void remove_from_shortlists(int p, char all);
void draw_negotiation_screen(int mode, int player);
int edit_offer_value(int mode, int value, int lo, int player);
extern int asking_prices_handle;
extern long far *asking_prices;
extern int negotiation_line;
extern int selected_digit;
extern int selling_club;
extern int d_5d9c_9d5f;
extern char factfile_clicked;
extern char position_ok;
extern long asking_price;
extern long d_5d9c_9a14;
extern long base_player_value;
extern long d_5d9c_9a0c;
extern int last_valued_player;
extern int d_5d9c_9d31;
extern int d_5d9c_9d2f;
extern int d_5d9c_9d2d;
extern int d_5d9c_9d2b;
extern int d_5d9c_9d29;
extern int d_5d9c_9d27;
extern float d_5d9c_9aac;
extern float d_5d9c_9aa8;
extern float d_5d9c_9aa4;
extern float d_5d9c_9aa0;
extern float d_5d9c_9a9c;
extern float d_5d9c_9a98;
extern char d_5d9c_9b48;
extern char far requested_transfer[];
extern int far cup_rating_total[];
extern int far player_rating_total[];
extern unsigned char far staff_skills[][650];
extern float far age_value_factors[];
extern int far d_1f33_0000[];
int board_wage_limit(int player, int team);
void do_player_action(int player, int a);
unsigned find_substring(char far *s, char far *set);
int random_below(int n);
void wait_ticks(int ticks);
void present_screen_rect(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
char far *next_text_buffer(void);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_at(int x, int y, int colour, char far *s);
void draw_text_font2(float x, float y, int colour, char far *s);
void choose_manager(char all);
void try_into_match_squad(int player);
void replace_in_match_squad(int p);
void wait_for_click(int a);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
int wait_for_button(int a);
void draw_button(int a, char b);
extern int d_5d9c_9d25;
extern int wage_limit;
extern int d_5d9c_9d23;
extern int d_5d9c_9d63;
extern int human_manager_index;
extern int d_5d9c_a330;
extern char (far *d_5d9c_9fb2)[151];
extern int d_5d9c_9d3d;
extern char d_5d9c_9b47;
extern int transfer_news_count;
extern int d_5d9c_9f69;
extern int transfer_news_dest_handle;
extern int transfer_news_handle;
extern char (far *transfer_news_dest_page)[80];
extern int (far *transfer_news_page)[300];
extern int d_5d9c_9ecd;
extern int row_name_colour;
extern int cur_x;
extern int d_5d9c_9d21;
extern int chosen_manager;
extern int human_team;
extern int d_5d9c_9d1d;
extern int search_results_handle;
extern int far *search_results;
extern int d_5d9c_9d1b;
extern int d_5d9c_9e9b;
extern int d_5d9c_9f29;
extern char d_5d9c_9b46;
extern int d_5d9c_9d19;
extern int cur_player;
extern int player_screen_action;
extern unsigned char far manager_team[];
extern int far shortlists[][16];
extern unsigned char far search_options[];
extern int far d_483b_9f90[];
char far *format_average(int a, int b);
char player_accepts_move(int p, int team, int n);
int squad_level_at_club(int a, int b);
void draw_menu_item(int a, int b, int line);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
struct opt { char far *s; unsigned char a, b; int w; };
extern long d_5d9c_9a08;
extern long team_long_value;
extern char d_5d9c_9b42;
extern char d_5d9c_9b43;
extern char d_5d9c_9b44;
extern char d_5d9c_9b45;
extern unsigned char list_scroll_state;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d0d;
extern int list_first_row;
extern int d_5d9c_9d11;
extern int d_5d9c_9d13;
extern int d_5d9c_9d15;
extern int d_5d9c_9d17;
extern int squad_level;
extern int d_5d9c_9d95;
extern int d_5d9c_9d9b;
extern int d_5d9c_9e8b;
extern int loop_k;
extern int last_button;
extern char far d_1f3e_3f90[];
extern char far d_1f3e_fb76[];
extern float far menu_item_colour[];
extern unsigned char far team_colours[];
void random_player_name(void);
void draw_season_end_panel(void);
void draw_progress_step(int a, char c);
void draw_progress_step_bar(int a, char c, int i, int n);
char far *manager_name(int manager, char full);
void news_message_box(int team, char far *title, char far *text);
extern char d_5d9c_9b12;
extern char d_5d9c_9b3b;
extern char d_5d9c_9b3c;
extern char d_5d9c_9b3d;
extern char d_5d9c_9b3e;
extern char d_5d9c_9b3f;
extern char d_5d9c_9b40;
extern char d_5d9c_9b41;
extern int d_5d9c_9ba7;
extern int d_5d9c_9cf3;
extern int d_5d9c_9cf5;
extern int d_5d9c_9cf7;
extern int d_5d9c_9cf9;
extern int d_5d9c_9cfb;
extern int d_5d9c_9cfd;
extern int d_5d9c_9cff;
extern int d_5d9c_9d01;
extern int d_5d9c_9d03;
extern int d_5d9c_9d05;
extern int d_5d9c_9d07;
extern int d_5d9c_9d09;
extern int d_5d9c_9d4b;
extern int d_5d9c_9d8d;
extern int d_5d9c_9dd5;
extern int d_5d9c_9de9;
extern int d_5d9c_9e1b;
extern int d_5d9c_9ee7;
extern int human_manager_count;
extern int human_count;
extern int button_style;
extern int best_league_slot;
extern int ranked_manager;
extern int stats_division;
extern int label_split_pos;
extern char far d_1f3e_3f18[];
extern char far d_1f3e_3f40[];
extern int far manager_first_name_idx[];
extern int far manager_surname_idx[];
extern unsigned char far staff_age[];
extern unsigned char far staff_contract[];
extern unsigned char far manager_style_formation[];
extern unsigned char far d_2f3c_632d[];
extern unsigned char far staff_potential[][650];
extern unsigned char far staff_role[];
extern int far d_2f3c_7e53[];
extern int far club_scouts[][80];
extern int far d_483b_9f8e[];
extern unsigned char far board_confidence[];
extern unsigned char far club_job_vacant[];
void reset_team_selection(int t);
void league_table_screen(int div);
void club_squad_screen(int team);
extern int selected_team;
extern char is_demo_game;
extern int d_5d9c_9ce9;
extern int d_5d9c_9dbd;
extern int d_5d9c_9cbf;
extern int last_ranked_row;
extern int d_5d9c_9bbf;
extern char d_5d9c_9b18;
extern int d_5d9c_9bbd;
extern int d_5d9c_9cf1;
extern int loop_i;
extern int d_5d9c_9bc5;
extern int cur_rating;
extern char d_5d9c_9b17;
extern int d_5d9c_9ced;
extern int d_5d9c_9ceb;
extern char d_5d9c_9b32;
extern char d_5d9c_9b31;
extern char d_5d9c_9b39;
extern int d_5d9c_9f51;
extern char far in_cup_draw[][80];
extern char far job_applicants[][101];
extern char far d_1f3e_2b0e[];
extern char far d_1f3e_300e[];
void vary_player_form(int p);
extern char d_5d9c_9b11;
extern char d_5d9c_9b36;
extern char d_5d9c_9b37;
extern char in_season_end;
extern int d_5d9c_9bbb;
extern int d_5d9c_9cdd;
extern int d_5d9c_9cdf;
extern int d_5d9c_9ce3;
extern int d_5d9c_9ce5;
extern int d_5d9c_9ce7;
extern int d_5d9c_9f4d;
extern char far d_1f3e_3ec8[];
extern char far club_title_text[];
extern char far d_1f3e_53e6[];
extern char far fixture_team_name[];
extern int far squad_players[][26];
extern char far * far character_names[];
extern unsigned char far team_stats[][82];
extern unsigned char far squad_size[];
struct staffbox { /* 6-byte entries at 5d9c:62ea */ unsigned char x1, y1; int x2; unsigned char y2, colour; };
struct staffpanel { /* 10-byte entries at 5d9c:6308 */ float x, y; unsigned char a, b; };
void draw_club_title(float x, int team, char far *title);
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
int get_mouse_x(void);
int get_mouse_y(void);
int league_table_slot(int team);
void change_board_confidence(int team, int delta);
extern int best_stat;
extern char d_5d9c_9b3a;
extern char d_5d9c_9b35;
extern char d_5d9c_9b34;
extern char d_5d9c_9b33;
extern int d_5d9c_9cdb;
extern int d_5d9c_9cd9;
extern int d_5d9c_9cd7;
extern int d_5d9c_9cd5;
extern int d_5d9c_9cd3;
extern int league_round;
extern int d_5d9c_9e0d;
extern long d_5d9c_9a04;
extern long d_5d9c_9a00;
extern int far last_match_info[][80];
extern char far d_1f3e_3e28[];
extern int far d_5471_2b4c[][5];
extern unsigned char far d_5739_0148[];
extern int far week_fixtures[][2][94];
void draw_bar(float x, float y, int bg, int fg, int w, int len, char far *s);
extern char far d_1f3e_3dd8[];
extern char *loading_labels[];
extern int d_5d9c_9cd1;


void offer_new_contract(int player, int club, int manager)
{
    char buf[320];

    negotiate_contract(player, player_attrs[18][player]);
    if (contract_agreed) {
        sprintf(buf, "%s signs the contract", player_surname(player));
        print_negotiation_line(6, buf);
        contract_expiry[player] = (season + contract_years_agreed) * 100 + contract_period_of_week(current_week);
        player_wages[player] = wage_agreed;
    } else {
        sprintf(buf, "%04d ", player);
        talks_refused_this_week = vm_map(refused_talks_handle, 1);
        strcat(talks_refused_this_week[manager], buf);
    }
}

char check_player_approach(int player, int team)
{
    d_5d9c_9b4e = 0;
    if (is_human_team(player_attrs[18][player]))
        player_approach_screen(player, team);
    else if (is_unapproachable[player] == 0 && is_indispensable_player(player) == 0 &&
             (club_coaches[player_attrs[18][player]] < 650 || contract_expiry[player] == 0)) {
        if (player_attrs[23][player] > 1 || is_transfer_listed[player] != 0 || contract_expiry[player] == 0 ||
            character_clash[staff_character[team_manager[0][player_attrs[18][player]]]][player_stats[17][player]] > 7 ||
            fabs(player_rating(player) - team_rating(player_attrs[18][player])) > 3.0 ||
            contract_expiry[player] / 100 - season < 3)
            d_5d9c_9b4e = -1;
    }
    return d_5d9c_9b4e;
}

void player_approach_screen(int player, int team)
{
    char buf[320];

    do {
        redo_menu = 0;
        new_screen("Player Approach");
        draw_team_label(1.0, 4.0, player_attrs[18][player]);
        sprintf(buf, "%s want %s", (char far *)team_names[team], player_full_name(player));
        print_screen_line(7, buf);
        if (is_human_team(team) == 0) {
            if (is_free_transfer[player] == 0) {
                d_5d9c_9a1c = round_fee(min_long(player_value(player, team), transfer_budget(team)), -1);
                sprintf(buf, "They would offer about %ld", d_5d9c_9a1c);
            } else
                strcpy(buf, "He is on a free transfer");
            print_screen_line(9, buf);
        }
        do {
            menu_choice_done = -1;
            show_menu(is_human_team(team) ? 10 : 12, "", "View Factfile|Allow Approach|Refuse Approach|");
            wait_menu_choice(2);
            if (menu_choice == 0) {
                do
                    player_details_screen(player, -1, 0);
                while (!exit_chosen);
                exit_chosen = 0;
                redo_menu = -1;
            } else if (menu_choice == 1) {
                d_5d9c_9b4e = -1;
            } else if (menu_choice == 2) {
                if (contract_expiry[player] > 0) {
                    if (is_human_team(player_attrs[18][player]) == 0) {
                        sprintf(buf, "%s refused", (char far *)team_names[team]);
                        flash_message(buf);
                    }
                } else {
                    flash_message("He is not under contract");
                    flash_message("You cannot refuse their approach");
                    menu_choice_done = 0;
                }
            }
        } while (!menu_choice_done);
    } while (redo_menu != 0);
}

char player_wants_to_leave(int player)
{
    player_unhappy = 0;
    disallowed_reason = 0;
    if (player_moved_club[player] == 0) {
        d_5d9c_9d3b = player_attrs[23][player] + 0;   /* "+ 0": the plain assignment adds the player before the row */
        d_5d9c_9d39 = player_attrs[18][player];
        d_5d9c_9b4d = is_human_team(d_5d9c_9d39);
        if (current_week > 14 && d_1f3e_f4d2[player] == 0) {
            d_5d9c_9b4b = player_is_picked[player] == 0 || match_squad_slot(player) > 10;
            d_5d9c_9b4a = player_attrs[20][player] == 0 && player_attrs[21][player] > 90;
            if (d_5d9c_9b4b && d_5d9c_9b4a && d_5d9c_9d3b == 1) {
                strcpy(disallowed_text, "feels he should be in the team");
                player_unhappy = -1;
                disallowed_reason = 1;
            }
            if (d_5d9c_9b4b && d_5d9c_9b4a && d_5d9c_9d3b > 1 &&
                player_attrs[17][player] > 30 - (player_flags[0][player] << 2)) {
                strcpy(disallowed_text, "wants first team football");
                player_unhappy = -1;
                disallowed_reason = 1;
            }
        }
        if (club_coaches[d_5d9c_9d39] == 650) {
            d_5d9c_9d37 = 0;
            d_5d9c_9d35 = 0;
        } else {
            d_5d9c_9d37 = character_clash[player_stats[17][player]][staff_character[team_manager[0][d_5d9c_9d39]]];
            d_5d9c_9d35 = character_clash[player_stats[17][player]][staff_character[club_coaches[d_5d9c_9d39]]];
        }
        if (player_rating(player) - team_rating(d_5d9c_9d39) > (contract_expiry[player] > 0 ? 8 : 4) &&
            team_rating(d_5d9c_9d39) < 15.0) {
            strcpy(disallowed_text, "wants to move to a better club");
            player_unhappy = -1;
        } else if (d_5d9c_9d37 > 8) {
            if (d_5d9c_9b4d) strcpy(disallowed_text, "is not happy working for you"); else strcpy(disallowed_text, "cannot work with his manager");
            0;
            player_unhappy = -1;
        } else if (d_5d9c_9d35 > 8) {
            sprintf(disallowed_text, "cannot work with %s coach", d_5d9c_9b4d ? "the" : "his");
            player_unhappy = -1;
        } else if (player_wages[player] < player_wage_demand(player, d_5d9c_9d39) * 0.8 && contract_expiry[player] > 0) {
            strcpy(disallowed_text, "wants higher wages");
            player_unhappy = -1;
        }
    }
    if (fined_unfairly[player]) {
        strcpy(disallowed_text, "feels he's been fined unfairly");
        player_unhappy = -1;
    }
    return player_unhappy;
}

char check_leave_request(int player)
{
    d_5d9c_9b4c = 0;
    if (is_human_team(player_attrs[18][player]))
        leave_request_screen(player);
    else if (club_coaches[player_attrs[18][player]] < 650 || contract_expiry[player] == 0) {
        d_5d9c_9d65 = character_clash[staff_character[team_manager[0][player_attrs[18][player]]]][player_stats[17][player]];
        if (player_attrs[23][player] == 3 || contract_expiry[player] == 0 || d_5d9c_9d65 > 7 ||
            fabs(player_rating(player) - team_rating(player_attrs[18][player])) > 3.0 ||
            (player_attrs[23][player] == 2 && team_finances[0][player_attrs[18][player]] < 0))
            d_5d9c_9b4c = -1;
    }
    return d_5d9c_9b4c;
}

void leave_request_screen(int player)
{
    char buf[320];

    do {
        redo_menu = 0;
        new_screen("Player request");
        draw_team_label(1.0, 4.0, player_attrs[18][player]);
        sprintf(buf, "%s wants to leave", player_full_name(player));
        print_screen_line(7, buf);
        sprintf(buf, "He %s", disallowed_text);
        print_screen_line(9, buf);
        show_menu(12, "", "View Factfile|Refuse Request|List Him|");
        do {
            menu_choice_done = -1;
            wait_menu_choice(2);
            status_choice = menu_choice;
            if (status_choice == 0) {
                do
                    player_details_screen(player, -1, 0);
                while (!exit_chosen);
                exit_chosen = 0;
                redo_menu = -1;
            } else if (status_choice == 1) {
                if (contract_expiry[player] == 0) {
                    flash_message("He is a free agent");
                    flash_message("You cannot prevent him leaving");
                    menu_choice_done = 0;
                } else {
                    sprintf(buf, "%s told to stay", player_surname(player));
                    flash_message(buf);
                }
            } else if (status_choice == 2) {
                sprintf(buf, "%s now transfer listed", player_surname(player));
                flash_message(buf);
                d_5d9c_9b4c = -1;
            }
        } while (!menu_choice_done);
    } while (redo_menu != 0);
}

char check_stay_request(int player)
{
    if (is_human_team(player_attrs[18][player]))
        stay_request_screen(player);
    else if (player_available(player) == 0)
        return -1;
    return 0;
}

void stay_request_screen(int player)
{
    char buf[320];

    do {
        redo_menu = 0;
        new_screen("Player request");
        draw_team_label(1.0, 4.0, player_attrs[18][player]);
        sprintf(buf, "%s now wants to stay", player_full_name(player));
        print_screen_line(7, buf);
        show_menu(10, "", "View Factfile|Remove From List|Refuse Request|");
        wait_menu_choice(2);
        status_choice = menu_choice;
        if (status_choice == 0) {
            do
                player_details_screen(player, -1, 0);
            while (!exit_chosen);
            exit_chosen = 0;
            redo_menu = -1;
        } else if (status_choice == 1) {
            sprintf(buf, "%s removed from list", player_surname(player));
            flash_message(buf);
            d_5d9c_9b49 = -1;
        } else if (status_choice == 2) {
            sprintf(buf, "%s remains listed", player_surname(player));
            flash_message(buf);
        }
    } while (redo_menu != 0);
}

void transfer_list_player(int player, char kind)
{
    long value;

    value = set_asking_price(player);
    asking_prices = vm_map(asking_prices_handle, 1);
    asking_prices[player] = value;
    is_free_transfer[player] = asking_prices[player] == 0 ? -1 : 0;
    is_transfer_listed[player] = -1;
    requested_transfer[player] = kind;
    player_stats[11][player] = 0;
}

void remove_from_transfer_list(int player)
{
    is_transfer_listed[player] = 0;
    requested_transfer[player] = 0;
    is_free_transfer[player] = 0;
    player_stats[11][player] = 0;
    remove_from_shortlists(player, 0);
}

void revalue_listed_player(int player)
{
    long value;

    value = set_asking_price(player);
    asking_prices = vm_map(asking_prices_handle, 1);
    asking_prices[player] = value;
    is_free_transfer[player] = asking_prices[player] == 0 ? -1 : 0;
}

long set_asking_price(int player)
{
    char buf[320];

    if (is_human_team(player_attrs[18][player])) {
        negotiation_line = 1;
        selected_digit = 7;
        draw_negotiation_screen(1, player);
        asking_price = player_value(player, player_attrs[18][player]);
        if (is_transfer_listed[player]) {
            if (asking_price > 0)
                sprintf(buf, "%s is valued at %ld", player_surname(player), asking_price);
            else
                sprintf(buf, "%s on a free transfer", player_surname(player));
        } else
            sprintf(buf, "%s not yet valued", player_surname(player));
        print_negotiation_line(1, buf);
        do {
            position_ok = -1;
            selling_club = player_attrs[18][player];
            d_5d9c_9d5f = edit_offer_value(1, asking_price / 1000, 0, player);
            if (factfile_clicked) {
                do
                    player_details_screen(player, -1, 0);
                while (!exit_chosen);
                exit_chosen = 0;
                position_ok = 0;
                draw_negotiation_screen(1, player);
            }
            asking_price = (long)d_5d9c_9d5f * 1000;
            if (position_ok) {
                d_5d9c_9a14 = player_value(player, -1) * 0.75;
                if (asking_price < d_5d9c_9a14 && d_5d9c_9a14 >= 5000) {
                    print_negotiation_line(1, "The board expect more for him");
                    position_ok = 0;
                } else if (player_value(player, -1) * 3 < asking_price) {
                    sprintf(buf, "He's not worth %ld", asking_price);
                    print_negotiation_line(1, buf);
                    position_ok = 0;
                }
            }
        } while (!position_ok);
        if (asking_price > 0)
            sprintf(buf, "%s is valued at %ld", player_surname(player), asking_price);
        else
            sprintf(buf, "%s is given a free transfer", player_surname(player));
        print_negotiation_line(6, buf);
    } else {
        asking_price = player_value(player, player_attrs[18][player]);
        if (10000 - (player_attrs[23][player] == 1 ? 5000 : 0) > asking_price)
            asking_price = 0;
    }
    return asking_price;
}

long player_value(int player, int buyer)
{
    if (player != last_valued_player) {
        d_5d9c_9d31 = min_int(player_stats[5][player], 30);
        if (player_stats[5][player] > 0)
            d_5d9c_9aac = cup_rating_total[player] / (float)player_stats[5][player] * 2.0;
        else
            d_5d9c_9aac = 0;
        d_5d9c_9d2f = min_int(player_stats[0][player], 30);
        if (player_stats[0][player] > 0)
            d_5d9c_9aa8 = player_rating_total[player] / (float)player_stats[0][player] * 2.0;
        else
            d_5d9c_9aa8 = 0;
        d_5d9c_9d2d = (player_attrs[0][player] * (30 - d_5d9c_9d31) * 0.1 + d_5d9c_9d31 * d_5d9c_9aac) / 30.0 * 0.5
                    + (player_attrs[0][player] * (30 - d_5d9c_9d2f) * 0.1 + d_5d9c_9d2f * d_5d9c_9aa8) / 30.0 * 0.5;
        d_5d9c_9d2d = max_int(min_int(d_5d9c_9d2d, 20), 1);
        d_5d9c_9aa4 = 0.9 - player_flags[0][player] / 10.0 - player_flags[1][player] / 10.0 - player_flags[2][player] / 10.0
                    - player_flags[3][player];
        d_5d9c_9aa0 = 0.9 - player_flags[4][player] / 10.0 - player_flags[5][player] / 10.0 - player_flags[6][player] / 10.0;
        d_5d9c_9a9c = player_attrs[2][player] / 10.0 * 0.0375 + 0.7
                    + player_attrs[1][player] / 10.0 * 0.06125
                    + player_attrs[3][player] / 10.0 * 0.025
                    + player_attrs[5][player] / 10.0 * 0.05
                    + player_attrs[6][player] / 10.0 * 0.075
                    + player_attrs[7][player] / 10.0 * 0.1
                    + player_attrs[4][player] / 10.0 * 0.025;
        d_5d9c_9b48 = player_flags[18][player] && player_flags[19][player] == 0;
        base_player_value = age_value_factors[player_attrs[17][player] - 16] * d_1f33_0000[d_5d9c_9d2d - 1]
                    * d_5d9c_9aa4 * d_5d9c_9aa0 * d_5d9c_9a9c * 550.0 * (d_5d9c_9b48 ? 1.25 : 1);
        switch (player_attrs[18][player] / 20) {
        case 1:
            base_player_value = base_player_value / 1.5;
            break;
        case 2:
            base_player_value = base_player_value / 2;
            break;
        case 3:
            base_player_value = base_player_value / 3;
            break;
        }
    }
    if (buyer == -1)
        d_5d9c_9a0c = (player_attrs[23][player] == 1 ? 1.5 : 1) * base_player_value;
    else {
        if (player_attrs[18][player] == buyer) {
            if (is_transfer_listed[player] == 0) {
                d_5d9c_9d27 = max_int(contract_expiry[player] / 100 - season, 0);
                d_5d9c_9a98 = d_5d9c_9d27 / 5.0 + (contract_expiry[player] == 0 ? 0.5 : 0);
                d_5d9c_9a0c = ((player_attrs[23][player] == 1 ? 1.5 : 1) + d_5d9c_9a98) * base_player_value;
            } else {
                asking_prices = vm_map(asking_prices_handle, 0);
                d_5d9c_9a0c = asking_prices[player];
            }
        } else {
            d_5d9c_9d27 = max_int(contract_expiry[player] / 100 - season, 0);
            d_5d9c_9a98 = d_5d9c_9d27 / 5.0 + (contract_expiry[player] == 0 ? 0.5 : 0);
            d_5d9c_9a0c = ((player_attrs[23][player] == 1 ? 1.5 : 1) + d_5d9c_9a98) * base_player_value;
        }
        if (is_transfer_listed[player] == 0 && player_attrs[17][player] < (player_flags[0][player] ? 31 : 27)) {
            d_5d9c_9d2b = max_int(10.0 - staff_skills[0][team_manager[0][buyer]] * 0.05, 1);
            d_5d9c_9d29 = max_int(min_int(player_attrs[9][player] * 0.1 + player % d_5d9c_9d2b - d_5d9c_9d2b * 0.5, 20), 1);
            d_5d9c_9a0c = d_5d9c_9a0c * 0.95 + d_1f33_0000[d_5d9c_9d29 - 1] * 50L;
        }
    }
    if (is_transfer_listed[player] == 0 || is_human_team(player_attrs[18][player]) == 0)
        d_5d9c_9a0c = round_fee(d_5d9c_9a0c, -1);
    last_valued_player = player;
    return max_long(d_5d9c_9a0c, d_5d9c_9a0c ? 1000 : 0);
}

/* stub: chunk 1 */
void pay_rise_talks(int player)
{
    char buf[320];

    negotiation_line = 1;
    selected_digit = 7;
    draw_negotiation_screen(3, player);
    d_5d9c_9d25 = player_wages[player];
    sprintf(buf, "He gets %d per week", d_5d9c_9d25);
    print_negotiation_line(1, buf);
    wage_limit = board_wage_limit(player, player_attrs[18][player]);
    d_5d9c_9d23 = -1;
    do {
        position_ok = -1;
        d_5d9c_9d63 = d_5d9c_9d23 == -1 ? d_5d9c_9d25 : d_5d9c_9d23;
        d_5d9c_9d5f = edit_offer_value(3, d_5d9c_9d63, 100, player);
        if (factfile_clicked) {
            do
                player_details_screen(player, -1, 0);
            while (!exit_chosen);
            exit_chosen = 0;
            position_ok = 0;
            draw_negotiation_screen(3, player);
        }
        d_5d9c_9d23 = d_5d9c_9d5f;
        if (position_ok) {
            if (d_5d9c_9d23 < d_5d9c_9d25) {
                print_negotiation_line(1, "He refuses lower pay");
                position_ok = 0;
            } else if (d_5d9c_9d23 > wage_limit) {
                print_negotiation_line(1, "The board refuse to spend that per week");
                position_ok = 0;
            }
        }
    } while (!position_ok);
    if (d_5d9c_9d23 != d_5d9c_9d25)
        strcpy(buf, "He accepts the pay rise");
    else
        sprintf(buf, "His wages stay at %d per week", d_5d9c_9d23);
    print_negotiation_line(6, buf);
    player_wages[player] = d_5d9c_9d23;
    human_manager_index = team_manager[0][player_attrs[18][player]] - 646;
    sprintf(buf, "%04d", player);
    d_5d9c_9fb2 = vm_map(d_5d9c_a330, 0);
    if (find_substring(d_5d9c_9fb2[human_manager_index], buf) == 0
        && d_5d9c_9d25 + random_below(100) + 50 <= d_5d9c_9d23
        && random_below(4) == 0
        && player_attrs[0][player] > player_attrs[15][player]) {
        player_attrs[15][player] = player_attrs[0][player];
        if (is_human_team(player_attrs[18][player]) == 0 && player_attrs[20][player] == 0)
            try_into_match_squad(player);
    }
    sprintf(buf, "%04d ", player);
    d_5d9c_9fb2 = vm_map(d_5d9c_a330, 1);
    strcat(d_5d9c_9fb2[human_manager_index], buf);
}

void player_fine_reaction(int player, char flag)
{
    if (flag) {
        switch (player_stats[17][player]) {
        case 5: case 7: case 8:
            d_5d9c_9d3d = 0;
            break;
        case 1:
            d_5d9c_9d3d = 1;
            break;
        case 0: case 2: case 3:
            d_5d9c_9d3d = 2;
            break;
        case 4: case 6: case 9:
            d_5d9c_9d3d = 3;
            break;
        }
    } else {
        switch (player_stats[17][player]) {
        case 0: case 1: case 5: case 7: case 8:
            d_5d9c_9d3d = random_below(2) + 2;
            break;
        case 2: case 3: case 4: case 6: case 9:
            d_5d9c_9d3d = 3;
            break;
        }
    }
    if (d_5d9c_9d3d == 0 && random_below(3) == 0)
        d_5d9c_9d3d = 1;
    else if (d_5d9c_9d3d == 1 && random_below(3) == 0)
        d_5d9c_9d3d = 2;
    else if (d_5d9c_9d3d == 2 && random_below(3) == 0)
        d_5d9c_9d3d = 1;
    else if (d_5d9c_9d3d == 3 && random_below(3) == 0)
        d_5d9c_9d3d = 2;
    if (d_5d9c_9d3d == 0) {
        player_attrs[15][player] = min_int(player_attrs[15][player] + random_below(25), player_attrs[9][player] + 25);
        if (player_attrs[20][player] == 0 && is_human_team(player_attrs[18][player]) == 0)
            try_into_match_squad(player);
    } else if (d_5d9c_9d3d == 2) {
        player_attrs[15][player] = max_int(player_attrs[15][player] - random_below(25), 10);
        if (player_is_picked[player] && is_human_team(player_attrs[18][player]) == 0)
            replace_in_match_squad(player);
    } else if (d_5d9c_9d3d == 3)
        fined_unfairly[player] = -1;
}

long insurance_premium(int player)
{
    long value;

    value = player_value(player, -1);
    if (value <= 100000L)
        return 200;
    if (value <= 300000L)
        return 300;
    if (value <= 500000L)
        return 400;
    if (value <= 1000000L)
        return 500;
    if (value <= 2000000L)
        return 600;
    return 800;
}

void add_transfer_news(int player, int team, char far *dest)
{
    if (d_5d9c_9b47 || transfer_news_count % 18 == 0) {
        new_screen("Transfer News");
        draw_label(1.125, 4.0, 6, 3, 66, "Player");
        draw_label(9.625, 4.0, 6, 3, 66, "From");
        draw_label(18.125, 4.0, 6, 3, 168, "To");
        if (d_5d9c_9b47 && transfer_news_count % 18 > 0)
            for (d_5d9c_9f69 = transfer_news_count / 18 * 18; d_5d9c_9f69 <= transfer_news_count - 1; d_5d9c_9f69++)
                draw_transfer_news_row(d_5d9c_9f69);
    }
    transfer_news_dest_page = vm_map(transfer_news_dest_handle, 1);
    strcpy(transfer_news_dest_page[transfer_news_count], dest);
    transfer_news_page = vm_map(transfer_news_handle, 1);
    transfer_news_page[0][transfer_news_count] = player;
    transfer_news_page[1][transfer_news_count] = team;
    draw_transfer_news_row(transfer_news_count);
    transfer_news_count++;
    d_5d9c_9b47 = 0;
}

void draw_transfer_news_row(int entry)
{
    transfer_news_page = vm_map(transfer_news_handle, 0);
    d_5d9c_9ecd = entry % 18 * 8 + 48;
    draw_text_at(17, d_5d9c_9ecd, 1, player_surname(transfer_news_page[0][entry]));
    draw_text_at(85, d_5d9c_9ecd, 6, team_names[transfer_news_page[1][entry]]);
    transfer_news_dest_page = vm_map(transfer_news_dest_handle, 1);
    draw_text_at(153, d_5d9c_9ecd, 2, transfer_news_dest_page[entry]);
}

void print_screen_line(int line, char far *text)
{
    if (line == 4)
        row_name_colour = 1;
    else if (line == 7)
        row_name_colour = 6;
    else if (line == 9)
        row_name_colour = 9;
    draw_text_font2(2.0, line, row_name_colour, text);
}

void flash_message(char far *text)
{
    draw_text_font2(2.0, 22.5, 1, text);
    wait_ticks(75);
    present_screen_rect(4, 175, 316, 190);
}

void message_box(char far *text)
{
    char buf[80];

    new_screen("");
    cur_x = find_substring(text, "|");
    if (cur_x == 0)
        draw_text_font2(-1.0, 12.5, 6, text);
    else {
        strcpy(buf, text);
        buf[cur_x - 1] = 0;
        draw_text_font2(-1.0, 11.5, 6, buf);
        strcpy(buf, text + cur_x);
        draw_text_font2(-1.0, 13.5, 6, buf);
    }
    wait_for_click(0);
}

char confirm_yes_no(void)
{
    draw_text_font2(2.0, 22.5, 5, "Confirm");
    add_button(2, 9.0, 22.5, 6, 2, 0, " Y ");
    add_button(2, 13.0, 22.5, 6, 2, 0, " N ");
    do
        d_5d9c_9d21 = wait_for_button(0);
    while (d_5d9c_9d21 <= 0);
    present_screen_rect(4, 175, 316, 190);
    return d_5d9c_9d21 == 1 ? -1 : 0;
}

long round_fee(long amount, char coarse)
{
    long step;

    if (amount < 10000L)
        step = 1000;
    else if (amount < 100000L)
        step = coarse ? 10000 : 5000;
    else if (amount < 1000000L)
        step = coarse ? 50000L : 10000L;
    else
        step = coarse ? 100000L : 25000L;
    return amount / step * step;
}

long round_value_estimate(long amount)
{
    long step;

    if (amount <= 100000L)
        step = 50000L;
    else if (amount <= 500000L)
        step = 100000L;
    else if (amount <= 1000000L)
        step = 250000L;
    else
        step = 500000L;
    return max_long(amount / step * step, amount ? 50000L : 0L);
}

char far *format_fee(long amount)
{
    char far *s;

    s = next_text_buffer();
    if (amount)
        sprintf(s, "%ld", amount);
    else
        strcpy(s, "Free");
    return s;
}

void find_player_menu(void)
{
    char buf[320];

    memset(d_483b_9f90, 0, 38);
    memset(search_options, 0, 37);
    choose_manager(0);
    if (chosen_manager > -1) {
        human_team = manager_team[chosen_manager];
        do {
            new_screen("Find Player");
            draw_team_label(1.0, 4.0, human_team);
            show_menu(7, "", "*Exit|Player Search|Transfer List|Shortlist|");
            wait_menu_choice(3);
            d_5d9c_9d1d = menu_choice;
            if (d_5d9c_9d1d == 1) {
                memset(search_options, 0, 37);
                search_results = vm_map(search_results_handle, 1);
                memset(search_results, -1, 3402);
                search_options_menu(0, 6, 6, 3, "Positions", "Goalkeeper|Defender|Midfielder|Attacker|Right Sided|Left Sided|Central|");
                if (exit_chosen)
                    continue;
                search_options_menu(8, 15, 6, 3, "Requirements", "Passing|Tackling|Pace|Heading|Flair|Creativity|Influence|Stamina|");
                if (exit_chosen)
                    continue;
                search_options_menu(17, 22, 6, 3, "Approx Value", "0K - 100K|100K - 300K|300K - 500K|500K - 1M|1M - 2M|2M+|");
                if (exit_chosen)
                    continue;
                search_options_menu(24, 27, 6, 3, "Division", "First|Second|Third|Fourth|");
                if (exit_chosen)
                    continue;
                search_options_menu(29, 33, 6, 3, "Age", "16 - 20|20 - 24|24 - 30|30 - 33|33+|");
                if (exit_chosen)
                    continue;
                search_players("Player Search");
            } else if (d_5d9c_9d1d == 3) {
                human_manager_index = team_manager[0][human_team] - 646;
                d_5d9c_9d1b = -1;
                do {
                    d_5d9c_9e9b = shortlists[human_team][0];
                    if (d_5d9c_9e9b > 0) {
                        new_screen("Short List");
                        draw_player_list_header();
                        add_button(2, 34.25, 1.25, 1, 8, 37, " REC");
                        add_button(2, 1.25, 22.5, 1, 12, 72, "   DEL");
                        add_button(2, 10.875, 22.5, 1, 4, 224, "            EXIT");
                        for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                            draw_player_list_row(shortlists[human_team][d_5d9c_9f29], d_5d9c_9f29);
                        show_scout_recommendations(0, 0);
                        d_5d9c_9b46 = 0;
                        do {
                            d_5d9c_9d19 = wait_for_button(-1);
                            if ((d_5d9c_9d19 == 0 || d_5d9c_9d19 == 1 || d_5d9c_9d19 == 3) && d_5d9c_9b46) {
                                draw_button(2, 0);
                                d_5d9c_9b46 = 0;
                            } else if (d_5d9c_9d19 == 2 && d_5d9c_9b46 == 0) {
                                draw_button(2, -1);
                                d_5d9c_9b46 = -1;
                            }
                            if (d_5d9c_9d19 == 1)
                                show_scout_recommendations(0, -1);
                        } while (d_5d9c_9d19 != 3 && d_5d9c_9d19 < 4);
                        if (d_5d9c_9d19 == 3)
                            menu_choice_done = -1;
                        else if (d_5d9c_9d19 >= 4) {
                            cur_player = shortlists[human_team][d_5d9c_9d19 - 3];
                            if (d_5d9c_9b46) {
                                shortlists[human_team][d_5d9c_9d19 - 3] = shortlists[human_team][shortlists[human_team][0]];
                                shortlists[human_team][0]--;
                                sprintf(buf, "%s removed", player_surname(cur_player));
                                message_box(buf);
                                menu_choice_done = shortlists[human_team][0] == 0;
                            } else {
                                do {
                                    player_details_screen(cur_player, human_team, -1);
                                    do_player_action(cur_player, player_screen_action);
                                } while (!exit_chosen);
                                menu_choice_done = shortlists[human_team][0] == 0;
                            }
                        }
                    } else {
                        message_box("Nobody shortlisted");
                        menu_choice_done = -1;
                    }
                } while (!menu_choice_done);
            } else if (d_5d9c_9d1d == 2) {
                memset(search_options, 0, 37);
                search_results = vm_map(search_results_handle, 1);
                memset(search_results, -1, 3402);
                search_options[7] = -1;
                search_options[16] = -1;
                search_options[23] = -1;
                search_options[28] = -1;
                search_options[34] = -1;
                search_options[35] = -1;
                search_players("Transfer List");
            }
        } while (d_5d9c_9d1d != 0);
    }
}

void view_shortlist(int team)
{
    do {
        d_5d9c_9e9b = shortlists[team][0];
        if (d_5d9c_9e9b > 0) {
            new_screen("Short List");
            draw_player_list_header();
            add_button(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                draw_player_list_row(shortlists[team][d_5d9c_9f29], d_5d9c_9f29);
            do
                d_5d9c_9d19 = wait_for_button(last_button);
            while (d_5d9c_9d19 <= 0);
            if (d_5d9c_9d19 == 1)
                menu_choice_done = -1;
            else if (d_5d9c_9d19 >= 2) {
                cur_player = shortlists[team][d_5d9c_9d19 - 1];
                do {
                    player_details_screen(cur_player, team, -1);
                    do_player_action(cur_player, player_screen_action);
                } while (!exit_chosen);
                menu_choice_done = shortlists[team][0] == 0;
            }
        } else {
            message_box("Nobody shortlisted");
            menu_choice_done = -1;
        }
    } while (!menu_choice_done);
}

void search_options_menu(int first_opt, int last_opt, int bg, int fg, char far *what, char far *choices)
{
    char buf[320];

    new_screen("Search options");
    sprintf(buf, " Select %s ", what);
    draw_text_box(1.0, 4.0, bg, fg, 0, buf);
    sprintf(buf, "*Exit|*Continue|%s", choices);
    show_menu(7, "", buf);
    d_5d9c_9d17 = last_opt - first_opt + 2;
    do {
        wait_menu_choice(-d_5d9c_9d17);
        d_5d9c_9d15 = menu_choice;
        if (d_5d9c_9d15 > 1) {
            if (d_1f3e_fb76[d_5d9c_9d15 + first_opt] == 0)
                toggle_search_option(d_5d9c_9d15, -1, first_opt);
            else
                toggle_search_option(d_5d9c_9d15, 0, first_opt);
        }
    } while (d_5d9c_9d15 >= 2);
    d_5d9c_9b45 = 0;
    for (d_5d9c_9d13 = 2; d_5d9c_9d13 <= d_5d9c_9d17; d_5d9c_9d13++)
        if (d_1f3e_fb76[d_5d9c_9d13 + first_opt]) {
            d_5d9c_9b45 = -1;
            d_5d9c_9d13 = d_5d9c_9d17;
        }
    if (d_5d9c_9b45 == 0)
        d_1f3e_fb76[d_5d9c_9d17 + first_opt + 1] = -1;
    exit_chosen = d_5d9c_9d15 == 0 ? -1 : 0;
}

void toggle_search_option(int item, char on, int base)
{
    if (on) {
        d_1f3e_fb76[item + base] = -1;
        draw_menu_item(1, 12, item);
    } else {
        d_1f3e_fb76[item + base] = 0;
        draw_menu_item((int)menu_item_colour[item] / 16, (int)menu_item_colour[item] % 16, item);
    }
}

void search_players(char far *title)
{
    int found;

    found = 0;
    new_screen("");
    draw_text_font2(-1.0, 12.5, 1, "Searching");
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        position_ok = -1;
        if (player_attrs[18][cur_player] == human_team)
            position_ok = 0;
        if (position_ok)
            for (d_5d9c_9d95 = 0; d_5d9c_9d95 <= 6; d_5d9c_9d95++)
                if (d_1f3e_fb76[d_5d9c_9d95 + 2] && player_flags[d_5d9c_9d95][cur_player] == 0) {
                    position_ok = 0;
                    d_5d9c_9d95 = 6;
                }
        if (position_ok)
            for (d_5d9c_9d95 = 8; d_5d9c_9d95 <= 13; d_5d9c_9d95++)
                if (d_1f3e_fb76[d_5d9c_9d95 + 2] && player_attrs[d_5d9c_9d95 - 7][cur_player] < 14) {
                    position_ok = 0;
                    d_5d9c_9d95 = 14;
                }
        if (position_ok && d_1f3e_fb76[16] && player_attrs[12][cur_player] < 14)
            position_ok = 0;
        if (position_ok && d_1f3e_fb76[17] && player_attrs[22][cur_player] < 14)
            position_ok = 0;
        if (position_ok) {
            d_5d9c_9b44 = 0;
            if (d_1f3e_fb76[25])
                d_5d9c_9b44 = -1;
            else {
                d_5d9c_9a08 = player_value(cur_player, player_attrs[18][cur_player]);
                d_5d9c_9b44 = d_5d9c_9a08 <= 100000L ? d_1f3e_fb76[19]
                            : d_5d9c_9a08 <= 300000L ? d_1f3e_fb76[20]
                            : d_5d9c_9a08 <= 500000L ? d_1f3e_fb76[21]
                            : d_5d9c_9a08 <= 1000000L ? d_1f3e_fb76[22]
                            : d_5d9c_9a08 <= 2000000L ? d_1f3e_fb76[23]
                            : d_1f3e_fb76[24];
            }
            if (d_5d9c_9b44 == 0)
                position_ok = 0;
        }
        if (position_ok && d_1f3e_fb76[30] == 0
            && d_1f3e_fb76[26 + player_attrs[18][cur_player] / 20] == 0)
            position_ok = 0;
        if (position_ok) {
            d_5d9c_9b43 = 0;
            if (d_1f3e_fb76[36])
                d_5d9c_9b43 = -1;
            else {
                d_5d9c_9d11 = player_attrs[17][cur_player];
                d_5d9c_9b43 = d_5d9c_9d11 <= 20 ? d_1f3e_fb76[31]
                            : d_5d9c_9d11 <= 24 ? d_1f3e_fb76[32]
                            : d_5d9c_9d11 <= 30 ? d_1f3e_fb76[33]
                            : d_5d9c_9d11 <= 33 ? d_1f3e_fb76[34]
                            : d_1f3e_fb76[35];
            }
            if (d_5d9c_9b43 == 0)
                position_ok = 0;
        }
        if (position_ok && d_1f3e_fb76[37] && is_transfer_listed[cur_player] == 0)
            position_ok = 0;
        if (position_ok && d_1f3e_fb76[38] && contract_expiry[cur_player] > 0)
            position_ok = 0;
        if (position_ok && is_unapproachable[cur_player])
            position_ok = 0;
        if (position_ok) {
            found++;
            search_results = vm_map(search_results_handle, 1);
            search_results[found - 1] = cur_player;
        }
    }
    if (found > 0) {
        list_first_row = 1;
        d_5d9c_9d1b = -1;
        do {
            d_5d9c_9b42 = 0;
            new_screen(title);
            draw_player_list_header();
            add_button(2, 34.25, 1.25, 1, 8, 0x25, " REC");
            draw_list_scroll_buttons();
            d_5d9c_9d0d++;
            d_5d9c_9e9b = 0;
            search_results = vm_map(search_results_handle, 0);
            for (d_5d9c_9f29 = list_first_row; list_first_row + 14 >= d_5d9c_9f29; d_5d9c_9f29++) {
                cur_player = search_results[d_5d9c_9f29 - 1];
                if (cur_player <= -1)
                    break;
                d_483b_9f90[d_5d9c_9e9b] = cur_player;
                d_5d9c_9e9b++;
            }
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                draw_player_list_row(d_483b_9f90[d_5d9c_9f29 - 1], d_5d9c_9f29);
            show_scout_recommendations(1, 0);
            do {
                d_5d9c_9d19 = wait_for_button(-1);
                if (d_5d9c_9d19 == 1)
                    show_scout_recommendations(1, -1);
            } while (d_5d9c_9d19 < 2);
            if (d_5d9c_9d19 == 2 && list_scroll_state < 3)
                list_first_row -= 15;
            else if (d_5d9c_9d19 == 4 && list_scroll_state == 1 || d_5d9c_9d19 == 3 && list_scroll_state == 3)
                list_first_row += 15;
            else if (d_5d9c_9d19 >= d_5d9c_9d0d) {
                d_5d9c_9e8b = d_5d9c_9d19 - d_5d9c_9d0d;
                cur_player = d_483b_9f90[d_5d9c_9e8b];
                do {
                    player_details_screen(cur_player, human_team, -1);
                    do_player_action(cur_player, player_screen_action);
                } while (!exit_chosen);
            }
        } while (!(d_5d9c_9d19 == 3 && list_scroll_state < 3) && !(d_5d9c_9d19 == 2 && list_scroll_state > 2));
    } else
        message_box("No players found");
}

void draw_player_list_header(void)
{
    char buf[320];

    sprintf(buf, " %s ", (char far *)team_names[human_team]);
    draw_label(1.125, 3.0, -(team_colours[human_team] / 16), team_colours[human_team] % 16, 0, buf);
    draw_label(1.125, 4.5, 4, 1, 0x48, " NAME");
    draw_label(10.375, 4.5, 4, 1, 0x54, " CLUB");
    draw_label(21.125, 4.5, 4, 1, 0, " AP ");
    draw_label(24.375, 4.5, 4, 1, 0, " GL ");
    draw_label(27.625, 4.5, 4, 1, 0, " AV R");
    draw_label(32.375, 4.5, 4, 1, 0, " VALUE   ");
}

/* the search screen's bottom bar, by what can be scrolled: label, colours, width */
static struct opt scroll_bar_both[] = {
    {"   -SCR", 1, 9, 72}, {"       EXIT", 1, 2, 147}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt scroll_bar_up[] = {
    {"   -SCR", 1, 9, 72}, {"            EXIT", 1, 2, 224}, {"*", 0, 0, 0}
};
static struct opt scroll_bar_down[] = {
    {"            EXIT", 1, 2, 224}, {"   +SCR", 1, 9, 72}, {"*", 0, 0, 0}
};
static struct opt scroll_bar_exit[] = {
    {"                 EXIT", 1, 2, 301}, {"*", 0, 0, 0}
};

void draw_list_scroll_buttons(void)
{
    float left;
    struct opt far *button;

    search_results = vm_map(search_results_handle, 0);
    list_scroll_state = (list_first_row == 1 ? 2 : 0) + (search_results[list_first_row + 15] == -1 ? 1 : 0) + 1;
    if (list_scroll_state == 1)
        button = scroll_bar_both;
    else if (list_scroll_state == 2)
        button = scroll_bar_up;
    else if (list_scroll_state == 3)
        button = scroll_bar_down;
    else
        button = scroll_bar_exit;
    d_5d9c_9d0d = 1;
    left = 1.25;
    do {
        add_button(2, left, 22.5, button->a, button->b, button->w, button->s);
        left += (button->w + 5) / 8.0;
        d_5d9c_9d0d++;
        button++;
    } while (strcmp(button->s, "*") != 0);
}

void draw_player_list_row(int player, int row)
{
    char interested;
    char buf[320];

    if (row & 1)
        loop_k = 14;
    else
        loop_k = 8;
    interested = player_accepts_move(player, human_team, squad_level = squad_level_at_club(player, human_team));
    sprintf(buf, " %.11s", player_surname(player));
    add_button(0, 1.125, row + 5, interested ? 6 : 1, loop_k, 0x48, buf);
    sprintf(buf, " %.13s", (char far *)team_names[player_attrs[18][player]]);
    draw_label(10.375, row + 5, 1, 12, 0x54, buf);
    d_5d9c_9d0b = player_stats[0][player] + player_stats[5][player];
    sprintf(buf, "%3d", d_5d9c_9d0b);
    draw_label(21.125, row + 5, 1, 4, 0x18, buf);
    d_5d9c_9d9b = player_stats[1][player] + player_stats[6][player];
    sprintf(buf, "%3d", d_5d9c_9d9b);
    draw_label(24.375, row + 5, 1, 4, 0x18, buf);
    sprintf(buf, " %s", format_average(d_5d9c_9d0b, player_rating_total[player] + cup_rating_total[player]));
    draw_label(27.625, row + 5, 1, 4, 0x24, buf);
    team_long_value = player_value(player, player_attrs[18][player]);
    if (is_transfer_listed[player] == 0)
        team_long_value = round_value_estimate(team_long_value);
    strcpy(d_1f3e_3f90, format_fee(team_long_value));
    sprintf(buf, " %s", d_1f3e_3f90);
    draw_label(32.375, row + 5, 6, 3, 0x36, buf);
}

void show_scout_recommendations(int mode, char advance)
{
    char buf[320];

    if (d_5d9c_9d1b > -1 && advance) {
        present_screen_rect(8, 0xa4, 0x138, 0xac);
        for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
            present_screen_rect(2, d_5d9c_9f29 * 8 + 0x22, 8, d_5d9c_9f29 * 8 + 0x28);
    }
    do {
        d_5d9c_9d1b += advance ? 1 : 0;
        if (d_5d9c_9d1b == 4)
            d_5d9c_9d1b = -1;
        if (d_5d9c_9d1b > -1) {
            if (mode == 0) {
                d_5d9c_9e9b = shortlists[human_team][0];
                for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++)
                    d_483b_9f8e[d_5d9c_9f29] = shortlists[human_team][d_5d9c_9f29];
            }
            d_5d9c_9b41 = 0;
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++) {
                if (scout_recommends(d_483b_9f8e[d_5d9c_9f29], human_team, d_5d9c_9d1b)) {
                    draw_label(0.375, d_5d9c_9f29 + 5, 1, 2, 0, "R");
                    d_5d9c_9b41 = -1;
                }
            }
            if (d_5d9c_9b41) {
                if (advance)
                    draw_button(1, -1);
                draw_label(1.125, 21.25, 1, 2, 0, "R");
                strcpy(d_1f3e_3f40, "");
                if (d_5d9c_9d1b == 3)
                    strcpy(d_1f3e_3f40, "youth ");
                sprintf(buf, " Recommended by %s scout %s ", d_1f3e_3f40,
                        manager_name(club_scouts[d_5d9c_9d1b][human_team], 0));
                draw_label(2.625, 21.25, 6, 3, 0, buf);
                if (advance)
                    draw_button(1, 0);
            }
        }
    } while (d_5d9c_9b41 == 0 && d_5d9c_9d1b != -1 && advance);
}

char scout_recommends(int player, int team, int scout)
{
    d_5d9c_9b40 = 0;
    if (scout < 3 || scout == 3 && player_attrs[17][player] < 21) {
        d_5d9c_9d09 = club_scouts[scout][team];
        d_5d9c_9d65 = character_clash[staff_character[d_5d9c_9d09]][player_stats[17][player]];
        d_5d9c_9d07 = (d_2f3c_632d[d_5d9c_9d09] >= (player + d_5d9c_9d09) % 200) * 0.075
            ? player_attrs[9][player]
            : max_int(player_stats[18][player], player_attrs[0][player]);
        if (d_5d9c_9d65 < 8) {
            if (scout < 3) {
                d_5d9c_9d05 = team_rating(team);
                d_5d9c_9d03 = 150;
            } else {
                d_5d9c_9d05 = 0;
                d_5d9c_9d03 = 175;
            }
        } else
            d_5d9c_9d03 = 180;
        d_5d9c_9d4b = player_rating(player);
        if (d_5d9c_9d07 >= d_5d9c_9d03 && d_5d9c_9d4b > d_5d9c_9d05
            && d_5d9c_9d4b < team_rating(team) + 4)
            d_5d9c_9b40 = -1;
    }
    return d_5d9c_9b40;
}

void generate_all_staff(void)
{
    d_5d9c_9cfb = 0;
    d_5d9c_9b3f = -1;
    draw_loading_label(0, 0);
    draw_loading_label(1, 0);
    for (ranked_manager = 0; ranked_manager <= 645; ranked_manager++) {
        generate_staff_member(ranked_manager, (0x22f - human_manager_count >= ranked_manager) - 2, 0);
        draw_loading_progress(1, -1, ranked_manager, 645);
    }
    d_5d9c_9b3f = 0;
}

void generate_staff_member(int staff, int club, char youngest)
{
    random_player_name();
    manager_first_name_idx[staff] = d_5d9c_9d01;
    manager_surname_idx[staff] = d_5d9c_9cff;
    do {
        manager_team[staff] = 0xff;
        if (youngest == 0)
            staff_age[staff] = random_below(26) + 35;
        else
            staff_age[staff] = 35;
        staff_contract[staff] = 0;
        do
            d_5d9c_9cfd = random_below(10);
        while (!(position_ok = d_5d9c_9cfd != 2 && d_5d9c_9cfd != 4 && d_5d9c_9cfd != 6
                 && d_5d9c_9cfd != 9));
        staff_character[staff] = d_5d9c_9cfd;
        do {
            position_ok = -1;
            button_style = random_below(100) + 1;
            if (button_style <= 60) {
                d_5d9c_9de9 = random_below(3);
                if (d_5d9c_9de9 == 0 || d_5d9c_9de9 == 1)
                    d_5d9c_9dd5 = d_5d9c_9de9;
                else
                    d_5d9c_9dd5 = 0;
            } else if (button_style <= 90) {
                d_5d9c_9de9 = random_below(4);
                if (d_5d9c_9de9 != 3)
                    d_5d9c_9dd5 = d_5d9c_9de9 + 5;
                else
                    d_5d9c_9dd5 = 3;
            } else if (button_style <= 100)
                d_5d9c_9dd5 = 2;
            button_style = random_below(100) + 1;
            if (button_style <= 70)
                d_5d9c_9ba7 = random_below(3) + 2;
            else if (button_style <= 95)
                d_5d9c_9ba7 = 1;
            else if (button_style <= 100)
                d_5d9c_9ba7 = 0;
            if ((d_5d9c_9dd5 == 2 || d_5d9c_9dd5 == 6) && (d_5d9c_9ba7 == 3 || d_5d9c_9ba7 == 4))
                position_ok = 0;
        } while (!position_ok);
        manager_style_formation[staff] = (d_5d9c_9ba7 << 4) + d_5d9c_9dd5;
        d_5d9c_9b3e = 0;
        d_5d9c_9b3d = 0;
        for (best_league_slot = 3; best_league_slot >= 0; best_league_slot--) {
            d_5d9c_9de9 = random_below(560) + 1;
            switch (best_league_slot) {
            case 0:
                d_5d9c_9b3c = d_5d9c_9de9 <= 80 && d_5d9c_9b3d == 0 && d_5d9c_9b3e == 0;
                break;
            case 1:
                d_5d9c_9b3c = d_5d9c_9de9 > 80 && d_5d9c_9de9 <= 160 && d_5d9c_9b3d == 0;
                break;
            case 2:
                d_5d9c_9b3c = d_5d9c_9de9 > 160 && d_5d9c_9de9 <= 480 && d_5d9c_9b3d == 0;
                break;
            case 3:
                d_5d9c_9b3c = d_5d9c_9de9 > 480;
                break;
            }
            if (d_5d9c_9b3c) {
                d_5d9c_9d4b = random_below(51) + 50;
                d_5d9c_9d07 = d_5d9c_9d4b + random_below(191 - d_5d9c_9d4b) + 10;
                staff_skills[best_league_slot][staff] = d_5d9c_9d4b;
                staff_potential[best_league_slot][staff] = d_5d9c_9d07;
                if (staff_age[staff] > 35)
                    for (label_split_pos = 35; label_split_pos <= staff_age[staff] - 1; label_split_pos++)
                        develop_staff_skill(staff, best_league_slot);
                if (best_league_slot == 2)
                    d_5d9c_9b3e = -1;
                else if (best_league_slot == 3)
                    d_5d9c_9b3d = -1;
            } else {
                staff_skills[best_league_slot][staff] = 10;
                staff_potential[best_league_slot][staff] = 10;
            }
        }
        if (club > -2) {
            d_5d9c_9b3b = 0;
            d_5d9c_9de9 = 0;
            do {
                if (club == -1)
                    d_5d9c_9e1b = random_below(80);
                else
                    d_5d9c_9e1b = club;
                d_5d9c_9ee7 = is_human_team(d_5d9c_9e1b) ? 1 : 0;
                d_5d9c_9d8d = team_rating(d_5d9c_9e1b);
                for (d_5d9c_9cf9 = d_5d9c_9ee7; d_5d9c_9cf9 <= 6; d_5d9c_9cf9++) {
                    if (team_manager[d_5d9c_9cf9][d_5d9c_9e1b] == 650) {
                        d_5d9c_9d65 = character_clash[d_2f3c_7e53[d_5d9c_9e1b]][staff_character[staff]];
                        if (d_5d9c_9d65 < 8) {
                            d_5d9c_9cf7 = abs(staff_skills[role_skill_index(d_5d9c_9cf9)][staff] / 10 - d_5d9c_9d8d);
                            if (d_5d9c_9cf7 < 4) {
                                team_manager[d_5d9c_9cf9][d_5d9c_9e1b] = staff;
                                manager_team[staff] = d_5d9c_9e1b;
                                staff_role[staff] = d_5d9c_9cf9;
                                if (d_5d9c_9cf9 == 0 && d_5d9c_9cfb < 54 && season == 1) {
                                    manager_first_name_idx[staff] = d_5d9c_9cfb;
                                    manager_surname_idx[staff] = d_5d9c_9cfb;
                                    d_5d9c_9cfb++;
                                }
                                d_5d9c_9cf9 = 6;
                                d_5d9c_9b3b = -1;
                            }
                        }
                    }
                }
                d_5d9c_9de9++;
            } while (d_5d9c_9de9 < 20 && d_5d9c_9b3b == 0);
        }
    } while (d_5d9c_9b3b == 0 && club != -2);
}

void develop_staff_skill(int staff, int skill)
{
    if (staff < 646)
        staff_skills[skill][staff] = (staff_skills[skill][staff] * 2 + staff_potential[skill][staff]) / 3;
    if (skill == 0 && d_5d9c_9b3f == 0 && staff_role[staff] == 0 && manager_team[staff] < 255
        && club_coaches[manager_team[staff]] < 650) {
        stats_division = manager_team[staff] / 20;
        d_5d9c_9cf5 = min_int(board_confidence[manager_team[staff]], 100 - stats_division * 15) * 2;
        staff_skills[skill][staff] = (staff_skills[skill][staff] * 2 + d_5d9c_9cf5) / 3;
    }
}

void staff_retirements(void)
{
    char text[320];
    char title[80];

    draw_progress_step(0, 0);
    draw_progress_step(1, 0);
    for (ranked_manager = 0; ranked_manager <= 645; ranked_manager++) {
        draw_progress_step_bar(1, -1, ranked_manager, 1290);
        d_5d9c_9b47 = 0;
        d_5d9c_9cf3 = manager_team[ranked_manager];
        if (staff_age[ranked_manager] >= 35) {
            d_5d9c_9b12 = 0;
            if (d_5d9c_9cf3 < 255 && club_job_vacant[d_5d9c_9cf3] > 0)
                d_5d9c_9b12 = -1;
            if (staff_age[ranked_manager] > random_below(6) + 60 && d_5d9c_9b12 == 0) {
                if (d_5d9c_9cf3 < 255) {
                    if (is_human_team(d_5d9c_9cf3) || staff_role[ranked_manager] == 0) {
                        strcpy(d_1f3e_3f18, staff_role_name(staff_role[ranked_manager]));
                        sprintf(title, "%s quits %s", d_1f3e_3f18, (char far *)team_names[d_5d9c_9cf3]);
                        sprintf(text, "%s %s has decided to retire from soccer at the age of %d.",
                                d_1f3e_3f18, manager_name(ranked_manager, 0), staff_age[ranked_manager]);
                        news_message_box(d_5d9c_9cf3, title, text);
                    }
                }
                if (d_5d9c_9cf3 < 255 && staff_role[ranked_manager] == 0)
                    manager_leaves_club(d_5d9c_9cf3, 3);
                remove_manager_candidate(ranked_manager);
                generate_staff_member(ranked_manager, -2, 1);
                if (d_5d9c_9cf3 < 255 && staff_role[ranked_manager] > 0)
                    fill_staff_vacancy(d_5d9c_9cf3, staff_role[ranked_manager]);
            } else if (d_5d9c_9cf3 < 255 && d_5d9c_9b12 == 0 && staff_role[ranked_manager] > 0
                       && is_human_team(d_5d9c_9cf3) == 0
                       && team_rating(d_5d9c_9cf3)
                          - staff_skills[role_skill_index(staff_role[ranked_manager])][ranked_manager] / 10 > 4)
                fill_staff_vacancy(d_5d9c_9cf3, staff_role[ranked_manager]);
        }
        if (d_5d9c_9b47) {
            draw_season_end_panel();
            draw_progress_step(1, 0);
        }
    }
    for (ranked_manager = 0; ranked_manager <= human_count + 645; ranked_manager++) {
        draw_progress_step_bar(1, -1, ranked_manager + 645, 1290);
        if (staff_age[ranked_manager] >= 35) {
            for (best_league_slot = 0; best_league_slot <= 3; best_league_slot++)
                develop_staff_skill(ranked_manager, best_league_slot);
            staff_age[ranked_manager]++;
        }
    }
}

void weekly_board_review(void)
{
    for (selected_team = 0; selected_team <= 79; selected_team++) {
        if (club_job_vacant[selected_team] == 0
            && (in_cup_draw[0][selected_team] != 0 || random_below(3) > 0)) {
            if (board_confidence[selected_team] < 30 && current_week < 80 && random_below(3) == 0
                && staff_contract[team_manager[0][selected_team]] == 0
                && in_cup_draw[2][selected_team] + in_cup_draw[3][selected_team]
                   + in_cup_draw[6][selected_team] + in_cup_draw[7][selected_team]
                   + in_cup_draw[8][selected_team] == 0)
                manager_leaves_club(selected_team, 2);
            for (best_league_slot = 0; best_league_slot <= 6; best_league_slot++) {
                ranked_manager = team_manager[best_league_slot][selected_team];
                if (ranked_manager < 650 && staff_contract[ranked_manager] > 0)
                    staff_contract[ranked_manager] = staff_contract[ranked_manager]
                        - ((current_week & 1) == 0 || current_week < 7 ? (char)1 : (char)0);
            }
        }
    }
}

void manager_leaves_club(int club, int reason)
{
    char buf[320];

    if (reason < 3) {
        if (reason == 0) {
            sprintf(buf, "%s is to be replaced as manager of %s as part of the takeover.",
                    manager_name(team_manager[0][club], 0), (char far *)team_names[club]);
            news_message_box(club, "Managerial news", buf);
        } else if (reason == 1 || random_below(4) == 0 && is_human_team(club) == 0) {
            if (is_human_team(club) == 0) {
                sprintf(buf, "%s has resigned as manager of %s.",
                        manager_name(team_manager[0][club], 0), (char far *)team_names[club]);
                news_message_box(club, "Managerial news", buf);
            }
        } else {
            sprintf(buf, "%s has been given the sack by the %s board.",
                    manager_name(team_manager[0][club], 0), (char far *)team_names[club]);
            news_message_box(club, "Managerial news", buf);
        }
        if (is_human_team(club)) {
            human_manager_count--;
            is_demo_game = human_manager_count == 0;
        }
        d_5d9c_9ce9 = team_manager[0][club];
        manager_team[d_5d9c_9ce9] = 255;
        staff_contract[d_5d9c_9ce9] = 0;
        staff_role[d_5d9c_9ce9] = club + 7;
    }
    board_confidence[club] = 50;
    club_job_vacant[club] = 3;
    d_5d9c_9dbd = club_coaches[club];
    team_manager[0][club] = d_5d9c_9dbd;
    staff_role[d_5d9c_9dbd] = 0;
    club_coaches[club] = 650;
    if (reason != 3)
        reset_team_selection(club);
}

void collect_manager_candidates(void)
{
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        if (club_job_vacant[d_5d9c_9f69] > 1) {
            d_5d9c_9d8d = team_rating(d_5d9c_9f69);
            d_5d9c_9de9 = 0;
            d_5d9c_9cbf = d_5d9c_9d8d - (4 - club_job_vacant[d_5d9c_9f69]) * 4;
            last_ranked_row = d_5d9c_9d8d + 3;
            d_5d9c_9bbf = random_below(9) + 10;
            for (; d_5d9c_9de9 < 200 && strlen(job_applicants[d_5d9c_9f69]) < d_5d9c_9bbf * 4;
                 d_5d9c_9de9++) {
                ranked_manager = random_below(646);
                if (staff_contract[ranked_manager] == 0 && staff_role[ranked_manager] - 7 != d_5d9c_9f69) {
                    d_5d9c_9d4b = staff_skills[0][ranked_manager] / 10;
                    sprintf(d_1f3e_2b0e, "%03d", ranked_manager);
                    if (find_substring(job_applicants[d_5d9c_9f69], d_1f3e_2b0e) == 0
                        && d_5d9c_9d4b >= d_5d9c_9cbf && d_5d9c_9d4b <= last_ranked_row) {
                        if (manager_team[ranked_manager] == 255)
                            d_5d9c_9b18 = -1;
                        else
                            d_5d9c_9b18 = d_5d9c_9d8d - team_rating(manager_team[ranked_manager]) > 2.0;
                        if (d_5d9c_9b18) {
                            strcat(job_applicants[d_5d9c_9f69], d_1f3e_2b0e);
                            strcat(job_applicants[d_5d9c_9f69], " ");
                        }
                    }
                }
            }
        }
    }
}

void remove_manager_candidate(int staff)
{
    char buf[320];

    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
        if (club_job_vacant[d_5d9c_9f69] > 0) {
            sprintf(buf, "%03d", staff);
            label_split_pos = find_substring(job_applicants[d_5d9c_9f69], buf);
            if (label_split_pos > 0)
                strcpy(&job_applicants[d_5d9c_9f69][label_split_pos - 1], "XXX");
        }
    }
}

void appoint_new_managers(void)
{
    char taken[650];
    char buf[320];

    memset(taken, 0, 650);
    for (d_5d9c_9bbd = 0; d_5d9c_9bbd <= 79; d_5d9c_9bbd++) {
        if (club_job_vacant[d_5d9c_9bbd] > 0) {
            club_job_vacant[d_5d9c_9bbd] = club_job_vacant[d_5d9c_9bbd] - 1;
            if (club_job_vacant[d_5d9c_9bbd] == 0) {
                strcpy(d_1f3e_300e, job_applicants[d_5d9c_9bbd]);
                if (d_1f3e_300e[0] != 0) {
                    do {
                        d_5d9c_9cf1 = -1;
                        for (loop_i = 1; strlen(d_1f3e_300e) >= loop_i; loop_i += 4) {
                            sprintf(buf, "%.3s", &d_1f3e_300e[loop_i - 1]);
                            d_5d9c_9bc5 = atol(buf);
                            if ((season > 1 || season == 1 && d_5d9c_9bc5 < 646)
                                && taken[d_5d9c_9bc5] == 0) {
                                cur_rating = staff_skills[0][d_5d9c_9bc5]
                                    - character_clash[d_2f3c_7e53[d_5d9c_9bbd]][staff_character[d_5d9c_9bc5]]
                                    + random_below(10) - random_below(10);
                                if (cur_rating > last_ranked_row || d_5d9c_9cf1 == -1) {
                                    position_ok = -1;
                                    if (manager_team[d_5d9c_9bc5] < 255 && staff_contract[d_5d9c_9bc5] == 0
                                        && staff_role[d_5d9c_9bc5] - 7 != d_5d9c_9bbd
                                        && club_job_vacant[manager_team[d_5d9c_9bc5]] > 0
                                        && team_manager[0][manager_team[d_5d9c_9bc5]] == d_5d9c_9bc5
                                        && manager_team[d_5d9c_9bc5] != d_5d9c_9bbd)
                                        position_ok = 0;
                                    if (position_ok) {
                                        d_5d9c_9cf1 = d_5d9c_9bc5;
                                        last_ranked_row = cur_rating;
                                    }
                                }
                            }
                        }
                        d_5d9c_9b17 = -1;
                        if (d_5d9c_9cf1 != -1 && d_5d9c_9cf1 >= 646
                            && job_offer_screen(d_5d9c_9cf1, d_5d9c_9bbd) == 0) {
                            taken[d_5d9c_9cf1] = -1;
                            d_5d9c_9b17 = 0;
                        }
                    } while (!d_5d9c_9b17);
                    if (d_5d9c_9cf1 != -1) {
                        d_5d9c_9dbd = team_manager[0][d_5d9c_9bbd];
                        team_manager[0][d_5d9c_9bbd] = 650;
                        club_coaches[d_5d9c_9bbd] = d_5d9c_9dbd;
                        staff_role[d_5d9c_9dbd] = 1;
                        club_job_vacant[d_5d9c_9bbd] = 0;
                        strcpy(job_applicants[d_5d9c_9bbd], "");
                        d_5d9c_9ced = manager_team[d_5d9c_9cf1];
                        d_5d9c_9ceb = staff_role[d_5d9c_9cf1];
                        appoint_staff(d_5d9c_9cf1, d_5d9c_9bbd, 0);
                        if (d_5d9c_9ced < 255) {
                            if (d_5d9c_9ceb == 0) {
                                sprintf(buf, "%s are now looking for a new manager following the departure of %s.",
                                        (char far *)team_names[d_5d9c_9ced], manager_name(d_5d9c_9cf1, 0));
                                news_message_box(d_5d9c_9ced, "Managerial news", buf);
                                manager_leaves_club(d_5d9c_9ced, 4);
                            } else
                                fill_staff_vacancy(d_5d9c_9ced, d_5d9c_9ceb);
                        }
                        continue;
                    }
                }
                club_job_vacant[d_5d9c_9bbd] = 2;
            }
        }
    }
}

char job_offer_screen(int manager, int team)
{
    char buf[320];

    d_5d9c_9b32 = -1;
    d_5d9c_9b31 = 0;
    do {
        redo_menu = 0;
        new_screen("Job Offer");
        sprintf(buf, " %s ", manager_name(manager, 0));
        if (manager_team[manager] == 255)
            loop_k = 20;
        else
            loop_k = team_colours[manager_team[manager]];
        draw_text_box(1.0, 4.0, -(loop_k / 16), loop_k % 16, 0, buf);
        sprintf(buf, "%s want you as their manager", (char far *)team_names[team]);
        print_screen_line(7, buf);
        sprintf(buf, "They are in division %d", team / 20 + 1);
        print_screen_line(9, buf);
        show_menu(12, "", "Accept Offer|Refuse Offer|League Table|Squad Details|");
        do {
            menu_choice_done = -1;
            wait_menu_choice(5);
            if (menu_choice == 0) {
                if (confirm_yes_no()) {
                    sprintf(buf, "%s offer accepted", (char far *)team_names[team]);
                    flash_message(buf);
                    if (manager_team[manager] < 255)
                        board_reaction_to_leaving(manager_team[manager]);
                    d_5d9c_9b31 = -1;
                } else
                    menu_choice_done = 0;
            } else if (menu_choice == 1) {
                if (confirm_yes_no()) {
                    sprintf(buf, "%s offer refused", (char far *)team_names[team]);
                    flash_message(buf);
                } else
                    menu_choice_done = 0;
            } else if (menu_choice == 2) {
                league_table_screen(team / 20);
                redo_menu = -1;
            } else if (menu_choice == 3) {
                club_squad_screen(team);
                redo_menu = -1;
            }
        } while (!menu_choice_done);
    } while (redo_menu);
    d_5d9c_9b32 = 0;
    return d_5d9c_9b31;
}

void fill_staff_vacancy(int club, int role)
{
    d_5d9c_9cf9 = role;
    d_5d9c_9e1b = club;
    do {
        d_5d9c_9cf1 = -1;
        if (is_human_team(d_5d9c_9e1b))
            d_5d9c_9cf1 = appoint_staff_menu(d_5d9c_9e1b, d_5d9c_9cf9);
        if (d_5d9c_9cf1 == -1) {
            d_5d9c_9b39 = 0;
            do {
                last_ranked_row = 0;
                for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= 645; d_5d9c_9f51++) {
                    if (manager_team[d_5d9c_9f51] != d_5d9c_9e1b) {
                        d_5d9c_9d65 = character_clash[staff_character[team_manager[0][d_5d9c_9e1b]]][staff_character[d_5d9c_9f51]];
                        if ((cur_rating = max_int(staff_skills[0][role_skill_index(d_5d9c_9cf9) * 650 + d_5d9c_9f51] / 10
                                                       + (manager_team[d_5d9c_9f51] == d_5d9c_9e1b ? 4 : 0)
                                                       - d_5d9c_9d65, 1)) > last_ranked_row) {
                            if ((fabs(cur_rating - team_rating(d_5d9c_9e1b)) < 4.0
                                 && (staff_age[d_5d9c_9f51] <= 50 && d_5d9c_9cf9 < 2 || d_5d9c_9cf9 > 1))
                                || d_5d9c_9b39) {
                                if (staff_accepts_job(d_5d9c_9f51, d_5d9c_9e1b, d_5d9c_9cf9)) {
                                    d_5d9c_9cf1 = d_5d9c_9f51;
                                    last_ranked_row = cur_rating;
                                }
                            }
                        }
                    }
                }
                d_5d9c_9b39 = -1;
            } while (d_5d9c_9cf1 <= -1);
        }
        appoint_staff(d_5d9c_9cf1, d_5d9c_9e1b, d_5d9c_9cf9);
        if (d_5d9c_9ced < 255) {
            d_5d9c_9cf9 = d_5d9c_9ceb;
            d_5d9c_9e1b = d_5d9c_9ced;
        }
    } while (d_5d9c_9ced != 255);
}

void appoint_staff(int staff, int team, int role)
{
    int i;
    char buf[320];

    d_5d9c_9ced = manager_team[staff];
    d_5d9c_9ceb = staff_role[staff];
    d_5d9c_9ce9 = team_manager[role][team];
    if (d_5d9c_9ce9 < 0x28a) {
        d_5d9c_9b11 = -1;
        for (d_5d9c_9ce7 = 0; d_5d9c_9ce7 <= 79; d_5d9c_9ce7++)
            for (d_5d9c_9ce5 = 0; d_5d9c_9ce5 <= 6; d_5d9c_9ce5++)
                if (team_manager[d_5d9c_9ce5][d_5d9c_9ce7] == d_5d9c_9ce9 && d_5d9c_9ce7 != team) {
                    d_5d9c_9b11 = 0;
                    d_5d9c_9ce5 = 6;
                    d_5d9c_9ce7 = 79;
                }
        if (d_5d9c_9b11 != 0) {
            manager_team[d_5d9c_9ce9] = 0xff;
            staff_contract[d_5d9c_9ce9] = 0;
        }
    }
    team_manager[role][team] = staff;
    manager_team[staff] = team;
    staff_contract[staff] = max_int(min_int(staff_skills[0][staff] * 0.375, 50), 25);
    staff_role[staff] = role;
    remove_manager_candidate(staff);
    if (role == 0) {
        if (staff > 0x285 && d_5d9c_9ced == 0xff) {
            human_manager_count++;
            is_demo_game = 0;
        }
        team_stats[0][team] = max_int(10, staff_skills[0][staff] / 13);
        for (i = 0; i <= squad_size[team]; i++)
            if (random_below(3) > 0)
                vary_player_form(squad_players[team][i]);
        board_confidence[team] = max_int(staff_skills[0][staff] * 0.5, 50);
        if (in_season_end == 0) {
            reset_team_selection(team);
            if (d_5d9c_9ce9 < 0x286)
                for (i = 1; i <= shortlists[team][0]; i++)
                    player_stats[23][shortlists[team][i]]--;
            shortlists[team][0] = 0;
        }
    }
    d_5d9c_9b37 = 0;
    if (d_5d9c_9bbb == 0 || is_human_team(team)
        || d_5d9c_9ced < 0xff && is_human_team(d_5d9c_9ced))
        d_5d9c_9b37 = -1;
    if (d_5d9c_9b37 != 0) {
        if (d_5d9c_9ced == 0xff)
            strcpy(club_title_text, "");
        else if (d_5d9c_9ced == team)
            sprintf(club_title_text, "their %s ", staff_role_name(d_5d9c_9ceb));
        else
            sprintf(club_title_text, "%s %s ", (char far *)team_names[d_5d9c_9ced], staff_role_name(d_5d9c_9ceb));
        sprintf(buf, "%s have appointed %s%s as their new %s.", (char far *)team_names[team],
                club_title_text, manager_name(staff, 0), staff_role_name(role));
        news_message_box(team, "Job News", buf);
    }
}

char staff_accepts_job(int staff, int team, int role)
{
    d_5d9c_9b36 = 0;
    if (manager_team[staff] == team) {
        if (club_job_vacant[manager_team[staff]] == 0)
            d_5d9c_9b36 = -1;
    } else if (staff_contract[staff] == 0) {
        d_5d9c_9cdf = role_skill_index(role);
        if (manager_team[staff] == 0xff)
            d_5d9c_9b36 = staff_skills[d_5d9c_9cdf][staff] / 10 - team_rating(team) < 6.0 ? -1 : 0;
        else if (club_job_vacant[manager_team[staff]] == 0 && random_below(4) > 0) {
            d_5d9c_9cdd = role_skill_index(staff_role[staff]);
            if (d_5d9c_9cdd != 0 || d_5d9c_9cdf <= 0)
                if (team_rating(team) - (d_5d9c_9cdf < d_5d9c_9cdd) > team_rating(manager_team[staff]) + 3.0
                    || staff_skills[d_5d9c_9cdf][staff] - staff_skills[d_5d9c_9cdd][staff] > 60)
                    d_5d9c_9b36 = -1;
        }
    }
    return d_5d9c_9b36;
}

int appoint_staff_menu(int team, int role)
{
    char buf[320];

    memset(search_options, 0, 37);
    d_5d9c_9ce3 = -1;
    strcpy(d_1f3e_3f18, staff_role_name(role));
    do {
        sprintf(buf, "Appoint %s", d_1f3e_3f18);
        new_screen(buf);
        draw_team_label(1.0, 4.0, team);
        show_menu(7, "", "Own Search|Board Decision|");
        wait_menu_choice(1);
        d_5d9c_9d1d = menu_choice;
        if (d_5d9c_9d1d == 0) {
            memset(search_options, 0, 37);
            search_results = vm_map(search_results_handle, 1);
            memset(search_results, -1, 0xd4a);
            search_options_menu(11, 14, 1, 2, "Age", "35-40|40-50|50-60|60+|");
            if (exit_chosen == 0) {
                search_options_menu(16, 20, 1, 2, "Division", "First|Second|Third|Fourth|Unemployed|");
                if (exit_chosen == 0) {
                    search_options_menu(22, 27, 1, 2, "Reputation", "Unknown|Poor|Fair|Good|Very Good|Superb|");
                    if (exit_chosen == 0)
                        search_staff(team, role);
                }
            }
        }
    } while ((d_5d9c_9d1d != 0 || d_5d9c_9ce3 == -1) && d_5d9c_9d1d != 1);
    return d_5d9c_9ce3;
}

void search_staff(int team, int role)
{
    int found;
    int pass;
    char buf[320];

    found = 0;
    new_screen("");
    draw_text_font2(-1.0, 12.5, 1, "Searching");
    for (pass = 1; pass <= 2; pass++)
        for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= 0x285; d_5d9c_9f51++) {
            position_ok = -1;
            if (manager_team[d_5d9c_9f51] != team && pass == 1)
                position_ok = 0;
            if (position_ok != 0 && manager_team[d_5d9c_9f51] == team && pass == 2)
                position_ok = 0;
            if (position_ok != 0 && team_manager[role][team] == d_5d9c_9f51)
                position_ok = 0;
            if (manager_team[d_5d9c_9f51] != d_5d9c_9e1b) {
                if (position_ok != 0) {
                    d_5d9c_9b43 = 0;
                    if (search_options[15] != 0)
                        d_5d9c_9b43 = -1;
                    else {
                        d_5d9c_9d11 = staff_age[d_5d9c_9f51];
                        if (d_5d9c_9d11 <= 40)
                            d_5d9c_9b43 = search_options[11];
                        else if (d_5d9c_9d11 <= 50)
                            d_5d9c_9b43 = search_options[12];
                        else if (d_5d9c_9d11 <= 60)
                            d_5d9c_9b43 = search_options[13];
                        else
                            d_5d9c_9b43 = search_options[14];
                    }
                    if (d_5d9c_9b43 == 0)
                        position_ok = 0;
                }
                if (position_ok != 0 && search_options[21] == 0)
                    if (manager_team[d_5d9c_9f51] == 0xff && search_options[20] == 0
                        || manager_team[d_5d9c_9f51] < 0xff && search_options[16 + manager_team[d_5d9c_9f51] / 20] == 0)
                        position_ok = 0;
                if (position_ok != 0 && search_options[28] == 0) {
                    strcpy(d_1f3e_3ec8, staff_rating_text(d_5d9c_9f51, role));
                    if (search_options[22 + d_5d9c_9f4d] == 0)
                        position_ok = 0;
                }
            }
            if (position_ok != 0) {
                found++;
                search_results = vm_map(search_results_handle, 1);
                search_results[found - 1] = d_5d9c_9f51;
            }
        }
    if (found > 0) {
        list_first_row = 1;
        do {
            sprintf(buf, "New %s %s", (char far *)team_names[team], d_1f3e_3f18);
            new_screen(buf);
            draw_label(1.125, 4.5, 0, 1, 72, " NAME");
            draw_label(10.375, 4.5, 0, 1, 78, " CLUB");
            draw_label(20.375, 4.5, 0, 1, 22, " YR");
            draw_label(23.375, 4.5, 0, 1, 72, " CHARACTER");
            draw_label(32.625, 4.5, 0, 1, 52, " REP");
            draw_list_scroll_buttons();
            d_5d9c_9e9b = 0;
            search_results = vm_map(search_results_handle, 0);
            for (d_5d9c_9f29 = list_first_row; list_first_row + 14 >= d_5d9c_9f29; d_5d9c_9f29++) {
                d_5d9c_9f51 = search_results[d_5d9c_9f29 - 1];
                if (d_5d9c_9f51 > -1) {
                    d_483b_9f90[d_5d9c_9e9b] = d_5d9c_9f51;
                    d_5d9c_9e9b++;
                } else
                    d_5d9c_9f29 = list_first_row + 14;
            }
            for (d_5d9c_9f29 = 1; d_5d9c_9f29 <= d_5d9c_9e9b; d_5d9c_9f29++) {
                if (d_5d9c_9f29 & 1)
                    loop_k = 2;
                else
                    loop_k = 9;
                d_5d9c_9f51 = d_483b_9f90[d_5d9c_9f29 - 1];
                sprintf(buf, " %.11s", manager_name(d_5d9c_9f51, -1));
                add_button(0, 1.125, d_5d9c_9f29 + 5, 1, loop_k, 72, buf);
                if (manager_team[d_5d9c_9f51] < 0xff)
                    strcpy(fixture_team_name, team_names[manager_team[d_5d9c_9f51]]);
                else
                    strcpy(fixture_team_name, "Unemployed");
                loop_k = manager_team[d_5d9c_9f51] == team ? 3 : 12;
                sprintf(buf, " %.12s", fixture_team_name);
                draw_label(10.375, d_5d9c_9f29 + 5, 1, loop_k, 78, buf);
                sprintf(buf, " %d", staff_age[d_5d9c_9f51]);
                draw_label(20.375, d_5d9c_9f29 + 5, 1, 4, 22, buf);
                sprintf(buf, " %s", character_names[staff_character[d_5d9c_9f51]]);
                draw_label(23.375, d_5d9c_9f29 + 5, 1, 4, 72, buf);
                sprintf(buf, " %s", staff_rating_text(d_5d9c_9f51, role));
                draw_label(32.625, d_5d9c_9f29 + 5, 6, 3, 52, buf);
            }
            do
                d_5d9c_9d19 = wait_for_button(-1);
            while (d_5d9c_9d19 < 1);
            if (d_5d9c_9d19 == 1 && list_scroll_state < 3)
                list_first_row -= 15;
            else if (d_5d9c_9d19 == 3 && list_scroll_state == 1 || d_5d9c_9d19 == 2 && list_scroll_state == 3)
                list_first_row += 15;
            else if (d_5d9c_9d19 >= d_5d9c_9d0d) {
                d_5d9c_9e8b = d_5d9c_9d19 - d_5d9c_9d0d;
                d_5d9c_9f51 = d_483b_9f90[d_5d9c_9e8b];
                sprintf(buf, "Appoint %s", manager_name(d_5d9c_9f51, 0));
                show_menu(0, buf, "Cancel|Appoint Him|");
                if (menu_choice == 1) {
                    strcpy(d_1f3e_53e6, manager_name(d_5d9c_9f51, -1));
                    if (staff_accepts_job(d_5d9c_9f51, team, role)) {
                        sprintf(buf, "%s accepts the offer", d_1f3e_53e6);
                        flash_message(buf);
                        d_5d9c_9ce3 = d_5d9c_9f51;
                    } else {
                        sprintf(buf, "%s refuses the offer", d_1f3e_53e6);
                        flash_message(buf);
                    }
                }
            }
        } while ((d_5d9c_9d19 != 2 || list_scroll_state >= 3) && (d_5d9c_9d19 != 1 || list_scroll_state <= 2)
                 && d_5d9c_9ce3 == -1);
    } else
        message_box("Nobody found");
}

int role_skill_index(int role)
{
    switch (role) {
    case 0:
    case 1:
        best_stat = role;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        best_stat = 2;
        break;
    case 6:
        best_stat = 3;
        break;
    }
    return best_stat;
}

/* the staff screen: its boxes, and where each member of staff is drawn */
static struct staffbox staff_screen_boxes[] = {
    {8, 24, 156, 74, 4}, {8, 80, 156, 188, 14}, {164, 24, 312, 66, 3},
    {164, 74, 312, 116, 14}, {164, 124, 312, 166, 14}
};
static struct staffpanel staff_screen_panels[] = {
    {1.375, 5, 1, 28}, {20.875, 5, 1, 31}, {1.375, 12, 1, 24}, {1.375, 16.125, 1, 24},
    {1.375, 20.25, 1, 24}, {20.875, 17.5, 1, 24}, {20.875, 11.25, 1, 24}
};

void staff_screen(int team)
{
    struct staffbox far *box;
    struct staffpanel far *panel;
    int right[5];
    int left[5];
    int bottom[5];
    int top[5];
    char buf[320];

    do {
        redo_menu = 0;
        draw_club_title(1.25, team, "Staff");
        box = staff_screen_boxes;
        for (d_5d9c_9cdb = 0; d_5d9c_9cdb <= 4; d_5d9c_9cdb++, box++) {
            set_fill_colour(16);
            fill_rect(box->x1 + 4, box->y1 + 4, box->x2 + 4, box->y2 + 4);
            set_fill_colour(box->colour + 16);
            fill_rect(box->x1, box->y1, box->x2, box->y2);
            left[d_5d9c_9cdb] = box->x1;
            right[d_5d9c_9cdb] = box->x2;
            top[d_5d9c_9cdb] = box->y1;
            bottom[d_5d9c_9cdb] = box->y2;
        }
        panel = staff_screen_panels;
        for (best_league_slot = 0; best_league_slot <= 6; best_league_slot++, panel++)
            draw_staff_panel(panel->x, panel->y, panel->a, panel->b, best_league_slot, team);
        add_button(2, 20.75, 22.25, 1, 4, 0x94, "       DONE");
        if (is_human_team(team))
            add_button(2, 35.0, 1.125, 1, 3, 0, "SACK");
        d_5d9c_9b3a = 0;
        do {
            d_5d9c_9b35 = 0;
            menu_choice = wait_for_button(last_button);
            if (menu_choice == 0 && d_5d9c_9b3a != 0) {
                d_5d9c_9cd9 = -1;
                for (d_5d9c_9cdb = 0; d_5d9c_9cdb <= 4; d_5d9c_9cdb++) {
                    if (get_mouse_x() >= left[d_5d9c_9cdb] && get_mouse_x() <= right[d_5d9c_9cdb]) {
                        if (d_5d9c_9cdb == 1) {
                            if (get_mouse_y() >= 90 && get_mouse_y() <= 120)
                                d_5d9c_9cd9 = 2;
                            else if (get_mouse_y() >= 123 && get_mouse_y() <= 153)
                                d_5d9c_9cd9 = 3;
                            else if (get_mouse_y() >= 156 && get_mouse_y() <= 186)
                                d_5d9c_9cd9 = 4;
                        } else if (get_mouse_y() >= top[d_5d9c_9cdb] && get_mouse_y() <= bottom[d_5d9c_9cdb]) {
                            switch (d_5d9c_9cdb) {
                            case 2:
                                d_5d9c_9cd9 = 1;
                                break;
                            case 3:
                                d_5d9c_9cd9 = 6;
                                break;
                            case 4:
                                d_5d9c_9cd9 = 5;
                                break;
                            }
                        }
                    }
                }
                if (d_5d9c_9cd9 > -1) {
                    strcpy(d_1f3e_53e6, manager_name(team_manager[d_5d9c_9cd9][team], 0));
                    sprintf(buf, "Sack %s", d_1f3e_53e6);
                    show_menu(0, buf, "Cancel|Sack Him|");
                    if (menu_choice == 1) {
                        sprintf(buf, "%s leaves club", d_1f3e_53e6);
                        message_box(buf);
                        fill_staff_vacancy(team, d_5d9c_9cd9);
                    }
                    redo_menu = -1;
                } else {
                    d_5d9c_9b3a = 0;
                    draw_button(2, 0);
                }
            } else if (menu_choice == 1) {
                d_5d9c_9b35 = -1;
            } else if (menu_choice == 2) {
                draw_button(2, d_5d9c_9b3a = !d_5d9c_9b3a);
            }
        } while (d_5d9c_9b35 == 0 && redo_menu == 0);
    } while (!d_5d9c_9b35);
}

void draw_staff_panel(float x, float y, int title_colour, int colour, int role, int team)
{
    char buf[320];

    d_5d9c_9cd7 = team_manager[role][team];
    strcpy(d_1f3e_3e28, staff_role_name(role));
    if (role == 2)
        strcat(d_1f3e_3e28, "s");
    if (role != 3 && role != 4) {
        sprintf(buf, "%*s", strlen(d_1f3e_3e28) + 12 - strlen(d_1f3e_3e28) / 2, d_1f3e_3e28);
        draw_label(x, y - 1, title_colour / 16, title_colour % 16, 0x90, buf);
    }
    if (d_5d9c_9cd7 < 0x28a) {
        strcpy(d_1f3e_53e6, manager_name(d_5d9c_9cd7, 0));
        sprintf(buf, "%*s", strlen(d_1f3e_53e6) + 12 - strlen(d_1f3e_53e6) / 2, d_1f3e_53e6);
        d_5d9c_9b34 = role == 2 || role == 3 || role == 4;
        draw_label(x, y, colour / 16 - (d_5d9c_9b34 ? 5 : 0), colour % 16, 0x90, buf);
        draw_label(x, y + 1, colour / 16, colour % 16, 0x47, " Age");
        sprintf(buf, " %d YRS", staff_age[d_5d9c_9cd7]);
        draw_label(x + 9.125, y + 1, colour / 16, colour % 16, 0x47, buf);
        draw_label(x, y + 2, colour / 16, colour % 16, 0x47, " Character");
        sprintf(buf, " %s", character_names[staff_character[d_5d9c_9cd7]]);
        draw_label(x + 9.125, y + 2, colour / 16, colour % 16, 0x47, buf);
        draw_label(x, y + 3, colour / 16, colour % 16, 0x47, role == 0 ? " Reputation" : " Ability");
        sprintf(buf, " %s", staff_rating_text(d_5d9c_9cd7, role));
        draw_label(x + 9.125, y + 3, colour / 16, colour % 16, 0x47, buf);
        if (role == 0) {
            draw_label(x, y + 4, colour / 16, colour % 16, 0x47, " Board");
            sprintf(buf, " %d%%", board_confidence[team]);
            draw_label(x + 9.125, y + 4, colour / 16, colour % 16, 0x47, buf);
        }
    } else {
        draw_label(x, y, colour / 16, colour % 16, 0x90, "");
        draw_label(x, y + 1, colour / 16, colour % 16, 0x90, "      The coach is");
        draw_label(x, y + 2, colour / 16, colour % 16, 0x90, "   temporary manager");
        draw_label(x, y + 3, colour / 16, colour % 16, 0x90, "");
    }
    if (role == 0) {
        draw_label(x, y + 4, colour / 16, colour % 16, 0x47, " Board");
        sprintf(buf, " %d%%", board_confidence[team]);
        draw_label(x + 9.125, y + 4, colour / 16, colour % 16, 0x47, buf);
    }
}

char far *staff_rating_text(int staff, int role)
{
    char far *s;

    s = next_text_buffer();
    if (staff_age[staff] > 35) {
        switch (staff_skills[role_skill_index(role)][staff] / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            strcpy(s, "Poor");
            d_5d9c_9f4d = 1;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            strcpy(s, "Fair");
            d_5d9c_9f4d = 2;
            break;
        case 12:
        case 13:
        case 14:
            strcpy(s, "Good");
            d_5d9c_9f4d = 3;
            break;
        case 15:
        case 16:
            strcpy(s, "V Good");
            d_5d9c_9f4d = 4;
            break;
        default:
            strcpy(s, "Superb");
            d_5d9c_9f4d = 5;
            break;
        }
    } else {
        strcpy(s, "Unknown");
        d_5d9c_9f4d = 0;
    }
    return s;
}

void update_board_confidence(void)
{
    for (selected_team = 0; selected_team <= 79; selected_team++) {
        best_league_slot = league_table_slot(selected_team) % 20;
        d_5d9c_9cd5 = min_int(max_int(d_5739_0148[selected_team] - 13, 0), 4);
        d_5d9c_9cd3 = (board_confidence[selected_team] * (38 - league_round)
                       + d_5471_2b4c[best_league_slot][d_5d9c_9cd5] * league_round) / 38;
        d_5d9c_9e0d = (board_confidence[selected_team] * 3 + d_5d9c_9cd3) / 4 - board_confidence[selected_team];
        if (d_5d9c_9e0d < 0 && last_match_info[0][selected_team] != 0) {
            d_5d9c_9a04 = week_fixtures[last_match_info[1][selected_team]][0][last_match_info[2][selected_team]];
            d_5d9c_9a00 = week_fixtures[last_match_info[1][selected_team]][1][last_match_info[2][selected_team]];
            d_5d9c_9b33 = selected_team == d_5d9c_9a04 / 32 && d_5d9c_9a04 % 32 > d_5d9c_9a00 % 32
                       || selected_team == d_5d9c_9a00 / 32 && d_5d9c_9a00 % 32 > d_5d9c_9a04 % 32;
            if (d_5d9c_9b33)
                d_5d9c_9e0d = 0;
        }
        change_board_confidence(selected_team, d_5d9c_9e0d);
        if (is_human_team(selected_team) && (league_round == 10 || league_round == 20 || league_round == 30)) {
            if (d_5471_2b4c[best_league_slot][d_5d9c_9cd5] < 50)
                board_message(selected_team, "Our league position is unacceptable.");
            else if (d_5471_2b4c[best_league_slot][d_5d9c_9cd5] == 100)
                board_message(selected_team, "An excellent league position.");
        }
    }
}

void board_reaction_to_leaving(int club)
{
    char buf[320];
    unsigned char confidence;

    confidence = board_confidence[club];
    if (confidence <= 24)
        strcpy(d_1f3e_3dd8, "were going to sack you anyway.");
    else if (confidence <= 34)
        strcpy(d_1f3e_3dd8, "are not particularly disappointed.");
    else if (confidence <= 59)
        strcpy(d_1f3e_3dd8, "are a little disappointed.");
    else if (confidence <= 94)
        strcpy(d_1f3e_3dd8, "are very disappointed at your decision.");
    else if (confidence <= 99)
        strcpy(d_1f3e_3dd8, "are astonished at your decision.");
    else
        strcpy(d_1f3e_3dd8, "think you are a right bandit.");
    sprintf(buf, "We %s", d_1f3e_3dd8);
    board_message(club, buf);
}

void board_message(int team, char far *text)
{
    char buf[320];

    sprintf(buf, "%s board message", (char far *)team_names[team]);
    news_message_box(team, buf, text);
}

char far *staff_role_name(int role)
{
    char far *name;

    name = next_text_buffer();
    switch (role) {
    case 0:
        strcpy(name, "Manager");
        break;
    case 1:
        strcpy(name, "Team Coach");
        break;
    case 2:
    case 3:
    case 4:
        strcpy(name, "League Scout");
        break;
    case 5:
        strcpy(name, "Youth Scout");
        break;
    case 6:
        strcpy(name, "Club Physio");
        break;
    }
    return name;
}

void draw_loading_box(void)
{
    new_screen("");
    set_fill_colour(16);
    fill_rect(40, 60, 288, 144);
    set_fill_colour(20);
    fill_rect(36, 56, 284, 140);
    for (d_5d9c_9cd1 = 0; d_5d9c_9cd1 <= 3; d_5d9c_9cd1++)
        draw_loading_label(d_5d9c_9cd1, 0);
}

void draw_loading_label(int line, char done)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(loading_labels[line]) + (15 - strlen(loading_labels[line]) / 2), loading_labels[line]);
    draw_text_box(5.25, line * 2.5 + 8.125, 0, done + 2, 237, buf);
}

void draw_loading_progress(int line, char done, int count, int total)
{
    char buf[320];

    sprintf(buf, "%*s", strlen(loading_labels[line]) + (15 - strlen(loading_labels[line]) / 2), loading_labels[line]);
    draw_bar(5.25, line * 2.5 + 8.125, 0, done + 2, 237, 237L * count / total, buf);
}
