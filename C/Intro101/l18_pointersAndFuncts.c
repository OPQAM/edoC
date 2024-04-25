#include <stdio.h>

void addOne(int *); // single pointer as variable

int main(void){
	int a = 0;
	addOne(&a); // giving the function the adress in memory of the value 'a'
	printf("%d\n", a);
	return 0;
}

void adOne(int* a){
	*a = *a + 1; // The function gets the value from the address, adds one, and stores it back at that variable address
}

// So! We're not working directly with the variable. Instead, we're working with the memory that contains that value.
