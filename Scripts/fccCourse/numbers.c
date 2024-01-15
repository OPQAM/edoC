#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	printf("%f", 5 + 4.5);                // is converted into a decimal number
										  // if we do printf("%f", 5 + 5) this won't work, because we'll get an int, not a double
	printf("\n\n");


	printf("%i", 5 / 4);                  // this is returning an integer (1), and automatically rounding it
										  // We can get the correct answer with:
	printf("\n\n");

	printf("%f", 5 / 4.0);              // 1.250000

	printf("\n\n");

	// other math functions:
	
	printf("%f", pow(2, 3) );           // power. 2 ^ 3. There's also sqrt(), etc.
	
	printf("\n\n");

	printf("%f", floor(34.445));

	printf("\n\n");

	printf("%f", ceil(34.445));

	return 0;
}

