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







	return 0;

}
