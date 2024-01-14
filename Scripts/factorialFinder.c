#include <stdio.h>

// Note that floats are being 'floored' into integers. Check why.
// See notes below.

int main() {
	int myVar;
	int partialFact = 1;
	int testValue;

	printf("Please enter a positive integer: ");
	testValue = scanf("%d", &myVar);                                               // (1)

	if (myVar < 0) {
		printf("The number entered must be positive!\n");
		return 0;
		printf("DEBUG1");
	} else if (myVar == 0) {
		printf("Your number is 0.\nIts factorial is, by definition, 1.\n");
		return 0;
		printf("DEBUG2");

	} else if (testValue != 1) {                                                   // (2)
		printf("The inputed value must be an integer.\n");
		printf("DEBUG: scanf(X) failed (%d value)\n", testValue);              // (3)
		printf("DEBUG3");
		return 0;
	}
		printf("DEBUG1");
	printf("\nYour number is %d!", myVar);
	printf("\nWe can express it as such:\n");	
	printf("DEBUG: scanf(X) successful (%d value)\n", testValue);

	for (int i = myVar; i > 0; i--) {
		printf("%d * " ,i);
		partialFact = i * partialFact;
		if (i == 1) {
			printf(" = %d\n", partialFact);
		}
	}
	return 0;
}

// NOTES: 
//
// (0) When using scanf, the function expects a valid input
//     so, if the user enters a float, the function will just
//     ignore the fractional part and keep the integer
//
// (1) Created a test variable for simplicity's sake.
//
// (2) Testing to see if the result of scanf is not valid
//     
// (3) Here we're printing the actual result of scanf()
