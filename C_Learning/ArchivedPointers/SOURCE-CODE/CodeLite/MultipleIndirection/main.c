#include <stdio.h>

#define LENGTH 3

int data[LENGTH];			// some integers

int main(int argc, char **argv) {
	int *pi;			// a simple pointer to an integer
	int **ppi;			// a pointer to a pointer to an integer

	printf ("multiple indirection example\n");

	// initialize our integer array
	for (int i = 0; i < LENGTH; i++) {
		data[i] = i;
	}
	for (int i = 0; i < LENGTH; i++) {
		printf("%d\n", data[i]);
	}
    
	/*
	* A: simple pointer to a pointer to an integer
	*
	*/
	pi = data;								// set the pointer to an integer  to the start of the data array
	ppi = &pi;								// and set the pointer to a pointer to pi itself

	for (int i = 0; i < LENGTH; i++) {
		printf("array address is %p\n", data);
		printf("item pointed to by pi is %d\n", *pi);
		printf("item pointed to by ppi is %p\n", *ppi);
		printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);
		printf("The value of pi is %p and it points to %d\n\n", pi, *pi);
		pi += 1;		// advance the pointer to point to the next element of the data array
	}

	return 0;
}