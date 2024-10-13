#include <stdio.h>

#define IN 1
#define OUT 0

/* counting words, lines and characters in an output */
/*My explanations, step by step */
int main() {
    int c, nl, nw, nc, state;

    state = OUT; // IN and OUT basically means in a word or outside it
    nl = nw = nc = 0; 

    while((c = getchar()) != EOF) { // testing user input. If EOF = game over
        ++nc;                       // As long as we enter the loop, we always add 1 character
        if (c == '\n')              // Pressing enter always adds a new line. Remember '' for characters
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') // Any of these remove us from inside a word, so we
                                                // need to account for that
        {
            state = OUT;
        }
        else if (state == OUT) // Now this is interesting, really. This happens if the user has pressed
        {                      // a character, and we have the trigger state as OUT. Meaning... that
            state = IN;        // we've entered a new word. The rest is obvious
            ++nw;              // Do remember that we're parsing this charcter by character
        }

    }

    printf("%d %d %d\n", nw, nl, nc);

        return 0;

}
