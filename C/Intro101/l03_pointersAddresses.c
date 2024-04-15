#include<stdio.h>

int main(void){
	int i = 10;
	int *p = &i;

	printf("The address of i is: %p\n", &i);
	printf("The value of i is: %d\n", i);
	printf("The address of p is: %p\n", p);
	printf("The address of p is: %p\n", &i);

	printf("As we can see, what's stored inside of p is the same thing p is pointing towards. Meaning, the address of i.");

	printf("We can get the value of p by dereferencing.\n");

	printf("Dereferencing p: %d\n", *p);

	// %p   -> allows us to print memory locations
	// &i   -> get the address of i and print it out
	// *p   -> This is declaring a pointer. This pointer is pointing
	//         Towards the address of i
	// *p   -> To dereference p we need to use *p. We're not looking at the 
	// 	   address anymore, we're looking at that it it's referencing.
	
	return 0;
}

