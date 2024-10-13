#include <stdio.h>


int main(void) {

    int x = 4;
    int y = 6;

    /*Using conditionals instead of using if-else expressions*/

    /*IF-ELSE*/
    if (x >= y) {
    
        printf("True.\n");

    }   else {
    
        printf("False.\n");
    
    }

    /*CONDITIONAL - parenthesis not necessary*/

    (x >= y) ? printf("also true.\n") : printf("also false.\n");


}
