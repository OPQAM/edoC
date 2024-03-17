#include <stdio.h>

int main() {
	int rowsA, rowsB, columnsA, columnsB;
	
	//Stipulating matrix sizes
	//Matrix A
	printf("\nMatrix A\n");
	printf("\nNumber of rows for Matrix A: ");
	if (scanf("%d", &rowsA) != 1 || rowsA <= 0) {     // (1)
		printf("\nInvalid input. Bye!\n");
		return 1;
	}

	printf("\nNumber of columns for Matrix A: ");
	if (scanf("%d", &columnsA) != 1 || columnsA <= 0) {     // (1)
		printf("\nInvalid input. Bye!\n");
		return 1;
	}
	printf("\n\nMatrix A has %d rows and %d columns", rowsA, columnsA);
	int matrixA[rowsA][columnA];

	//Matrix B
	printf("\nMatrix B\n");
	printf("\nNumber of rows for Matrix B: ");
	if (scanf("%d", &rowsB) != 1 || rowsB <= 0) {     // (1)
		printf("\nInvalid input. Bye!\n");
		return 1;
	}
	
	printf("\nNumber of columns for Matrix B: ");
	if (scanf("%d", &columnsB) != 1 || columnsB <= 0) {     // (1)
		printf("\nInvalid input. Bye!\n");
		return 1;
	}
	printf("\n\nMatrix B has %d rows and %d columns", rowsB, columnsB);
	int matrixB[rowsB][columnB];

	// Multiplication Control
	if (columnsA != rowsB) {
		printf("Row multiplication not possible for current matrices.");
		return 1;
	}

	//Populating Matrices
	//Matrix A
	
	printf("\nLet's enter the values for matrix A.\n");
	for (int i = 0; i < rowA; i++) {
		for (int j = 0; j < columnA; j++) {
			printf("\nEntry[%d][%d]: ",i, j)
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	printf("\nLet's enter the values for matrix B.\n");
	for (int i = 0; i < rowB; i++) {
		for (int j = 0; j < columnB; j++) {
			printf("\nEntry[%d][%d]: ",i, j)
			scanf("%d",&matrixB[i][j]);
		}
	}
/*
 * Consider something like:
 *         printf("Entry [%d][%d]: ", i, j);
            while (scanf("%d", &matrixA[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                // Clear input buffer to prevent infinite loop
                while (getchar() != '\n');
                printf("Entry [%d][%d]: ", i, j); // Reprompt
 *
 * Or subtract from i?.... check it out
 * */

}

// NOTES:
//
// (1) - This is basically checking if the user has inputed a single integer, and if that value is positive. Any other input will result in an error
//
// (2)
