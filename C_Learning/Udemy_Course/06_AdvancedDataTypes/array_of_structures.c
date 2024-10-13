#include <stdio.h>


struct point { int x, y, z; };


int main() {

    struct point pts[5] = { [2].y = 5, [2].x = 6, [0].x = 2 };

    int i;

    for (i = 0; i < 5; i++) {
        printf("%d %d %d %d\n", pts[i].x, pts[i].y, pts[i].z); 

        /*NOTE: just for fun I added an extra %d there to showcase how C handles this stuff. be careful...*/

        
    }
    return 1;
}