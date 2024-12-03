#include <stdio.h>

int main()
{
	int a = 1;
	int b = 999;

	char x = 'a';
	float f = 3.1416;

	printf("%zu\n", sizeof a);
	printf("%zu\n", sizeof x);
	printf("%zu\n", sizeof f);            // why is this size 4
	printf("%zu\n", sizeof 3.14);         // while this is size 8?
	printf("%zd\n", sizeof -3.01);        // %zd for negatives

	// sizeof evaluates the size of the type of expression. Not the size of the expression itself
	// It’s important to note that sizeof is a compile-time operation. The result of the expression is determined entirely at compile-time, not at runtime.
}
