#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>            // for the exit call


jmp_buf buf;


int main(void) {
    
    int i = setjmp(buf);
    printf("i = %d\n", i);
    
    if (i != 0) {
        exit(0);          // so we don't have an infinite loop.
    }

    longjmp(buf, 42);
    
    printf("Do we get to see this line?");

    return 0;

    
    
}
