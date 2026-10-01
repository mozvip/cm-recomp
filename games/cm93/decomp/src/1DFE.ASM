; @at 1dfe:000a
; @data 60ae:b49c
; @module
;
; Keyboard driver: an INT 9 handler that keeps the last key typed and, for the keys that
; stand in for the mouse (arrows move the pointer, Ctrl/Shift/Alt/Space/Home/` click), a
; bitmask of the ones held down. The pointer moves one pixel per interrupt, three once a
; key has been held for ten.
;
; CSEG_ is the original module's code segment name, given by the build (/d).

DGROUP  group   _DATA

_DATA   segment word public 'DATA'
        extrn   _d_60ae_9663:word       ; pointer x (14d2)
        extrn   _d_60ae_9665:word       ; pointer y
        extrn   _d_60ae_9669:word       ; button down

scantab db      0, 0, '1234567890-=', 8, 0
        db      'QWERTYUIOP[]', 13, 0
        db      'ASDFGHJKL;', 27h, '#', 0, '\'
        db      'ZXCVBNM,./', 0, 0, 0, ' '
        db      72 dup (0)
; groups of scancodes: bit number of keys, scancodes, 0; a 0 bit number... ends the list
keytab  db      0, 4Bh, 0                       ; left
        db      1, 4Dh, 0                       ; right
        db      2, 48h, 0                       ; up
        db      3, 50h, 0                       ; down
        db      4, 29h, 39h, 52h, 47h, 1Dh, 36h, 38h, 0 ; the button
        db      0
oldint9 dd      0
        public  _d_60ae_b538
_d_60ae_b538 dw 0
keys    dw      0                       ; the keys of keytab held down, bit per group
repeat  db      0                       ; interrupts since the keys changed
installed db    0
lastkey db      0                       ; ASCII of the last key pressed, 0 once released
        db      6 dup (0)
; the mouse pointer, two 11-row masks (outline, fill), one byte pair per row
cursor  db      0FEh, 0, 84h, 0, 88h, 0, 84h, 0, 0A2h, 0, 0D1h, 0, 88h, 80h, 4, 40h
        db      2, 20h, 1, 20h, 0, 0E0h
        db      0FEh, 0, 0FCh, 0, 0F8h, 0, 0FCh, 0, 0FEh, 0, 0DFh, 0, 8Fh, 80h, 7, 0C0h
        db      3, 0E0h, 1, 0E0h, 0, 0E0h
        db      0
; (CM1 defines its graphics and sound flags here; CM93 moved them to another module)
_DATA   ends

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_, ds:DGROUP

        public  _f_1dfe_000a, _f_1dfe_0044

_f_1dfe_000a proc far                   ; install
        test    installed, 0FFh
        jne     inst_done
        mov     _d_60ae_b538, 0
        mov     keys, 0
        mov     ax, 0
        mov     es, ax
        cli
        mov     ax, es:[24h]
        mov     word ptr oldint9, ax
        mov     ax, es:[26h]
        mov     word ptr oldint9+2, ax
        mov     word ptr es:[24h], offset int9
        mov     es:[26h], cs
        sti
        mov     installed, 1
inst_done:
        ret
_f_1dfe_000a endp

_f_1dfe_0044 proc far                   ; remove
        test    installed, 0FFh
        je      rem_done
        mov     installed, 0
        mov     ax, 0
        mov     es, ax
        cli
        mov     ax, word ptr oldint9
        mov     es:[24h], ax
        mov     ax, word ptr oldint9+2
        mov     es:[26h], ax
        sti
rem_done:
        ret
_f_1dfe_0044 endp

move    proc near                       ; move the pointer by the keys held
        mov     ax, keys
        mov     bx, ax
        and     bx, 0Fh
        jne     held
        mov     repeat, 0
        jmp     short button
held:   inc     repeat
        cmp     repeat, 10
        jb      slow
        test    ax, 1
        je      f_right
        cmp     _d_60ae_9663, 3
        jb      f_right
        sub     _d_60ae_9663, 3
f_right: test   ax, 2
        je      f_up
        cmp     _d_60ae_9663, 317
        jae     f_up
        add     _d_60ae_9663, 3
f_up:   test    ax, 4
        je      f_down
        cmp     _d_60ae_9665, 3
        jb      f_down
        sub     _d_60ae_9665, 3
f_down: test    ax, 8
        je      button
        cmp     _d_60ae_9665, 197
        jae     button
        add     _d_60ae_9665, 3
button: test    ax, 10h
        je      up1
        mov     _d_60ae_9669, 1
        jmp     short done1
up1:    mov     _d_60ae_9669, 0
done1:  ret
slow:   test    ax, 1
        je      s_right
        cmp     _d_60ae_9663, 1
        jb      s_right
        dec     _d_60ae_9663
s_right: test   ax, 2
        je      s_up
        cmp     _d_60ae_9663, 319
        jae     s_up
        inc     _d_60ae_9663
s_up:   test    ax, 4
        je      s_down
        cmp     _d_60ae_9665, 1
        jb      s_down
        dec     _d_60ae_9665
s_down: test    ax, 8
        je      s_button
        cmp     _d_60ae_9665, 199
        jae     s_button
        inc     _d_60ae_9665
s_button: test  ax, 10h
        je      up2
        mov     _d_60ae_9669, 1
        jmp     short done2
up2:    mov     _d_60ae_9669, 0
done2:  ret
move    endp

int9    proc far
        cli
        push    ax
        push    bx
        push    cx
        push    dx
        push    si
        push    di
        push    ds
        push    es
        cld
        mov     ax, DGROUP
        mov     ds, ax
        call    readkey
        pop     es
        pop     ds
        pop     di
        pop     si
        pop     dx
        pop     cx
        pop     bx
        mov     al, 61h                 ; end of interrupt, IRQ 1
        out     20h, al
        cli
        pop     ax
        iret
int9    endp

readkey proc near
        in      al, 60h
        push    ax
        in      al, 61h                 ; acknowledge to the keyboard
        mov     ah, al
        or      al, 80h
        out     61h, al
        xchg    al, ah
        out     61h, al
        pop     ax
        call    translate
        call    move
        ret
readkey endp

translate proc near                     ; al: the scancode
        mov     bl, al
        and     bl, 80h
        xor     bl, 80h                 ; bl: 80h pressed, 0 released
        and     al, 7Fh
        push    ax
        and     bl, bl
        je      released
        mov     si, offset scantab
        mov     ah, 0
        add     si, ax
        lodsb
        mov     lastkey, al
        jmp     short find
released:
        mov     lastkey, 0
find:   pop     ax
        mov     si, offset keytab
group_: mov     cl, [si]
        inc     si
code_:  cmp     al, [si]
        je      found
        inc     si
        test    byte ptr [si], 0FFh
        jne     code_
        inc     si
        test    byte ptr [si], 0FFh
        jne     group_
        ret
found:  mov     si, offset keys
        mov     ax, [si]
        mov     dx, 1
        shl     dx, cl
        xor     dx, 0FFFFh
        and     ax, dx
        test    bl, 0FFh
        je      store
        xor     dx, 0FFFFh
        or      ax, dx
store:  mov     [si], ax
        ret
translate endp

CSEG_   ends
        end
