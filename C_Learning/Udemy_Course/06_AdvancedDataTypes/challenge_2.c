#include <stdio.h>
#include <stdlib.h>

struct myArray {
    int length;
    int array[];
};

int main(void) {
    int desiredSize;
    printf("Enter desired array size: ");
    scanf("%d", &desiredSize);

    struct myArray *ptr = malloc(sizeof(struct myArray) + desiredSize * sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Error allocating memory\n");
        return 1;
    }

    // Setting the length member
    ptr->length = desiredSize;

    // fill with dummy elements
    for (int i = 0; i < desiredSize; i++) {
        ptr->array[i] = i;
    }

    // Printing the elements
    for (int i = 0; i < desiredSize; i++) {
        printf("%d ", ptr->array[i]);
    }

    //free allocated memory
    free (ptr);

    return 0;

}


/*Write program that uses a flexible array member 
inside a structure
Structure named 'myArray' that has a length member and a flexible array
member named array
- read in from the user the size of the array at runtime
- allocate memory for the structure based on this size from user
- set the length member and fill the array with some dummy data
- print array elements*/