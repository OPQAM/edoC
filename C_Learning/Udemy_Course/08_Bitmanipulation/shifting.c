#include <stdio.h>

/*>> and <<*/


int main(void) {

    int w1 = 3;          // 00000000 00000000 00000000 00000011
    int result = 0;

    // Shift one place to the left
    result = w1 << 1;    // 00000000 00000110
    
    /*Left shifting by 1 = multiplying value by 2*/

    printf("w1: %d\n", w1);

    printf("w1 left-shifted(1):%d\n\n", result);

    /* Of course, since ints usually have 32 bits, or 4 bytes, let's see what happens
     * when we left shift our w1 into the limit of our range:*/

    int infinite_minus_one = 0;
    int infinite = 0;
    int infinite_plus_one = 0;
    int poof = 0;

    infinite_minus_one = w1 << 29;
    infinite = w1 << 30;
    infinite_plus_one = w1 << 31;
    poof = w1 << 32;

    printf("One zero at left: %d\n", infinite_minus_one);
    printf("1100..: %d\n", infinite);
    printf("1000..: %d\n", infinite_plus_one);
    printf("0000..: %d\n\n", poof);
    /*The latter wasn't as much a poof as I expected, as in, you get 0, but instead is
     * undefined behavior. Or it could be. Many compilers, like the one I'm using, actually
     * perform the shift modulo of the width of type. so, basically w1 << 32 % 32, which
     * is basically w1 << o = w1. So, no shifting, and we get back the original number.
     * This will happen on many compilers and systems, but it's not to be relied on.
     * It's better to just assume that this will result in undefined behavior.*/
    
    // Left-shifting

    printf("w1>>1: %d\n", w1 >> 1);
    printf("Let's get 1100000... back to the right, with >> 30 on that value.\n");
    printf("Note that the leftmost 1's get dragged (to work with negatives).\n");
    printf("First, let's do >> 29: %d (...11110)\n", infinite >> 29); // -2
    printf("And >>30: %d (...11111)\n\n", infinite >> 30); // -1
    
    /*The above is called sign extension and happens for signed ints. Unsigned won't do thatl, ofc*/    
    return 0;

}
