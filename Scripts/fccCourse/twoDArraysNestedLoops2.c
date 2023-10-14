#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int nums[3][2];

	// populating the array
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++) {
			printf("Entry (%d,%d): ", i, j);
			scanf("%d", &nums[i][j]);
		}
	}

	printf("\nThe array has been set for you. Enjoy:\n");

	// printing the array
	for(int i = 0; i < 3; i++){
		printf("\n");
		for(int j = 0; j < 2; j++) {
			printf("|%d| ", nums[i][j]);
		}
	}

	return 0;
}


