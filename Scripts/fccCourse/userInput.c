#include <stdio.h>
#include <stdlib.h>

int main()
{

	int age;
	double height;
	char favChar;

	printf("Please enter your age: ");
	scanf("%d", &age);                          // user to enter info into program. Specify w/ pointer (&) the type of info to be entered
	printf("You are %d years old.\n", age);
	
	printf("Please enter your height (in meters): ");
	scanf("%lf", &height);                     // note we use here '%lf' and not just '%f'
	printf("You're %f meters tall.\n", height);

	printf("Please enter your favorite letter of the alphabet: ");
	scanf(" %c", &favChar);                     // NOTE HERE: added an empty space BEFORE %c to consume the whitespace characters
	printf("Really? You love %c? I didn't know that.\n", favChar);

	// NOTE: beware of the newline character. If I place it before user input for a character, it will take that

	return 0;
}
