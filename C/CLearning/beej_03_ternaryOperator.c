#include <stdio.h>

int main(void)
{
	int x = 33;
	int y = 10;

	printf("x: %d, y: %d\n", x, y);

	y += x > 10? 17: 37;     // IF x > 10, add 17 to y. Otherwise, add 37 to y.

	printf("new x: %d, new y: %d\n", x, y);

	printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

}
