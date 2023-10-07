#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[20];
	printf("Enter your name: ");
	fgets(name, 20, stdin);
	printf("Your name is %s Take heed to the newline character added.", name);
	return 0;

	// In userInput2.c there is an issue with a newline character
	// being consumed and thus there is no user input asked later.

}

