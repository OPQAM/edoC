#include<stdio.h>

int main(void){

	int age = 0;

	scanf("%d", &age);

	if (age > 18){
		printf("Older than 18.\n");
	} else if (age == 18) {
		printf("18 years old.\n");
	} else {
		printf("Younger than 18.\n");
	}

	return 0;
}


// Regularly, we can use '0' as false and '1' as true to represent booleans or, if we want to actually use 'false' and 'true', we need to use the library 'stdbool'
	// bool check = false (as a simple example);
	// Check next .c file for a bool check.
