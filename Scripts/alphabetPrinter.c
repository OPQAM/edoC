#include <stdio.h>

int main()
{
	// Program to print all the letters of the alphabet
	
	char ch;
	int counter = 0;

	printf("\nThe alphabet, from a to z:\n");

	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c\n", ch);
		counter++;
	}
	printf("Number of letters in the alphabet: %d\n", counter);
}
