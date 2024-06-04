#include <stdio.h>

int add_one(int n)
{
	return n + 1;
}

int main(void)
{
	int i = 11, j;

	j = add_one(i);   // calling the function
	
	printf("i is %d and j is %d + 1, or %d\n", i, i, j);
}


// Note that we had to place the function 'add_one' before the main function.
// But we don't have to do this. We can use function prototypes - 'oneliners' that are
// placed at the beginning of the function and that will let the compiler know 
// that specific function's name, return type, numbers and data types.
// Open the script 04_functionPrototypes_beej.c
