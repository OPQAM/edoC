#include <stdio.h>
#include <stdlib.h>


int main(void) {

        printf("Hello again!\n\n\n\n\nHello, more!\n");

        system("clear");  /*Linux call*/


        /*C doesn't have a standard built-in function for clearing the screen, so we might need to use system-specific commands/
         * We could also use ANSI escape codes like printf("\033[2J\033[H"), ncurses binary, etc.;
}
