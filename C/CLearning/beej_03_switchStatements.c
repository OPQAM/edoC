#include<stdio.h>

int main(void) 
{
	int goat_count = 2;

	switch (goat_count) {
		case 0:
			printf("You have no goats.\n");
			break;
		
		case 1:
                        printf("You have one goat.\n");
                        break;
                
		case 2:
			printf("You have a pair of goats.\n");
			break;
		
		default:
			printf("Your goats are legion.\n");
			break;
	}
	
	// This is basically an if-else cascade
	// Have breaks in order not to fall through
	// Avoid using floats or strings.
	// Characters are ok. Use like this: 'b'
	// They're numbers, anyway

}
