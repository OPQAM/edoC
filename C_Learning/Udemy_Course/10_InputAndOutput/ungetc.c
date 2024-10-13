#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 0;
    while (isspace(ch = getchar())); // Skip whitespace
    
    ungetc(ch, stdin);  // Push back the non-whitespace character
    
    // At this point, ch holds the non-whitespace character
    printf("Character in ch: %c\n", ch);
    
    // Read the character again from the input stream
    char next_char = getchar();
    printf("Character read again: %c\n", next_char);
    
    return 0;
}

// ungetc() is a function that operates on individual characters, pushing back  single character onto an input stream.
