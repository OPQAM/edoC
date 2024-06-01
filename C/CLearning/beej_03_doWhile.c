#include <stdio.h>

int main()
{
	int i = 10;

	do {
		printf("do-while: i is %d\n", i);
		i++;
	} while (i < 10);

// The above will run once, since the loop condition is only verified at the end of the loop, and there is a print beforehand.

printf("All done!\n");


	// An empty for loop is an eternal for loop
	for(;;) {
		printf("Can't stop me, won't stop me!");
	}

}
