// Macros are just text-substitution and is known before compilation time.
// We use them for immutable values that we want previously declared.
// They aren't of a specific type, as we can see below

#include <stdio.h>

#define SIZE 100  // Here we're defining a macro, meaning that SIZE is 100

int main(int argc, char **argv) {
    int x = SIZE;  // Here we're defining a variable, meaning that SIZE is an integer
    char myString[SIZE]; // Here we're defining a variable, meaning that SIZE is a character
    float y = SIZE;  // Here we're defining a variable, meaning that SIZE is a float

    return 0;
}