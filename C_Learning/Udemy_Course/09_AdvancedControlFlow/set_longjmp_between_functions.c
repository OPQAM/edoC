#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>            // for the exit call


jmp_buf buf;


void my_function(){
    printf("This will print before the jump. We're in the alt function.\n");
    longjmp(buf, 1);

    /* Our function does not reach this line */
    printf("This is invisible.");
}


int main(void) {
   
    if (setjmp(buf)){
        printf("We're in main now.\n");
    } else {
        printf("first time through...\n");
        my_function();
    }


    return 0;

    
    
}
