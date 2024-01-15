#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[20];                  // How many possible chars = 19+1
	char firstLastName[20];
	printf("Enter your name: ");
	scanf("%s", name); // consume the newline with %19s
	printf("Your name is %s", name);

	// NOTE: with 'scanf' there is the issue that the name will be
	// grabbed up to the first space. So, 'Ricardo Alves' would
	// instead return 'Ricardo'.
	// Although we can adapt scanf for this, we can use something else too:
	
	


	printf("\nGive us your first and last name: \n");
	fgets(firstLastName, 20, stdin); // 20 = how many charcters from user « stdin
	printf("Your first and last name is: %s", firstLastName);


	// This isn't printing because scanf is producing an extra newline character. And thus that gets fed into the fgets - and the user input of that isn't added. See userInput2.c to see the command working there
	
	return 0;
}
