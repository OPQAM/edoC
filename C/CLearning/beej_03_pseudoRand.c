#include <stdio.h>
#include <stdlib.h>


int main()
{
	int r;

	do {
		r = rand() % 100; // this is a pseudo number generator (man srand)
		printf("%d\n", r);
	} while (r != 42);
}
