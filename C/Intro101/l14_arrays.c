#include<stdio.h>


int main(void){
	
	// Arrays: storing values of the same type

	int myArray[5] = {1,2,3,4,5};

	printf("%d\n", myArray[3]);

	// We can provide less values than the assigned slots of the array, and those places will be filled with zeros. But we can't provide more values than those allowed for the array.
	int secondArray[5] = {-1, -4, -5, -6, -9};

	printf("\n");

	int thirdArray[5] = {1,2,3,4,5,6};

	printf("%d\n", thirdArray[5]);


	// Note that we can compile this with a warning. But the 6th position won't be occupied by 6. In fact, it won't be occupied by anything, so it will just return a 0.
	
	printf("\n");
	
	// Also, remember:
	
	for (int i = 0; i < 20; i++){
		printf("%d\n", myArray[i]);

	}
	return 0;
}
