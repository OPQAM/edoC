#include <stdio.h>

// to use a bit pattern in C we can prefix it with
// 0b or 0B

int main()
{
	unsigned char b = 0b11100110;
	signed char c = 0b11100110;

	printf("Unsigned char: %d\n", b);
	printf("Signed char: %d\n", c);
	printf("Both writen as 0b11100110\n");
}
