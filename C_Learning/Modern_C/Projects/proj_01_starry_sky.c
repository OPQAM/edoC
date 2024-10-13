#include <stdio.h>

int main(void) {
    
    int main_star = 7;
    int second_star = 0;
    char starry_array[8] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    // More complicated than necessary
    for (int i = 0; i < 6; i++) {
        starry_array[main_star] = '*';
        if (i >= 3) {
            starry_array[second_star] = '*';
        }
        for (int j = 0; j < 8; j++) {
                    printf("%c", starry_array[j]);
        }
        if (i >= 3) { // Unnecessary mess here, but it works...
            starry_array[second_star] = ' ';
            second_star++;   
        }
        starry_array[main_star] = ' ';
        main_star--;
        printf("\n");
    }    

    return 0;
}
