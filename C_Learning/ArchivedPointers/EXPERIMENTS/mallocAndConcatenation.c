#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    char str1[] = "Hello, ";
    char str2[] = "world!\n"; // size determined by compiler

    char *result = malloc(strlen(str1) + strlen(str2) + 1);

    // Let's check if malloc correctly allocated memory or not
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;   
    }
        //Note that fprintf let's us write to any output stream, including stderr

    strcpy(result, str1);
    strcat(result, str2);

    printf("%s", result);

    free(result); // free up the memory

    return 0;
}