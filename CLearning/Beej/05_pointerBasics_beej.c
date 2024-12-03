#include <stdio.h>

int main(void)
{
	int x = 3;
	int *pX = &x;               //pX is a pointer to an integer, initialized to the address of 'x'

	int y = sizeof(int);        // holds the size of an int - 4 bytes on this system
	
	printf("%d\n", y);
	printf("x(value): %d\n", x);
	printf ("x(address): %p\n", (void *)&x);
	printf("pX(value): %d\n", *pX);
	printf("pX(address): %p\n", (void *)&pX);

	//snip//
	
	// We can now increment our variable passing a pointer as an argument
	
	void increment(int *p)
	{
		*p = *p + 1;
	}

	int i = 10;
	int *j = &i;

	printf("i is %d\n", i);
	printf("i is also %d\n", *j);

	increment(j);

	printf("i is %d\n", i);              // value was added
	printf("and %d\n", *j);

	//snip//
	
	// Null pointer (don't do it) int *p = NULL;
	// Pointer declaration:
	// int *a, b, c, *d, e, *f, g, h, *i;  (a, d, f, i are pointers)
}
