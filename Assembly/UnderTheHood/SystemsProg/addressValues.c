#include <stdio.h>

int main()
{

	// Taken from 'Intro to Systems Programming' - YT series, by Kris Jordan
	char a = 'a';
	char b = 'b';
	char c = 'c';
	
	printf("&a: %p\n", &a);
	printf("&b: %p\n", &b);
	printf("&c: %p\n", &c);

}

//NOTES: (0) Whatever the value might be in memory, the value of the other variable is one value above it (respectively for 'a' and 'b')
// Note, in this case, I'm having them as c > b > a (numbered). Ex:
// &a: 0x7ffd99debe8f
// &b: 0x7ffd99debe8e
// &c: 0x7ffd99debe8d 
// In the original video, with variables 'a' and 'b', Kris has the ordering reversed, with a and b coming in that particular order.
//
// This is the main frame in memory (which is a huge value, as we can see). And our variables are side by side.
// The higher order bits aren't changing and the lower bits aren't changing.
//
//
