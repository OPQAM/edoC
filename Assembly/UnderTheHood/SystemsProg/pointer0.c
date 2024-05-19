#include <stdio.h>


int main() {
	int myAge = 45;           // Variable
	int* ptr = &myAge;        // Pointer Variable
							  
	printf("%d\n", myAge);    // outputs the value of myAge
	printf("%p\n", ptr);      // the same, but through the pointer
	
	// How about this?
	
	printf("%d\n", *ptr);     // Outputs the value of myAge 
							  // by *dereferencing* the pointer
							  
	// Note that we can declare pointer variables in C by:
	//
	// 'int* myVal' but also with 'int *myVal'
	
}
