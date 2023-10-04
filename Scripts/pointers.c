#include <stdio.h>

			/*POINTERS*/
// Pointers store addresses or locations in memory
//      int *x;   -> I'm declaring a pointer to an int and I'm calling it 'x'
// 'x' in this example isn't an int, it's an address. The compiler will treat
// anything that is at that address as an int.


main() {
	int y = 7;
	int *p = &y;              // & means 'the address of' y
	
	printf("%p\n",p);         // Won't return 'y' or '7', but a messy number which is the memory address of 'y'
	
	printf("%p, %i\n",p, *p); // Now we're asking for the int that p points to

	*p = 14;                  // Now we're changing the value of the int to this new value
	
        printf("%p, %i\n", p, *p);	
}
