section .text
global _start

_start:
    mov eax, 5    ; Put 5 in eax
    add eax, 3    ; Add 3 to eax
    ; eax now contains 8

    ; Exit
    mov eax, 1
    xor ebx, ebx
    int 0x80
