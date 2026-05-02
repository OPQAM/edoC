#include <stdio.h>
#include <cs50.h>



int main(void)
{

    const int n = 3;

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
