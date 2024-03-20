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
	int matrixA[rowsA][columnsA];

	//Matrix B
	printf("\nMatrix B\n");
	printf("\nNumber of rows for Matrix B: ");
	if (scanf("%d", &rowsB) != 1 || rowsB <= 0) {     // (1)
		printf("\nInvalid input. Bye!\n");
		return 1;
	}
	
	printf("\nNumber of columns for Matrix B: ");
	if (scanf("%d", &columnsB) != 1 || columnsB <= 0) {    
		printf("\nInvalid input. Bye!\n");
		return 1;
	}
	printf("\n\nMatrix B has %d rows and %d columns", rowsB, columnsB);
	int matrixB[rowsB][columnsB];

	// Multiplication Control
	if (columnsA != rowsB) {
		printf("Row multiplication not possible for current matrices.\n");
		printf("Correct format or multiplication between matrices A and B:\nnAm x mBw = nCw\n");
		return 1;
	}

	//Populating Matrices
	//Matrix A
	
	printf("\nLet's enter the values for matrix A.\n");
	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < columnsA; j++) {
			printf("\nEntry[%d][%d]: ",i, j);
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	printf("\nLet's enter the values for matrix B.\n");
	for (int i = 0; i < rowsB; i++) {
		for (int j = 0; j < columnsB; j++) {
			printf("\nEntry[%d][%d]: ",i, j);
			scanf("%d",&matrixB[i][j]);
		}
	}

	//Let's see the Matrices
	//Matrix A
	printf("\nMatrix A:\n");
	for (int i = 0; i < rowsA; i++) {
		printf("\n|");
                for (int j = 0; j < columnsA; j++) {
                        printf("%d ",matrixA[i][j]);
                }
        }
	//Matrix B
	printf("\nMatrix B:\n");
	for (int i = 0; i < rowsB; i++) {    
                printf("\n|");               
                for (int j = 0; j < columnsB; j++) {
                        printf("%d ",matrixB[i][j]);
                }
        }

	int matrixC[rowsA][columnsB];
	//Initializing the matrix with zeros              // (2)
	for (int i = 0; i < rowsA; i++) {
    		for (int j = 0; j < columnsB; j++) {
        		matrixC[i][j] = 0;
		}
	}	

	//Matrix multiplication
	for (int i = 0; i < rowsA; i++) {                  
                for (int j = 0; j < columnsB; j++) {
			for (int k = 0; k < columnsA; k++){
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}
        
	//Viewing Matrix C:	
	printf("\nMatrix C:\n");
	for (int i = 0; i < rowsA; i++) {    
                printf("\n|");               
                for (int j = 0; j < columnsB; j++) {
                        printf("%d ",matrixC[i][j]);
                }
        }
        
/*
 * Consider something like (FOR THE MATRIX CONTROLS):
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
// (2) We really don't want it to have no initial values and start doing addition on them, as we'll get trash values instead
