#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// very simple allocation of memory and changing something in the newly allocated memory
int main() {
	char* s;
	int stringsize;
	
	stringsize = sizeof("hello");				// first work out how big "hello" is ...
	printf("size of 'hello' is %d\n", stringsize);	// note that it is SIX bytes long (not five) so as to allow for the terminating null character
	
	// now allocate some memory of sufficient size to hold the string "hello"
	s = (char*)malloc(stringsize);				// note the cast '(char*)'. This is required because malloc always returns a generic pointer type of 'void*'
	if (s == NULL) {							// malloc will return 0 (NULL) if it failed
		printf("malloc failed!\n");	
		exit(0);
	}

	// now copy the string into the newly allocated memory
	strncpy(s, "hello", stringsize);

	// and change the first character (just to show we can)
	printf("s is %s\n", s);
	s[0] = 'c';
	printf("s is now %s\n", s);
    return 0;
}

