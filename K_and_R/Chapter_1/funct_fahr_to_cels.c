#include <stdio.h>

float celsiator(float fahr);
int main(void)
{

    int fahr;
    
    while (1)
    {
        printf("Please input a fahrenheit value (0-300): ");
        scanf("%d", &fahr);
        if (fahr >= 0 && fahr <= 300)
        {
            printf("Original value in fahrenheit: %d.\nCelsius conversion: %2.2f.\n", fahr, celsiator(fahr));
            return 0;
        } else {
            printf("\nThat is not a valid input. Try again...\n");
        }
    }
}

float celsiator(float fahr)
{
    float result;
    result = (5.0/9.0)*((fahr-32));
    return result;
}
