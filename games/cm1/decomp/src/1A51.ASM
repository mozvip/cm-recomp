; @at 1a51:0002
; @data 5d9c:2c04
; @module
;
; EMS interface library version 2.16 (James W. Birdsall, 1991): detection of the expanded
; memory manager, allocation and freeing of handles, and copies between conventional
; memory and a handle's pages through one physical page of the page frame. Every function
; leaves an EMM status in the error byte (0: none) and returns -1 when it fails.
;
; CSEG_ is the original module's code segment name, given by the build (/d).

        LOCALS

DGROUP  group   _DATA

_DATA   segment word public 'DATA'
pages   dw      -1                      ; mappable physical pages (5801h), -1 until asked
emmname db      'EMMXXXX0', 0
physpage dw     -1                      ; the physical page the copies map through
frameseg dw     0                       ; its segment
curhandle dw    -1                      ; the handle and logical page mapped there
curpage dw      0
        public  _ems_error
_ems_error db 0                       ; EMM status of the last call
version db      0                       ; EMM version (BCD), 0 until asked
        db      'EMS interface library version 2.16', 0
        db      '07/23/91', 0
        db      '18:39:30', 0
        db      'Copyright (c) 1991 James W. Birdsall.All Rights Reserved.', 0
_DATA   ends

status  equ     _ems_error

CSEG_   segment byte public 'CODE'
        assume  cs:CSEG_, ds:DGROUP

        public  _ems_init, _ems_alloc, _ems_free, _ems_write, _ems_read

_ems_init proc far                   ; init: 0 when an EMM is there
        push    bx
        push    cx
        push    dx
        mov     dx, offset emmname
        mov     ax, 3D00h
        int     21h
        jnc     @@open
        jmp     @@noemm
@@open: mov     bx, ax
        mov     ax, 4400h               ; a character device...
        int     21h
        jc      @@noemm
        and     dx, 80h
        jz      @@noemm
        mov     ax, 4407h               ; ... ready for output
        int     21h
        jc      @@noemm
        or      al, al
        jz      @@noemm
        mov     ah, 3Eh
        int     21h
        jc      @@noemm
        call    far ptr getver
        cmp     ax, -1
        je      @@fail
        call    far ptr getpages
        cmp     ax, -1
        je      @@fail
        push    physpage
        call    far ptr pageseg
        add     sp, 2
        test    status, 0FFh
        jnz     @@fail
        mov     frameseg, ax
        xor     ax, ax
        mov     status, al
        jmp     @@done
@@noemm: mov    status, 0FEh
@@fail: mov     ax, -1
@@done: pop     dx
        pop     cx
        pop     bx
        ret
_ems_init endp

getver  proc far                        ; the EMM version
        xor     ax, ax
        mov     al, version
        or      al, al
        jz      @@ask
        jmp     @@done
@@ask:  mov     ah, 46h
        int     67h
        or      ah, ah
        jz      @@got
        mov     status, ah
        mov     ax, -1
        jmp     @@done
@@got:  cmp     al, 30h
        jae     @@ok
        mov     status, 40h
        mov     ax, -1
        jmp     @@done
@@ok:   mov     version, al
        mov     status, 0
@@done: ret
getver  endp

getpages proc far                       ; the number of mappable physical pages
        push    cx
        mov     ax, pages
        cmp     ax, -1
        je      @@ask
        jmp     @@done
@@ask:  call    getver
        cmp     ax, -1
        je      @@fail
        cmp     ax, 40h
        jae     @@v4
        mov     ax, 4
        jmp     @@done
@@v4:   push    cx
        mov     ax, 5801h
        int     67h
        or      ah, ah
        jz      @@got
        pop     cx
        mov     status, ah
@@fail: mov     ax, -1
        jmp     @@done
@@got:  mov     ax, cx
        pop     cx
        mov     pages, ax
        cmp     ax, 4
        jb      @@few
        mov     physpage, 3
        jmp     @@ok
@@few:  dec     ax
        mov     physpage, ax
        inc     ax
@@ok:   mov     status, 0
@@done: pop     cx
        ret
getpages endp

freemem proc far                        ; the unallocated pages, in bytes
        push    bx
        mov     ah, 42h
        int     67h
        or      ah, ah
        jz      @@ok
        mov     status, ah
        mov     ax, -1
        jmp     @@done
@@ok:   mov     ax, bx
        ror     ax, 1
        ror     ax, 1
        mov     dx, ax
        and     dx, 3FFFh
        and     ax, 0C000h
        mov     status, 0
@@done: pop     bx
        ret
freemem endp

allocpages proc far                     ; a handle of n pages
        push    bp
        mov     bp, sp
        push    bx
        push    dx
        call    getver
        cmp     ax, -1
        je      @@fail
        cmp     ax, 40h
        jae     @@v4
        mov     ah, 43h
        jmp     @@alloc
@@v4:   mov     ax, 5A00h
@@alloc: mov    bx, [bp+6]
        int     67h
        or      ah, ah
        jnz     @@err
        mov     ax, dx
        mov     status, 0
        jmp     @@done
@@err:  mov     status, ah
@@fail: mov     ax, -1
@@done: pop     dx
        pop     bx
        pop     bp
        ret
allocpages endp

_ems_alloc proc far                   ; a handle of (long) bytes
        push    bp
        mov     bp, sp
        push    dx
        mov     ax, [bp+6]
        mov     dx, [bp+8]
        test    ax, 3FFh
        jz      @@round
        add     ax, 4000h
        adc     dx, 0
@@round: test   dx, 0C000h
        jnz     @@big
        rol     ax, 1
        rol     ax, 1
        and     ax, 3
        shl     dx, 1
        shl     dx, 1
        or      dx, ax
        jnz     @@alloc
        inc     dx
@@alloc: push   dx
        call    allocpages
        pop     dx
        jmp     @@done
@@big:  mov     status, 87h
        mov     ax, -1
@@done: pop     dx
        pop     bp
        ret
_ems_alloc endp

_ems_free proc far                   ; free a handle
        push    bp
        mov     bp, sp
        push    dx
        mov     ah, 45h
        mov     dx, [bp+6]
        int     67h
        or      ah, ah
        jz      @@ok
        mov     status, ah
        mov     ax, -1
        jmp     @@done
@@ok:   xor     ax, ax
        mov     status, al
@@done: pop     dx
        pop     bp
        ret
_ems_free endp

pagemap proc far                        ; the segment and number of each physical page
        push    bp
        mov     bp, sp
        push    di
        push    es
        push    cx
        push    bx
        les     di, [bp+6]
        call    getver
        cmp     ax, -1
        je      @@fail
        cmp     ax, 40h
        jae     @@v4
        mov     ah, 41h                 ; 3.x: four pages from the frame
        int     67h
        or      ah, ah
        jz      @@frame
        mov     status, ah
        jmp     @@fail
@@frame: mov    es:[di], bx
        mov     word ptr es:[di+2], 0
        add     bx, 400h
        mov     es:[di+4], bx
        mov     word ptr es:[di+6], 1
        add     bx, 400h
        mov     es:[di+8], bx
        mov     word ptr es:[di+0Ah], 2
        add     bx, 400h
        mov     es:[di+0Ch], bx
        mov     word ptr es:[di+0Eh], 3
        jmp     @@ok
@@v4:   mov     ax, 5800h
        int     67h
        or      ah, ah
        jz      @@ok
        mov     status, ah
@@fail: mov     ax, -1
        jmp     @@done
@@ok:   xor     ax, ax
        mov     status, al
@@done: pop     bx
        pop     cx
        pop     es
        pop     di
        pop     bp
        ret
pagemap endp

pageseg proc far                        ; the segment of a physical page
        push    bp
        mov     bp, sp
        push    bx
        push    cx
        call    getpages
        cmp     ax, -1
        je      @@fail
        shl     ax, 1
        shl     ax, 1
        mov     cx, sp
        sub     sp, ax
        mov     ax, sp
        push    ss
        push    ax
        call    pagemap
        add     sp, 4
        cmp     ax, -1
        jne     @@got
        mov     sp, cx
        jmp     @@fail
@@got:  mov     ax, [bp+6]
        mov     bx, sp
@@find: cmp     ax, ss:[bx+2]
        je      @@found
        add     bx, 4
        cmp     bx, cx
        je      @@none
        jmp     @@find
@@found: mov    ax, ss:[bx]
        mov     sp, cx
        mov     status, 0
        jmp     @@done
@@none: mov     sp, cx
        mov     status, 42h
@@fail: mov     ax, -1
@@done: pop     cx
        pop     bx
        pop     bp
        ret
pageseg endp

mappage proc far                        ; map (physical page, handle, logical page)
        push    bp
        mov     bp, sp
        push    bx
        push    dx
        mov     ax, [bp+6]
        mov     ah, 44h
        mov     bx, [bp+0Ah]
        mov     dx, [bp+8]
        int     67h
        or      ah, ah
        jz      @@ok
        mov     status, ah
        jmp     @@fail
@@ok:   mov     ax, physpage
        cmp     ax, [bp+6]
        jne     @@ret
        mov     ax, [bp+8]
        mov     curhandle, ax
        mov     ax, [bp+0Ah]
        mov     curpage, ax
@@ret:  mov     status, 0
        xor     ax, ax
        jmp     @@done
@@fail: mov     ax, -1
@@done: pop     dx
        pop     bx
        pop     bp
        ret
mappage endp

_ems_write proc far                   ; write (long size, void far *from, handle, long offset)
        push    bp
        mov     bp, sp
        push    bx
        push    cx
        push    dx
        push    di
        push    si
        push    es
        les     ax, [bp+6]
        or      ax, ax
        jnz     @@some
        mov     ax, es
        or      ax, ax
        jnz     @@some
        jmp     @@ok
@@some: mov     ah, 4Ch                 ; the handle's pages
        mov     dx, [bp+0Eh]
        int     67h
        or      ah, ah
        jz      @@size
        mov     status, ah
        jmp     @@fail
@@size: mov     ax, bx
        mov     bx, 4000h
        mul     bx
        les     bx, [bp+10h]
        mov     cx, es
        add     bx, [bp+6]
        adc     cx, [bp+8]
        cmp     cx, dx
        ja      @@over
        jb      @@first
        cmp     bx, ax
        jbe     @@first
@@over: mov     status, 41h
        jmp     @@fail
@@first: les    ax, [bp+10h]
        mov     dx, es
        shl     dx, 1
        shl     dx, 1
        mov     cl, 0Eh
        shr     ax, cl
        or      dx, ax
        mov     ax, [bp+0Eh]
        cmp     curhandle, ax
        jne     @@map
        cmp     curpage, dx
        jne     @@map
        jmp     @@mapped
@@map:  push    dx
        push    ax
        push    physpage
        call    mappage
        add     sp, 6
        or      ax, ax
        jz      @@mapped
        jmp     @@fail
@@mapped: les   cx, [bp+6]
        mov     dx, es
        mov     di, [bp+10h]
        and     di, 3FFFh
        mov     bx, 4000h
        sub     bx, di
        cmp     cx, bx
        ja      @@split
        or      dx, dx
        jnz     @@split
        mov     es, frameseg
        push    ds
        lds     si, [bp+0Ah]
        cld
        rep     movsb
        pop     ds
        jmp     @@ok
@@split: mov    es, frameseg
        push    ds
        lds     si, [bp+0Ah]
        xchg    bx, cx
        mov     ax, cx
        cld
        rep     movsb
        sub     bx, ax
        sbb     dx, 0
        mov     [bp+6], bx
        mov     [bp+8], dx
        mov     ax, ds
        pop     ds
        mov     di, si
        mov     cl, 4
        shr     di, cl
        add     ax, di
        and     si, 0Fh
        mov     dx, ax
@@next: test    word ptr [bp+8], 0FFFFh
        jnz     @@whole
        cmp     word ptr [bp+6], 4000h
        jbe     @@last
@@whole: mov    ax, curpage
        inc     ax
        push    ax
        push    word ptr [bp+0Eh]
        push    physpage
        call    mappage
        add     sp, 6
        or      ax, ax
        jnz     @@fail
        mov     es, frameseg
        xor     di, di
        push    ds
        mov     ds, dx
        mov     cx, 4000h
        cld
        rep     movsb
        sub     word ptr [bp+6], 4000h
        sbb     word ptr [bp+8], 0
        pop     ds
        mov     di, si
        mov     cl, 4
        shr     di, cl
        add     dx, di
        and     si, 0Fh
        jmp     @@next
@@last: mov     ax, curpage
        inc     ax
        push    ax
        push    word ptr [bp+0Eh]
        push    physpage
        call    mappage
        add     sp, 6
        or      ax, ax
        jnz     @@fail
        mov     es, frameseg
        xor     di, di
        push    ds
        mov     ds, dx
        mov     cx, [bp+6]
        cld
        rep     movsb
        pop     ds
        jmp     @@ok
@@fail: mov     ax, -1
        jmp     @@done
@@ok:   mov     status, 0
        xor     ax, ax
@@done: pop     es
        pop     si
        pop     di
        pop     dx
        pop     cx
        pop     bx
        pop     bp
        ret
_ems_write endp

_ems_read proc far                   ; read (long size, handle, long offset, void far *to)
        push    bp
        mov     bp, sp
        push    bx
        push    cx
        push    dx
        push    di
        push    si
        push    es
        les     ax, [bp+6]
        or      ax, ax
        jnz     @@some
        mov     ax, es
        or      ax, ax
        jnz     @@some
        jmp     @@ok
@@some: mov     ah, 4Ch
        mov     dx, [bp+0Ah]
        int     67h
        or      ah, ah
        jz      @@size
        mov     status, ah
        jmp     @@fail
@@size: mov     ax, bx
        mov     bx, 4000h
        mul     bx
        les     bx, [bp+0Ch]
        mov     cx, es
        add     bx, [bp+6]
        adc     cx, [bp+8]
        cmp     cx, dx
        ja      @@over
        jb      @@first
        cmp     bx, ax
        jbe     @@first
@@over: mov     status, 41h
        jmp     @@fail
@@first: les    ax, [bp+0Ch]
        mov     dx, es
        shl     dx, 1
        shl     dx, 1
        mov     cl, 0Eh
        shr     ax, cl
        or      dx, ax
        mov     ax, [bp+0Ah]
        cmp     curhandle, ax
        jne     @@map
        cmp     curpage, dx
        jne     @@map
        jmp     @@mapped
@@map:  push    dx
        push    ax
        push    physpage
        call    mappage
        add     sp, 6
        or      ax, ax
        jz      @@mapped
        jmp     @@fail
@@mapped: les   cx, [bp+6]
        mov     dx, es
        mov     si, [bp+0Ch]
        and     si, 3FFFh
        mov     bx, 4000h
        sub     bx, si
        cmp     cx, bx
        ja      @@split
        or      dx, dx
        jnz     @@split
        les     di, [bp+10h]
        push    ds
        mov     ds, frameseg
        cld
        rep     movsb
        pop     ds
        jmp     @@ok
@@split: les    di, [bp+10h]
        push    ds
        mov     ds, frameseg
        xchg    bx, cx
        mov     ax, cx
        cld
        rep     movsb
        pop     ds
        sub     bx, ax
        sbb     dx, 0
        mov     [bp+6], bx
        mov     [bp+8], dx
        mov     ax, es
        mov     si, di
        mov     cl, 4
        shr     si, cl
        add     ax, si
        and     di, 0Fh
        mov     es, ax
@@next: test    word ptr [bp+8], 0FFFFh
        jnz     @@whole
        cmp     word ptr [bp+6], 4000h
        jbe     @@last
@@whole: mov    ax, curpage
        inc     ax
        push    ax
        push    word ptr [bp+0Ah]
        push    physpage
        call    mappage
        add     sp, 6
        or      ax, ax
        jnz     @@fail
        push    ds
        mov     ds, frameseg
        xor     si, si
        mov     cx, 4000h
        cld
        rep     movsb
        pop     ds
        sub     word ptr [bp+6], 4000h
        sbb     word ptr [bp+8], 0
        mov     dx, es
        mov     si, di
        mov     cl, 4
        shr     si, cl
        add     dx, si
        and     di, 0Fh
        mov     es, dx
        jmp     @@next
@@last: mov     ax, curpage
        inc     ax
        push    ax
        push    word ptr [bp+0Ah]
        push    physpage
        call    mappage
        add     sp, 6
        or      ax, ax
        jnz     @@fail
        push    ds
        mov     ds, frameseg
        xor     si, si
        mov     cx, [bp+6]
        cld
        rep     movsb
        pop     ds
        jmp     @@ok
@@fail: mov     ax, -1
        jmp     @@done
@@ok:   mov     status, 0
        xor     ax, ax
@@done: pop     es
        pop     si
        pop     di
        pop     dx
        pop     cx
        pop     bx
        pop     bp
        ret
_ems_read endp

setname proc far                        ; set a handle's name (4.0)
        push    bp
        mov     bp, sp
        push    dx
        push    si
        call    getver
        cmp     ax, -1
        je      @@fail
        cmp     ax, 40h
        jb      @@old
        mov     ax, 5301h
        mov     dx, [bp+6]
        push    ds
        lds     si, [bp+8]
        int     67h
        pop     ds
        or      ah, ah
        jz      @@ok
        mov     status, ah
        jmp     @@fail
@@old:  mov     status, 40h
@@fail: mov     ax, -1
        jmp     @@done
@@ok:   xor     ax, ax
        mov     status, al
@@done: pop     si
        pop     dx
        pop     bp
        ret
setname endp

getname proc far                        ; a handle's name (8 zeros before 4.0)
        push    bp
        mov     bp, sp
        push    cx
        push    dx
        push    di
        push    es
        call    getver
        cmp     ax, -1
        je      @@fail
        cmp     ax, 40h
        jb      @@old
        mov     ax, 5300h
        mov     dx, [bp+6]
        les     di, [bp+8]
        int     67h
        or      ah, ah
        jz      @@ok
        mov     status, ah
        jmp     @@fail
@@old:  les     di, [bp+8]
        mov     cx, 4
        xor     ax, ax
        cld
        rep     stosw
        jmp     @@ok
@@fail: mov     ax, -1
        jmp     @@done
@@ok:   xor     ax, ax
        mov     status, al
@@done: pop     es
        pop     di
        pop     dx
        pop     cx
        pop     bp
        ret
getname endp

CSEG_   ends
        end
