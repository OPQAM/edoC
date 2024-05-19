#include <stdio.h>


int main()
{
	char letters[4] = { 'a', 'b', 'c', '\0' };
	puts("Array Indexing:");
	printf("%c\n",letters[0]);
	printf("%c\n",letters[1]);
	printf("%c\n",letters[2]);
	
	puts("Address Arithmetic:");
	printf("%c\n",*(letters));
	printf("%c\n",*(letters + 1));
	printf("%c\n",*(letters + 2));


//Output:
//Array Indexing:
//a
//b
//c
//Address Arithmetic:
//a
//b
//c
}
