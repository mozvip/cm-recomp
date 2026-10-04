// The match view: the code BCC makes of the C file being edited, lined up with the original
// code it must give (tools/match/fdiff.py does the compiling and aligning).
const vscode = require('vscode');
const cp = require('child_process');
const fs = require('fs');
const os = require('os');
const path = require('path');

const SOURCE = /[\\/]games[\\/][^\\/]+[\\/]decomp[\\/].*\.(c|asm)$/i;
// a function's definition (not a prototype) in C, or its label in assembly
const DEF_C = /^[A-Za-z_][\w \t*]*?\b([A-Za-z_]\w*)\s*\([^;]*$/;
const DEF_ASM = /^\s*_?([A-Za-z_]\w*)(?:\s+proc\b|:)/i;

let panel = null;
let doc = null;          // the document the view follows
let result = null;       // fdiff's last result for it
let shown = null;        // the function shown
let pinned = false;      // chosen in the view: do not follow the cursor
let running = null, again = false, timer = null;
let state = 'idle';      // idle | pending (edited, not compiled yet) | busy (compiling)
let progressDone = null; // ends the status bar's spinner
let title = 'Match';     // the panel's title, without the state mark

function retitle() {
    if (panel) panel.title = (state === 'busy' ? '⟳ ' : state === 'pending' ? '● ' : '') + title;
}
let tmpDir = null;
let compiledText = null; // the lines of the text that was compiled for result
let deco = null;         // editor decorations: lines whose code differs, the line hovered in the view

function root(file) {
    let d = path.dirname(file);
    while (d !== path.dirname(d)) {
        if (fs.existsSync(path.join(d, 'tools', 'match', 'fdiff.py'))) return d;
        d = path.dirname(d);
    }
    return null;
}

// the function the cursor is in: its definition line at or above the cursor, or the range
// of lines its code comes from
function funcAt(editor) {
    if (!editor || editor.document !== doc || !result) return null;
    const fns = result.functions;
    const def = /\.asm$/i.test(doc.fileName) ? DEF_ASM : DEF_C;
    for (let n = editor.selection.active.line; n >= 0; n--) {
        const m = def.exec(doc.lineAt(n).text);
        const named = m && fns.find(f => f.name === m[1]);
        if (named) return named.name;
        const inside = fns.find(f => f.first_line <= n + 1 && n + 1 <= f.last_line);
        if (inside) return inside.name;
    }
    return null;
}

function editors() {
    return vscode.window.visibleTextEditors.filter(e => e.document === doc);
}

// the C lines whose code differs from the original's: an instruction only in the original,
// or one -y does not make (merged code), counts for the line before it
function markLines() {
    const lines = { diff: new Set(), operand: new Set() };
    for (const f of (result && result.functions) || []) {
        let prev = null;
        for (const r of f.rows || []) {
            if (r.c && r.c.line) prev = r.c.line;
            if (r.kind === 'same') continue;
            const line = (r.c && r.c.line) || prev;
            if (line) lines[r.kind === 'operand' ? 'operand' : 'diff'].add(line);
        }
    }
    for (const l of lines.diff) lines.operand.delete(l);
    const ranges = set => [...set].map(l => new vscode.Range(l - 1, 0, l - 1, 0));
    for (const e of editors()) {
        e.setDecorations(deco.diff, ranges(lines.diff));
        e.setDecorations(deco.operand, ranges(lines.operand));
    }
}

function hover(line) {
    for (const e of editors())
        e.setDecorations(deco.hover, line ? [new vscode.Range(line - 1, 0, line - 1, 0)] : []);
}

function reveal(line) {
    const pos = new vscode.Position(Math.max(0, line - 1), 0);
    const ed = editors()[0];
    vscode.window.showTextDocument(doc, { viewColumn: ed ? ed.viewColumn : vscode.ViewColumn.One,
                                          selection: new vscode.Range(pos, pos) })
        .then(e => e.revealRange(new vscode.Range(pos, pos), vscode.TextEditorRevealType.InCenterIfOutsideViewport));
}

// tells the view (and the title and status bar) whether the code shown is being remade:
// pending = the editor's text changed since, busy = fdiff is running
function setState(s) {
    state = s;
    post({ type: 'state', state: s, queued: again, live: vscode.workspace.getConfiguration('cmDecomp').get('liveDelay') > 0 });
    retitle();
    if (s === 'busy' && !progressDone && doc) {
        vscode.window.withProgress({ location: vscode.ProgressLocation.Window, title: 'Compiling ' + path.basename(doc.fileName) },
            () => new Promise(done => { progressDone = done; }));
    } else if (s !== 'busy' && progressDone) {
        progressDone();
        progressDone = null;
    }
}

function compile() {
    if (!doc) return;
    clearTimeout(timer);
    if (running) { again = true; setState('busy'); return; }
    const top = root(doc.fileName);
    if (!top) { post({ type: 'error', text: 'tools/match/fdiff.py not found above ' + doc.fileName }); return; }
    // the editor's text, saved or not, compiled from a copy; the game comes from the real path
    tmpDir = tmpDir || fs.mkdtempSync(path.join(os.tmpdir(), 'cm-decomp-'));
    const copy = path.join(tmpDir, path.basename(doc.fileName));
    const text = doc.getText();
    fs.writeFileSync(copy, text, 'latin1');
    const target = doc;
    const py = vscode.workspace.getConfiguration('cmDecomp').get('python');
    setState('busy');
    running = cp.execFile(py, [path.join(top, 'tools', 'match', 'fdiff.py'), copy, '--as', doc.fileName, '--json', '--all'],
        { cwd: top, maxBuffer: 256 << 20 }, (err, stdout, stderr) => {
            running = null;
            if (target === doc) {
                try {
                    result = JSON.parse(stdout);
                    compiledText = text.split(/\r?\n/);
                    markLines();
                    show();
                } catch (e) {
                    post({ type: 'error', text: (stderr || String(err || e)).slice(-4000) });
                }
            }
            if (again) { again = false; compile(); }
            else setState(target === doc && doc.getText() !== text ? 'pending' : 'idle');
        });
}

function show() {
    if (!panel || !result) return;
    const names = result.functions.map(f => f.name);
    if (!pinned) {
        const at = funcAt(vscode.window.activeTextEditor);
        if (at && names.includes(at)) shown = at;
    }
    if (!names.includes(shown)) shown = result.func || names[0] || null;
    const f = result.functions.find(x => x.name === shown);
    title = 'Match: ' + (shown || path.basename(doc.fileName));
    retitle();
    // the source lines the shown code comes from
    const src = {};
    for (const r of (f && f.rows) || [])
        if (r.c && r.c.line && compiledText) src[r.c.line] = compiledText[r.c.line - 1] || '';
    const ed = vscode.window.activeTextEditor;
    post({ type: 'result', file: path.basename(doc.fileName), ok: result.ok, messages: result.messages,
           cc: result.cc, flags: result.flags, pinned, lines: result.lines, src,
           cursor: ed && ed.document === doc ? ed.selection.active.line + 1 : null,
           functions: result.functions.map(x => ({ name: x.name, match: x.match, score: x.score })),
           func: f || null });
}

function post(msg) {
    if (panel) panel.webview.postMessage(msg);
}

function follow(editor) {
    if (!editor || !SOURCE.test(editor.document.fileName)) return;
    if (editor.document !== doc) {
        doc = editor.document;
        result = null; shown = null; pinned = false;
        compile();
    } else if (result) {
        markLines();
    }
}

function open() {
    const editor = vscode.window.activeTextEditor;
    if (!editor || !SOURCE.test(editor.document.fileName)) {
        vscode.window.showInformationMessage('Open a C or assembly file of games/*/decomp first.');
        return;
    }
    if (panel) {
        panel.reveal(vscode.ViewColumn.Beside, true);
    } else {
        panel = vscode.window.createWebviewPanel('cmDecomp', 'Match', { viewColumn: vscode.ViewColumn.Beside, preserveFocus: true },
            { enableScripts: true, retainContextWhenHidden: true });
        panel.webview.html = html(panel.webview);
        panel.onDidDispose(() => {
            panel = null;
            if (progressDone) { progressDone(); progressDone = null; }
            for (const e of editors()) for (const d of Object.values(deco)) e.setDecorations(d, []);
        });
        panel.webview.onDidReceiveMessage(m => {
            if (m.type === 'ready') { if (result) show(); }
            else if (m.type === 'pick') { shown = m.name; pinned = true; show(); }
            else if (m.type === 'follow') { pinned = false; show(); }
            else if (m.type === 'refresh') compile();
            else if (m.type === 'goto' && doc) reveal(m.line);
            else if (m.type === 'hover' && doc) hover(m.line);
        });
    }
    doc = null;
    follow(editor);
    if (result) show();
}

function activate(context) {
    const bar = color => ({
        isWholeLine: true, borderStyle: 'solid', borderWidth: '0 0 0 3px', borderColor: new vscode.ThemeColor(color),
        overviewRulerColor: new vscode.ThemeColor(color), overviewRulerLane: vscode.OverviewRulerLane.Left,
    });
    deco = {
        diff: vscode.window.createTextEditorDecorationType(bar('editorError.foreground')),
        operand: vscode.window.createTextEditorDecorationType(bar('editorWarning.foreground')),
        hover: vscode.window.createTextEditorDecorationType({
            isWholeLine: true, backgroundColor: new vscode.ThemeColor('editor.rangeHighlightBackground'),
        }),
    };
    context.subscriptions.push(...Object.values(deco),
        vscode.commands.registerCommand('cmDecomp.open', open),
        vscode.commands.registerCommand('cmDecomp.refresh', compile),
        vscode.window.onDidChangeActiveTextEditor(e => { if (panel) follow(e); }),
        vscode.window.onDidChangeTextEditorSelection(e => {
            if (!panel || e.textEditor.document !== doc || !result) return;
            const at = !pinned && funcAt(e.textEditor);
            if (at && at !== shown) show();
            else post({ type: 'cursor', line: e.selections[0].active.line + 1 });
        }),
        vscode.window.onDidChangeVisibleTextEditors(() => { if (panel && result) markLines(); }),
        vscode.workspace.onDidSaveTextDocument(d => {
            if (panel && d === doc) { clearTimeout(timer); compile(); }
        }),
        vscode.workspace.onDidChangeTextDocument(e => {
            if (!panel || e.document !== doc || !e.contentChanges.length) return;
            const delay = vscode.workspace.getConfiguration('cmDecomp').get('liveDelay');
            clearTimeout(timer);
            if (delay > 0) timer = setTimeout(compile, delay);
            if (state !== 'busy') setState('pending');
        }),
        { dispose() { if (tmpDir) fs.rmSync(tmpDir, { recursive: true, force: true }); } });
}

function html(webview) {
    const nonce = Math.random().toString(36).slice(2);
    const script = fs.readFileSync(path.join(__dirname, 'view.js'), 'utf8');
    const style = fs.readFileSync(path.join(__dirname, 'view.css'), 'utf8');
    return `<!DOCTYPE html><html><head><meta charset="utf-8">
<meta http-equiv="Content-Security-Policy" content="default-src 'none'; style-src 'nonce-${nonce}'; script-src 'nonce-${nonce}';">
<style nonce="${nonce}">${style}</style></head><body>
<header>
  <select id="func" title="Function (follows the cursor unless picked here)"></select>
  <button id="follow" title="Follow the cursor again">⇣ cursor</button>
  <span id="status"></span>
  <span id="progress"></span>
  <span class="spacer"></span>
  <label title="Show the source lines the code comes from"><input type="checkbox" id="src" checked> source</label>
  <label title="Hide long runs of identical lines"><input type="checkbox" id="fold" checked> fold</label>
  <button id="prev" title="Previous difference (p)">▲</button>
  <button id="next" title="Next difference (n)">▼</button>
  <button id="refresh" title="Recompile (r)">⟳</button>
</header>
<div id="bar"></div>
<div id="messages"></div>
<div id="head" class="row"><span class="m"></span><span class="o"></span><span class="c">compiled</span><span class="o"></span><span class="t">original</span></div>
<div id="rows"></div>
<script nonce="${nonce}">${script}</script></body></html>`;
}

function deactivate() {}

module.exports = { activate, deactivate };
