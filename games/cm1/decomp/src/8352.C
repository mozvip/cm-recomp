/* @at 8352:0000 */
/* @data 5d9c:5a80 */
/* @module */

/* Overlay 5: transfers and contracts: the cup group tables, picking and approaching
 * players, bids, fees, asking prices and tribunals, contract and wage talks, the offer
 * and factfile screens, completing transfers and the shortlist, and the menu of things
 * to do with one of your own players (transfer_status_menu, whose branches' identical endings BCC
 * merges as the original only with -y: see the Makefile). */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void sort_euro_cup_groups(void);
void sort_cup_group_tables(void);
void weekly_transfer_activity(void);
void renew_ai_contracts(void);
void update_transfer_listings(void);
void ai_clubs_make_bids(int wanted);
char club_can_buy(int team);
void club_try_buy_best_target(int team);
int pick_shortlist_target(int team);
void add_players_to_shortlists(void);
void shortlist_player_at_clubs(int player);
char player_improves_team(int player, int team);
void remove_from_shortlists(int player, char all_clubs);
void prune_club_shortlist(int team);
int shortlist_slot_of(int team, int player);
void approach_player(int team, int player);
char player_accepts_move(int player, int team, int level);
int squad_level_at_club(int player, int team);
char ask_rival_approach(int club, int bidder, int player);
void negotiate_transfer_fee(int player);
long make_fee_bid(int club, int player, long fee);
long set_asking_fee(int club, int player, long fee);
void negotiate_contract(int player, int club);
int player_wage_demand(int player, int team);
int board_wage_limit(int player, int team);
int contract_years_wanted(int age);
void draw_negotiation_screen(int mode, int player);
void draw_factfile_button(int player, char lit);
int edit_offer_value(int mode, int value, int lowest, int player);
void show_offer_digits(int value, char full_draw);
void print_negotiation_line(int colour, char far *text);
void complete_transfer(int player, int to, int from, long fee);
void move_player_to_club(int player, int from, int to);
void do_player_action(int player, int action);
char player_available(int player);
void transfer_status_menu(int player);

void swap_bytes(void far *a, void far *b, int n);
void far *vm_map(int handle, int page);
long max_long(long a, long b);
int contract_period_of_week(int x);
char is_human_team(int x);
char is_after_transfer_deadline(int x);
char player_wants_to_leave(int player);
char check_leave_request(int player);
char check_stay_request(int player);
void transfer_list_player(int player, char c);
void remove_from_transfer_list(int player);
void offer_new_contract(int player, int club, int v);
long round_fee(long v, char c);
void draw_progress_step(int a, char c);
void draw_progress_step_bar(int a, char c, int i, int n);
void wait_for_click(int a);
extern int current_week;
extern int loop_i;
extern int loop_j;
extern int loop_k;
extern int d_5d9c_9ecf;
extern int d_5d9c_9d8b;
extern int d_5d9c_9d89;
extern int d_5d9c_9d87;
extern int d_5d9c_9d85;
extern int home_attack_wins;
extern int away_attack_wins;
extern int domark_cup_next_week;
extern int d_5d9c_9d83;
extern int transfer_news_count;
extern int contract_years_agreed;
extern int wage_agreed;
extern int cur_player;
extern int season;
extern int asking_prices_handle;
extern char contract_agreed;
extern char in_preseason_setup;
extern long far *asking_prices;
extern unsigned char far euro_group_stats[][2][4];
extern int far euro_cup_groups[][4];
extern int far euro_group_winners[];
extern int far cup_group_winners[];
extern int far contract_expiry[];
extern int far player_wages[];
extern int far team_manager[];
extern unsigned char far domark_group_stats[][8][5];
extern int far domark_groups[][5];
extern char far is_transfer_listed[];
extern char far requested_transfer[];
extern char far is_free_transfer[];
extern unsigned char huge player_attrs[][1702];
extern unsigned char huge player_stats[][1702];
int random_below(int n);
int min_int(int a, int b);
float team_rating(int x);
int player_rating(int x);
char can_play_position(int a, int b);
int fit_outfield_players(int x);
char is_indispensable_player(int x);
int division_matches(int team);
long transfer_budget(int team);
long player_value(int p, int n);
int selection_score(int a, int team, char pos, char second);
float selection_bias(int a, int team);
extern int d_5d9c_9f31;
extern int d_5d9c_9de9;
extern int d_5d9c_9f69;
extern char d_5d9c_9b13;
extern char transfer_done;
extern char club_bought;
extern char position_ok;
extern float text_x;
extern float d_5d9c_9ab0;
extern float d_5d9c_9ab4;
extern int d_5d9c_9e8b;
extern int cur_x;
extern int best_league_slot;
extern int shortlist_slot;
extern int d_5d9c_9d77;
extern int d_5d9c_9d79;
extern int d_5d9c_9d7b;
extern unsigned char far board_confidence[];
extern unsigned char far squad_size[];
extern unsigned char far transfer_bids_made[];
extern long far team_finances[][80];
extern int far shortlists[][16];
extern int far club_coaches[];
extern unsigned char far staff_character[];
extern unsigned char far team_tactics[][3][13];
extern int far team_lineups[][2][12];
extern unsigned char far character_clash[][10];
extern char far is_unapproachable[];
extern char far player_injury_retiring[];
extern char far intl_called_up[];
void show_menu(int n, char far *title, char far *items);
void wait_menu_choice(int last);
void draw_team_label(float x, float y, int team);
void wait_ticks(int ticks);
void new_screen(char far *title);
char far *player_full_name(int player);
char far *player_surname(int player);
char check_player_approach(int player, int team);
void print_screen_line(int line, char far *s);
void flash_message(char far *s);
extern char far bid_accepted[];
extern char far bid_accepted_from1[];
extern char far bidder_first_team[];
extern int far bidding_clubs[];
extern int far bidding_clubs_from1[];
extern long far bids[];
extern char near *team_names[];
extern char d_5d9c_9b57;
extern char d_5d9c_9b58;
extern char buyer_is_human;
extern char seller_is_human;
extern char offer_accepted;
extern char tribunal_set_fee;
extern int menu_choice;
extern int negotiation_line;
extern int accepted_bidders;
extern int selected_digit;
extern int d_5d9c_9d6b;
extern int d_5d9c_9d6d;
extern int bidder_count;
extern int squad_level;
extern int humans_involved;
extern long initial_valuation;
extern long asking_fee;
extern long seller_ask;
extern long highest_bid;
extern long transfer_fee;
int max_int(int a, int b);
float min_float(float a, float b);
long min_long(long a, long b);
void player_details_screen(int player, int a, char b);
extern char far bidder_first_team_from1[];
extern int d_5d9c_9d65;
extern char redo_menu;
extern char exit_chosen;
extern char redraw_offer_panel;
extern char d_5d9c_9b54;
extern long previous_bid;
extern long current_bid;
extern char d_5d9c_9b52;
extern char factfile_clicked;
extern int selling_club;
extern int wage_limit;
extern int d_5d9c_9d4f;
extern int wage_offered;
extern int years_offered;
extern int d_5d9c_9d55;
extern int refusal_count;
extern int max_refusals;
extern int wage_demand;
extern int years_wanted;
extern int d_5d9c_9d5f;
extern int bidding_club;
extern int d_5d9c_9d63;
void set_fill_colour(int c);
void fill_rect(int x1, int y1, int x2, int y2);
void set_draw_colour(int c);
void draw_rect(int x1, int y1, int x2, int y2);
int get_mouse_x(void);
int get_mouse_y(void);
void draw_text_at(int x, int y, int colour, char far *s);
void draw_label(float x, float y, int bg, int fg, int w, char far *s);
void draw_text_box(float x, float y, int bg, int fg, int w, char far *s);
void reset_buttons(void);
void add_button(int a, float x, float y, int c, int d, int e, char far *s);
int wait_for_button(int a);
void draw_button(int a, char b);
extern char far shown_digits[];
extern char far offer_box_label[];
extern char far factfile_name[];
extern char far fixture_team_tag[];
extern int edit_limit;
extern int edit_value;
extern int d_5d9c_9d49;
extern int d_5d9c_9d4b;
extern unsigned char far *button_colours;
extern int button_colours_handle;
void scroll_rect_up(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void draw_line(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void append_player_history(int player);
void check_fee_paid_record(int player, int from, int to, long fee);
void check_fee_received_record(int player, int from, int to, long fee);
void add_transfer_news(int player, int team, char far *s);
void message_box(char far *s);
void replace_in_match_squad(int p);
int match_squad_slot(int player);
void replace_in_lineups(int p);
void try_into_match_squad(int player);
void try_into_lineups(int player);
extern int button_labels_handle;
extern char far *button_labels;
extern float club_title_x;
extern char far input_text[];
extern int d_5d9c_9daf;
extern int accounts_ems_handle;
extern int transfer_history_handle;
extern char in_main_menu;
extern int far player_rating_total[];
extern int far player_old_club_rating[];
extern char far player_moved_club[];
extern char far d_1f3e_b256[];
extern char far fined_unfairly[];
extern char far is_insured[];
extern char far transfer_fee_text[];
extern long (far *accounts_table)[80];
extern char (far *transfer_history)[82][391];
extern int d_5d9c_9f29;
extern int far squad_players[][26];
extern unsigned char far injured_count[];
extern unsigned char far fit_keeper_count[];
extern char far player_flags[][0x6a6];
extern char far player_is_picked[];
extern int far team_selection[][13];
extern int shortlist_club;
extern int human_manager_count;
extern char is_available;

/* the steps of the digits a value is set with (+/- on the offer screen) */
static int digit_steps[] = { 1, 10, 100, 1000, 10000 };

void revalue_listed_player(int player);
void pay_rise_talks(int player);
void player_fine_reaction(int player, char flag);
long insurance_premium(int player);
char confirm_yes_no(void);
unsigned find_substring(char far *s, char far *set);
extern char player_unhappy;
extern char status_menu_kind;
extern char menu_choice_done;
extern char d_5d9c_9b4f;
extern int status_choice;
extern int human_manager_index;
extern int d_5d9c_9dd7;
extern int d_5d9c_9d3d;
extern int d_5d9c_a332;
extern int refused_talks_handle;
extern long insurance_cost;
extern char (far *fined_this_week)[151];
extern char (far *talks_refused_this_week)[151];
extern char far button_label[];
extern char far disallowed_text[];
extern char far d_1f3e_bfa2[];

void sort_euro_cup_groups(void)
{
    for (loop_i = 0; loop_i <= 1; loop_i++) {
        for (loop_j = 0; loop_j <= 2; loop_j++) {
            for (loop_k = loop_j + 1; loop_k <= 3; loop_k++) {
                d_5d9c_9d8b = euro_group_stats[1][loop_i][loop_j] * 2 + euro_group_stats[2][loop_i][loop_j];
                d_5d9c_9d89 = euro_group_stats[1][loop_i][loop_k] * 2 + euro_group_stats[2][loop_i][loop_k];
                d_5d9c_9d87 = euro_group_stats[4][loop_i][loop_j];
                d_5d9c_9d85 = euro_group_stats[4][loop_i][loop_k];
                home_attack_wins = euro_group_stats[5][loop_i][loop_j];
                away_attack_wins = euro_group_stats[5][loop_i][loop_k];
                if (d_5d9c_9d8b < d_5d9c_9d89 ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - home_attack_wins < d_5d9c_9d85 - away_attack_wins) ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - home_attack_wins == d_5d9c_9d85 - away_attack_wins &&
                     d_5d9c_9d87 < d_5d9c_9d85)) {
                    swap_bytes(&euro_cup_groups[loop_i][loop_j], &euro_cup_groups[loop_i][loop_k], 2);
                    for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 5; d_5d9c_9ecf++)
                        swap_bytes(&euro_group_stats[d_5d9c_9ecf][loop_i][loop_j],
                                    &euro_group_stats[d_5d9c_9ecf][loop_i][loop_k], 1);
                }
            }
        }
    }
    if (current_week == 79) {
        euro_group_winners[0] = euro_cup_groups[0][0];
        euro_group_winners[1] = euro_cup_groups[1][0];
    }
}

void sort_cup_group_tables(void)
{
    for (loop_i = 0; loop_i <= 7; loop_i++) {
        for (loop_j = 0; loop_j <= 3; loop_j++) {
            for (loop_k = loop_j + 1; loop_k <= 4; loop_k++) {
                if (domark_group_stats[0][loop_i][loop_j] > 0)
                    d_5d9c_9d8b = domark_group_stats[1][loop_i][loop_j] * 2 + domark_group_stats[2][loop_i][loop_j];
                else
                    d_5d9c_9d8b = -1;
                if (domark_group_stats[0][loop_i][loop_k] > 0)
                    d_5d9c_9d89 = domark_group_stats[1][loop_i][loop_k] * 2 + domark_group_stats[2][loop_i][loop_k];
                else
                    d_5d9c_9d89 = -1;
                d_5d9c_9d87 = domark_group_stats[4][loop_i][loop_j];
                d_5d9c_9d85 = domark_group_stats[4][loop_i][loop_k];
                home_attack_wins = domark_group_stats[5][loop_i][loop_j];
                away_attack_wins = domark_group_stats[5][loop_i][loop_k];
                if (d_5d9c_9d8b < d_5d9c_9d89 ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - home_attack_wins < d_5d9c_9d85 - away_attack_wins) ||
                    (d_5d9c_9d8b == d_5d9c_9d89 && d_5d9c_9d87 - home_attack_wins == d_5d9c_9d85 - away_attack_wins &&
                     d_5d9c_9d87 < d_5d9c_9d85)) {
                    swap_bytes(&domark_groups[loop_i][loop_j], &domark_groups[loop_i][loop_k], 2);
                    for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 5; d_5d9c_9ecf++)
                        swap_bytes(&domark_group_stats[d_5d9c_9ecf][loop_i][loop_j],
                                    &domark_group_stats[d_5d9c_9ecf][loop_i][loop_k], 1);
                }
            }
        }
        if (current_week == 67)
            cup_group_winners[loop_i] = domark_groups[loop_i][0];
    }
    switch (current_week) {
    case 15: case 21: case 23:
        domark_cup_next_week = current_week + 2;
        break;
    case 17: case 31:
        domark_cup_next_week = current_week + 4;
        break;
    case 25: case 35: case 41: case 47: case 53:
        domark_cup_next_week = current_week + 6;
        break;
    case 59:
        domark_cup_next_week = 67;
        break;
    }
}

void weekly_transfer_activity(void)
{
    d_5d9c_9d83 = contract_period_of_week(current_week);
    transfer_news_count = 0;
    renew_ai_contracts();
    if (is_after_transfer_deadline(current_week) == 0) {
        update_transfer_listings();
        add_players_to_shortlists();
        ai_clubs_make_bids((d_5d9c_9d83 < 5 ? 18 : 0) + (current_week == 67 ? 25 : 0) + 15);
    }
    if (transfer_news_count > 0)
        wait_for_click(0);
}

void renew_ai_contracts(void)
{
    int wage;

    d_5d9c_9d83 = contract_period_of_week(current_week);
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        if (is_human_team(player_attrs[18][cur_player]) == 0) {
            if (contract_expiry[cur_player] == 0) {
                if (is_transfer_listed[cur_player] == 0 && player_wants_to_leave(cur_player) == 0) {
                    if (player_available(cur_player) == 0) {
                        negotiate_contract(cur_player, player_attrs[18][cur_player]);
                        if (contract_agreed) {
                            contract_expiry[cur_player] = (season + contract_years_agreed) * 100 + d_5d9c_9d83;
                            player_wages[cur_player] = wage_agreed;
                            remove_from_shortlists(cur_player, 0);
                        }
                    } else
                        transfer_list_player(cur_player, 0);
                }
            } else {
                wage = player_wage_demand(cur_player, player_attrs[18][cur_player]);
                if (player_wages[cur_player] < wage)
                    player_wages[cur_player] = wage;
            }
        } else if (contract_expiry[cur_player] == 0 && !is_transfer_listed[cur_player] && !player_wants_to_leave(cur_player))
            offer_new_contract(cur_player, player_attrs[18][cur_player],
                        team_manager[player_attrs[18][cur_player]] - 646);
    }
}

void update_transfer_listings(void)
{
    if (in_preseason_setup) {
        draw_progress_step(5, 0);
        draw_progress_step(6, 0);
    }
    d_5d9c_9d83 = contract_period_of_week(current_week);
    for (cur_player = 0; cur_player <= 1699; cur_player++) {
        unsigned char club;
        int threshold;

        club = player_attrs[18][cur_player];
        if (in_preseason_setup)
            draw_progress_step_bar(6, -1, cur_player, 1699);
        if ((cur_player + 1) % 4 != d_5d9c_9d83 % 4 && in_preseason_setup == 0)
            continue;
        if (is_human_team(club) && in_preseason_setup)
            continue;
        if (is_transfer_listed[cur_player] == 0) {
            if (player_stats[19][cur_player] < 2) {
                threshold = is_human_team(club) ? 2 : 0;
                if (player_stats[14][cur_player] > threshold && player_wants_to_leave(cur_player)) {
                    if (check_leave_request(cur_player))
                        transfer_list_player(cur_player, -1);
                    else
                        player_stats[14][cur_player] = 0;
                    player_stats[19][cur_player]++;
                }
            }
        } else if (is_transfer_listed[cur_player] && requested_transfer[cur_player]) {
            threshold = is_human_team(club) ? 2 : 0;
            if (player_stats[15][cur_player] > threshold &&
                player_wants_to_leave(cur_player) == 0) {
                if (check_stay_request(cur_player))
                    remove_from_transfer_list(cur_player);
                else
                    player_stats[15][cur_player] = 0;
            }
        }
        if (is_transfer_listed[cur_player] == 0) {
            if (is_human_team(club) == 0 && player_available(cur_player))
                transfer_list_player(cur_player, 0);
        } else if (is_transfer_listed[cur_player] && requested_transfer[cur_player] == 0 && is_human_team(club) == 0) {
            if (player_available(cur_player)) {
                if (is_free_transfer[cur_player] == 0 &&
                    (player_stats[11][cur_player] == 4 || player_stats[11][cur_player] == 8)) {
                    asking_prices = vm_map(asking_prices_handle, 1);
                    asking_prices[cur_player] = max_long(round_fee(asking_prices[cur_player] * 0.75, -1), 1000L);
                    if (asking_prices[cur_player] < 10000L) {
                        asking_prices[cur_player] = 0;
                        is_free_transfer[cur_player] = -1;
                    }
                }
            } else
                remove_from_transfer_list(cur_player);
        }
    }
}

void ai_clubs_make_bids(int wanted)
{
    float best_score = 0;
    int deals = 0;
    int tries;

    for (d_5d9c_9f31 = 0; d_5d9c_9f31 <= 79; d_5d9c_9f31++) {
        if ((squad_size[d_5d9c_9f31] < division_matches(d_5d9c_9f31) - 1 || fit_outfield_players(d_5d9c_9f31) < 14)
            && is_human_team(d_5d9c_9f31) == 0 && club_can_buy(d_5d9c_9f31)) {
            club_try_buy_best_target(d_5d9c_9f31);
            if (club_bought)
                deals++;
        }
    }
    for (tries = 0; deals < wanted && tries < 80; tries++) {
        d_5d9c_9f31 = -1;
        for (d_5d9c_9de9 = 1; d_5d9c_9de9 <= 10; d_5d9c_9de9++) {
            d_5d9c_9f69 = random_below(80);
            switch (d_5d9c_9f69 / 20) {
            case 0:
                d_5d9c_9b13 = team_finances[0][d_5d9c_9f69] > 3000000L ? -1 : 0;
                break;
            case 1:
                d_5d9c_9b13 = team_finances[0][d_5d9c_9f69] > 1000000L ? -1 : 0;
                break;
            case 2:
            case 3:
                d_5d9c_9b13 = team_finances[0][d_5d9c_9f69] > 500000L ? -1 : 0;
                break;
            }
            text_x = (shortlists[d_5d9c_9f69][0] * 0.5 + (100 - board_confidence[d_5d9c_9f69]) * 0.1
                           + division_matches(d_5d9c_9f69) - squad_size[d_5d9c_9f69] + random_below(5))
                          * (d_5d9c_9b13 ? 3 : 1);
            if (text_x > best_score || d_5d9c_9f31 == -1) {
                best_score = text_x;
                d_5d9c_9f31 = d_5d9c_9f69;
            }
        }
        if (is_human_team(d_5d9c_9f31) == 0 && club_can_buy(d_5d9c_9f31)) {
            club_try_buy_best_target(d_5d9c_9f31);
            if (club_bought)
                deals++;
        }
    }
}

char club_can_buy(int team)
{
    char can_buy = 0;

    if (transfer_bids_made[team] < 3 && shortlists[team][0] > 0 && squad_size[team] < 26
        && board_confidence[team] >= 30 && club_coaches[team] < 0x28a)
        can_buy = -1;
    return can_buy;
}

void club_try_buy_best_target(int team)
{
    club_bought = 0;
    cur_player = pick_shortlist_target(team);
    if (cur_player > -1) {
        approach_player(team, cur_player);
        if (transfer_done)
            club_bought = -1;
    }
}

int pick_shortlist_target(int team)
{
    int best_gain;

    cur_player = -1;
    best_gain = 0;
    for (loop_i = 1; loop_i <= shortlists[team][0]; loop_i++) {
        loop_j = shortlists[team][loop_i];
        if (is_unapproachable[loop_j] == 0 && player_injury_retiring[loop_j] == 0 && is_indispensable_player(loop_j) == 0
            && player_value(loop_j, -1) <= transfer_budget(team)) {
            for (d_5d9c_9e8b = 0; d_5d9c_9e8b <= 1; d_5d9c_9e8b++) {
                for (cur_x = 0; cur_x <= 10; cur_x++) {
                    best_league_slot = team_tactics[team][0][cur_x];
                    if (can_play_position(loop_j, best_league_slot)) {
                        d_5d9c_9d7b = selection_score(team_lineups[team][d_5d9c_9e8b][cur_x], team, best_league_slot,
                                                  d_5d9c_9e8b == 1 ? 1 : 0)
                                      * selection_bias(team_lineups[team][d_5d9c_9e8b][cur_x], team);
                        if ((d_5d9c_9d79 = selection_score(loop_j, team, best_league_slot, d_5d9c_9e8b == 1 ? 1 : 0)
                                           * selection_bias(loop_j, team)) - d_5d9c_9d7b > best_gain
                            && (d_5d9c_9e8b == 0 || cur_player == -1)) {
                            cur_player = loop_j;
                            best_gain = d_5d9c_9d79 - d_5d9c_9d7b;
                        }
                    }
                }
                d_5d9c_9e8b += cur_player != -1;
            }
        }
    }
    return cur_player;
}

void add_players_to_shortlists(void)
{
    int i;
    int listed;

    listed = 0;
    for (cur_player = 0; cur_player <= 1699; cur_player++)
        if (is_transfer_listed[cur_player] && is_unapproachable[cur_player] == 0 && player_stats[23][cur_player] < 3)
            listed++;
    for (i = 1; i <= (in_preseason_setup ? 1700 : 25); i++) {
        do {
            if (in_preseason_setup)
                cur_player = i - 1;
            else
                cur_player = random_below(1700);
            position_ok = 0;
            if (player_stats[23][cur_player] < 3 && is_unapproachable[cur_player] == 0) {
                if (in_preseason_setup == 0) {
                    if (min_int(15, listed) < i
                        && (player_attrs[23][cur_player] > 1 || intl_called_up[cur_player]))
                        position_ok = -1;
                } else if (in_preseason_setup) {
                    if (fabs(player_rating(cur_player) - team_rating(player_attrs[18][cur_player])) > 3)
                        position_ok = -1;
                }
                if (is_transfer_listed[cur_player])
                    position_ok = -1;
            }
        } while (position_ok == 0 && in_preseason_setup == 0);
        if (position_ok)
            shortlist_player_at_clubs(cur_player);
    }
}

void shortlist_player_at_clubs(int player)
{
    char tried[80];

    memset(tried, 0, 80);
    for (d_5d9c_9d77 = 1; d_5d9c_9d77 <= 40; d_5d9c_9d77++) {
        d_5d9c_9f69 = random_below(80);
        if (tried[d_5d9c_9f69] == 0) {
            if (player_attrs[18][player] != d_5d9c_9f69 && is_human_team(d_5d9c_9f69) == 0
                && shortlists[d_5d9c_9f69][0] < 10
                && character_clash[staff_character[team_manager[d_5d9c_9f69]]][player_stats[17][player]] < 8
                && shortlist_slot_of(d_5d9c_9f69, player) == 0 && club_coaches[d_5d9c_9f69] < 0x28a) {
                d_5d9c_9ab4 = player_rating(player);
                d_5d9c_9ab0 = team_rating(d_5d9c_9f69);
                if (d_5d9c_9ab0 - 6 < d_5d9c_9ab4 && d_5d9c_9ab0 + 6 > d_5d9c_9ab4 && player_improves_team(player, d_5d9c_9f69)) {
                    player_stats[23][player]++;
                    if (player_stats[23][player] == 3)
                        d_5d9c_9d77 = 40;
                    shortlists[d_5d9c_9f69][0]++;
                    shortlists[d_5d9c_9f69][shortlists[d_5d9c_9f69][0]] = player;
                }
            }
            tried[d_5d9c_9f69] = -1;
        }
    }
}

char player_improves_team(int player, int team)
{
    char improves = 0;

    for (d_5d9c_9e8b = 0; d_5d9c_9e8b <= 1; d_5d9c_9e8b++) {
        if (player_accepts_move(player, team, d_5d9c_9e8b + 1)) {
            for (cur_x = 0; cur_x <= 10; cur_x++) {
                best_league_slot = team_tactics[team][0][cur_x];
                if (can_play_position(player, best_league_slot)) {
                    d_5d9c_9d7b = selection_score(team_lineups[team][d_5d9c_9e8b][cur_x], team, best_league_slot,
                                              d_5d9c_9e8b == 1 ? 1 : 0)
                                  * selection_bias(team_lineups[team][d_5d9c_9e8b][cur_x], team);
                    if ((d_5d9c_9d79 = selection_score(player, team, best_league_slot, d_5d9c_9e8b == 1 ? 1 : 0)
                                       * selection_bias(player, team)) - d_5d9c_9d7b > 0) {
                        improves = -1;
                        cur_x = 10;
                        d_5d9c_9e8b = 1;
                    }
                }
            }
        }
    }
    return improves;
}

void remove_from_shortlists(int player, char all_clubs)
{
    if (player_stats[23][player] > 0) {
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
            if ((is_human_team(d_5d9c_9f69) == 0 || player_attrs[18][player] == d_5d9c_9f69 || all_clubs)
                && shortlist_slot_of(d_5d9c_9f69, player) > 0) {
                if (is_human_team(d_5d9c_9f69) == 0)
                    player_stats[23][player] -= 1;
                shortlist_slot = shortlist_slot_of(d_5d9c_9f69, player);
                shortlists[d_5d9c_9f69][shortlist_slot] = shortlists[d_5d9c_9f69][shortlists[d_5d9c_9f69][0]];
                shortlists[d_5d9c_9f69][0]--;
            }
        }
    }
}

void prune_club_shortlist(int team)
{
    int slot;

    for (slot = 1; slot <= shortlists[team][0]; slot++) {
        if (player_improves_team(shortlists[team][slot], team) == 0) {
            player_stats[23][shortlists[team][slot]] -= 1;
            shortlists[team][slot] = shortlists[team][shortlists[team][0]];
            shortlists[team][0]--;
        }
    }
}

int shortlist_slot_of(int team, int player)
{
    int pos = 0;
    int slot;

    for (slot = 1; slot <= shortlists[team][0]; slot++)
        if (shortlists[team][slot] == player) {
            pos = slot;
            slot = shortlists[team][0];
        }
    return pos;
}

void approach_player(int team, int player)
{
    char agreed;
    char use_popup;
    unsigned char seller;
    int buyer;
    float buyer_rep;
    char name[80];
    char stays[80];
    char buf[320];
    char but[80];

    buyer_rep = 0;
    memset(bidder_first_team, 0, 80);
    memset(bid_accepted, 0, 80);
    tribunal_set_fee = 0;
    agreed = 0;
    transfer_done = 0;
    offer_accepted = 0;
    buyer = -1;
    seller = player_attrs[18][player];
    seller_is_human = is_human_team(seller);
    buyer_is_human = is_human_team(team);
    humans_involved = -seller_is_human - buyer_is_human;
again:
    d_5d9c_9b58 = 0;
    if (buyer_is_human != 0) {
        new_screen("Buy Player");
        draw_team_label(1.0, 4.0, team);
        sprintf(buf, "Board limit on spending : %ld", transfer_budget(team));
        print_screen_line(7, buf);
        sprintf(buf, "Approach %s ?", player_full_name(player));
        print_screen_line(9, buf);
        show_menu(12, "", "*Exit|Approach|");
menu:
        wait_menu_choice(1);
        if (menu_choice != 1)
            d_5d9c_9b58 = 0;
        else
            d_5d9c_9b58 = -1;
    } else
        d_5d9c_9b58 = -1;
    if (d_5d9c_9b58) {
        strcpy(name, player_surname(player));
        if (check_player_approach(player, team)) {
            if (seller_is_human == 0 && buyer_is_human != 0) {
                sprintf(buf, "%s allow approach", (char far *)team_names[seller]);
                flash_message(buf);
            }
            if (player_accepts_move(player, team, squad_level = squad_level_at_club(player, team))) {
                if (buyer_is_human != 0 || seller_is_human != 0) {
                    sprintf(buf, "%s is keen on the move", (char far *)name);
                    flash_message(buf);
                }
                agreed = -1;
                goto out;
            }
            if (buyer_is_human == 0 && seller_is_human == 0)
                goto out;
            sprintf(buf, "%s rejects the move", (char far *)name);
            if ((buyer_is_human && seller_is_human) == 0) {
                sprintf(but, "But %s", (char far *)buf);
                strcpy(buf, but);
            }
            flash_message(buf);
            if (buyer_is_human != 0) {
                if (seller_is_human == 0)
                    goto menu;
                goto again;
            }
        } else if (buyer_is_human != 0) {
            if (seller_is_human != 0)
                goto again;
            sprintf(buf, "%s refuse approach", (char far *)team_names[seller]);
            flash_message(buf);
            goto menu;
        }
    }
out:
    if (agreed == 0) {
        if (buyer_is_human == 0) {
            player_stats[23][player] -= 1;
            shortlist_slot = shortlist_slot_of(team, player);
            shortlists[team][shortlist_slot] = shortlists[team][shortlists[team][0]];
            shortlists[team][0]--;
        }
    } else {
        bidder_first_team[0] = -1;
        bidding_clubs[0] = team;
        bidder_count = 1;
        transfer_bids_made[team]++;
        for (d_5d9c_9d6b = 0; d_5d9c_9d6b <= 79; d_5d9c_9d6b++) {
            if (d_5d9c_9d6b != team && club_can_buy(d_5d9c_9d6b) && shortlist_slot_of(d_5d9c_9d6b, player) > 0) {
                if (is_human_team(d_5d9c_9d6b))
                    d_5d9c_9b57 = ask_rival_approach(d_5d9c_9d6b, team, player) ? -1 : 0;
                else
                    d_5d9c_9b57 = player_attrs[12][player] != 0 || transfer_budget(d_5d9c_9d6b) >= player_value(player, -1) && random_below(3) > 0 ? -1 : 0;
                if (d_5d9c_9b57 != 0) {
                    if (player_accepts_move(player, d_5d9c_9d6b, squad_level = squad_level_at_club(player, d_5d9c_9d6b)) == 0) {
                        if (is_human_team(d_5d9c_9d6b))
                            flash_message("He is not interested");
                        else {
                            player_stats[23][player] -= 1;
                            shortlist_slot = shortlist_slot_of(d_5d9c_9d6b, player);
                            shortlists[d_5d9c_9d6b][shortlist_slot] = shortlists[d_5d9c_9d6b][shortlists[d_5d9c_9d6b][0]];
                            shortlists[d_5d9c_9d6b][0]--;
                        }
                    } else {
                        if (is_human_team(d_5d9c_9d6b)) {
                            flash_message("He is interested");
                            humans_involved++;
                        }
                        bidder_first_team[bidder_count] = squad_level == 1;
                        bidding_clubs[bidder_count] = d_5d9c_9d6b;
                        bidder_count++;
                        transfer_bids_made[d_5d9c_9d6b]++;
                    }
                }
            }
        }
        if (is_free_transfer[player] == 0) {
            highest_bid = 0;
            seller_ask = 0;
            asking_fee = round_fee(player_value(player, seller), -1);
            initial_valuation = asking_fee;
            if (humans_involved > 0) {
                negotiation_line = 0;
                selected_digit = 7;
                draw_negotiation_screen(0, player);
                if (is_transfer_listed[player])
                    sprintf(buf, "%s is valued at %ld", player_surname(player), asking_fee);
                else
                    sprintf(buf, "%s is not yet valued", player_surname(player));
                print_negotiation_line(1, buf);
            }
            negotiate_transfer_fee(player);
            use_popup = 0;
        } else {
            if (humans_involved > 0) {
                for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= bidder_count; d_5d9c_9d6d++) {
                    if (is_human_team(d_5d9c_9f69 = bidding_clubs_from1[d_5d9c_9d6d]) == 0) {
                        sprintf(buf, "%s also want him", (char far *)team_names[d_5d9c_9f69]);
                        flash_message(buf);
                    }
                }
            }
            use_popup = -1;
        }
        accepted_bidders = 0;
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= bidder_count; d_5d9c_9d6d++) {
            d_5d9c_9f69 = bidding_clubs_from1[d_5d9c_9d6d];
            if (bid_accepted_from1[d_5d9c_9d6d] != 0 || is_free_transfer[player] != 0) {
                d_5d9c_9ab0 = team_rating(d_5d9c_9f69) + (d_5d9c_9f69 == team ? 0.5 : 0);
                if (d_5d9c_9ab0 > buyer_rep || buyer == -1) {
                    buyer_rep = d_5d9c_9ab0;
                    buyer = d_5d9c_9f69;
                    if (is_free_transfer[player] == 0)
                        transfer_fee = bids[d_5d9c_9d6d];
                    else
                        transfer_fee = 0;
                }
                accepted_bidders++;
            }
        }
        sprintf(stays, "He stays at %s", (char far *)team_names[seller]);
        if (buyer > -1) {
            if (humans_involved > 0) {
                wait_ticks(50);
                if (accepted_bidders > 1) {
                    sprintf(buf, "He decides to join %s", (char far *)team_names[buyer]);
                    if (use_popup)
                        flash_message(buf);
                    else
                        print_negotiation_line(6, buf);
                }
            }
            negotiate_contract(player, buyer);
            if (is_human_team(buyer))
                use_popup = 0;
            if (contract_agreed) {
                if (humans_involved > 0) {
                    sprintf(buf, "He signs for %s", (char far *)team_names[buyer]);
                    if (use_popup)
                        flash_message(buf);
                    else
                        print_negotiation_line(6, buf);
                }
                complete_transfer(player, buyer, seller, transfer_fee);
                transfer_done = -1;
            } else if (use_popup)
                flash_message(stays);
            else
                print_negotiation_line(6, stays);
        } else if (humans_involved > 0)
            print_negotiation_line(6, stays);
    }
}

char player_accepts_move(int player, int team, int level)
{
    char willing;
    float cur_rep;
    float new_rep;
    int wanted_level;
    unsigned char cur_level;
    unsigned char status;

    willing = 0;
    status = player_stats[11][player];
    d_5d9c_9d65 = character_clash[player_stats[17][player]][staff_character[team_manager[team]]];
    if (d_5d9c_9d65 < 8) {
        cur_rep = team_rating(player_attrs[18][player]);
        new_rep = team_rating(team);
        cur_level = player_attrs[23][player];
        wanted_level = max_int(cur_level, 1 - (status > 8 ? 2 : 1) * (is_transfer_listed[player] ? -1 : 0));
        if (level < wanted_level && (wanted_level - level + (new_rep + 1) >= cur_rep || player_rating(player) < 11) ||
            level == wanted_level && level < 3 && new_rep > cur_rep ||
            level > wanted_level && level < 3 && cur_rep + 1 <= new_rep ||
            cur_rep + 2 <= new_rep)
            willing = -1;
    }
    return willing;
}

int squad_level_at_club(int player, int team)
{
    squad_level = 3;
    for (d_5d9c_9e8b = 0; d_5d9c_9e8b <= 1; d_5d9c_9e8b++) {
        for (cur_x = 0; cur_x <= 10; cur_x++) {
            best_league_slot = team_tactics[team][0][cur_x];
            if (can_play_position(player, best_league_slot)) {
                d_5d9c_9d7b = selection_score(team_lineups[team][d_5d9c_9e8b][cur_x], team, best_league_slot,
                                          d_5d9c_9e8b == 1 ? 1 : 0);
                d_5d9c_9d79 = selection_score(player, team, best_league_slot, d_5d9c_9e8b == 1 ? 1 : 0);
                if (d_5d9c_9d79 > d_5d9c_9d7b) {
                    squad_level = d_5d9c_9e8b + 1;
                    cur_x = 10;
                    d_5d9c_9e8b = 1;
                }
            }
        }
    }
    return squad_level;
}

char ask_rival_approach(int club, int bidder, int player)
{
    char buf[320];

    do {
        redo_menu = 0;
        d_5d9c_9b57 = 0;
        sprintf(buf, "%s bid", (char far *)team_names[bidder]);
        new_screen(buf);
        draw_team_label(1, 4.0, club);
        sprintf(buf, "%s want %s", (char far *)team_names[bidder], player_full_name(player));
        print_screen_line(7, buf);
        print_screen_line(9, "He is on your shortlist");
        sprintf(buf, "Approach %s ?", player_surname(player));
        print_screen_line(11, buf);
        show_menu(14, "", "View Factfile|Ignore|Approach|");
        wait_menu_choice(2);
        if (menu_choice == 0) {
            do
                player_details_screen(player, -1, 0);
            while (!exit_chosen);
            exit_chosen = 0;
            redo_menu = -1;
        } else if (menu_choice == 2)
            d_5d9c_9b57 = -1;
    } while (redo_menu != 0);
    return d_5d9c_9b57;
}

void negotiate_transfer_fee(int player)
{
    long bid;
    char any_refused;
    char buf[320];

    for (d_5d9c_9d77 = 1; d_5d9c_9d77 <= 3; d_5d9c_9d77++) {
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= bidder_count; d_5d9c_9d6d++) {
            if (bid_accepted_from1[d_5d9c_9d6d] != 0 && bids[d_5d9c_9d6d] < highest_bid)
                bid_accepted_from1[d_5d9c_9d6d] = 0;
            if (bid_accepted_from1[d_5d9c_9d6d] == 0) {
                d_5d9c_9f69 = bidding_clubs_from1[d_5d9c_9d6d];
                if (d_5d9c_9d77 == 1) {
                    if (buyer_is_human != 0 || seller_is_human != 0 || contract_expiry[player] == 0)
                        bid = round_fee(min_float(player_value(player, d_5d9c_9f69), transfer_budget(d_5d9c_9f69)), 0);
                    else
                        bid = min_long(asking_fee, transfer_budget(d_5d9c_9f69));
                    if (bid > asking_fee)
                        bid = asking_fee;
                } else
                    bid = bids[d_5d9c_9d6d];
                redraw_offer_panel = humans_involved > 0 ? -1 : 0;
                d_5d9c_9b54 = bidder_first_team_from1[d_5d9c_9d6d];
                bids[d_5d9c_9d6d] = make_fee_bid(d_5d9c_9f69, player, bid);
                if (humans_involved > 0) {
                    if (is_human_team(d_5d9c_9f69) == 0)
                        wait_ticks(25);
                    sprintf(buf, "%s make a bid of %ld", (char far *)team_names[d_5d9c_9f69],
                            bids[d_5d9c_9d6d]);
                    print_negotiation_line(1, buf);
                }
                if (bids[d_5d9c_9d6d] > highest_bid)
                    highest_bid = bids[d_5d9c_9d6d];
            }
        }
        if (d_5d9c_9d77 > 1)
            asking_fee = seller_ask;
        if (asking_fee < highest_bid)
            asking_fee = highest_bid;
        redraw_offer_panel = humans_involved > 0 ? -1 : 0;
        seller_ask = set_asking_fee(player_attrs[18][player], player, asking_fee);
        any_refused = 0;
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= bidder_count; d_5d9c_9d6d++) {
            d_5d9c_9f69 = bidding_clubs_from1[d_5d9c_9d6d];
            if (bids[d_5d9c_9d6d] == seller_ask) {
                if (bid_accepted_from1[d_5d9c_9d6d] == 0) {
                    bid_accepted_from1[d_5d9c_9d6d] = -1;
                    offer_accepted = -1;
                    if (humans_involved > 0) {
                        wait_ticks(25);
                        sprintf(buf, "%s offer is accepted", (char far *)team_names[d_5d9c_9f69]);
                        print_negotiation_line(1, buf);
                    }
                }
            } else {
                any_refused = -1;
                if (humans_involved > 0) {
                    wait_ticks(25);
                    sprintf(buf, "%s offer is refused", (char far *)team_names[d_5d9c_9f69]);
                    print_negotiation_line(1, buf);
                }
            }
        }
        if (any_refused == 0)
            d_5d9c_9d77 = 3;
    }
    if (contract_expiry[player] == 0 && offer_accepted == 0) {
        transfer_fee = round_fee(player_value(player, -1), 0);
        if (transfer_fee > seller_ask)
            transfer_fee = seller_ask;
        if (humans_involved > 0) {
            wait_ticks(25);
            sprintf(buf, "Tribunal sets fee at %ld", transfer_fee);
            print_negotiation_line(6, buf);
        }
        tribunal_set_fee = -1;
        for (d_5d9c_9d6d = 1; d_5d9c_9d6d <= bidder_count; d_5d9c_9d6d++) {
            d_5d9c_9f69 = bidding_clubs_from1[d_5d9c_9d6d];
            if (transfer_budget(d_5d9c_9f69) >= transfer_fee) {
                bids[d_5d9c_9d6d] = transfer_fee;
                bid_accepted_from1[d_5d9c_9d6d] = -1;
                offer_accepted = -1;
            } else if (humans_involved > 0) {
                sprintf(buf, "The %s board refuse to spend that much", (char far *)team_names[d_5d9c_9f69]);
                print_negotiation_line(1, buf);
            }
        }
    } else if (offer_accepted == 0 && humans_involved > 0)
        print_negotiation_line(6, "No agreement is reached");
}

long make_fee_bid(int club, int player, long fee)
{
    current_bid = fee;
    if (is_human_team(club)) {
        do {
            position_ok = -1;
            d_5d9c_9d63 = current_bid / 1000;
            bidding_club = club;
            d_5d9c_9d5f = edit_offer_value(0, d_5d9c_9d63, 0, player);
            if (factfile_clicked) {
                do
                    player_details_screen(player, -1, 0);
                while (!exit_chosen);
                exit_chosen = 0;
                position_ok = 0;
                draw_negotiation_screen(0, player);
            }
            current_bid = (long)d_5d9c_9d5f * 1000;
            if (position_ok && transfer_budget(club) < current_bid) {
                print_negotiation_line(1, "The board refuse to spend that much");
                position_ok = 0;
            }
        } while (!position_ok);
    } else {
        previous_bid = current_bid;
        if (random_below(3) > 0)
            current_bid = current_bid * (random_below(10) / 100.0 + 1.1);
        if (current_bid < highest_bid)
            current_bid = min_long(highest_bid, initial_valuation * (d_5d9c_9b54 ? 2.5 : 1.5));
        if (current_bid > seller_ask && bidder_count == 1)
            current_bid = seller_ask;
        if (current_bid > seller_ask * 0.95)
            current_bid = seller_ask;
        if (transfer_budget(club) < current_bid)
            current_bid = transfer_budget(club);
        if (current_bid != seller_ask)
            current_bid = round_fee(current_bid, 0);
        if (current_bid < previous_bid)
            current_bid = previous_bid;
    }
    return current_bid;
}

long set_asking_fee(int club, int player, long fee)
{
    int min_k;
    long first_ask;
    int saved_club;

    saved_club = selling_club;
    selling_club = club;
    seller_ask = fee;
    if (is_human_team(selling_club)) {
        do {
            position_ok = -1;
            d_5d9c_9d63 = seller_ask / 1000;
            min_k = highest_bid / 1000;
            d_5d9c_9d5f = edit_offer_value(1, d_5d9c_9d63, min_k, player);
            if (factfile_clicked) {
                do
                    player_details_screen(player, -1, 0);
                while (!exit_chosen);
                exit_chosen = 0;
                position_ok = 0;
                draw_negotiation_screen(0, player);
            }
            seller_ask = (long)d_5d9c_9d5f * 1000;
            if (position_ok && seller_ask < player_value(player, -1) * 0.5) {
                print_negotiation_line(1, "The board expect more for him");
                position_ok = 0;
            }
        } while (!position_ok);
    } else {
        first_ask = seller_ask;
        if (random_below(2) == 0)
            seller_ask = seller_ask * (0.9 - random_below(10) / 100);
        if (seller_ask * 0.95 < highest_bid)
            seller_ask = highest_bid;
        else if (seller_ask > highest_bid)
            seller_ask = round_fee(seller_ask, 0);
        if (seller_ask > first_ask)
            seller_ask = first_ask;
    }
    selling_club = saved_club;
    return seller_ask;
}

void negotiate_contract(int player, int club)
{
    years_wanted = contract_years_wanted(player_attrs[17][player]);
    wage_demand = player_wage_demand(player, club);
    max_refusals = player_attrs[14][player] / 10 + 2.5;
    contract_agreed = 0;
    if (is_human_team(club) && d_5d9c_9b52 == 0) {
        char buf[320];

        negotiation_line = 1;
        selected_digit = 7;
        draw_negotiation_screen(2, player);
        sprintf(buf, "He wants a %d year contract", years_wanted);
        print_negotiation_line(1, buf);
        refusal_count = 0;
        d_5d9c_9d55 = 10;
        years_offered = -1;
        do {
            do {
                position_ok = -1;
                d_5d9c_9d63 = years_offered == -1 ? years_wanted : years_offered;
                d_5d9c_9d5f = edit_offer_value(2, d_5d9c_9d63, 1, player);
                if (factfile_clicked) {
                    do
                        player_details_screen(player, -1, 0);
                    while (!exit_chosen);
                    exit_chosen = 0;
                    position_ok = 0;
                    draw_negotiation_screen(2, player);
                }
                years_offered = d_5d9c_9d5f;
            } while (!position_ok);
            if (years_offered != years_wanted &&
                (random_below(abs(years_wanted - years_offered) + 2) > 0 ||
                 abs(years_wanted - years_offered) >= d_5d9c_9d55)) {
                sprintf(buf, "He refuses %d year offer", years_offered);
                print_negotiation_line(1, buf);
                refusal_count++;
                if (refusal_count <= max_refusals)
                    d_5d9c_9d55 = abs(years_wanted - years_offered);
                position_ok = 0;
            }
        } while (refusal_count <= max_refusals && position_ok == 0);
        if (position_ok) {
            sprintf(buf, "He accepts %d year offer", years_offered);
            print_negotiation_line(1, buf);
            sprintf(buf, "He wants %d per week", wage_demand);
            print_negotiation_line(1, buf);
            contract_years_agreed = years_offered;
            redraw_offer_panel = -1;
            refusal_count = 0;
            wage_offered = -1;
            d_5d9c_9d4f = 0;
            wage_limit = board_wage_limit(player, club);
            do {
                do {
                    position_ok = -1;
                    d_5d9c_9d63 = wage_offered == -1 ? wage_demand : wage_offered;
                    d_5d9c_9d5f = edit_offer_value(3, d_5d9c_9d63, 100, player);
                    if (factfile_clicked) {
                        do
                            player_details_screen(player, -1, 0);
                        while (!exit_chosen);
                        exit_chosen = 0;
                        position_ok = 0;
                        draw_negotiation_screen(2, player);
                    }
                    wage_offered = d_5d9c_9d5f;
                    if (position_ok && wage_offered > wage_limit) {
                        print_negotiation_line(1, "The board refuse to spend that per week");
                        position_ok = 0;
                    }
                } while (!position_ok);
                if ((wage_demand * (1 - random_below(6) * 0.05) > wage_offered ||
                     wage_offered <= d_5d9c_9d4f || player_wages[player] > wage_offered &&
                     player_attrs[17][player] < 30) &&
                    abs(wage_offered - wage_demand) > random_below(20) + 25) {
                    sprintf(buf, "He wants more than %d per week", wage_offered);
                    print_negotiation_line(1, buf);
                    refusal_count++;
                    if (refusal_count <= max_refusals)
                        d_5d9c_9d4f = wage_offered;
                    position_ok = 0;
                }
            } while (refusal_count <= max_refusals && position_ok == 0);
            if (position_ok) {
                sprintf(buf, "He accepts %d per week", wage_offered);
                print_negotiation_line(1, buf);
                wage_agreed = wage_offered;
                contract_agreed = -1;
            }
        }
        if (contract_agreed == 0)
            print_negotiation_line(6, "No deal");
    } else {
        contract_years_agreed = years_wanted;
        wage_agreed = wage_demand;
        contract_agreed = -1;
    }
}

int player_wage_demand(int player, int team)
{
    unsigned char extra;

    extra = player_stats[18][player];
    d_5d9c_9d4b = (player_attrs[0][player] * 4 + extra) / 200;
    d_5d9c_9d49 = max_int((int)(exp(d_5d9c_9d4b) * 42.0) * ((team_rating(team) - 12.0) * 0.075 + 1), 100);
    d_5d9c_9d49 = d_5d9c_9d49 / 25 * 25;
    if (player_wages[player] > d_5d9c_9d49 && player_attrs[17][player] < 30)
        d_5d9c_9d49 = player_wages[player];
    return d_5d9c_9d49;
}

int board_wage_limit(int player, int team)
{
    unsigned char extra;

    extra = player_stats[18][player];
    d_5d9c_9d4b = (player_attrs[0][player] * 4 + extra) / 200;
    wage_limit = max_int((int)(exp(d_5d9c_9d4b) * 42.0) * ((team_rating(team) - 12.0) * 0.075 + 1) * 1.5, 100) / 50.0 * 50.0;
    if (player_wages[player] > wage_limit)
        wage_limit = player_wages[player];
    return wage_limit;
}

int contract_years_wanted(int age)
{
    years_wanted = random_below(5) + 1;
    if (age >= 27 && age <= 31)
        years_wanted = min_int(32 - age, years_wanted);
    else if (age > 31)
        years_wanted = min_int(years_wanted, 2);
    return years_wanted;
}

void draw_negotiation_screen(int mode, int player)
{
    char buf[320];

    if (mode == 0) {
        sprintf(buf, "%s - Transfer Fee", player_full_name(player));
        strcpy(fixture_team_tag, "Fee Negotiations");
    } else if (mode == 1) {
        sprintf(buf, "%s - Asking Price", player_full_name(player));
        strcpy(fixture_team_tag, "Set Asking Price");
    } else if (mode == 2) {
        sprintf(buf, "%s - Contract", player_full_name(player));
        strcpy(fixture_team_tag, "Set Contract");
    } else {
        sprintf(buf, "%s - Wage Increase", player_full_name(player));
        strcpy(fixture_team_tag, "Set Weekly Wage");
    }
    new_screen(buf);
    set_fill_colour(16);
    fill_rect(14, 36, 314, 127);
    set_fill_colour(31);
    fill_rect(10, 32, 310, 123);
    set_draw_colour(19);
    draw_rect(10, 32, 310, 123);
    sprintf(buf, " %s", fixture_team_tag);
    draw_label(1.625, 5.0, 1, 2, 154, buf);
    draw_factfile_button(player, 0);
    redraw_offer_panel = -1;
}

void draw_factfile_button(int player, char lit)
{
    set_fill_colour(16);
    fill_rect(14, 135, 172, 192);
    set_fill_colour(lit ? 28 : 20);
    fill_rect(10, 131, 168, 188);
    set_draw_colour(17);
    draw_rect(10, 131, 168, 188);
    strcpy(factfile_name, player_surname(player));
    draw_text_at(79 - strlen(factfile_name) * 3 + 19, 156, 1, factfile_name);
    draw_text_at(74, 164, 1, "Factfile");
}

int edit_offer_value(int mode, int value, int lowest, int player)
{
    factfile_clicked = 0;
    edit_value = value;
    edit_limit = mode == 2 ? 5 : 9999;
    if (redraw_offer_panel != 0) {
        reset_buttons();
        set_fill_colour(16);
        fill_rect(180, 135, 314, 192);
        set_fill_colour(24);
        fill_rect(176, 131, 310, 188);
        set_draw_colour(22);
        draw_rect(176, 131, 310, 188);
        if (mode == 0)
            sprintf(offer_box_label, "%s Offer", (char far *)team_names[bidding_club]);
        else if (mode == 1)
            sprintf(offer_box_label, "%s Ask", (char far *)team_names[selling_club]);
        else if (mode == 2)
            strcpy(offer_box_label, " Length");
        else
            strcpy(offer_box_label, " Wages p/w");
        set_fill_colour(30);
        fill_rect(180, 135, 306, 150);
        draw_text_at(251 - strlen(offer_box_label) * 3, 146, 6, offer_box_label);
        add_button(2, 22.75, 19.625, 1, 14, 26, " - ");
        add_button(2, 34.875, 19.625, 1, 14, 26, " + ");
        add_button(2, 22.75, 21.75, 1, 14, 123, "      DONE");
        draw_text_box(33.125, 19.625, 14, 1, 9, mode == 2 || mode == 3 ? "" : "K");
        strcpy(shown_digits, "    ");
        show_offer_digits(edit_value, -1);
    }
    do {
        menu_choice = wait_for_button(-1);
        if (menu_choice == 1) {
            edit_value = max_int(edit_value - digit_steps[7 - selected_digit], lowest);
            show_offer_digits(edit_value, 0);
        } else if (menu_choice == 2) {
            edit_value = min_int(edit_value + digit_steps[7 - selected_digit], edit_limit);
            show_offer_digits(edit_value, 0);
        } else if (menu_choice >= 4) {
            if ((menu_choice == 7 || mode != 2) && selected_digit != menu_choice) {
                button_colours = vm_map(button_colours_handle, 1);
                button_colours[selected_digit - 1] = 0xe1;
                draw_button(selected_digit, 0);
                selected_digit = menu_choice;
                button_colours = vm_map(button_colours_handle, 1);
                button_colours[selected_digit - 1] = 1;
                draw_button(selected_digit, 0);
            }
        } else if (get_mouse_x() >= 10 && get_mouse_x() <= 168 && get_mouse_y() >= 131 && get_mouse_y() <= 188) {
            factfile_clicked = -1;
            draw_factfile_button(player, -1);
        }
    } while (menu_choice != 3 && factfile_clicked == 0);
    redraw_offer_panel = 0;
    return edit_value;
}

void show_offer_digits(int value, char full_draw)
{
    char digit[2];

    digit[1] = 0;
    sprintf(input_text, "%04d", value);
    for (d_5d9c_9ecf = 1; d_5d9c_9ecf <= 4; d_5d9c_9ecf++) {
        digit[0] = input_text[d_5d9c_9ecf - 1];
        if (shown_digits[d_5d9c_9ecf - 1] != digit[0]) {
            if (full_draw) {
                club_title_x = (d_5d9c_9ecf - 1) * 1.625 + 26.625;
                add_button(2, club_title_x, 19.625, d_5d9c_9ecf + 3 != selected_digit ? 14 : 0, 1, 8, digit);
            } else {
                button_labels = vm_map(button_labels_handle, 1);
                strcpy(button_labels + (d_5d9c_9ecf + 2) * 40, digit);
                draw_button(d_5d9c_9ecf + 3, 0);
            }
        }
    }
    strcpy(shown_digits, input_text);
}

void print_negotiation_line(int colour, char far *text)
{
    if (negotiation_line == 9) {
        for (d_5d9c_9daf = 1; d_5d9c_9daf <= 4; d_5d9c_9daf++) {
            scroll_rect_up(12, 42, 308, 121, 2, 31);
            set_draw_colour(31);
            draw_line(12, 42, 308, 42);
            draw_line(12, 43, 308, 43);
        }
        negotiation_line = 8;
    }
    draw_text_at(23, negotiation_line * 8 + 50, colour, text);
    negotiation_line++;
    if (colour == 6)
        wait_ticks(50);
}

void complete_transfer(int player, int to, int from, long fee)
{
    int saved_club;
    char buf[320];

    saved_club = from;
    selling_club = from;
    if (current_week > 4)
        append_player_history(player);
    player_stats[12][player] = player_stats[0][player];
    player_stats[13][player] = player_stats[1][player];
    player_old_club_rating[player] = player_rating_total[player];
    contract_expiry[player] = (season + contract_years_agreed) * 100 + contract_period_of_week(current_week);
    player_wages[player] = wage_agreed;
    player_stats[11][player] = 0;
    is_transfer_listed[player] = 0;
    is_unapproachable[player] = -1;
    requested_transfer[player] = 0;
    player_moved_club[player] = -1;
    is_free_transfer[player] = 0;
    d_1f3e_b256[player] = 0;
    fined_unfairly[player] = 0;
    is_insured[player] = 0;
    if (selling_club != to) {
        if (player_attrs[0][player] > player_attrs[15][player])
            player_attrs[15][player] = player_attrs[0][player];
        player_stats[10][player] = selling_club;
        move_player_to_club(player, selling_club, to);
        accounts_table = vm_map(accounts_ems_handle, 1);
        accounts_table[2][selling_club] += fee * 0.9;
        accounts_table[9][to] += fee;
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
            if (d_5d9c_9f69 != to && d_5d9c_9f69 != selling_club)
                accounts_table[6][d_5d9c_9f69] += fee * (1.0 / 780);
        sprintf(buf, "%04d%07ld%02d", player, fee, to);
        transfer_history = vm_map(transfer_history_handle, 1);
        strcat(transfer_history[0][selling_club], buf);
        sprintf(buf, "%04d%07ld%02d", player, fee, selling_club);
        strcat(transfer_history[1][to], buf);
        check_fee_paid_record(player, selling_club, to, fee);
        check_fee_received_record(player, selling_club, to, fee);
    }
    remove_from_shortlists(player, 0);
    if (is_human_team(to) == 0 && in_main_menu == 0) {
        if (fee > 0) {
            sprintf(transfer_fee_text, "for %ld", fee);
            if (tribunal_set_fee)
                strcat(transfer_fee_text, "T");
        } else
            strcpy(transfer_fee_text, "Free Transfer");
        sprintf(buf, "%s %s", (char far *)team_names[to], transfer_fee_text);
        add_transfer_news(player, selling_club, buf);
    }
    if (is_human_team(to) == 0)
        prune_club_shortlist(to);
    selling_club = saved_club;
}

void move_player_to_club(int player, int from, int to)
{
    if (from != to) {
        for (d_5d9c_9f29 = 0; d_5d9c_9f29 <= squad_size[from] - 1; d_5d9c_9f29++)
            if (squad_players[from][d_5d9c_9f29] == player)
                squad_players[from][d_5d9c_9f29] = squad_players[from][squad_size[from] - 1];
        squad_players[to][squad_size[to]] = player;
        squad_size[to]++;
        squad_size[from]--;
        if (player_attrs[20][player] > 0) {
            injured_count[to]++;
            injured_count[from]--;
        } else if (player_flags[0][player] != 0) {
            fit_keeper_count[to]++;
            fit_keeper_count[from]--;
        }
    }
    if (is_human_team(from) == 0)
        replace_in_match_squad(player);
    else if (player_is_picked[player] != 0) {
        team_selection[from][match_squad_slot(player)] = 0x6a4;
        player_is_picked[player] = 0;
    }
    if (player_attrs[23][player] < 3)
        replace_in_lineups(player);
    if (from != to) {
        player_attrs[18][player] = to;
        if (is_human_team(to) == 0 && player_attrs[20][player] == 0)
            try_into_match_squad(player);
        player_attrs[23][player] = 3;
        try_into_lineups(player);
    }
}

void do_player_action(int player, int action)
{
    char suffix[80];
    char buf[320];

    if (action > 0)
        approach_player(action - 1, player);
    else if (action == -1)
        player_available(player);
    else if (action < -1) {
        shortlist_club = -action - 2;
        shortlists[shortlist_club][0]++;
        shortlists[shortlist_club][shortlists[shortlist_club][0]] = player;
        sprintf(buf, "Ok - %s shortlisted", player_surname(player));
        if (human_manager_count > 1) {
            sprintf(suffix, "|for %s", (char far *)team_names[shortlist_club]);
            strcat(buf, suffix);
        }
        message_box(buf);
    }
}

char player_available(int player)
{
    is_available = 0;
    if (is_human_team(player_attrs[18][player]))
        transfer_status_menu(player);
    else if (is_unapproachable[player] == 0 && is_indispensable_player(player) == 0 && player_attrs[23][player] == 3
             && club_coaches[player_attrs[18][player]] < 0x28a)
        is_available = -1;
    return is_available;
}

void transfer_status_menu(int player)
{
    char buf[320];

    do {
        redo_menu = 0;
        player_unhappy = player_wants_to_leave(player);
        new_screen("Transfer Status");
        draw_team_label(1.0, 4.0, player_attrs[18][player]);
        print_screen_line(7, player_full_name(player));
        if (is_transfer_listed[player] != 0) {
            asking_prices = vm_map(asking_prices_handle, 0);
            if (asking_prices[player] > 0)
                sprintf(buf, "For sale at %ld", asking_prices[player]);
            else
                strcpy(buf, "Available for free transfer");
            print_screen_line(9, buf);
            strcpy(button_label, "Revalue Him|Remove From List|");
            status_menu_kind = 0;
        } else if (is_unapproachable[player] != 0) {
            print_screen_line(9, "Not for sale at any price");
            strcpy(button_label, "Allow Approaches|");
            status_menu_kind = 1;
        } else {
            print_screen_line(9, "Currently open to approach");
            strcpy(button_label, "List Him|Not For Sale|");
            status_menu_kind = 2;
        }
        strcat(button_label, "Fine Him|");
        if (is_insured[player] == 0)
            strcat(button_label, "Insure Him|");
        else
            strcat(button_label, "Uninsure Him|");
        if (contract_expiry[player] == 0 && is_transfer_listed[player] == 0)
            strcat(button_label, "Renew Contract|");
        else if (contract_expiry[player] > 0 && is_transfer_listed[player] == 0)
            strcat(button_label, "Increase Wages|");
        sprintf(buf, "*Exit|%s", button_label);
        show_menu(12, "", buf);
        do {
            menu_choice_done = -1;
            wait_menu_choice(4 - (status_menu_kind == 1 ? 1 : 0) + (is_transfer_listed[player] == 0));
            status_choice = menu_choice;
            if (status_choice == 1 && status_menu_kind == 0) {
                revalue_listed_player(player);
                redo_menu = -1;
            } else if (status_choice == 1 && status_menu_kind == 1) {
                if (confirm_yes_no()) {
                    sprintf(buf, "%s now approachable", player_surname(player));
                    flash_message(buf);
                    is_unapproachable[player] = 0;
                    redo_menu = -1;
                } else
                    { 0; T46: menu_choice_done = 0; }   /* no code: this 0;, the one at the next
                                                     * branch and the two gotos to T46 make BCC
                                                     * keep the copies of the identical endings
                                                     * the original keeps (with -y) */
            } else if (status_choice == 1 && status_menu_kind == 2) {
                if (confirm_yes_no()) {
                    sprintf(buf, "%s now transfer listed", player_surname(player));
                    flash_message(buf);
                    transfer_list_player(player, 0);
                    redo_menu = -1;
                } else
                    { 0; goto T46; }
            } else if (status_choice == 2 && status_menu_kind == 0) {
                if (confirm_yes_no()) {
                    if (requested_transfer[player] != 0) {
                        if (player_unhappy != 0 && contract_expiry[player] == 0) {
                            sprintf(buf, "%s refuses", player_surname(player));
                            flash_message(buf);
                            sprintf(buf, "He %s", disallowed_text);
                            flash_message(buf);
                            menu_choice_done = 0;
                        } else if (player_unhappy != 0 && contract_expiry[player] > 0) {
                            sprintf(buf, "%s told to stay", player_surname(player));
                            flash_message(buf);
                            flash_message("But he's still unhappy");
                            remove_from_transfer_list(player);
                            redo_menu = -1;
                        } else {
                            sprintf(buf, "%s agrees to stay", player_surname(player));
                            flash_message(buf);
                            remove_from_transfer_list(player);
                            redo_menu = -1;
                        }
                    } else {
                        sprintf(buf, "%s removed from list", player_surname(player));
                        flash_message(buf);
                        remove_from_transfer_list(player);
                        redo_menu = -1;
                    }
                } else
                    menu_choice_done = 0;
            } else if (status_choice == 2 && status_menu_kind == 2) {
                if (contract_expiry[player] == 0) {
                    sprintf(buf, "%s must sign a new contract", player_surname(player));
                    flash_message(buf);
                    menu_choice_done = 0;
                } else if (confirm_yes_no()) {
                    sprintf(buf, "%s now unapproachable", player_surname(player));
                    flash_message(buf);
                    is_unapproachable[player] = -1;
                    redo_menu = -1;
                } else
                    menu_choice_done = 0;
            } else if (status_choice == 3 && status_menu_kind != 1 || status_choice == 2 && status_menu_kind == 1) {
                if (confirm_yes_no()) {
                    human_manager_index = team_manager[player_attrs[18][player]] - 646;
                    sprintf(buf, "%04d", player);
                    fined_this_week = vm_map(d_5d9c_a332, 0);
                    d_5d9c_9b4f = find_substring(fined_this_week[human_manager_index], buf) > 0;
                    if (d_5d9c_9b4f != 0)
                        flash_message("Maximum one fine per week");
                    else {
                        sprintf(buf, "%s fined a weeks wages", player_surname(player));
                        flash_message(buf);
                        player_fine_reaction(player, d_1f3e_bfa2[player]);
                        sprintf(buf, "%04d", player);
                        fined_this_week = vm_map(d_5d9c_a332, 1);
                        strcat(fined_this_week[human_manager_index], buf);
                        if (d_5d9c_9d3d == 3 || d_1f3e_bfa2[player] == 0) {
                            switch (d_5d9c_9dd7 = random_below(3)) {
                            case 0:
                                strcpy(buf, "He cannot believe it");
                                break;
                            case 1:
                                strcpy(buf, "He is astonished");
                                break;
                            case 2:
                                strcpy(buf, "He feels it is unfair");
                                break;
                            }
                            flash_message(buf);
                        } else if (d_5d9c_9d3d != 2) {
                            menu_choice_done = 0;
                            continue;
                        } else {
                            switch (d_5d9c_9dd7 = random_below(3)) {
                            case 0:
                                strcpy(buf, "He is not happy");
                                break;
                            case 1:
                                strcpy(buf, "He is disappointed");
                                break;
                            case 2:
                                strcpy(buf, "He is upset");
                                break;
                            }
                            0;
                            flash_message(buf);
                        }
                    }
                    0;
                    menu_choice_done = 0;
                } else
                    menu_choice_done = 0;
            } else if (status_choice == 4 && status_menu_kind != 1 || status_choice == 3 && status_menu_kind == 1) {
                if (is_insured[player] == 0) {
                    if (player_attrs[20][player] > 0 && player_attrs[19][player] < 20) {
                        flash_message("Insurance refused - player injured");
                        menu_choice_done = 0;
                    } else {
                        insurance_cost = insurance_premium(player);
                        sprintf(buf, "Insurance would cost %ld p/w", insurance_cost);
                        flash_message(buf);
                        if (confirm_yes_no()) {
                            sprintf(buf, "%s now insured", player_surname(player));
                            flash_message(buf);
                            is_insured[player] = -1;
                            redo_menu = -1;
                        } else
                            menu_choice_done = 0;
                    }
                } else if (confirm_yes_no()) {
                    sprintf(buf, "%s now uninsured", player_surname(player));
                    flash_message(buf);
                    is_insured[player] = 0;
                    redo_menu = -1;
                } else
                    menu_choice_done = 0;
            } else if (status_choice == 5 && status_menu_kind != 1 || status_choice == 4 && status_menu_kind == 1) {
                if (contract_expiry[player] == 0) {
                    human_manager_index = team_manager[player_attrs[18][player]] - 646;
                    sprintf(buf, "%04d", player);
                    talks_refused_this_week = vm_map(refused_talks_handle, 0);
                    d_5d9c_9b4f = strstr(talks_refused_this_week[human_manager_index], buf) ? 1 : 0;
                    if (d_5d9c_9b4f != 0 || player_unhappy != 0) {
                        sprintf(buf, "%s refuses to negotiate", player_surname(player));
                        flash_message(buf);
                        if (player_unhappy != 0)
                            sprintf(buf, "He %s", disallowed_text);
                        else
                            strcpy(buf, "He may resume talks next week");
                        flash_message(buf);
                        goto T46;
                        0;
                    } else {
                        sprintf(buf, "%s agrees to negotiate", player_surname(player));
                        flash_message(buf);
                        offer_new_contract(player, player_attrs[18][player], human_manager_index);
                        redo_menu = -1;
                    }
                } else {
                    pay_rise_talks(player);
                    redo_menu = -1;
                }
            }
        } while (!menu_choice_done);
    } while (redo_menu != 0);
}
