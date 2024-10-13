#include <stdio.h>

/*TYPECASTING*/

int main(void) {
    
    int my_number = 4; 

    float my_altered_number;

    my_altered_number = (float)(my_number); /*This is now a float, after being typecast*/
    
    printf("My int number: %d\n", my_number);
    printf("My float number: %.2f\n", my_altered_number);

}
