// Ask user for a number of cats, then meow that many times

#include <stdio.h>
#include <cs50.h>

// Function Prototypes or Function Declarations
void meow(int n);
int meow_count(void);

int main(void)
{
    int counter = meow_count();
    meow(counter);
    
    return 0;
}

void meow(int n)
{
    if (n == 0)
    {
        printf("You need a cat.\n");
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}

int meow_count(void)
{
    int m;

    do
    {
        m = get_int("How many cats?\n");
    }
    while (m < 0);

    return m;
}

