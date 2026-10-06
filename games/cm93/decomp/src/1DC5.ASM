; @at 1dc5:0004
; @data 60ae:b454
; @module
; @flags /m2
;
; IFF ILBM pictures (the .LBM files): find the FORM ILBM, read BMHD, turn CMAP into 16
; 12-bit palette entries (0RGB, one nibble per colour), and unpack the ByteRun1 BODY,
; four plane rows of 40 bytes per line, 200 lines. Chunk ids are compared as words read
; with LODSW ('FO' is 4F46h), and chunk sizes are big-endian (XCHG AL, AH).
;
; Assembled in more than one pass (/m2): forward jumps and calls have no NOP after them.
;
; CSEG_ is the original module's code segment name, given by the build (/d).

DGROUP  group   _DATA

_DATA   segment word public 'DATA'
palette dw      16 dup (0)              ; CMAP as 0RGB words, unused entries 0
_DATA   ends

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_, ds:DGROUP

        public  _f_1dc5_0004, _f_1dc5_0150, _f_1dc5_030a

_f_1dc5_0004 proc far   ; unpack an ILBM (char far *file, char far *screen), 320x200 planar
        push    bp
        mov     bp, sp
        sub     sp, 26h
        push    ds
        push    es
        push    si
        push    di
        lds     si, [bp+6]
        les     di, [bp+0Ah]
L_0012: lodsw
        cmp     ax, 4F46h
        jne     L_0012
        lodsw
        cmp     ax, 4D52h
        jne     L_0012
        add     si, 4
L_0021: lodsw
        cmp     ax, 4C49h
        jne     L_0021
        lodsw
        cmp     ax, 4D42h
        jne     L_0021
L_002d: lodsw
        mov     bx, ax
        lodsw
        cmp     bx, 4D42h
        jne     L_003c
        cmp     ax, 4448h
        je      L_0060
L_003c: cmp     bx, 4D43h
        jne     L_0047
        cmp     ax, 5041h
        je      L_00af
L_0047: cmp     bx, 4F42h
        jne     L_0055
        cmp     ax, 5944h
        jne     L_0055
        jmp     L_0105
L_0055: lodsw
        lodsw
        xchg    ah, al
        inc     ax
        and     al, 0FEh
        add     si, ax
        jmp     L_002d
L_0060: lodsw
        lodsw
        xchg    ah, al
        push    ax
        push    si
        lodsw
        xchg    ah, al
        mov     [bp-2], ax
        lodsw
        xchg    ah, al
        mov     [bp-4], ax
        lodsw
        xchg    ah, al
        mov     [bp-6], ax
        lodsw
        xchg    ah, al
        mov     [bp-8], ax
        mov     ah, 0
        lodsb
        mov     [bp-0Ah], ax
        lodsb
        mov     [bp-0Ch], ax
        lodsb
        mov     [bp-0Eh], ax
        lodsb
        lodsw
        xchg    ah, al
        mov     [bp-10h], ax
        lodsw
        xchg    ah, al
        mov     [bp-12h], ax
        lodsw
        xchg    ah, al
        mov     [bp-14h], ax
        lodsw
        xchg    ah, al
        mov     [bp-16h], ax
        pop     si
        pop     ax
        inc     ax
        and     al, 0FEh
        add     si, ax
        jmp     L_002d
L_00af: lodsw
        lodsw
        xchg    ah, al
        push    ax
        push    si
        push    di
        push    es
        mov     dx, DGROUP
        mov     es, dx
        mov     di, offset palette
        mov     cx, 10h
        mov     dx, ax
L_00c4: lodsb
        shl     ax, 1
        shl     ax, 1
        shl     ax, 1
        shl     ax, 1
        and     ax, 0F00h
        mov     bx, ax
        lodsb
        and     ax, 0F0h
        or      bx, ax
        lodsb
        shr     ax, 1
        shr     ax, 1
        shr     ax, 1
        shr     ax, 1
        and     ax, 0Fh
        or      ax, bx
        stosw
        sub     dx, 3
        je      L_00fa
        loop    L_00c4
L_00ee: pop     es
        pop     di
        pop     si
        pop     ax
        inc     ax
        and     al, 0FEh
        add     si, ax
        jmp     L_002d
L_00fa: dec     cx
        je      L_00ee
        mov     ax, 0
L_0100: stosw
        loop    L_0100
        jmp     L_00ee
L_0105: mov     ax, [si+2]
        xchg    ah, al
        add     si, 4
        mov     cx, 0C8h
L_0110: push    es
        push    di
        push    es
        push    di
        call    unpackrow
        pop     di
        pop     es
        add     di, 1F18h
        push    es
        push    di
        call    unpackrow
        pop     di
        pop     es
        add     di, 1F18h
        push    es
        push    di
        call    unpackrow
        pop     di
        pop     es
        add     di, 1F18h
        push    es
        push    di
        call    unpackrow
        add     sp, 4
        pop     di
        pop     es
        add     di, 28h
        loop    L_0110
        pop     di
        pop     si
        pop     es
        pop     ds
        mov     sp, bp
        pop     bp
        ret
_f_1dc5_0004 endp

_f_1dc5_0150 proc far   ; show an ILBM (char far *file, unsigned screen segment) through the planes
        push    bp
        mov     bp, sp
        sub     sp, 26h
        push    ds
        push    es
        push    si
        push    di
        lds     si, [bp+6]
        mov     ax, [bp+0Ah]
        mov     es, ax
        mov     di, 0
        mov     dx, 3CEh
        mov     ah, 0
        mov     al, 3
        out     dx, ax
        mov     ax, 805h
        out     dx, ax
        mov     ax, 7
        out     dx, ax
        mov     ax, 0FF08h
        out     dx, ax
L_0177: lodsw
        cmp     ax, 4F46h
        jne     L_0177
        lodsw
        cmp     ax, 4D52h
        jne     L_0177
        add     si, 4
L_0186: lodsw
        cmp     ax, 4C49h
        jne     L_0186
        lodsw
        cmp     ax, 4D42h
        jne     L_0186
L_0192: lodsw
        mov     bx, ax
        lodsw
        cmp     bx, 4D42h
        jne     L_01a1
        cmp     ax, 4448h
        je      L_01c5
L_01a1: cmp     bx, 4D43h
        jne     L_01ac
        cmp     ax, 5041h
        je      L_0214
L_01ac: cmp     bx, 4F42h
        jne     L_01ba
        cmp     ax, 5944h
        jne     L_01ba
        jmp     L_026a
L_01ba: lodsw
        lodsw
        xchg    ah, al
        inc     ax
        and     al, 0FEh
        add     si, ax
        jmp     L_0192
L_01c5: lodsw
        lodsw
        xchg    ah, al
        push    ax
        push    si
        lodsw
        xchg    ah, al
        mov     [bp-2], ax
        lodsw
        xchg    ah, al
        mov     [bp-4], ax
        lodsw
        xchg    ah, al
        mov     [bp-6], ax
        lodsw
        xchg    ah, al
        mov     [bp-8], ax
        mov     ah, 0
        lodsb
        mov     [bp-0Ah], ax
        lodsb
        mov     [bp-0Ch], ax
        lodsb
        mov     [bp-0Eh], ax
        lodsb
        lodsw
        xchg    ah, al
        mov     [bp-10h], ax
        lodsw
        xchg    ah, al
        mov     [bp-12h], ax
        lodsw
        xchg    ah, al
        mov     [bp-14h], ax
        lodsw
        xchg    ah, al
        mov     [bp-16h], ax
        pop     si
        pop     ax
        inc     ax
        and     al, 0FEh
        add     si, ax
        jmp     L_0192
L_0214: lodsw
        lodsw
        xchg    ah, al
        push    ax
        push    si
        push    di
        push    es
        mov     dx, DGROUP
        mov     es, dx
        mov     di, offset palette
        mov     cx, 10h
        mov     dx, ax
L_0229: lodsb
        shl     ax, 1
        shl     ax, 1
        shl     ax, 1
        shl     ax, 1
        and     ax, 0F00h
        mov     bx, ax
        lodsb
        and     ax, 0F0h
        or      bx, ax
        lodsb
        shr     ax, 1
        shr     ax, 1
        shr     ax, 1
        shr     ax, 1
        and     ax, 0Fh
        or      ax, bx
        stosw
        sub     dx, 3
        je      L_025f
        loop    L_0229
L_0253: pop     es
        pop     di
        pop     si
        pop     ax
        inc     ax
        and     al, 0FEh
        add     si, ax
        jmp     L_0192
L_025f: dec     cx
        je      L_0253
        mov     ax, 0
L_0265: stosw
        loop    L_0265
        jmp     L_0253
L_026a: mov     ax, [si+2]
        xchg    ah, al
        add     si, 4
        mov     cx, 0C8h
L_0275: mov     dx, 3C4h
        mov     ax, 102h
        out     dx, ax
        push    es
        push    di
        call    unpackrow
        add     sp, 4
        mov     dx, 3C4h
        mov     ax, 202h
        out     dx, ax
        push    es
        push    di
        call    unpackrow
        add     sp, 4
        mov     dx, 3C4h
        mov     ax, 402h
        out     dx, ax
        push    es
        push    di
        call    unpackrow
        add     sp, 4
        mov     dx, 3C4h
        mov     ax, 802h
        out     dx, ax
        push    es
        push    di
        call    unpackrow
        pop     di
        pop     es
        loop    L_0275
        mov     ax, 0F02h
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
        pop     es
        pop     ds
        mov     sp, bp
        pop     bp
        ret
_f_1dc5_0150 endp

unpackrow proc far      ; ds:si: ByteRun1 data, unpacked into [bp+6] (40 bytes, one plane row)
        push    bp
        mov     bp, sp
        push    di
        push    es
        push    cx
        push    ax
        les     di, [bp+6]
        mov     bx, 28h
L_02e1: mov     ah, 0
        lodsb
        mov     cx, ax
        and     al, al
        jns     L_02f6
        neg     cl
        inc     cx
        lodsb
L_02ee: stosb
        dec     bx
        je      L_02ff
        loop    L_02ee
        jmp     L_02e1
L_02f6: inc     cx
L_02f7: movsb
        dec     bx
        je      L_02ff
        loop    L_02f7
        jmp     L_02e1
L_02ff: mov     [bp+6], di
        pop     ax
        pop     cx
        pop     es
        pop     di
        pop     bp
        ret
unpackrow endp

_f_1dc5_030a proc far   ; copy the second screen page (a400) to the first (a000)
        push    ds
        push    es
        push    si
        push    di
        mov     dx, 3CEh
        mov     ax, 8
        out     dx, ax
        mov     ax, 0A000h
        mov     es, ax
        mov     ax, 0A400h
        mov     ds, ax
        mov     si, 0
        mov     di, 0
        mov     cx, 1F40h
        rep     movsb
        mov     ax, 0FF08h
        out     dx, ax
        pop     di
        pop     si
        pop     es
        pop     ds
        ret
_f_1dc5_030a endp

CSEG_   ends
        end
