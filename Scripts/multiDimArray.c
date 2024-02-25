#include <stdio.h>

int main() {
	
	// Rows by Columns:
	int myArray [3][4];

	// This is a simple for loop to ask the user for values
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Please enter array position[%d][%d]: ", i, j);
			scanf("%d",&myArray[i][j]);
		}
	}
	//And here we print the matrix
	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 4; j++) {
			printf("%d ", myArray[i][j]);
		}
	}

	// Another way to initialize a matrix:
	int myOtherArray[3][2] = {
		{0, 1} ,
		{-2, 5} ,
		{7, 4}
	};           // Notice the ';' here

	//Let's check what happens if we try to enter floats into an int array:
	int myBadArray[2][1] = {
		{9.3} ,
		{0}
	};
	//As we can see when we try to print out this, no error comes through.
	//And we get the falue floored (9).	
	printf("\n%d", myBadArray[0][0]);
	printf("\n%d", myBadArray[1][0]);
	
}
