#include <stdio.h>
#include <cs50.h>


// Supposedly, the do while can enter an error of still writing

int main(void)
{ 
    int n = 0;
    do
    {
        printf("We have no zeros\n");
    }
    while (n != 0);
    
    return 0;
}
// Not an error, but by doing 'do' we'r emaking sure it will run whatever it needs to write at least once.
