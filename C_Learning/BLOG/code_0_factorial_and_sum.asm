factorial:
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        cmp     DWORD PTR [ebp+8], 1
        jg      .L2
        mov     eax, 1
        jmp     .L3
.L2:
        mov     eax, DWORD PTR [ebp+8]
        sub     eax, 1
        sub     esp, 12
        push    eax
        call    factorial
        add     esp, 16
        imul    eax, DWORD PTR [ebp+8]
.L3:
        leave
        ret
.LC0:
        .string "Factorial of %d is %d\n"
.LC1:
        .string "Sum of array elements: %d\n"
main:
        lea     ecx, [esp+4]
        and     esp, -16
        push    DWORD PTR [ecx-4]
        push    ebp
        mov     ebp, esp
        push    ecx
        sub     esp, 52
        mov     DWORD PTR [ebp-20], 5
        sub     esp, 12
        push    DWORD PTR [ebp-20]
        call    factorial
        add     esp, 16
        mov     DWORD PTR [ebp-24], eax
        sub     esp, 4
        push    DWORD PTR [ebp-24]
        push    DWORD PTR [ebp-20]
        push    OFFSET FLAT:.LC0
        call    printf
        add     esp, 16
        mov     DWORD PTR [ebp-44], 1
        mov     DWORD PTR [ebp-40], 2
        mov     DWORD PTR [ebp-36], 3
        mov     DWORD PTR [ebp-32], 4
        mov     DWORD PTR [ebp-28], 5
        mov     DWORD PTR [ebp-12], 0
        mov     DWORD PTR [ebp-16], 0
        jmp     .L5
.L6:
        mov     eax, DWORD PTR [ebp-16]
        mov     eax, DWORD PTR [ebp-44+eax*4]
        add     DWORD PTR [ebp-12], eax
        add     DWORD PTR [ebp-16], 1
.L5:
        cmp     DWORD PTR [ebp-16], 4
        jle     .L6
        sub     esp, 8
        push    DWORD PTR [ebp-12]
        push    OFFSET FLAT:.LC1
        call    printf
        add     esp, 16
        mov     eax, 0
        mov     ecx, DWORD PTR [ebp-4]
        leave
        lea     esp, [ecx-4]
        ret
