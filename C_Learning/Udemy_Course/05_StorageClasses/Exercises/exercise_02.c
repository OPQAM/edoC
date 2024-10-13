#include <stdio.h>

int sum(int var) {

    static int n = 0;

    n += var;
    return n;
}

int main(void) {


    printf("%d\n", sum(25));
    printf("%d\n", sum(15));
    printf("%d\n", sum(5));

}
