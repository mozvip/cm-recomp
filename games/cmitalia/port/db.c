/* Championship Manager Italia: what the game's database (../../../port/db.c, made by
 * tools/port/mkdb.py) gives before the game starts. The players and the teams' TEAM.DAT
 * data are read when a new game is made (src/a7f0.c); the names, which the executable
 * holds, are put in place here. */
#include "port.h"

extern nearptr d_5d51_b476[];           /* the clubs' names (0-37: the league's) */
extern farptr d_56d9_0000[];            /* first names */
extern farptr d_56d9_13b9[];            /* surnames */
extern farptr d_4f37_0000[];            /* countries */

void port_game_db(void)
{
    port_db_check_teams(38);
    port_db_check_players(38, 1000, 500);   /* player numbers: league 0-999, abroad 1000-1499 */
    port_db_near_names("SELECT id, name FROM teams", d_5d51_b476, 38);
    port_db_far_names("SELECT id, name FROM first_names", d_56d9_0000, 447);
    port_db_far_names("SELECT id, name FROM surnames", d_56d9_13b9, 1176);
    port_db_far_names("SELECT id, name FROM countries", d_4f37_0000, 76);
}
