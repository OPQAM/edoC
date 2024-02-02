#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// Testing some more Memory schenanigans in C


int main(void) 
{
	string one[3];
	string two[3];

	one[0] = "a";
	one[1] = "b";
	one[2] = "c";
	one[3] = "d";      // This would fail in many other languages 

	two[0] = "1";
	two[1] = "2";
	two[2] = "3";
	two[3] = "4";



	printf("\nPrinting 6 values into the second array:\n");
	for (int i = 0; i < 6; i++) 
		
	{
		printf("%s\n", two[i]);
	}
	
	printf("\nPrinting 6 values into the first array:\n");
	for (int i = 0; i < 6; i++) 
		
	{
		printf("%s\n", one[i]);
	}

	// Because of the way in which the two arrays are placed in memory (side by side) we're getting one of them printed, with the other as well (since we're asking for values that go into the second array), but when trying to print values outside of the other array we get a segmentation fault.
}
