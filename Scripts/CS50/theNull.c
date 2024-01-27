#include<cs50.h>
#include<stdio.h>

// The null character is a special character that will divide
// in memory, the different arrays of characters from one another
// It's sometimes represented as \0 and it means 8 zero-bits
// or, more precisely: 00000000
//
// So, we would store 'HI!' as, in fact, 4 characters:
// .H
// .I
// .!
// .NULL
//
// Or, 72 73 33 \0
//
// The computer is, therefore, using 4 bytes and not 3 bytes to 
// store 'HI!'
// Let's see the printing of the NULL character:

int main(void) 
{
	string s = "HI!";

	string r = "Rico";
	
	printf("Under the hood of the string: %s ...is:\n", s);
	printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

	printf("Name: %s. Made of: %i %i %i %i %i\n", r, r[0], r[1], r[2], r[3], r[4]);

	// Which then begs the question...
	printf("%i %i %i %i %i %i %i %i %i\n", s[-3], s[-2], s[-1], s[0], s[1], s[2], s[3], s[4], s[5]);
	// YES! it goes on to read whatever else is stored in memory next to it...
	// So, in fact, we're calling one array, but we can print both. Or we could just pretend to be calling one array and getting the other. Like this:
	printf("I can call the HI: %c%c%c. But I can also call the name by calling the array out of scope: %c%c%c%c\n", s[0], s[1], s[2], s[4], s[5], s[6], s[7]);

	// Remember that although each array sits together in memory, there is no expectation that the arrays will be neatly side by side in any particular way.

	return 0;

	}

