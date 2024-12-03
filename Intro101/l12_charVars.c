#include<stdio.h>

int main(void){
	
	char c = '2';
	printf("This is the character we saved: %c\n", c);
	// In C a string is a pointer to a series of characters
	// Thus we use single quotes to select our character
	
	// Characters are (ASCII) numbers in disguise...
	
	printf("This is the ASCII number of this character: %d\n", c);
	
	// If characters are basically just numbers in disguise, they can be added and changed.
	
	char x = 'a';

	printf("My letter: %c\n", x);
	x++;		
	printf("My new letter: %c\n", x);

	// As shown, by adding 1 to our variable it changed to the next letter in the ASCII table.
	
	printf("a (ASCII): %d\n", 'a');
	printf("A (ASCII): %d\n", 'A');

	// These two values differ by '32'. Which means that we can take a string of letters and turn it to upper case or lower case, by just adding or subtracting 32.
	
	printf("a - 32 = A: %c\n", 'a' - 32);


	// So, let's do a loop and check the ASCII table. Why not?
	printf("\nASCII TABLE\n\n");
	for (int i = 33; i < 127; i++) {
	printf("Number: %d | Character: %c\n", i, i);
	}

	// So we can actually add these values, subtract them, etc.
	// As I've mentioned elsewhere, we can also substitute lowercase with uppercase, and vice versa. Any uppercase letter + 32 = lowercase letter.





	return 0;

}
