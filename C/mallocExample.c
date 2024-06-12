#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr;
	int i, n;

	printf("\nPlease enter the number of items: ");
	scanf("%d", &n);
	printf("\nEntered number of elements: %d\n", n);

	// Dynamically allocating memory 
	ptr = (int*)malloc(n * sizeof(int));

	// Checking if memory has been adequately allocated
	if (ptr == NULL) {
		printf("Memory wasn't allocated.\nBye.\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using malloc.\n");
		
		// Writing values in the array
		for (i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}

		printf("\nThe array is now populated with numbers.\n");

		// printing the elements of the array
		for (i = 0; i < n; i++)
		{
			printf("index[%d]: %d\n", i, ptr[i]);
		}

	}

	free(ptr);

	return 0;

}
