#include <stdio.h>

/*Testing int sizes*/

int main(void) {
        
    int value_a = 10000000;

    unsigned int value_b = 4294967295;
    unsigned int invalid_value_b = 4294967296;
    printf("value_a: %d\n", value_a);
    printf("value_a*10: %d\n", value_a * 10);
    printf("value_a*100: %d\n", value_a * 100);
    printf("value_a*1000: %d\n", value_a * 1000);
    printf("value_a10000: %d\n", value_a * 10000);
    printf("value_a100000: %d\n", value_a * 100000);

/* int = 4 bytes
 *
 * 0000 0000 0000 0000 0000 0000 0000 0000
 *
 * unsigned int: 4,294,967,295 (+4 billion...)
 *
 * */


    printf("%u\n", value_b);
    printf("%u\n", invalid_value_b);
    
    /*Just like what is stated in the variable's name, invalid_calue_b is an invalid integer, and it will result in 10000... with the leftmost 1 discarded, because it doesn't fir the 32 bite size of the int.
     * This is to be expected and the value is just discarded. Apparently, with signed ints the result will actually be an undefined behavior, which is a problem.
     * */

}

