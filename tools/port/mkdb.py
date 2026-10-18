#!/usr/bin/env python3
"""The players and teams of a game, as an SQLite database for its native port
(see port/README.md, "The database").

  mkdb.py --game GAME [--check] GAMEDIR OUT.db

GAME is the port's directory name under games/ (cm1, cm93, cmese, cmitalia, cmita95).
GAMEDIR holds the game: its executable, and for every game but CM1 its TEAM.DAT,
LEAGUE.DAT and FOREIGN.DAT. The port reads the database in their place:

  - teams       the league's clubs: TEAM.DAT (CM1: the executable's tables), and their
                names from the executable;
  - players     LEAGUE.DAT and FOREIGN.DAT, one row per player, in the order the game
                reads them (CM1 has none: it makes its players up);
  - careers     the seasons before the game's first, one row per player and season;
  - clubs       CM1 only: the other clubs of the cups and the players' careers;
  - first_names, surnames, countries: the executable's name tables, which the players
                (and the managers of TEAM.DAT) refer to by number.

Every value is kept as the game has it; 255 in a player's attribute means "made up by
the game". With --check, the database is written back into the game's formats, which
must give the original files (and executable tables) byte for byte.
"""
import argparse, os, sqlite3, struct, sys

RT_BASE = 0x1000            # runtime segment numbering (d_SSSS_OOOO) = file numbering + 0x1000

# Where each game keeps what: segments in runtime numbering. Name tables are far
# pointer tables (team names: near, DGROUP) whose strings follow them; their sizes are
# the ports' (see games/<game>/port/db.c, which reads the same tables back).
GAMES = {
    'cm1': dict(exe='EUROPE.EXE', dgroup=0x5d9c, teams=80, team_names=0x08bc,
                first_names=(0x5471, 0x0000, 500), surnames=(0x5471, 0x0a70, 880),
                countries=(0x5471, 0x16f0, 32),
                # team_stats[row][82] and the other clubs' tables, indexed by club 80-539
                team_stats=(0x5739, 0x0000), clubs=(80, 540), club_names=0x0484,
                club_rating=(0x5739, 0x13de), club_colours=(0x5739, 0x15aa),
                club_away_colours=(0x5739, 0x1776), club_country=(0x5739, 0x1b0e)),
    'cm93': dict(exe='CMEXE.EXE', dgroup=0x60ae, teams=80, team_names=0xb572,
                 first_names=(0x59f5, 0x0000, 392), surnames=(0x59f5, 0x0fc0, 1385),
                 countries=(0x54d9, 0x0000, 60), nibble_colours=False),
    'cmese': dict(exe='CMEXE.EXE', dgroup=0x69da, teams=80, team_names=0xb1fc,
                  first_names=(0x62e5, 0x0000, 452), surnames=(0x62e5, 0x11f6, 1408),
                  countries=(0x5dbf, 0x0000, 76), nibble_colours=True),
    'cmitalia': dict(exe='CM.EXE', dgroup=0x5d51, teams=38, team_names=0xb476,
                     first_names=(0x56d9, 0x0000, 447), surnames=(0x56d9, 0x13b9, 1176),
                     countries=(0x4f37, 0x0000, 76), nibble_colours=True),
    'cmita95': dict(exe='CM.EXE', dgroup=0x61eb, teams=38, team_names=0xb0ec,
                    first_names=(0x5b9b, 0x0000, 443), surnames=(0x5b9b, 0x1395, 1135),
                    countries=(0x53fc, 0x0000, 76), nibble_colours=True),
}

SCHEMA_TEAMS_CM1 = '''
CREATE TABLE teams (
    id INTEGER PRIMARY KEY,         -- the game's number for the club, 0-79 (in division order)
    name TEXT NOT NULL,
    reputation INTEGER NOT NULL,    -- team_stats[0]
    capacity INTEGER NOT NULL,      -- the ground's, in thousands (team_stats[1])
    colours INTEGER NOT NULL,       -- 16 x background + foreground (team_stats[2])
    away_colours INTEGER NOT NULL,  -- team_stats[3]
    rating INTEGER NOT NULL         -- the team's strength (team_stats[4])
);
CREATE TABLE clubs (
    id INTEGER PRIMARY KEY,         -- 80-539: the other clubs (cups, careers)
    name TEXT NOT NULL,
    country INTEGER NOT NULL REFERENCES countries,
    rating INTEGER NOT NULL,        -- 0 (best) to 8, turned into a strength by a new game
    colours INTEGER NOT NULL,
    away_colours INTEGER NOT NULL
);
'''

SCHEMA_TEAMS = '''
CREATE TABLE teams (
    id INTEGER PRIMARY KEY,         -- the game's number for the club (in division order)
    name TEXT NOT NULL,             -- from the executable
    capacity INTEGER NOT NULL,      -- the ground's, in thousands
    seats INTEGER NOT NULL,         -- seated, in thousands
    colours INTEGER NOT NULL,       -- 16 x background + foreground
    away_colours INTEGER NOT NULL,
    rating INTEGER NOT NULL,        -- the team's strength
    reputation INTEGER NOT NULL,
    balance INTEGER NOT NULL,       -- money, in thousands (0-65535)
    board_confidence INTEGER NOT NULL,
    -- the manager and his assistant; 255: made up by the game
    manager_first_name INTEGER NOT NULL,    -- REFERENCES first_names (0-65535)
    manager_surname INTEGER NOT NULL,       -- REFERENCES surnames
    manager_trait_a INTEGER NOT NULL,       -- 0-15
    manager_trait_b INTEGER NOT NULL,       -- 0-15
    manager_rating INTEGER NOT NULL,
    manager_character INTEGER NOT NULL,
    coach_first_name INTEGER NOT NULL,
    coach_surname INTEGER NOT NULL
);
'''

# The columns of a player, in the order of a LEAGUE.DAT record (after the names).
POSITIONS = ['gk', 'def', 'mid', 'att', 'right', 'left', 'centre']
ATTRIBUTES = ['passing', 'tackling', 'pace', 'heading', 'flair', 'creativity', 'goalscoring',
              'attr8', 'potential', 'aggression', 'attr11', 'influence', 'attr13', 'attr14']

SCHEMA_PLAYERS = '''
CREATE TABLE players (
    id INTEGER PRIMARY KEY,         -- the order the game reads them in (team by team)
    team INTEGER REFERENCES teams,  -- NULL: plays abroad (FOREIGN.DAT)
    club INTEGER,                   -- plays abroad: the game's code for his club abroad
    first_name INTEGER NOT NULL REFERENCES first_names,
    surname INTEGER NOT NULL REFERENCES surnames,
    settled INTEGER NOT NULL,       -- 0/1: not looking to move (flag 9)
    star INTEGER NOT NULL,          -- 0/1: worth and paid more (flag 28)
    -- positions and sides: 1 yes, 0 no (100: made up by the game)
    gk INTEGER NOT NULL, def INTEGER NOT NULL, mid INTEGER NOT NULL, att INTEGER NOT NULL,
    right INTEGER NOT NULL, left INTEGER NOT NULL, centre INTEGER NOT NULL,
    -- 255 in any of the following: made up by the game
    age INTEGER NOT NULL,
    character INTEGER NOT NULL,
    nationality INTEGER NOT NULL REFERENCES countries,
    ability INTEGER NOT NULL,       -- current ability (0-200)
    passing INTEGER NOT NULL, tackling INTEGER NOT NULL, pace INTEGER NOT NULL,
    heading INTEGER NOT NULL, flair INTEGER NOT NULL, creativity INTEGER NOT NULL,
    goalscoring INTEGER NOT NULL, attr8 INTEGER NOT NULL,
    potential INTEGER NOT NULL,     -- ability he can reach (0-200)
    aggression INTEGER NOT NULL, attr11 INTEGER NOT NULL, influence INTEGER NOT NULL,
    attr13 INTEGER NOT NULL, attr14 INTEGER NOT NULL,
    stamina INTEGER NOT NULL
);
CREATE INDEX players_team ON players (team, id);
CREATE TABLE careers (
    player INTEGER NOT NULL REFERENCES players,
    seq INTEGER NOT NULL,           -- in the order the game reads them
    season INTEGER NOT NULL,        -- the year it started in, less 1900
    club INTEGER NOT NULL,          -- the game's code for the club
    apps INTEGER NOT NULL,
    goals INTEGER NOT NULL,         -- 255: none recorded
    PRIMARY KEY (player, seq)
);
CREATE VIEW player_list AS
    SELECT p.id, f.name || ' ' || s.name AS name, t.name AS team, c.name AS nationality,
           p.age, p.ability, p.potential
    FROM players p JOIN first_names f ON f.id = p.first_name JOIN surnames s ON s.id = p.surname
         LEFT JOIN teams t ON t.id = p.team LEFT JOIN countries c ON c.id = p.nationality;
'''

SCHEMA_NAMES = '''
CREATE TABLE first_names (id INTEGER PRIMARY KEY, name TEXT NOT NULL);
CREATE TABLE surnames (id INTEGER PRIMARY KEY, name TEXT NOT NULL);
CREATE TABLE countries (id INTEGER PRIMARY KEY, name TEXT NOT NULL);
CREATE TABLE info (key TEXT PRIMARY KEY, value TEXT);
'''


def load_image(path):
    """The executable's load image (as tools/port/extract.py)."""
    data = open(path, 'rb').read()
    if data[:2] not in (b'MZ', b'ZM'):
        raise SystemExit('%s: not an MZ executable' % path)
    last, pages, _, hdr_paras = struct.unpack('<4H', data[2:10])
    return data[hdr_paras * 16:pages * 512 - (512 - last if last else 0)]


def lin(seg, off):
    return (seg - RT_BASE) * 16 + off


def cstr(im, a):
    return im[a:im.index(b'\0', a)].decode('cp437')


def far_names(im, seg, off, n):
    out = []
    for k in range(n):
        o, s = struct.unpack_from('<HH', im, lin(seg, off) + 4 * k)
        out.append(cstr(im, s * 16 + o))
    return out


def near_names(im, dgroup, off, first, n):
    base = lin(dgroup, 0)
    return [cstr(im, base + struct.unpack_from('<H', im, base + off + 2 * k)[0])
            for k in range(first, first + n)]


def find(gamedir, name):
    """A file of the game, in any case (DOS names)."""
    for f in os.listdir(gamedir):
        if f.upper() == name.upper():
            return os.path.join(gamedir, f)
    raise SystemExit('%s: no %s here' % (gamedir, name))


# ---- TEAM.DAT, LEAGUE.DAT, FOREIGN.DAT ------------------------------------------------

class Reader:
    def __init__(self, data):
        self.d, self.i = data, 0

    def b(self):
        self.i += 1
        return self.d[self.i - 1]

    def w(self):                            # big-endian, as the games' reader (f_14bc_5ddb)
        self.i += 2
        return self.d[self.i - 2] << 8 | self.d[self.i - 1]


TEAM_COLUMNS = ['capacity', 'seats', 'colours', 'away_colours', 'rating', 'reputation',
                'balance', 'board_confidence', 'manager_first_name', 'manager_surname',
                'manager_trait_a', 'manager_trait_b', 'manager_rating', 'manager_character',
                'coach_first_name', 'coach_surname']
TEAM_WORDS = {'balance', 'manager_first_name', 'manager_surname', 'coach_first_name',
              'coach_surname'}


def read_teams(data, g):
    r, out = Reader(data), []
    for _ in range(g['teams']):
        t = {}
        for c in TEAM_COLUMNS:
            if c in TEAM_WORDS:
                t[c] = r.w()
            elif c in ('colours', 'away_colours') and g['nibble_colours']:
                hi, lo = r.b(), r.b()       # the game reads (hi << 4) + lo into a byte
                if hi > 15 or lo > 15:
                    raise SystemExit('TEAM.DAT: colours %d, %d do not fit a byte' % (hi, lo))
                t[c] = hi << 4 | lo
            else:
                t[c] = r.b()
        out.append(t)
    if r.i != len(data):
        raise SystemExit('TEAM.DAT: %d bytes, %d expected' % (len(data), r.i))
    return out


def write_teams(teams, g):
    out = bytearray()
    for t in teams:
        for c in TEAM_COLUMNS:
            if c in TEAM_WORDS:
                out += struct.pack('>H', t[c])
            elif c in ('colours', 'away_colours') and g['nibble_colours']:
                out += bytes([t[c] >> 4, t[c] & 15])
            else:
                out.append(t[c])
    return bytes(out)


def read_players(data, team, abroad):
    """The players of a file: LEAGUE.DAT has each team's in turn (team None: the next
    team), each list ended by a first name of 3000; FOREIGN.DAT one list."""
    r, out, t = Reader(data), [], 0
    while r.i < len(data):
        first = r.w()
        if first == 3000:                   # the end of a team's list
            t += 1
            continue
        p = dict(team=None if abroad else t, first_name=first, surname=r.w(), settled=r.b(),
                 club=None)
        if abroad:                          # read for the players the game counts as abroad
            p['club'] = r.b()
        p['star'] = r.b()
        for c in POSITIONS:
            p[c] = r.b()
        p['age'], p['character'], p['nationality'], p['ability'] = r.b(), r.b(), r.b(), r.b()
        for c in ATTRIBUTES:
            p[c] = r.b()
        p['stamina'] = r.b()
        p['career'] = []
        while True:
            season = r.b()
            if season == 255:
                break
            p['career'].append((season, r.b(), r.b(), r.b()))
        out.append(p)
    return out, t


def write_players(players, teams):
    """LEAGUE.DAT (teams: the number of lists) or FOREIGN.DAT (teams None)."""
    out = bytearray()
    for t in (range(teams) if teams is not None else [None]):
        for p in players:
            if p['team'] != t:
                continue
            out += struct.pack('>HHB', p['first_name'], p['surname'], p['settled'])
            if t is None:
                out.append(p['club'])
            out.append(p['star'])
            out += bytes(p[c] for c in POSITIONS)
            out += bytes([p['age'], p['character'], p['nationality'], p['ability']])
            out += bytes(p[c] for c in ATTRIBUTES)
            out.append(p['stamina'])
            for season, club, apps, goals in p['career']:
                out += bytes([season, club, apps, goals])
            out.append(255)
        out += struct.pack('>H', 3000)
    return bytes(out)


# ---- the database --------------------------------------------------------------------

PLAYER_COLUMNS = (['team', 'club', 'first_name', 'surname', 'settled', 'star'] + POSITIONS
                  + ['age', 'character', 'nationality', 'ability'] + ATTRIBUTES + ['stamina'])


def build(game, gamedir, out):
    g = GAMES[game]
    im = load_image(find(gamedir, g['exe']))
    names = {k: far_names(im, *g[k]) for k in ('first_names', 'surnames', 'countries')}
    team_names = near_names(im, g['dgroup'], g['team_names'], 0, g['teams'])

    if os.path.exists(out):
        os.remove(out)
    db = sqlite3.connect(out)
    db.executescript(SCHEMA_NAMES + (SCHEMA_TEAMS_CM1 if game == 'cm1' else SCHEMA_TEAMS
                                     + SCHEMA_PLAYERS))
    db.execute('INSERT INTO info VALUES (?, ?)', ('game', game))
    db.execute('INSERT INTO info VALUES (?, ?)', ('made_from', g['exe']))
    for k, v in names.items():
        db.executemany('INSERT INTO %s VALUES (?, ?)' % k, enumerate(v))

    if game == 'cm1':
        stats = lin(*g['team_stats'])
        db.executemany('INSERT INTO teams VALUES (?, ?, ?, ?, ?, ?, ?)',
                       [(i, team_names[i]) + tuple(im[stats + row * 82 + i] for row in range(5))
                        for i in range(g['teams'])])
        lo, hi = g['clubs']
        club_names = near_names(im, g['dgroup'], g['club_names'], lo, hi - lo)
        db.executemany('INSERT INTO clubs VALUES (?, ?, ?, ?, ?, ?)',
                       [(c, club_names[c - lo], im[lin(*g['club_country']) + c],
                         im[lin(*g['club_rating']) + c], im[lin(*g['club_colours']) + c],
                         im[lin(*g['club_away_colours']) + c]) for c in range(lo, hi)])
    else:
        teams = read_teams(open(find(gamedir, 'TEAM.DAT'), 'rb').read(), g)
        db.executemany('INSERT INTO teams VALUES (?, ?, %s)' % ', '.join('?' * len(TEAM_COLUMNS)),
                       [(i, team_names[i]) + tuple(t[c] for c in TEAM_COLUMNS)
                        for i, t in enumerate(teams)])
        league, n = read_players(open(find(gamedir, 'LEAGUE.DAT'), 'rb').read(), None, False)
        if n != g['teams']:
            raise SystemExit('LEAGUE.DAT: %d teams, %d expected' % (n, g['teams']))
        abroad, _ = read_players(open(find(gamedir, 'FOREIGN.DAT'), 'rb').read(), None, True)
        for i, p in enumerate(league + abroad):
            for k, tbl in (('first_name', 'first_names'), ('surname', 'surnames')):
                if p[k] >= len(names[tbl]):
                    raise SystemExit('player %d: %s %d is not in the game\'s table' % (i, k, p[k]))
            db.execute('INSERT INTO players VALUES (?, %s)' % ', '.join('?' * len(PLAYER_COLUMNS)),
                       (i,) + tuple(p[c] for c in PLAYER_COLUMNS))
            db.executemany('INSERT INTO careers VALUES (?, ?, ?, ?, ?, ?)',
                           [(i, k) + c for k, c in enumerate(p['career'])])
    db.commit()
    return db, im


def check(game, gamedir, db, im):
    """Write the database back into the game's formats: they must be the originals."""
    g = GAMES[game]
    q = lambda sql: db.execute(sql).fetchall()
    bad = []
    for k in ('first_names', 'surnames', 'countries'):
        if [r[0] for r in q('SELECT name FROM %s ORDER BY id' % k)] != far_names(im, *g[k]):
            bad.append(k)
    team_names = near_names(im, g['dgroup'], g['team_names'], 0, g['teams'])
    if [r[0] for r in q('SELECT name FROM teams ORDER BY id')] != team_names:
        bad.append('team names')
    if game == 'cm1':
        stats = lin(*g['team_stats'])
        for row, c in enumerate(['reputation', 'capacity', 'colours', 'away_colours', 'rating']):
            if bytes(r[0] for r in q('SELECT %s FROM teams ORDER BY id' % c)) != \
                    im[stats + row * 82:stats + row * 82 + g['teams']]:
                bad.append('team_stats[%d]' % row)
        lo, hi = g['clubs']
        for c in ('country', 'rating', 'colours', 'away_colours'):
            a = lin(*g['club_' + c])
            if bytes(r[0] for r in q('SELECT %s FROM clubs ORDER BY id' % c)) != im[a + lo:a + hi]:
                bad.append('clubs.' + c)
        if [r[0] for r in q('SELECT name FROM clubs ORDER BY id')] != \
                near_names(im, g['dgroup'], g['club_names'], lo, hi - lo):
            bad.append('club names')
    else:
        cols = ['id'] + PLAYER_COLUMNS
        teams = [dict(zip(['id'] + TEAM_COLUMNS, r))
                 for r in q('SELECT id, %s FROM teams ORDER BY id' % ', '.join(TEAM_COLUMNS))]
        players = [dict(zip(cols, r)) for r in q('SELECT %s FROM players ORDER BY id' % ', '.join(cols))]
        careers = {}
        for r in q('SELECT player, season, club, apps, goals FROM careers ORDER BY player, seq'):
            careers.setdefault(r[0], []).append(r[1:])
        for p in players:
            p['career'] = careers.get(p['id'], [])
        for name, data in (('TEAM.DAT', write_teams(teams, g)),
                           ('LEAGUE.DAT', write_players(players, g['teams'])),
                           ('FOREIGN.DAT', write_players(players, None))):
            if data != open(find(gamedir, name), 'rb').read():
                bad.append(name)
    if bad:
        raise SystemExit('check: not the same as the game: ' + ', '.join(bad))


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--game', required=True, choices=sorted(GAMES))
    ap.add_argument('--check', action='store_true',
                    help='check that the database gives back the game\'s files')
    ap.add_argument('gamedir')
    ap.add_argument('out')
    a = ap.parse_args()

    db, im = build(a.game, a.gamedir, a.out)
    if a.check:
        check(a.game, a.gamedir, db, im)
    n = lambda t: db.execute('SELECT count(*) FROM %s' % t).fetchone()[0]
    what = ['%d teams' % n('teams')]
    if a.game == 'cm1':
        what.append('%d clubs' % n('clubs'))
    else:
        what.append('%d players' % n('players'))
    print('%s: %s%s' % (a.out, ', '.join(what), ' (checked)' if a.check else ''))


if __name__ == '__main__':
    main()
