#include <stdio.h>

/* Unsigned integer overflow. Undefined behavior by the C standard, 
 * but most compilers just wrap around it.
 *
 * short = 16 bits: 0000 0000 0000 0000
 * Max positive (signed): 0111 1111 1111 1111
 * */

int main(void) {
    // unsigned short int my_number = 0; //same for signed
/*
    float my_number = 1;
    while(1) {
    my_number *= 2;
    printf("%0.f\n", my_number);
    }
*/

    float my_number = 16777216;
    printf("%f\n", my_number);
    my_number = my_number + 1;                 // add a value
    printf("%f\n", my_number);

    my_number = 16777217;        // set value as the next value
    printf("%f\n", my_number);
    my_number = 16777218;        // set the value after that one
    printf("%f\n", my_number);

    my_number = 16777219;
    printf("%f\n", my_number);
    my_number++;
    printf("%f\n", my_number); // Check out float limits

}
