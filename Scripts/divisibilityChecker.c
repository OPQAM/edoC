#include <stdio.h>

int main()
{
	// This program requests a number from the user and then requests another number to check if it divides the first.
	
	int target, divisor;

	printf("\nThis program stands as a divisor checker. We'll ask you for an integer and then you can test if that integer is divisible by any other value you'd like to test.\n\n");
	printf("Please enter the number you'd like to test: ");

	scanf("%d", &target);
	printf("\nChoose divisor for %d: ", target);
	scanf("%d", &divisor);

	if (target % divisor == 0) {
		printf("\n%d is, in fact, divisible by %d.\nBye bye!\n", target, divisor);
		return 0;
	} else {
		printf("\nSorry, but %d isn't divisible by %d.\nGoodbye.\n", target, divisor);
	}
}
