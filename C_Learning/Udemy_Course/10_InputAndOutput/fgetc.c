#include <stdio.h>



int main(void) {
    int ch = 0;


    while ((ch = getchar()) != EOF) // If we wan to use EOF, we want to store a char (see above), not an int


    printf("%c\n", ch);
    return 0;



}
