/* Championship Manager 94 (End of Season Edition): what the game's database
 * (../../../port/db.c, made by tools/port/mkdb.py) gives before the game starts. The
 * players and the teams' TEAM.DAT data are read when a new game is made (src/b085.c);
 * the names, which the executable holds, are put in place here. */
#include "port.h"

extern nearptr d_69da_b1fc[];           /* the clubs' names (0-79: the league's) */
extern farptr d_62e5_0000[];            /* first names */
extern farptr d_62e5_11f6[];            /* surnames */
extern farptr d_5dbf_0000[];            /* countries */

void port_game_db(void)
{
    port_db_check_teams(80);
    port_db_check_players(80, 1680, 180);   /* player numbers: league 0-1679, abroad 1680-1859 */
    port_db_near_names("SELECT id, name FROM teams", d_69da_b1fc, 80);
    port_db_far_names("SELECT id, name FROM first_names", d_62e5_0000, 452);
    port_db_far_names("SELECT id, name FROM surnames", d_62e5_11f6, 1408);
    port_db_far_names("SELECT id, name FROM countries", d_5dbf_0000, 76);
}
