#include <stdio.h>

int main(void)
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("Number of lines: %d\n", nl);
}
