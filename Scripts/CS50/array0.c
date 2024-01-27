
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", (int) c1, c2, c3);

// (int) explicity converting the char to an int,
// but the efect is the same (implicitly converting)
    return 0;
}
