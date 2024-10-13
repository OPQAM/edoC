#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_CHARS 20


int main (void) {
    


    char val1[NUM_OF_CHARS];
    char val2[NUM_OF_CHARS];
    char val3[NUM_OF_CHARS];


    printf("The _________ in _________ stays mainly in the ________.\n");

    printf("\nPlease choose three silly words:\n");
    scanf("%s %s %s", val1, val2, val3);

    printf("The %s in %s stays mainly in the %s.\n", val1, val2, val3);

    
}