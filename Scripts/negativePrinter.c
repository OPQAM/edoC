#include <stdio.h>

int main()
{
	int elements = 6;
	int myArray[elements];
	int count = 0;

	printf("\nLet's enter %d integers into our array. I'll parse out the negative ones.\n", elements);

	for (int i = 0; i < elements; i++) {
		printf("Element %d: ", i+1);
	       scanf("%d", &myArray[i]);	
	}

	printf("\nNegative elements:\n");
	for (int i = 0; i < elements; i++) {
		if (myArray[i] < 0)
		{
		printf("%d\n", myArray[i]);
		count++;
		}
	}
	if (count == 0)
	{
		printf("\nNo negative elements in set.\n");
	}
}
