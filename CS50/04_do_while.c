#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("What's n? ");
    }
    while (n < 0);
    
    if  (n == 0)
    {
        printf("Get a cat.\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
