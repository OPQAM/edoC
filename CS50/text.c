#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int coin = 1;
    while (true)
    {
        char c = get_char("Here's %i. Double it? ", coin);
        if (c == 'y' || c == 'Y')
        {
            coin *= 2;
        }
        else
        {
            break;
        }
    }
}

