#include <stdio.h>

int main(void)
{
    /*printf("Value of EOF: %d\n", EOF);*/

    int c;

    while ((c = getchar()) != EOF) {
        /*printf("getchar() != EOF: %d. Value of c: '%c' (%d)\n", c != EOF, c, c); */
        putchar(c);
        /*printf("\n"); */
    }
}
