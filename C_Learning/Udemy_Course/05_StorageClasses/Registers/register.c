#include <stdio.h>

int main() {
    
    register int x = 15;

    int *a = &x; //Can't do this: "address of register variable 'x' is requested"

    printf("%d\n", *a);

    return 1;

}

// note that if instead the pointer is storing a register, then that is just fine