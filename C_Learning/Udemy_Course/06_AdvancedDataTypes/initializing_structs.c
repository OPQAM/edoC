#include <stdio.h>


struct point { int x, y; };

int main() {

    // All these initialization methods work just fine
    struct point p1 = { .y = 2, .x = 3 };
    // or
    struct point p2 = { x: 2, y: 3 };
    // or
    struct point p3 = { 2, 3 }; // since fields aren't specified, they are in order

    // Let's see how we print these values

    printf("Point p1 (x val): %d\n", p1.x);
    printf("Point p1 (y val): %d\n", p1.y);

    printf("Point p2 (x,y): (%d,%d)\n", p2.x, p2.y);

    return 1;

}