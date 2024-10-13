/*Get input from stdin*/

#include <stdio.h>


int getc(FILE * stream); // Returns integer (ASCII value)

int main(void) {
    char ch = '\0';
    
    ch = getc(stdin);
    printf("read in character %c\n", ch);

    return 0;

}
