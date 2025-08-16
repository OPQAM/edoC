#include <stdio.h>

/* Copy input to output
 * Butreplaces tabs with '\t',
 * backspaces with '\b'
 * and bakslashes with '\\'.*/

/* Backspaces will not be detected as they are handled directly by the terminal.
 * If we want to have that happen, we need to disable line buffering and input processing.
 * Or to read raw input directly into the terminal. 
 * So, the logic is sound, but the system will never get to detect backspaces.*/


int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}
