const vscode = acquireVsCodeApi();
const $ = id => document.getElementById(id);
const CTX = 3;                       // identical lines kept around a difference when folding
const MARK = { same: ' ', operand: '~', diff: '*', del: '−', ins: '+' };
let last = null, cursor = -1, unfolded = new Set();
let hlLine = null, hovered = null;     // the editor's cursor line, the line hovered here

$('func').onchange = () => vscode.postMessage({ type: 'pick', name: $('func').value });
$('follow').onclick = () => vscode.postMessage({ type: 'follow' });
$('refresh').onclick = () => vscode.postMessage({ type: 'refresh' });
$('fold').onchange = () => { unfolded.clear(); render(true); };
$('src').onchange = () => render(true);
// hovering a line of code lights up its source line in the editor; clicking goes there
$('rows').addEventListener('mouseover', e => {
    const el = e.target.closest('[data-line]');
    const line = el ? +el.dataset.line : null;
    if (line !== hovered) { hovered = line; vscode.postMessage({ type: 'hover', line }); }
});
$('rows').addEventListener('mouseleave', () => {
    hovered = null;
    vscode.postMessage({ type: 'hover', line: null });
});
$('rows').addEventListener('click', e => {
    const el = e.target.closest('[data-line]');
    if (el && !e.target.closest('.fold')) vscode.postMessage({ type: 'goto', line: +el.dataset.line });
});
$('next').onclick = () => jump(1);
$('prev').onclick = () => jump(-1);
document.addEventListener('keydown', e => {
    if (e.target.tagName === 'SELECT') return;
    if (e.key === 'n') jump(1);
    else if (e.key === 'p') jump(-1);
    else if (e.key === 'r') vscode.postMessage({ type: 'refresh' });
});

window.addEventListener('message', ({ data: m }) => {
    if (m.type === 'state') { setState(m); return; }
    if (m.type === 'error') { $('messages').innerHTML = ''; addMsg(m.text, 'error'); return; }
    if (m.type === 'cursor') { highlight(m.line, true); return; }
    const same = last && last.func && m.func && last.func.name === m.func.name;
    if (!same) { unfolded.clear(); cursor = -1; }
    last = m;
    const sel = $('func');
    sel.innerHTML = '';
    for (const f of m.functions) {
        const o = document.createElement('option');
        o.value = f.name;
        o.textContent = (f.match ? '✓ ' : '✗ ') + f.name + (f.match ? '' : '  (' + f.score + ')');
        sel.appendChild(o);
    }
    if (m.func) sel.value = m.func.name;
    $('follow').style.display = m.pinned ? '' : 'none';
    $('messages').innerHTML = '';
    for (const t of m.messages || []) addMsg(t, /^Warning/.test(t) ? 'warn' : 'error');
    if (m.lines === 'aligned')
        addMsg('Source lines carried over from a -y compile, whose code differs (BCC merges less ' +
               'identical code with line numbers on): code it does not make has no line.', 'info');
    status(m);
    render(same);
    highlight(m.cursor, !same);
});

// compiling: a moving bar under the header, the time it has taken so far, the ⟳ turning;
// pending (edited since the code shown was made): the code dimmed and a dot
let ticker = null, since = 0;
function setState(m) {
    document.body.classList.toggle('busy', m.state === 'busy');
    document.body.classList.toggle('pending', m.state === 'pending');
    const p = $('progress');
    clearInterval(ticker);
    if (m.state === 'busy') {
        if (!since) since = Date.now();
        const tick = () => {
            p.textContent = 'compiling ' + ((Date.now() - since) / 1000).toFixed(1) + ' s' +
                            (m.queued ? ' · then again' : '');
        };
        tick();
        ticker = setInterval(tick, 100);
    } else {
        since = 0;
        p.textContent = m.state === 'pending' ? (m.live ? '● edited' : '● edited: save to compile') : '';
    }
}

function addMsg(text, cls) {
    const d = document.createElement('div');
    d.className = 'msg ' + cls;
    d.textContent = text;
    const line = /^\w+\s+\S+\s+(\d+):/.exec(text);
    if (line) d.onclick = () => vscode.postMessage({ type: 'goto', line: +line[1] });
    $('messages').appendChild(d);
}

function status(m) {
    const s = $('status');
    if (!m.ok) { s.textContent = 'does not compile'; s.className = 'bad'; return; }
    const f = m.func;
    if (!f) { s.textContent = 'no function of the original here'; s.className = ''; return; }
    if (f.match) { s.textContent = 'MATCH · ' + f.len + ' bytes'; s.className = 'good'; return; }
    const parts = [f.score + ' of ' + f.rows.length + ' lines differ',
                   f.len + ' bytes / original ' + f.target_len];
    if (f.first_diff !== null) parts.push('first byte at +' + hex(f.first_diff));
    s.textContent = parts.join(' · ');
    s.className = 'bad';
}

function hex(n) { return n.toString(16).padStart(4, '0'); }

// the tokens of b that are not at the same place in a
function marked(a, b) {
    const ta = a.split(/([\s,\[\]+:]+)/), tb = b.split(/([\s,\[\]+:]+)/);
    const frag = document.createDocumentFragment();
    tb.forEach((t, i) => {
        if (t !== ta[i] && /\w/.test(t)) {
            const s = document.createElement('span');
            s.className = 'tok';
            s.textContent = t;
            frag.appendChild(s);
        } else frag.appendChild(document.createTextNode(t));
    });
    return frag;
}

function cell(row, ins, other, cls) {
    const o = document.createElement('span');
    o.className = 'o';
    const t = document.createElement('span');
    t.className = cls;
    if (ins) {
        o.textContent = hex(ins.off);
        if (row.kind === 'operand' && other) t.appendChild(marked(other.text, ins.text));
        else t.textContent = ins.text;
        t.title = ins.bytes + (ins.reloc ? '   (bytes the linker fills in are not compared)' : '');
        if (ins.reloc) t.classList.add('reloc');
    }
    return [o, t];
}

function render(keepScroll) {
    const box = $('rows');
    const top = document.scrollingElement.scrollTop;
    box.innerHTML = '';
    const f = last && last.func;
    if (!f) return;
    const rows = f.rows;
    // which identical lines to show: those near a difference, or every one when not folding
    const keep = new Array(rows.length).fill(!$('fold').checked);
    rows.forEach((r, i) => {
        if (r.kind !== 'same')
            for (let k = Math.max(0, i - CTX); k <= Math.min(rows.length - 1, i + CTX); k++) keep[k] = true;
    });
    const src = $('src').checked && last.src;
    let line = null;                   // the source line shown last
    for (let i = 0; i < rows.length;) {
        if (!keep[i] && !unfolded.has(i)) {
            let j = i;
            while (j < rows.length && !keep[j]) j++;
            const d = document.createElement('div');
            d.className = 'fold';
            d.textContent = '⋯ ' + (j - i) + ' identical lines';
            const from = i;
            d.onclick = () => { for (let k = from; k < j; k++) unfolded.add(k); render(true); };
            box.appendChild(d);
            i = j;
            line = null;
            continue;
        }
        const r = rows[i];
        const l = r.c && r.c.line;
        if (src && l && l !== line && l in src) {
            const h = document.createElement('div');
            h.className = 'src';
            h.dataset.line = l;
            const n = document.createElement('span');
            n.className = 'o';
            n.textContent = l;
            const t = document.createElement('span');
            t.textContent = src[l].trim();
            h.append(n, t);
            box.appendChild(h);
        }
        if (l) line = l;
        const d = document.createElement('div');
        d.className = 'row ' + r.kind;
        d.dataset.i = i;
        if (l) d.dataset.line = l;
        else if (line) d.dataset.near = line;
        const m = document.createElement('span');
        m.className = 'm';
        m.textContent = MARK[r.kind];
        d.append(m, ...cell(r, r.c, r.t, 'c'), ...cell(r, r.t, r.c, 't'));
        box.appendChild(d);
        i++;
    }
    if (keepScroll) document.scrollingElement.scrollTop = top;
    if (hlLine) highlight(hlLine, false);
}

// lights up the code of a source line; with scroll, brings it into view if none of it is
// (opening the folds it is in)
function highlight(line, scroll) {
    hlLine = line;
    document.querySelectorAll('.hl').forEach(e => e.classList.remove('hl'));
    const f = last && last.func;
    if (!line || !f) return;
    let els = [...document.querySelectorAll('[data-line="' + line + '"]')];
    if (scroll) {
        const hidden = f.rows.map((r, i) => r.c && r.c.line === line ? i : -1)
            .filter(i => i >= 0 && !document.querySelector('.row[data-i="' + i + '"]'));
        if (hidden.length) {
            hidden.forEach(i => unfolded.add(i));
            render(true);
            return highlight(line, scroll);
        }
    }
    els.forEach(e => e.classList.add('hl'));
    if (!scroll || !els.length) return;
    const head = document.querySelector('header').offsetHeight;
    const seen = els.some(e => {
        const r = e.getBoundingClientRect();
        return r.top >= head && r.bottom <= window.innerHeight;
    });
    if (!seen) els[0].scrollIntoView({ block: 'center' });
}

// to the next (dir 1) or previous (-1) block of differences
function jump(dir) {
    const f = last && last.func;
    if (!f) return;
    const rows = f.rows;
    let i = cursor;
    // leave the block the cursor is in, then find the next one
    while (i >= 0 && i < rows.length && rows[i].kind !== 'same') i += dir;
    i += dir;
    while (i >= 0 && i < rows.length && rows[i].kind === 'same') i += dir;
    if (i < 0 || i >= rows.length) return;
    if (dir < 0) while (i > 0 && rows[i - 1].kind !== 'same') i--;
    cursor = i;
    const el = document.querySelector('.row[data-i="' + i + '"]');
    if (!el) return;
    document.querySelectorAll('.row.cur').forEach(e => e.classList.remove('cur'));
    el.classList.add('cur');
    el.scrollIntoView({ block: 'center' });
}

// the bar sits under the header, whose height changes as it wraps
new ResizeObserver(() => document.documentElement.style.setProperty(
    '--header-height', document.querySelector('header').offsetHeight + 'px')).observe(document.querySelector('header'));

vscode.postMessage({ type: 'ready' });
