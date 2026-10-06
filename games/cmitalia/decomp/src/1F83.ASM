; @at 1f83:0006
; @data 5d51:b39a
; @module
;
; Music driver interface: the driver (ADLIB.DRV or MT32.DRV, loaded paragraph aligned)
; installs itself on INT 91h when called at its offset 0 with AX = 91h; every other call
; is an INT 91h with the function number in AX.
;
; CSEG_ is the original module's code segment name, given by the build (/d).

DGROUP  group   _DATA

_DATA   segment word public 'DATA'
        extrn   _d_5d51_dd7c:word       ; segment the driver is loaded at
driver  dd      0                       ; its entry, offset 0 of that segment
song    dw      0                       ; what function 5 returned in DI
_DATA   ends

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_, ds:DGROUP

        public  _f_1f83_0006, _f_1f83_000e, _f_1f83_0021, _f_1f83_0043
        public  _f_1f83_0054, _f_1f83_005f

_f_1f83_0006 proc far
        mov     ax, 0Ah
        mov     cl, 14h
        int     91h
        ret
_f_1f83_0006 endp

_f_1f83_000e proc far                   ; install the driver
        mov     ax, _d_5d51_dd7c
        mov     word ptr driver+2, ax
        mov     ax, 91h
        call    driver
        mov     ax, 3
        int     91h
        ret
_f_1f83_000e endp

_f_1f83_0021 proc far                   ; play (char far *music)
        push    bp
        mov     bp, sp
        push    si
        push    di
        mov     si, [bp+6]
        mov     dx, [bp+8]
        mov     ax, 0Ch
        int     91h
        mov     ax, 5
        mov     cx, 0
        mov     dl, 6
        int     91h
        mov     song, di
        pop     di
        pop     si
        pop     bp
        ret
_f_1f83_0021 endp

_f_1f83_0043 proc far                   ; play again
        push    di
        mov     ax, 5
        mov     cx, 0
        mov     dl, 6
        int     91h
        mov     song, di
        pop     di
        ret
_f_1f83_0043 endp

_f_1f83_0054 proc far                   ; stop and remove the driver
        mov     ax, 4
        int     91h
        mov     ax, 0
        int     91h
        ret
_f_1f83_0054 endp

_f_1f83_005f proc far                   ; stop
        push    di
        mov     ax, 6
        mov     di, song
        int     91h
        pop     di
        ret
_f_1f83_005f endp

CSEG_   ends
        end
