; @at 1ab2:000e
; @data 5d9c:2c88
; @module
;
; Music driver interface: the driver (ADLIB.DRV or MT32.DRV, loaded paragraph aligned)
; installs itself on INT 91h when called at its offset 0 with AX = 91h; every other call
; is an INT 91h with the function number in AX.
;
; CSEG_ is the original module's code segment name, given by the build (/d).

DGROUP  group   _DATA

_DATA   segment word public 'DATA'
        extrn   _sound_driver_seg:word       ; segment the driver is loaded at
driver  dd      0                       ; its entry, offset 0 of that segment
song    dw      0                       ; what function 5 returned in DI
_DATA   ends

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_, ds:DGROUP

        public  _mt32_music_setup, _install_music_driver, _start_music, _music_on
        public  _remove_music_driver, _music_off

_mt32_music_setup proc far
        mov     ax, 0Ah
        mov     cl, 14h
        int     91h
        ret
_mt32_music_setup endp

_install_music_driver proc far                   ; install the driver
        mov     ax, _sound_driver_seg
        mov     word ptr driver+2, ax
        mov     ax, 91h
        call    driver
        mov     ax, 3
        int     91h
        ret
_install_music_driver endp

_start_music proc far                   ; play (char far *music)
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
_start_music endp

_music_on proc far                   ; play again
        push    di
        mov     ax, 5
        mov     cx, 0
        mov     dl, 6
        int     91h
        mov     song, di
        pop     di
        ret
_music_on endp

_remove_music_driver proc far                   ; stop and remove the driver
        mov     ax, 4
        int     91h
        mov     ax, 0
        int     91h
        ret
_remove_music_driver endp

_music_off proc far                   ; stop
        push    di
        mov     ax, 6
        mov     di, song
        int     91h
        pop     di
        ret
_music_off endp

CSEG_   ends
        end
