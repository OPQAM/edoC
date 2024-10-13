#include <stdio.h>

int fgetc(FILE *fp)

int main(void) {
    FILE *fp = null;
    char c = '\0';

    fp = fopen ( "myFile.c", "r" ) ; // opening existing file
                                     
    if ( fp == NULL ) {
        printf ("Could not open file myFile.c ") ;
        return 1;
    }

    printf("reading the file myFile.c");
    /*Since we're reading from a file we are ok with a while loop going on forever*/

    while (1) {
        c = fgetc(fp);

        if (c == EOF) {
            break;
        }
        printf("%c", c);
    }

    printf("Closing the file test.c");
    fclose(fp);
    return 0;

}

