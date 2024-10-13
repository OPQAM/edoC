#include <stdio.h>
#include <ctype.h>      // isspace requires this, I think



int main() {
    
    char ch = 0;
    while (isspace(ch = (char)getchar())); // Read as long as there are spaces
            ungetc(ch, stdin);             // Put back the non-space; we're basically 'unreading' the last character

    return 0;

}
