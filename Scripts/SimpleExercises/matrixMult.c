#include <stdio.h>

int main() {
	int rowsA, rowsB, columnsA, columnsB;

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

	// Multiplication Control
	if (columnsA != rowsB) {
		printf("Row multiplication not possible for current matrices.");
		return 1;
	}
}

// NOTES:
//
// (1) - This is basically checking if the user has inputed a single integer, and if that value is positive. Any other input will result in an error
//
// (2)
