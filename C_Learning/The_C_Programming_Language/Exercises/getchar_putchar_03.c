#include <stdio.h>


int main(void) 
{
    int c;
/*
    while ((c = getchar()) != EOF) {
        putchar(c);
        //printf("\nInteger: %d\n", c);
        // Will always also return 10 - linefeed
    }
    printf("Value of EOF: %d\n", EOF);
*/
    int d;

    d = getchar() != EOF; // 0 if EOF is returned, 1 otherwise
    putchar(d);
    printf("d: %d\n", d);

}
