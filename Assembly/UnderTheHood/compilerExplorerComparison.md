This is using the Compiler explorer, which can be found here:
https://godbolt.org/


**C CODE:

#include <stdio.h>

int main() {
	int mynumber;                // declaring a variable
	int othernumber = 7;
	
    if (othernumber == 7) 
    {
        mynumber = 9;
    }
    else if (othernumber > 7)
    {
        mynumber = 1;
    }
    else
    {
        printf("We can't run this program");
        return 0;
    }

    printf("%d", mynumber);

}

**Main ASSEMBLY CODE (x86-64 GCC 13.2)::

.LC0:
        .string "We can't run this program"
.LC1:
        .string "%d"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     DWORD PTR [rbp-8], 7
        cmp     DWORD PTR [rbp-8], 7
        jne     .L2
        mov     DWORD PTR [rbp-4], 9
        jmp     .L3
.L2:
        cmp     DWORD PTR [rbp-8], 7
        jle     .L4
        mov     DWORD PTR [rbp-4], 1
        jmp     .L3
.L4:
        mov     edi, OFFSET FLAT:.LC0
        mov     eax, 0
        call    printf
        mov     eax, 0
        jmp     .L5
.L3:
        mov     eax, DWORD PTR [rbp-4]
        mov     esi, eax
        mov     edi, OFFSET FLAT:.LC1
        mov     eax, 0
        call    printf
        mov     eax, 0
.L5:
        leave
        ret
