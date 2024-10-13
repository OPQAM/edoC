#include <stdio.h>


int main(void) {

    /* The mask sets a standard. We'll use it a lot with AND.
     * So, for example, if we set the mask to 00000011, then when
     * we use that with AND on any other item (let's call it a flag)
     * we'll keep any values that have 1 AND 1, and drop 0's.
     * So, by default, the end-result will be one of these four:
     * a) 00000011
     * b) 00000010
     * c) 00000001
     * d) 00000000
     *
     * Ergo, the values that the mask keeps at 0 will remain 0 because
     * we're using AND (&).
     *
     * The OR bitwise operator will then help us turn bits on.
     * Every value that is 1 will remain 1 no matter the flag,
     * and the 0 bits will be able to change, according to the flag*/

    int flags = 15;  // 0000 1111
    int mask = 182; // 1011 0110

    /*AND to turn bits off and OR to turn bits on
     * Use a mask with 0's + AND to turn off those bits on the flag
     * Use a mask with OR + 1's to turn on those bits on the flag
     * Use a mask with XOR + same bits as flag to togle the flag*/

    /*Turn bits off*/

    int flags_off = flags & mask; // 0000 0110
    printf("TODO: function call here to get conversion from decimal to binary");
    /*turn bits on*/

    int flags_on = flags | mask; // 1011 1111

    /*flip bits*/

    int flag_flipping = flags ^ mask; // 1011 1001

    /*flip all bits*/
    // Well.. get a mask that is the inverse of the flag... to get the inverse flag...

    /*Veryfying if the value of a bit:*/

    if ((flag & MASK) == MASK){...}
    // Way to test if the 1's in flag are the same as in mask
    //
    // We can also check for 0's with |, ofc
    return 0;

}
