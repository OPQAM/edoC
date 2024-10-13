#include <stdio.h>

/* Printing a Celsius-Fahrenheit table 
 * Formula: F = C * (9/5) + 32 */

int main(void) 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 60;
    step = 10;

    celsius = lower;
    printf("Celsius  Fahrenheit\n");
    printf("-----------------------\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%7.0f \t%3.0f\n", celsius, fahr);
        celsius += step;
        }
}
