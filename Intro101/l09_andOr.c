#include<stdio.h>

int main(void){
	int age = 0;

	while(1){
		scanf("%d", &age);
		if ((age < 0) || (age >140)){
			printf("Age is invalid.\n");
		} else if ((age >= 42) && (age <= 47)){
			printf("Gosh, you're the perfect age!\nCome on, be real.\n");
		} else {
			printf("Thank you for playing.\n");
			break;
		}
	}
}

// Note that without a break inside the 'else if' bit, we aren't ending the program. So, in this case, an age between 42 and 47 'isn't accepted'.
// || - OR
// && - AND
// !  - NOT   (if (!(age > 3)))...
