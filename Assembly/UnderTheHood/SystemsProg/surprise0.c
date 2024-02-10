#include <stdio.h>

int main()
{
	unsigned int a, b;

	a = 1;
	b = 2;

	printf("a-b: %d...\n", a - b);

	if (a - b > 0) {
		printf("a > b\n");
	} else if (a - b == 0) {
		printf("a == b\n");
	} else {
		printf("a < b\n");
	}
}
