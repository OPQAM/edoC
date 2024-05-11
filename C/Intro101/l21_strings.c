#include <stdio.h>

// In C, a string is just a pointer to a set of characters, much like a list in C is just a pointer to the start of that list.

int main() {
	//char c = 'a';
	//printf("The character: %c\n", c);
	//printf("The ASCII number of 'a': %d\n", c);
	
	// So, let's do a loop and check the ASCII table. Why not?
	printf("\nASCII TABLE\n\n");
	for (int i = 33; i < 127; i++) {
	printf("Number: %d | Character: %c\n", i, i);
	}
	
	
	return 0;

}
