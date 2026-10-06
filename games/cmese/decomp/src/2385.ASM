; @at 2385:000c
; @data 69da:b120
; @module
;
; Music driver interface: the driver (ADLIB.DRV or MT32.DRV, loaded paragraph aligned)
; installs itself on INT 91h when called at its offset 0 with AX = 91h; every other call
; is an INT 91h with the function number in AX.
;
; CSEG_ is the original module's code segment name, given by the build (/d).

DGROUP  group   _DATA

_DATA   segment word public 'DATA'
        extrn   _d_69da_e00e:word       ; segment the driver is loaded at
driver  dd      0                       ; its entry, offset 0 of that segment
song    dw      0                       ; what function 5 returned in DI
_DATA   ends

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_, ds:DGROUP

        public  _f_2385_000c, _f_2385_0014, _f_2385_0027, _f_2385_0049
        public  _f_2385_005a, _f_2385_0065

_f_2385_000c proc far
        mov     ax, 0Ah
        mov     cl, 14h
        int     91h
        ret
_f_2385_000c endp

_f_2385_0014 proc far                   ; install the driver
        mov     ax, _d_69da_e00e
        mov     word ptr driver+2, ax
        mov     ax, 91h
        call    driver
        mov     ax, 3
        int     91h
        ret
_f_2385_0014 endp

_f_2385_0027 proc far                   ; play (char far *music)
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
_f_2385_0027 endp

_f_2385_0049 proc far                   ; play again
        push    di
        mov     ax, 5
        mov     cx, 0
        mov     dl, 6
        int     91h
        mov     song, di
        pop     di
        ret
_f_2385_0049 endp

_f_2385_005a proc far                   ; stop and remove the driver
        mov     ax, 4
        int     91h
        mov     ax, 0
        int     91h
        ret
_f_2385_005a endp

_f_2385_0065 proc far                   ; stop
        push    di
        mov     ax, 6
        mov     di, song
        int     91h
        pop     di
        ret
_f_2385_0065 endp

CSEG_   ends
        end
