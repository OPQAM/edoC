#include <stdio.h>
#include <ctype.h>

int main() {

    char ch = 0;
    while (isspace(ch = (char)getchar()));

    // ungetc(ch, stdin);         // comment/uncomment this to see what is loaded onto the character


    printf("char is %c\n", getchar());


    return 0;

}


/*[  ab]
 * With ungetc() we'll read 'a'
 * Without ungetc() we'll read 'b'*/
