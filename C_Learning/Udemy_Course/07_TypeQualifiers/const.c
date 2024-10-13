#include <stdio.h>

/*We can add the const keyword to a variable to make it constant
  This variable can be an array or a pointer as well. Examples below*/

int main(void) {

    const int x = 3;
    /*We can't do this now: "x = 4;" -> It's a read only variable*/
    
    const my_array[] = {1, 2, [5] = 4};
    /*remember this curiosity: if I write [5] = 4 I'm setting this to be the last
    element in the array*/


    /*IMPORTANT:*/
    const float *ptr;   // ptr points to a constant float value
    /*I can't change the value that the pointer is pointing to*/
    // Note: Same thing as 'float const *ptr';

    /*BUT*/
    
    float * const ptr2; // ptr2 is a constant pointer to a float value
    /*The pointer itself cannot be changed. The pointer must always point to
    the same address*/

    /*AND*/

    const int * const ptr3; // ptr3 is a constant pointer to a constant int value
    /*This, of course means that both pointer and value pointed at cannot be changed.*/

    // -> Important to note, when using pointers, where is the * and the const keyword


    printf("%d\n%d\n%d\n%d\n", x, *ptr, my_array[0], my_array[5]);

     


    return 0;
}
