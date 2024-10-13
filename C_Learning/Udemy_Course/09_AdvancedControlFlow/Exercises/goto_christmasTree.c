#include <stdio.h>
#define MAXLINE 4
#define MAXLINE_POSITION 9


/*Can't use loops. Must use goto's*/

int main(void) {
        
    int line_position = 0;
    int line = 0;
    
    int high_paint = 5;
    int low_paint = 3;

    /*Beginning of this obnoxious function*/
    starter:

    /*Checking if we've reached the last line - end program*/
    if (line == MAXLINE) {
        printf("*********\n");
        goto the_end;
    }
    
    /*Checking if we're at the start*/
    if (line == 0) {
        printf("    *    \n");
        line++;
        goto starter;
    }

    /*Checking if we've reached end-line position, and going back to start*/
    if (line_position >= MAXLINE_POSITION) {
        line_position = 0;
        line++;
        printf("\n");
        goto starter;
    }

    /*Detection of paintable position*/
    if (line_position == low_paint) {
        goto low_star_printer;
    } else if (line_position == high_paint) {
        goto high_star_printer;
    } else { goto empty_printer;
    }


   /*The empty printer*/
    empty_printer:
        printf(" ");
        line_position++;
        goto starter;

   /*The star printer - low*/
    low_star_printer:
        printf("*");
        line_position++;
        low_paint--;
        goto starter;

    /*The star printer - high*/
     high_star_printer:
        printf("*");
        line_position = line_position + 2;
        high_paint++;
        goto starter;


    the_end:
        return 0;
}
