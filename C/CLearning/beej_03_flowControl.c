#include <stdio.h>

int main(void)
{
	int x = 33;


	//single statement
	if (x == 10)
		printf("x is 10\n");

	//squirrelly braces to have block (or compount) statements	
	//just use them
	if (x == 10) {
		printf("x is 10\n");
		printf("Boop!");
	}
	
}
