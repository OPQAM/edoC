#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char color[20];
	char pluralNoun[20];
	char celebrityF[20];                                          // !!!
	char celebrityL[20];
	char verb[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL);                        // !!!
	printf("Enter a verb: ");
	scanf("%s", verb);

	printf("\nRoses are %s,\n",  color);
	printf("%s are blue,\n", pluralNoun);
	printf("You are just like %s %s,\n", celebrityF, celebrityL); // !!!
	printf("Because I saw you two %s.\n", verb);

	// NOTE: we NEED to enter 2 names to be entered by the user.
	// Otherwise, if no last name is inputed, the program will wait for one
	// In C we have to be very specific with what the user enters...

	return 0;
}
