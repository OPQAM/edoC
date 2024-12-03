#include<stdio.h>
#include "l25_linearDataStructures.h"

// Nodes hold a value and a pointer to another node
// A node structure - chains of values (linear structures)

int main(void){
	struct node test;
	test.value = 0;

	struct node test2;
	test2.value = 1;

	test.next = &test2;

	printf("%d\n", test.value);
	printf("%d\n", test.next->value);  // de-referencing next and getting the result out of the value struct (it's what the arrow is doing)
	printf("%d\n", test2.value); // this should give us the same result
}
