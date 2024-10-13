#include <stdio.h>

int loop_counter = 5;

int outside_funct(void);

int main(void) {

    while (loop_counter > 0) {
        outside_funct();
        loop_counter--;
    }
    return 0;
}





// sharing variables amongst two files - exercise