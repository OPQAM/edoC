#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// look at free and realloc
int main() {
	char* s;
	int i;

	i = sizeof("hello");						// as before first work out how big "hello" is ...
	s = (char*)malloc(i);						// malloc will return 0 if it fails, so we should check here, but we wont for brevity
	strncpy(s, "hello", i);						// now copy the string into the newly allocated memory
    printf("s is %s\n", s);

												// now suppose we want to add 'world' to 'hello' - we can't just do this ...
												// strcat(s, " world");					- disaster!!! 
	s = (char*)realloc(s, 12);					// but we can use 'realloc' which frees the original 6 bytes of memory and allocates an new 12 bytes
	strncpy(s, "hello", i);						// now copy the string into the newly re-allocated memory
	strcat(s, " world");						// now we can tag on the 'world'
	printf("s is now %s\n", s);


	free(s);									// and when we've finished we should always free up any memory by using 'free'
												// NOTE: make a habit of using 'free' whan you've finished with some memory otherwise there will be 'memory leaks'
												// where memory that you have allocated will be 'lost' to your program
												// these are not as important as they used to be (a few bytes in several GB won't make much of a difference) but it is considered to be good programming practise to tidy up

	return 0;
}

