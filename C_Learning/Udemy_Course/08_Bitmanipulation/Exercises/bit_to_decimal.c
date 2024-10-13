#include <stdio.h>


int decimal_converter(int binary_number);

int main(void) 
{

    int binary_number;
    int result;

    printf("Please enter a binary number - up to 8 digits, please: ");
    scanf("%d", &binary_number); /*ex:10010101*/
    
    result = decimal_converter(binary_number);
    
    printf("%d is %d in decimal.\n", binary_number, result);

    return 0;
}

int decimal_converter(int binary_number)
{
        int isolated_binary = 0;
        int added_decimal = 0;
        int multiplicative = 1;

        for (int counter = 0; counter < 8 ; counter++)
        {
            /*Extract the rightmost digit*/
            isolated_binary = binary_number % 10;
            /*Either 1 or 0 always*/
            if (isolated_binary == 1) {
                if (counter == 0) {
                    added_decimal = 1;
                } else {
                    for (int i = 1; i <= counter; i++) {
                        multiplicative *= 2;
                    }
                    added_decimal += multiplicative;
                    multiplicative = 1;
                }
            }
            binary_number /= 10; /*reduce the rightmost digit*/
        }

        return added_decimal;
}

