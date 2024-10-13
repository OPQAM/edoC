#include <stdio.h>
#include <setjmp.h>

jmp_buf error_handler;


float divide(int num, int den) {
    
    
    if (den == 0) {
        longjmp(error_handler, 1);
    } else {
        float calculation = (num / den);
        printf("%.2f", calculation);
    }
}

int main(void) {

    int result;

    if (setjmp(error_handler) == 0) {
        printf("Attempting division...\n");
        result = divide(5, 0);
    } else {
        printf("Error: Division by zero.\n");       
    }

    printf("End of program.\n");

    return 0;
}
