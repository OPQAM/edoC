#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int NUM = 5;                         // by adding 'const' we turn the variable into a constant, so it can't be changed - before or after int
	printf("%d\n", NUM);
	// num = 8;                               // this didn't work as 'num' was created as a constant, so it can't be changed
	// printf("%d", NUM);
		
											  // Note: it's considered a best practice to have constant variables capitalized, hence NUM
	
	printf("Hi, there!");                     // This is also considered to be a constant. It's unchangeable
}

