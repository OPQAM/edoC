#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Just random stuff - to play around with memory in C


	printf("Creating a list of numbers.\n");
	
	int elements_in_list = 0; // number of elements in the list
	int extra_crap = 5; //debugging: extra elements outside of original list (on both ends)


	printf("\nNumber of elements in the list: ");
	scanf("%d", &elements_in_list);
	printf("\nNumber of elements: %d\n", elements_in_list);

	int* my_ptr = (int*) malloc(elements_in_list*sizeof(int));

	for (int i = 0; i < elements_in_list; i++ ) {
		printf("\nElement[%d]: ", i + 1);
		scanf("%d", &my_ptr[i]);
	}

	printf("\nYour List:\n{");
	for (int j = 0; j < elements_in_list; j++) {
		printf("%d ", my_ptr[j]);
	}
	printf("}\n");

	printf("\nMemory freed.\n");

	free(my_ptr);
	
	printf("\nFor testing: re-printing list. Starting and ending %d positions outside of original list (ie. we will be printing %d extra characters on each side):\n", extra_crap, extra_crap);

	printf("\nYour List:\n{");
        for (int j = -extra_crap; j < elements_in_list + extra_crap; j++) {
                printf("%d ", my_ptr[j]);
        }
	printf("}\n");

	printf("\nRe-allocating memory to that same pointer...\n{");


	// NOTE: this breaks the compiler. Must realloc, not malloc again to the same pointer...
	int* my_ptr = (int*) malloc(elements_in_list*sizeof(int));

	printf("\nYour List:\n{");
	for (int j = 0; j < elements_in_list; j++) {
		printf("%d ", my_ptr[j]);
	}
	printf("}\n");
	

	return 0;

}
