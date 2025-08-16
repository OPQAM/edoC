#include <stdio.h>

int main(void)
{
    int c, nl, bl, tb;
    nl = 0;
    bl = 0;
    tb = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tb;
        else if (c == ' ')
            ++bl;
    printf("Number of newlines: %d\nNumber of blanks:  %d\nNumber of tabs: %d\n", nl, bl, tb);
}
