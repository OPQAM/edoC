#include <stdio.h>
#include <malloc.h>


int main(void) {

    int n;
    int array[10];
    int * restrict restar = (int *) malloc(10*sizeof(int)); /*Restrict*/
    int *par = array; /*Not restrict*/



    for (n = 0; n < 10; n++) {
        par[n] += 5;
        restar[n] += 5;
        array[n] *= 2;
        par[n] += 3;
        restar[n] += 3;

    /* These are subtle effects at the optimization level.*/    

}
