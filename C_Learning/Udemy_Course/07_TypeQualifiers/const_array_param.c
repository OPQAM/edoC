#include <stdio.h>

void my_failed_funct(const int my_array[]);

void my_successful_array(int my_array[]);   

int main(void) {
    
    int my_array[3] = {42, 44, 55};

    my_failed_funct(my_array);

    for (int i = 0; i < 3; i++) {
        printf("index(%d): %d\n", i, my_array[i]);
    }

    my_successful_array(my_array);
 
     for (int j = 0; j < 3; j++) {
        printf("index(%d): %d\n", j, my_array[j]);
     }

     return 0;
}

void my_failed_funct(const int my_array[]) {
    
    // my_array[1] = 99; /*This won't work. Won't even compile*/
    
}

void my_successful_array(int my_array[]) {
    
    my_array[2] = -99; /*This works*/

}

/* Notes: as we can see, if we set the my_array parameter as a const, then we can't change it. The program won't even compile if we try to change it within the function.
 * Also note that the parameter const int array[] is basically the same as const int * array[]
 * Read: "The character to which the pointer points cannot be changed(!)"
 *
 * It's perfectly reasonable to use global variables with the const qualifier.*/

