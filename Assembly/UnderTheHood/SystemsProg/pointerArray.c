#include <stdio.h>

int main()
{
	char letters[4] = { 'a', 'b', 'c', '\0' };
	char *letter_p;

	//An array is the address to the first of its elements.
	//An array can be assigned to a pointer.
	
	letter_p= letters;
	printf("letters: %p\n", letters);
	printf("lettter_p: %p\n", letter_p);

	// Showcasing that it's the exact memory address of the first array position
	letter_p = &letters[0];
	printf("letter_p: %p\n", letter_p);

	//Pointers can be reassigned to other elements of the array, ofc
	letter_p = &letters[2];
	printf("&letters[1]: %p\n", &letters[2]);
	printf("letter_p: %p\n", letter_p);

// Output:
// letters: 0x7ffe2a0d6814
// lettter_p: 0x7ffe2a0d6814
// letter_p: 0x7ffe2a0d6814
// &letters[1]: 0x7ffe2a0d6816
// letter_p: 0x7ffe2a0d6816
}
