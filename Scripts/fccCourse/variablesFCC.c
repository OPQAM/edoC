#include <stdio.h>
#include <stdlib.h>

int main()
{
	char favCharacter = 'A';
	char anotherChar = 'B';
	char yetAnotherChar = 'a';
	char characterName[] = "Ricardo";                      
	int characterAge = 45;

	// The line below works. %s is referencing strings, %c is referencing characters and %d is referencing integers. %i also works for ints
	printf("\nHello. My character's name is %s. His favorite letter is %c, and he is %i old.\n", characterName, favCharacter, characterAge);

	// Both %d and %i returned the 'value' of 'A' as 65 and 'B' as 66 and 'a' as 97.
	printf("Now I'm just checking if I can get the value of 'A': %i.\n", favCharacter);
	printf("And 'B': %i. As for 'a': %i.\n", anotherChar, yetAnotherChar);

	// Let's reverse that. Do we get a character if we %c the number 45? Yes. apparently, 45 is '-'
	printf("And 45 is: %c.\n",characterAge);

	// We can test this hypothesis by creating a character '-'
	char unknownChar = '-';

	printf("Likewise, the value of '-' is: %i.\n", unknownChar);

	printf("\nAs shown, we can extract the number 'value' of characters and do the reverse as well.\n");


													/* snip */

	return 0;
}
