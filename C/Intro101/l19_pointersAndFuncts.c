#include <stdio.h>

int* addOne(int *);

int main(void){
        int i = 0;             // (3)
	int* a = &i;           // (4)
        
	a = addOne(a);
        printf("%d\n", *a);
        return 0;
}

int* addOne(int* a){           // (1)
	*a = *a + 1;           // (2)  
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
