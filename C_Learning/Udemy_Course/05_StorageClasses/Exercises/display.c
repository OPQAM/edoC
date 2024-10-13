#include <stdio.h>

extern int loop_counter;

int outside_funct(){


    printf("Loop counter: %d\n", loop_counter + 1);
    return 1;

}