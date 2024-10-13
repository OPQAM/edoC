#include <stdio.h>

int x = 42;
int array[4] = {1, 2, 3, 4};
int *ptr1;
int *ptr2;

//int *ptr3;




int main() {
	
	ptr1 = &x;

	ptr2 = array;

	printf("Memory Address for ptr1: %p;\nValue held in memory position: %d\n\n", ptr1, x);
	printf("We're doing ptr1 + 1 and see what that entails.\n\n");
    printf("Memory Address for ptr1 + 1: %p;\nValue held in memory position: %d\n\n", ptr1 + 1, *(ptr1 + 1));
	printf("Dereferencing the pointer to get the value within. Dereferenced ptr1: %d and ptr1+1: %d (nonsense/empty here. Pointing to nothing.)\n\n", *ptr1, *(ptr1+1));

	printf("Now let's turn our attention to the array we've created, with values 1 to 4.\n\n");
	printf("ptr2 is pointing to the address of the first element of the array.\n");
	printf("ptr2 memory address: %p; value in that address: %d\n\n", ptr2, *ptr2);

	printf("As we add +1 to our pointer, we move x bytes (in this architecture 4) up, and thus move to the next element in our array:\n");
	printf("ptr2+1 memory address: %p; ptr2+1 dereferenced value: %d\n\n", ptr2 + 1, *(ptr2 + 1));

	printf("For funsies, dereferenced ptr1+4: %d (memory location: %p)\n", *(ptr1+4), ptr1+4);

	// Note on the last tidbit:
	//Undefined Behavior: In C, accessing memory through a pointer that doesn't "own" that memory is undefined behavior. 
	//This means the C standard doesn't guarantee any particular result. It might work as expected, crash, or do something completely unexpected.
    //Memory Protection: Modern operating systems implement memory protection. While your program might have access to a contiguous block of memory, 
	//accessing memory outside of what's been allocated to your program can cause a segmentation fault.
    //Optimization: Compilers make optimization decisions based on the rules of the language. Using pointers in ways that violate these rules can
	// lead to unexpected behavior when the code is optimized.
    //Portability: Code that relies on specific memory layouts or ignores language rules is likely to be less portable across different systems or compilers.
    //Debugging and Maintenance: Code that uses pointers in non-standard ways can be much harder to debug and maintain.


	return 0;
}
