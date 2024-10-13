#include <stdio.h>

int i = 5;

char text[255];

void foo(void);

int main(void)
{
    printf("%i  ", i);
    foo();
    printf("%i\n", i);
    
    return 0;
}

// An extern funct can be called from a file where it is not dedfined, where it does not need to be defined in a header file