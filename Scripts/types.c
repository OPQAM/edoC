#include <stdio.h>

int main() 
{
	char myChar = 255;		 // up to 1 byte. Not writing anything = signed.
					 // This means that the possible values are
					 // -127 -> 127. I'm outside the range, so I''
					 // get an overflow, and the returned value is -1
	unsigned short myShort= 6552;	 // up to 2 bytes
	signed int myInt = -44523; 	 // up to 4 bytes
	long myLong = 223425; 		 // up to 4 bytes
	long long myLongLong = 2352164;	 // up to 8 bytes
	
	printf("These variables can be signed or unsigned. Signed variables can have negative values, but they lose some of their range in order to do it.\n\n");

	printf("Also note that although an int, for example, is 4 bytes, in some other settings they might be 2 bytes, for example.\n\n");

	printf("We can instead use stdint.h, and declare a variable like int8_t - an integer with 8 bits, or one byte. These force the variables to always be this size, no matter the platform or compiler.\n\n");

	char myChar2 = 'A';

	printf("Char can be a number, but it can also be a character, as we can see above.\n\n");

	printf("Let's check: %d and %c, for myChar number and myChar2 which is a letter. As we can see, since myChar overflows, it returns -1.", myChar, myChar2);

}
