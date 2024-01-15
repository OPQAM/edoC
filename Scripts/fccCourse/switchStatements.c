#include <stdio.h>
#include <stdlib.h>


// A Switch Statement is s special type of IF statement,
// that will let us compare a value to other different values
int main()
{
	char grade;

	printf("What was your grade?\n");

	scanf("%c", &grade);

	switch(grade) {
		case 'A' :                           // if case == A, then...
			printf("You did great! ");
			break;							 // break tells our case that we want to leave		
		case 'B' :                           // if case == A, then...
			printf("You did alright. ");
			break;
		case 'C' :                           // if case == A, then...
			printf("You did poorly. ");
			break;
		case 'D' :                           // if case == A, then...
			printf("You did very bad. ");
			break;
		case 'F' :                           // if case == A, then...
			printf("You failed! ");
			break;
		default :                            // this is working basically like an 'else'
			printf("Invalid grade. ");


	}

	return 0;
}
