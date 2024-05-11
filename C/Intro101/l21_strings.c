#include <stdio.h>
#include <string.h>        // library of strings
int main(void) {
	char c[] = "Hello World!";

	char *d = "Hello, Mike!";

	printf("%c\n", *d);            // first element
	printf("%c\n", *(d+1));        // next element.. etc
	printf("%ld\n", strlen(c));    //
	
	return 0;


	// NOTE: The very last item on a string is a null terminator (\0) -> It's 

}
