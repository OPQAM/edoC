#include <stdio.h>

int changinator(int my_array[]);

int main(void) {

    /*Let's showcase something interesting about constant arrays
    We can make the array constant, but then pass it as a parameter to a function
    and change its values. Let's see:*/

    const int my_array[] = {1, 2, 3, 4, 5};

    changinator(my_array);

    for (int i = 0; i < 5; i++) {
        printf("%d ", my_array[i]);
    }
    /*This printf statement will show that our constant array has been changed.
    In order to prevent this, we need to pass it as a constant parameter into the function.
    Note that we can pass it as a pointer. But more on that later.*/
    
    return 0;


}
int changinator(int my_array[]) {
    my_array[0] = 42;

    return my_array[0];

}
