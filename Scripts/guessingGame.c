#include <stdio.h>
#include <stdlib.h>

int main() {
	int secretNumber = 5;
	int guess;

	while(guess != secretNumber){
		printf("Enter a number: ");
		scanf("%d", &guess);

	}

	printf("You win!");
	return 0;
}

