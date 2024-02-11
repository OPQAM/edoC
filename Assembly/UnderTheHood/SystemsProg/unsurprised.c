#include <stdio.h>

int main()
{
	unsigned int a, b;
	unsigned long long int c, d;

	a = 1;
	b = 2;
	c = 1;
	d = 2;

// Unsigned ints are 32 bits in size. So the below result at (2) is to be expected
// Unsigned long long ints are 64 bits in size. We can also see what that means below

	printf("a-b: %d...\n", a - b); // (1) 
	printf("unsigned version: %u\n", a - b)
	printf("lld version of a - b: %lld\n", c - d); // (3)
	if (a - b > 0) {               // (4)
		printf("a > b\n");     // (5)
	} else if (a - b == 0) {
		printf("a == b\n");
	} else {
		printf("a < b\n");
	}
}

// NOTES:
//
// (1) %d returns the signed result of the calculation
//
// (2) Returns the unsigned version, which is 32 bits long
//
// (3) Returns the unsigned long long version, which is 64 bit long
//
// (4) The a - b > 0 comparison is putting face to face the unsigned version
//     against 0. So, of course, the unsigned version is much, much higher
//
// (5) The print statement isn't realistically outputting the real comparison.
//     For this to return a true statement, we need to be using signed integers
