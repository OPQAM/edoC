#include <stdio.h>
#include <stdlib.h>


int main() {
	int v[5] = {1,2,3,4,5};				// assigning an array. NOTE: when we created 'v', the Compiler actually made space for a new Array
	int *p = v;							// assigning a pointer 'p' to an array 'v'. NOTE: there was no space created here. It's 'just' a pointer
	printf("v[0] = %i\n", v[0]);
	printf("v[1] = %i\n", v[1]);
	printf("v[2] = %i\n", v[2]);
	printf("v[3] = %i\n", v[3]);
	printf("v[4] = %i\n", v[4]);

	/* From the Compiler's POV, arrays and pointers are nearly the same thing.
	 * I Can go and make changes to the array or pointer: */

	v[3] = 7;
	p[4] = 8;

	
	printf("\nv[3] = %i\n", v[3]);
	printf("v[4] = %i\n", v[4]);


	/* Pointer Arithmetic */

	// the address of p
	printf("\np = %p\n", p);                       // 0x7ffe5b75fde0
	printf("p + 2= %p\n", p + 2);                  // 0x7ffe5b75fde8 (+8 -> the compiler is adding +2 * the size of the thing it points to (an INT = 4 bytes long))
	
	printf("\n");

	// So we can do this as well:	
	printf("v[0] = %i\n", *p);
	printf("v[1] = %i\n", *(p+1));
	printf("v[3] = %i\n", *(p+3));
	printf("v[4] = %i\n", *(p+4));

	printf("\n");

	// And we can access any point of our array 'v' using pointer arithmetic:
	*(v+2) = 42554;

	printf("v[2] = %i\n", *(p+2));

	// Or:
	*(p+2) = 33333;

	printf("v[2] = %i\n", *(v+2));


	// NOTE that this is a problem and undefined behavior. Read below. The array that we created has 5 elements, not 16:
	v[15] = 4455;
	printf("v[15] = %i\n", v[15]);
	p[15] = 4455;
	printf("v[15] = %i\n", v[15]);
	
	/* **************************************************************************************************************
	 * TAKE NOTE:																									*
	 *																												*
	 * It's important to understand that C does not perform array bounds checking by default. 						*
	 * This means that when you access elements outside the bounds of an array,										*
	 * C does not necessarily raise an error or exception. 															*
	 * Instead, it allows you to access memory locations that may or may not be valid.								*
	 *																												*
	 * What happens is that you are writing to and reading from memory locations beyond the bounds of the v array.	*
	 * In C, this is UNDEFINED BEHAVIOR, which means that anything can happen. 										*
	 * Your program may appear to work fine, but it could also crash or produce unexpected results. 				*
	 * The behavior is not guaranteed, and it can vary depending on the compiler and the specific environment.		*
	 *																												*
	 * To avoid such issues, it's crucial to be very careful with array bounds 										*
	 * and ensure that you only access valid elements within the defined range of the array.						*
	 * **************************************************************************************************************/


	return 0;

}


