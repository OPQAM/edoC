
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
	
    string s = "HI!";
    
    // printing the string:
    printf("%s\n", s);

    // printing the three characters:
    printf("%i %i %i\n", (int) c1, c2, c3);
    
    // printed as the elements of an array:
    printf("%i %i %i\n", s[0], s[1], s[2]);

// (int) explicity converting the char to an int,
// but the efect is the same not having it
// we are implicitly converting the character to int
//
// So, the string is basically just an array of characters
    return 0;
}
