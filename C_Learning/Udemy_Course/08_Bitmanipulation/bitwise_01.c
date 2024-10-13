#include <stdio.h>

int main() {
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;
    short int w4 = 0;
    short int w5 = 0;
    short int w6 = 0;

    /*Showcasing unsigned ints*/

    unsigned short int w7 = 25;
    unsigned short int w8 = 0;

    w3 = w1 & w2;
    w4 = w1 | w2;
    w5 = w1 ^ w2;
    w6 = ~w1;

    w8 = ~w7;

    
    printf("w1: %d; w2: %d\n", w1, w2); 
    
    printf("w1 & w2: %d\n", w3);
    printf("w1 | w2: %d\n", w4);
    printf("w1 ^ w2: %d\n", w5);
    printf("~w1: %d\n", w6);
    printf("w7: %d\n", w7);
    printf("~w7: %d\n", w8);

    return 0;

}



/* AND
 * 25: 000000000011001
 * 77: 000000001001101
 *     ---------------  (&)
 *     000000000001001  9 (base10)
 * 
 * OR
 * 25: 000000000011001
 * 77: 000000001001101
 *     ---------------  (|)
 *     000000001011101  93
 *
 * XOR
 * 25: 000000000011001
 * 77: 000000001001101
 *     ---------------  (^)
 *     000000001010100  84
 *
 * ONE's COMPLEMENT
 * 25: 000000000011001
 *     ---------------
 *     111111111100110 -24
 *
 *     In one's complement, note that if we added the original value, we'd get 'all ones'.
 *
 *  Remember that we get negative numbers by keeping all values to the right until the first 1. Then keeping that and switching all values to the left
 *
 *  Ex: 25 is 0000000000011001 and -25 would be 1111111111100111.
 *
 *  So, subtracting 25 to -25 would be the same as adding 25 to -25:
 *
 *  25: 00000000 00011001
 * -25: 11111111 11100111
 *    + -----------------
 *      00000000 00000000 0, of course      
 * */
