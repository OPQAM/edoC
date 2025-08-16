#include <stdio.h>

int main(void)
{
    int c, counter;
    counter = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && counter == 1)
        {}
        else
        {
            putchar(c);
            if (c == ' ')
            {
                counter = 1;
            }
            else if (c == '\n')
            {
                counter = 0;
            }
        }
    }
}
