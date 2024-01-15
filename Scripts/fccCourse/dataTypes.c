#include <stdio.h>
#include <stdlib.h>

int main()
{
	// we already know int, double and char.
	char aLetter = 'F';
	// If we want more than one characer, a string of characters, we'll use a string:
	
	char sentence[] = "The rain in Spain stays mainly in the plains.";               // this is an array. We can't change this char willy nilly
	
	// printf() is a function
	
	printf(sentence);
	
	
	printf("\n");
	// if we want to print out a number we need a format specifier (like %d)
	//
	// %d -> an integer
	
	printf("%d", 500);               // so, this isn't asking for a specific variable, it is informing that we'll use a number, then saying which
	

	printf("\nMy favorite %s is %f years old. Do notice the float.\nLet's get that last int: %d.\n", "dInOsSaUr", 33.400, 33456);

	



	return 0;
		

}
