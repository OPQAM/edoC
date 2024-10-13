#include <stdio.h>


int main() {

    int numbers[50] = {[24]999, 99, -2, 30, 7, [4 ... 15] = -5, 44, -44, [33] = 33, [40 ... 49] = 42};


    // Printing the list
    for (int i = 0; i < 50; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Printing list without zeros
    for (int i = 0; i < 50; i++) {
        if (numbers[i] != 0)
        {printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 1;
}