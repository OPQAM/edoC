#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
	printf("\nYou entered %d elements\n", argc-1);
	
	for (int i = 0; i < argc; i++)
	{
		printf("Element number %d is: %s\n", i, argv[i]);
	}
}



// NOTES:
//
// Remember: argc is an integer and argv is an array of strings
//
// This is the number of items entered and what is entered
//
// So it's literally a counting, starting with the program itself.
// That's element 1. Element 2 is the argument passed with the program
//
