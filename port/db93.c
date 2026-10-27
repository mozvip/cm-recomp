/* What the later games (CM93, CM94, Italia, Italia 95) read from their database (db.c),
 * the same in all four: the names put in the executable's tables at start-up
 * (port_game_db()), the teams a new game starts from (load_teams(), in place of
 * TEAM.DAT), and its players and their careers, a row at a time (port_db_players(), in
 * place of LEAGUE.DAT and FOREIGN.DAT), for the game's new-game module. CM1 keeps its
 * own (games/cm1/port/db.c). The names are new; game.h maps them, and gives TEAMS,
 * LEAGUE_PLAYERS, ABROAD_PLAYERS, FIRST_NAMES, SURNAMES and COUNTRIES. */
#include "port.h"

void empty_stub_a();                    /* called with an argument it does not take */

extern nearptr club_names[];            /* the clubs' names (0 to TEAMS-1: the league's) */
extern farptr first_names[];
extern farptr surnames[];
extern farptr country_names[];
/* the teams: 0 reputation, 1 capacity, 2 colours, 3 away colours, 4 rating,
   6 board confidence */
extern unsigned char team_stats[][TEAMS + 2];
extern unsigned char team_seats[];
extern int32_t team_balances[][TEAMS];
/* 0-5 the manager: first name, surname, two traits, rating, character; 6-7 the coach:
   first name, surname */
extern int16_t team_staff[][TEAMS];

static const char *const positions[7] = { "gk", "def", "mid", "att", "right", "left", "centre" };
static const char *const attributes[14] = {
    "passing", "tackling", "pace", "heading", "flair", "creativity", "goalscoring",
    "attr8", "potential", "aggression", "attr11", "influence", "attr13", "attr14"
};

void port_game_db(void)
{
    port_db_check_teams(TEAMS);
    port_db_check_players(TEAMS, LEAGUE_PLAYERS, ABROAD_PLAYERS);
    port_db_near_names("SELECT id, name FROM teams", club_names, TEAMS);
    port_db_far_names("SELECT id, name FROM first_names", first_names, FIRST_NAMES);
    port_db_far_names("SELECT id, name FROM surnames", surnames, SURNAMES);
    port_db_far_names("SELECT id, name FROM countries", country_names, COUNTRIES);
}

/* The new game's teams: the database's, not TEAM.DAT. */
void load_teams(void)
{
    unsigned char i;
    port_rows *r;

    empty_stub_a(2);
    r = port_db_query("SELECT * FROM teams ORDER BY id");
    for (i = 0; i <= TEAMS - 1; i = i + 1) {
        port_db_next(r);
        team_stats[1][i] = port_db_int(r, "capacity");
        team_seats[i] = port_db_int(r, "seats");
        team_stats[2][i] = port_db_int(r, "colours");
        team_stats[3][i] = port_db_int(r, "away_colours");
        team_stats[4][i] = port_db_int(r, "rating");
        team_stats[0][i] = port_db_int(r, "reputation");
        team_balances[0][i] = (int32_t)(uint16_t)port_db_int(r, "balance") * 1000;
        team_stats[6][i] = port_db_int(r, "board_confidence");
        team_staff[0][i] = port_db_int(r, "manager_first_name");
        team_staff[1][i] = port_db_int(r, "manager_surname");
        team_staff[2][i] = port_db_int(r, "manager_trait_a");
        team_staff[3][i] = port_db_int(r, "manager_trait_b");
        team_staff[4][i] = port_db_int(r, "manager_rating");
        team_staff[5][i] = port_db_int(r, "manager_character");
        team_staff[6][i] = port_db_int(r, "coach_first_name");
        team_staff[7][i] = port_db_int(r, "coach_surname");
    }
    port_db_done(r);
}

int port_db_count_players(int team)
{
    if (team == PORT_DB_LEAGUE)
        return port_db_count("SELECT count(*) FROM players WHERE team IS NOT NULL");
    if (team == PORT_DB_ABROAD)
        return port_db_count("SELECT count(*) FROM players WHERE team IS NULL");
    return port_db_count("SELECT count(*) FROM players WHERE team = ?", team);
}

port_rows *port_db_players(int team)
{
    if (team == PORT_DB_LEAGUE)
        return port_db_query("SELECT * FROM players WHERE team IS NOT NULL ORDER BY id");
    if (team == PORT_DB_ABROAD)
        return port_db_query("SELECT * FROM players WHERE team IS NULL ORDER BY id");
    return port_db_query("SELECT * FROM players WHERE team = ? ORDER BY id", team);
}

int port_db_next_player(port_rows *r, struct port_player *p)
{
    int i;

    if (port_db_next(r) == 0)
        return 0;
    p->id = port_db_int(r, "id");
    p->first_name = port_db_int(r, "first_name");
    p->surname = port_db_int(r, "surname");
    p->settled = port_db_int(r, "settled");
    p->club = port_db_int(r, "club");
    p->star = port_db_int(r, "star");
    for (i = 0; i < 7; i++)
        p->position[i] = port_db_int(r, positions[i]);
    p->age = port_db_int(r, "age");
    p->character = port_db_int(r, "character");
    p->nationality = port_db_int(r, "nationality");
    p->ability = port_db_int(r, "ability");
    for (i = 0; i < 14; i++)
        p->attribute[i] = port_db_int(r, attributes[i]);
    p->stamina = port_db_int(r, "stamina");
    return 1;
}

port_rows *port_db_careers(int player)
{
    return port_db_query("SELECT * FROM careers WHERE player = ? ORDER BY seq", player);
}

int port_db_next_career(port_rows *r, struct port_career *c)
{
    if (port_db_next(r) == 0)
        return 0;
    c->season = port_db_int(r, "season");
    c->club = port_db_int(r, "club");
    c->apps = port_db_int(r, "apps");
    c->goals = port_db_int(r, "goals");
    return 1;
}
