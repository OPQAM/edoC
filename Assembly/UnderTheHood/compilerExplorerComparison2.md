// Comparisson made using Compiler Explorer, at:
https://godbolt.org/

// This is my code, a simple Calculator:

#include <stdio.h>
#include <stdlib.h>

// This is my own version - pre-video

int main()
{
	double num1;
	double num2;
	char operator;
	double result;

	printf("Welcome to our Calculator v.2\n");
	printf("Enter a number, an operator (+, -, *, :), and another number:\n");


	scanf("%lf", &num1);              // attention at the %lf and &num1
	scanf(" %c", &operator);          // attention at the empty space
	scanf("%lf", &num2);
	
	if(operator == '+')
	{
	result = num1 + num2;
	}else if(operator == '-')
	{
	result = num1 - num2;
	}else if(operator == '*')
	{
	result = num1 * num2;
	}else if(operator == ':')
	{
		if(num2 == 0)
		{
			printf("\nDividing by zero.\n");
			return 0;
		}else
		{
			result = num1 / num2;
		}
	}else
	{
		printf("Error.\n");
		return 0;
	}
	
	printf("%f %c %f = %f", num1, operator, num2, result);

	
	return 0;
}

// This is the Assembly result for x86-64 gcc 13.2:

.LC0:
        .string "Welcome to our Calculator v.2"
.LC1:
        .string "Enter a number, an operator (+, -, *, :), and another number:"
.LC2:
        .string "%lf"
.LC3:
        .string " %c"
.LC5:
        .string "\nDividing by zero."
.LC6:
        .string "Error."
.LC7:
        .string "%f %c %f = %f"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32
        mov     edi, OFFSET FLAT:.LC0
        call    puts
        mov     edi, OFFSET FLAT:.LC1
        call    puts
        lea     rax, [rbp-16]
        mov     rsi, rax
        mov     edi, OFFSET FLAT:.LC2
        mov     eax, 0
        call    __isoc99_scanf
        lea     rax, [rbp-25]
        mov     rsi, rax
        mov     edi, OFFSET FLAT:.LC3
        mov     eax, 0
        call    __isoc99_scanf
        lea     rax, [rbp-24]
        mov     rsi, rax
        mov     edi, OFFSET FLAT:.LC2
        mov     eax, 0
        call    __isoc99_scanf
        movzx   eax, BYTE PTR [rbp-25]
        cmp     al, 43
        jne     .L2
        movsd   xmm1, QWORD PTR [rbp-16]
        movsd   xmm0, QWORD PTR [rbp-24]
        addsd   xmm0, xmm1
        movsd   QWORD PTR [rbp-8], xmm0
        jmp     .L3
.L2:
        movzx   eax, BYTE PTR [rbp-25]
        cmp     al, 45
        jne     .L4
        movsd   xmm0, QWORD PTR [rbp-16]
        movsd   xmm1, QWORD PTR [rbp-24]
        subsd   xmm0, xmm1
        movsd   QWORD PTR [rbp-8], xmm0
        jmp     .L3
.L4:
        movzx   eax, BYTE PTR [rbp-25]
        cmp     al, 42
        jne     .L5
        movsd   xmm1, QWORD PTR [rbp-16]
        movsd   xmm0, QWORD PTR [rbp-24]
        mulsd   xmm0, xmm1
        movsd   QWORD PTR [rbp-8], xmm0
        jmp     .L3
.L5:
        movzx   eax, BYTE PTR [rbp-25]
        cmp     al, 58
        jne     .L6
        movsd   xmm0, QWORD PTR [rbp-24]
        pxor    xmm1, xmm1
        ucomisd xmm0, xmm1
        jp      .L7
        pxor    xmm1, xmm1
        ucomisd xmm0, xmm1
        jne     .L7
        mov     edi, OFFSET FLAT:.LC5
        call    puts
        mov     eax, 0
        jmp     .L10
.L7:
        movsd   xmm0, QWORD PTR [rbp-16]
        movsd   xmm1, QWORD PTR [rbp-24]
        divsd   xmm0, xmm1
        movsd   QWORD PTR [rbp-8], xmm0
        jmp     .L3
.L6:
        mov     edi, OFFSET FLAT:.LC6
        call    puts
        mov     eax, 0
        jmp     .L10
.L3:
        movsd   xmm0, QWORD PTR [rbp-24]
        movzx   eax, BYTE PTR [rbp-25]
        movsx   edx, al
        mov     rax, QWORD PTR [rbp-16]
        movsd   xmm1, QWORD PTR [rbp-8]
        movapd  xmm2, xmm1
        movapd  xmm1, xmm0
        mov     esi, edx
        movq    xmm0, rax
        mov     edi, OFFSET FLAT:.LC7
        mov     eax, 3
        call    printf
        mov     eax, 0
.L10:
        leave
        ret


// NOTES: (0) note numbering in this case will follow the github numbering I see. I don't want to add comment numbers to these notes
//
// (97) Note that the comparison is made to 43, meaning the ASCII value of 43, which  corresponds to '+'
//   
// (99) This line and the following two have, instead of 'mov' and 'add', 'movsd' and 'addsd' these are, respectively 'move scalar double precision floating'
// and 'add scalar double precision floating'. We're working with doubles, of course
// https://c9x.me/x86/html/file_module_x86_id_204.html
//
// (154) In here we see movapd 'move aligned packing double precision floating':
// https://mudongliang.github.io/x86/html/file_module_x86_id_179.html (sweetly enough, this blog is called 'Chasing Dragons' <3 )
//
// (157) This is 'Move quad word' - https://c9x.me/x86/html/file_module_x86_id_201.html
