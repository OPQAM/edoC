#include<stdio.h>
#include<stdbool.h>

int main(void){

	int age = 0;
	scanf("%d", &age);

	bool ageCheck = (age >= 18);


	if (ageCheck){
		printf("Older than 18.\n");
	} else if (age < 0){
		printf("Invalid Age.\n");
	} else {
		printf("Younger than 18.\n");
	}

	return 0;
}


