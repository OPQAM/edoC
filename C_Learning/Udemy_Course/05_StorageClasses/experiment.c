#include <stdio.h>

int main() {
    static int i = 5;
    if(--i){
        printf("%d", i);
    main();
    }
    return 0;
}

// This is an example of a recursive function.
// The function is called recursively until i is 0 (it simplifies itself), and then it returns.