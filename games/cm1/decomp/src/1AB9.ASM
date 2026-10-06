; @at 1ab9:0004
; @module
; @flags /m2
;
; Graphics primitives: Bresenham lines in the 320x200 256-colour mode and in the 16-colour
; planar mode (through the graphics controller's set/reset and bit mask), a glyph drawn
; into the planes, and saving and restoring a rectangle of the four planes. Coordinates
; are pixels; planar rows are 40 bytes (320 pixels).
;
; Its forward jumps are short where they reach, with no NOP: the original was assembled in
; more than one pass (/m2). The lines jump to the loop for their slope through a word on
; the stack ([bp-6], [bp-8]).
;
; CSEG_ is the original module's code segment name, given by the build (/d).

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_

        public  _f_1ab9_0004, _f_1ab9_00ec, _f_1ab9_0271, _f_1ab9_0322, _f_1ab9_03ad

_f_1ab9_0004 proc far   ; line (x1, y1, x2, y2, colour), 320x200 256 colours
        push    bp
        mov     bp, sp
        sub     sp, 6
        push    si
        push    di
        mov     si, 140h
        mov     cx, [bp+0Ah]
        sub     cx, [bp+6]
        je      L_006c
        jns     L_002d
        neg     cx
        mov     bx, [bp+0Ah]
        xchg    [bp+6], bx
        mov     [bp+0Ah], bx
        mov     bx, [bp+0Ch]
        xchg    [bp+8], bx
        mov     [bp+0Ch], bx
L_002d: mov     bx, [bp+0Ch]
        sub     bx, [bp+8]
        je      L_0092
        jns     L_003b
        neg     bx
        neg     si
L_003b: push    si
        mov     word ptr [bp-6], offset L_00a7
        cmp     bx, cx
        jle     L_004c
        mov     word ptr [bp-6], offset L_00bf
        xchg    bx, cx
L_004c: shl     bx, 1
        mov     [bp-2], bx
        sub     bx, cx
        mov     si, bx
        sub     bx, cx
        mov     [bp-4], bx
        push    cx
        mov     ax, [bp+8]
        mov     bx, [bp+6]
        call    vgaaddr
        mov     di, bx
        pop     cx
        inc     cx
        pop     bx
        jmp     word ptr [bp-6]
L_006c: mov     ax, [bp+8]
        mov     bx, [bp+0Ch]
        mov     cx, bx
        sub     cx, ax
        jge     L_007c
        neg     cx
        mov     ax, bx
L_007c: inc     cx
        mov     bx, [bp+6]
        push    cx
        call    vgaaddr
        pop     cx
        mov     di, bx
        dec     si
        mov     al, [bp+0Eh]
L_008b: stosb
        add     di, si
        loop    L_008b
        jmp     L_00d6
L_0092: push    cx
        mov     ax, [bp+8]
        mov     bx, [bp+6]
        call    vgaaddr
        mov     di, bx
        pop     cx
        inc     cx
        mov     al, [bp+0Eh]
        rep     stosb
        jmp     L_00d6
L_00a7: mov     al, [bp+0Eh]
L_00aa: stosb
        or      si, si
        jns     L_00b6
        add     si, [bp-2]
        loop    L_00aa
        jmp     L_00d6
L_00b6: add     si, [bp-4]
        add     di, bx
        loop    L_00aa
        jmp     L_00d6
L_00bf: mov     al, [bp+0Eh]
L_00c2: stosb
        add     di, bx
        or      si, si
        jns     L_00d1
        add     si, [bp-2]
        dec     di
        loop    L_00c2
        jmp     L_00d6
L_00d1: add     si, [bp-4]
        loop    L_00c2
L_00d6: pop     di
        pop     si
        mov     sp, bp
        pop     bp
        ret
_f_1ab9_0004 endp

vgaaddr proc near       ; es:bx = the byte of pixel (bx, ax)
        xchg    ah, al
        add     bx, ax
        shr     ax, 1
        shr     ax, 1
        add     bx, ax
        mov     ax, 0A000h
        mov     es, ax
        ret
vgaaddr endp

_f_1ab9_00ec proc far   ; line (x1, y1, x2, y2, colour), 16-colour planar
        push    bp
        mov     bp, sp
        sub     sp, 8
        push    si
        push    di
        mov     dx, 3CEh
        mov     ah, [bp+0Eh]
        xor     al, al
        out     dx, ax
        mov     ax, 0F01h
        out     dx, ax
        mov     ax, 3
        out     dx, ax
        mov     si, 28h
        mov     cx, [bp+0Ah]
        sub     cx, [bp+6]
        je      L_016c
        jns     L_0126
        neg     cx
        mov     bx, [bp+0Ah]
        xchg    [bp+6], bx
        mov     [bp+0Ah], bx
        mov     bx, [bp+0Ch]
        xchg    [bp+8], bx
        mov     [bp+0Ch], bx
L_0126: mov     bx, [bp+0Ch]
        sub     bx, [bp+8]
        je      L_0194
        jns     L_0134
        neg     bx
        neg     si
L_0134: mov     [bp-2], si
        mov     word ptr [bp-8], offset L_01eb
        cmp     bx, cx
        jle     L_0147
        mov     word ptr [bp-8], offset L_0224
        xchg    bx, cx
L_0147: shl     bx, 1
        mov     [bp-4], bx
        sub     bx, cx
        mov     si, bx
        sub     bx, cx
        mov     [bp-6], bx
        push    cx
        mov     ax, [bp+8]
        mov     bx, [bp+6]
        call    egaaddr
        mov     di, bx
        shl     ah, cl
        mov     bl, ah
        mov     al, 8
        pop     cx
        inc     cx
        jmp     word ptr [bp-8]
L_016c: mov     ax, [bp+8]
        mov     bx, [bp+0Ch]
        mov     cx, bx
        sub     cx, ax
        jge     L_017c
        neg     cx
        mov     ax, bx
L_017c: inc     cx
        mov     bx, [bp+6]
        push    cx
        call    egaaddr
        shl     ah, cl
        mov     al, 8
        out     dx, ax
        pop     cx
L_018a: or      es:[bx], al
        add     bx, si
        loop    L_018a
        jmp     L_0240
L_0194: push    ds
        mov     ax, [bp+8]
        mov     bx, [bp+6]
        call    egaaddr
        mov     di, bx
        mov     dh, ah
        not     dh
        shl     dh, cl
        not     dh
        mov     cx, [bp+0Ah]
        and     cl, 7
        xor     cl, 7
        mov     dl, 0FFh
        shl     dl, cl
        mov     ax, [bp+0Ah]
        mov     bx, [bp+6]
        mov     cl, 3
        shr     ax, cl
        shr     bx, cl
        mov     cx, ax
        sub     cx, bx
        mov     bx, dx
        mov     dx, 3CEh
        mov     al, 8
        push    es
        pop     ds
        mov     si, di
        or      bh, bh
        or      cx, cx
        jne     L_01da
        and     bl, bh
        jmp     L_01e4
L_01da: mov     ah, bh
        out     dx, ax
        movsb
        dec     cx
        mov     ah, 0FFh
        out     dx, ax
        rep     movsb
L_01e4: mov     ah, bl
        out     dx, ax
        movsb
        pop     ds
        jmp     L_0240
L_01eb: mov     ah, bl
L_01ed: or      ah, bl
        ror     bl, 1
        jb      L_020a
        or      si, si
        jns     L_01fc
        add     si, [bp-4]
        loop    L_01ed
L_01fc: add     si, [bp-6]
        out     dx, ax
        or      es:[di], al
        add     di, [bp-2]
        loop    L_01eb
        jmp     L_0240
L_020a: out     dx, ax
        or      es:[di], al
        inc     di
        or      si, si
        jns     L_021a
        add     si, [bp-4]
        loop    L_01eb
        jmp     L_0240
L_021a: add     si, [bp-6]
        add     di, [bp-2]
        loop    L_01eb
        jmp     L_0240
L_0224: mov     bx, [bp-2]
L_0227: out     dx, ax
        or      es:[di], al
        add     di, bx
        or      si, si
        jns     L_0236
        add     si, [bp-4]
        loop    L_0227
L_0236: add     si, [bp-6]
        ror     ah, 1
        adc     di, 0
        loop    L_0227
L_0240: xor     ax, ax
        out     dx, ax
        inc     ax
        out     dx, ax
        mov     al, 3
        out     dx, ax
        mov     ax, 0FF08h
        out     dx, ax
        pop     di
        pop     si
        mov     sp, bp
        pop     bp
        ret
_f_1ab9_00ec endp

egaaddr proc near       ; es:bx = the byte of pixel (bx, ax), ah = 1, cl = its shift
        mov     cl, bl
        push    dx
        mov     dx, 28h
        mul     dx
        pop     dx
        shr     bx, 1
        shr     bx, 1
        shr     bx, 1
        add     bx, ax
        mov     ax, 0A000h
        mov     es, ax
        and     cl, 7
        xor     cl, 7
        mov     ah, 1
        ret
egaaddr endp

_f_1ab9_0271 proc far   ; draw a glyph (char far *glyph, x, y, colour, fill, mode, rows)
        push    bp
        mov     bp, sp
        sub     sp, 2
        push    es
        push    ds
        push    di
        push    si
        mov     ax, [bp+0Ch]
        mov     bx, [bp+0Ah]
        call    egaaddr
        inc     cx
        and     cl, 7
        mov     ch, 0FFh
        shl     ch, cl
        mov     [bp-2], cx
        mov     cx, [bp+14h]
        push    es
        mov     si, bx
        les     di, [bp+6]
        pop     ds
        mov     dx, 3CEh
        mov     ax, 0A05h
        out     dx, ax
        mov     ax, 3
        out     dx, ax
        mov     ax, 7
        out     dx, ax
        mov     bl, [bp+0Eh]
        mov     bh, [bp+10h]
        cmp     byte ptr [bp-2], 0
        jne     L_02cf
        mov     al, 8
L_02b6: mov     ah, es:[di]
        out     dx, ax
        and     [si], bl
        cmp     word ptr [bp+12h], 1
        jne     L_02c7
        not     ah
        out     dx, ax
        and     [si], bh
L_02c7: inc     di
        add     si, 28h
        loop    L_02b6
        jmp     L_030a
L_02cf: push    cx
        mov     cx, [bp-2]
        mov     al, es:[di]
        xor     ah, ah
        shl     ax, cl
        push    ax
        mov     al, 8
        out     dx, ax
        and     [si], bl
        cmp     word ptr [bp+12h], 1
        jne     L_02ed
        not     ch
        xor     ah, ch
        out     dx, ax
        and     [si], bh
L_02ed: pop     ax
        mov     ah, al
        mov     al, 8
        out     dx, ax
        inc     si
        and     [si], bl
        cmp     word ptr [bp+12h], 1
        jne     L_0303
        not     ch
        xor     ah, ch
        out     dx, ax
        and     [si], bh
L_0303: inc     di
        add     si, 27h
        pop     cx
        loop    L_02cf
L_030a: mov     ax, 0FF08h
        out     dx, ax
        mov     ax, 5
        out     dx, ax
        mov     ax, 3
        out     dx, ax
        mov     ax, 0F07h
        out     dx, ax
        pop     si
        pop     di
        pop     ds
        pop     es
        mov     sp, bp
        pop     bp
        ret
_f_1ab9_0271 endp

_f_1ab9_0322 proc far   ; save (x1, y1, x2, y2) of the planes into (char far *buf, seg)
        push    bp
        mov     bp, sp
        sub     sp, 4
        push    ds
        push    si
        push    di
        mov     ax, [bp+0Ah]
        sub     ax, [bp+6]
        mov     cx, 0FF07h
        and     cl, al
        xor     cl, 7
        shl     ch, cl
        mov     cl, ch
        push    cx
        mov     cl, 3
        shr     ax, cl
        inc     ax
        push    ax
        mov     ax, [bp+0Ch]
        sub     ax, [bp+8]
        inc     ax
        push    ax
        mov     ax, [bp+8]
        mov     bx, [bp+6]
        call    egaaddr
        xor     cl, 7
        mov     ax, [bp+12h]
        mov     es, ax
        push    es
        pop     ds
        mov     si, bx
        les     di, [bp+0Eh]
        pop     ax
        mov     [bp-2], ax
        stosw
        pop     ax
        mov     [bp-4], ax
        stosw
        pop     ax
        mov     ch, al
        stosb
        mov     dx, 3CEh
        mov     ax, 5
        out     dx, ax
        mov     ax, 304h
L_037c: out     dx, ax
        push    ax
        push    word ptr [bp-2]
        push    si
L_0382: mov     bx, [bp-4]
        push    si
L_0386: lodsw
        dec     si
        rol     ax, cl
        stosb
        dec     bx
        jne     L_0386
        and     es:[di-1], ch
        pop     si
        add     si, 28h
        dec     word ptr [bp-2]
        jne     L_0382
        pop     si
        pop     word ptr [bp-2]
        pop     ax
        dec     ah
        jns     L_037c
        mov     ax, di
        pop     di
        pop     si
        pop     ds
        mov     sp, bp
        pop     bp
        ret
_f_1ab9_0322 endp

_f_1ab9_03ad proc far   ; restore a saved image at (x, y) from (char far *buf, seg)
        push    bp
        mov     bp, sp
        sub     sp, 0Ch
        push    es
        push    ds
        push    si
        push    di
        mov     ax, [bp+8]
        mov     bx, [bp+6]
        call    egaaddr
        mov     ax, [bp+0Eh]
        mov     es, ax
        inc     cl
        and     cl, 7
        mov     di, bx
        lds     si, [bp+0Ah]
        lodsw
        mov     [bp-2], ax
        lodsw
        mov     [bp-4], ax
        lodsb
        mov     ch, al
        mov     dx, 3CEh
        mov     ax, 3
        out     dx, ax
        mov     ax, 805h
        out     dx, ax
        mov     ax, 7
        out     dx, ax
        mov     ax, 0FF08h
        out     dx, ax
        mov     dl, 0C4h
        mov     ax, 802h
        cmp     cx, 0FF00h
        jne     L_041b
        mov     cx, [bp-4]
L_03fb: out     dx, ax
        push    ax
        push    di
        mov     bx, [bp-2]
L_0401: push    di
        push    cx
L_0403: lodsb
        and     es:[di], al
        inc     di
        loop    L_0403
        pop     cx
        pop     di
        add     di, 28h
        dec     bx
        jne     L_0401
        pop     di
        pop     ax
        shr     ah, 1
        jne     L_03fb
        jmp     L_04a4
L_041b: push    ax
        mov     bx, 0FFh
        mov     al, ch
        cbw
        cmp     word ptr [bp-4], 1
        jne     L_042e
        mov     bl, ch
        mov     ah, ch
        xor     al, al
L_042e: shl     ax, cl
        shl     bx, cl
        mov     bl, al
        mov     al, 8
        mov     [bp-0Ah], ax
        mov     ah, bl
        mov     [bp-0Ch], ax
        mov     ah, bh
        mov     [bp-8], ax
        mov     bx, [bp-4]
        pop     ax
L_0447: out     dx, ax
        push    ax
        push    di
        mov     dl, 0CEh
        mov     ax, [bp-2]
        mov     [bp-6], ax
L_0452: push    di
        push    si
        push    bx
        mov     ax, [bp-8]
        out     dx, ax
        lodsw
        dec     si
        test    cl, cl
        jne     L_0464
        dec     bx
        jne     L_046b
        jmp     L_047f
L_0464: rol     ax, cl
        and     es:[di], ah
        inc     di
        dec     bx
L_046b: push    ax
        mov     ax, 0FF08h
        out     dx, ax
        pop     ax
        dec     bx
        jle     L_047f
L_0474: and     es:[di], al
        inc     di
        lodsw
        dec     si
        rol     ax, cl
        dec     bx
        jne     L_0474
L_047f: mov     bx, ax
        mov     ax, [bp-0Ah]
        out     dx, ax
        and     es:[di], bl
        mov     ax, [bp-0Ch]
        out     dx, ax
        and     es:[di], bh
        pop     bx
        pop     si
        add     si, bx
        pop     di
        add     di, 28h
        dec     word ptr [bp-6]
        jne     L_0452
        pop     di
        pop     ax
        mov     dl, 0C4h
        shr     ah, 1
        jne     L_0447
L_04a4: mov     ax, 0F02h
        out     dx, ax
        mov     dl, 0CEh
        mov     ax, 3
        out     dx, ax
        mov     ax, 5
        out     dx, ax
        mov     ax, 0F07h
        out     dx, ax
        mov     ax, 0FF08h
        out     dx, ax
        pop     di
        pop     si
        pop     ds
        pop     es
        mov     sp, bp
        pop     bp
        ret
_f_1ab9_03ad endp

CSEG_   ends
        end
