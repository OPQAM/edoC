#include <stdio.h>

int* addOne(int *);

int main(void){
        int i = 0;                 // (3)
	int* a = &i;               // (4)
        
	a = addOne(a);
        printf("%d\n", *a);
	printf("%p\n", (void *)a); // (5)
        return 0;
}

int* addOne(int* a){               // (1)
	*a = *a + 1;               // (2)  
        return a;
}

// NOTES:
//
// (1) This function (addOne) takes in a pointer (int* a) and it will return a pointer (int*)
//
// (2) It takes the pointer it was given (*a) and it adds 1 to it. It then returns back that pointer
//
// (3) We're taking a variable i and setting it to 0.
//
// (4) Then we're taking the pointer a and setting that to i.
//
// (5) By explicitly typing (void *) we're informing that we're dealing with a memory address rather than a specific data type. This isn't mandatory - the memory address will be printed fine even without this piece of code. It's mostly informative, as most compilers are able to deal with this.
