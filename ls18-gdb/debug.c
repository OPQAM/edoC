#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t max(uint32_t, uint32_t);

int main() {
    uint32_t i, h;
    i = 0;
    h = 100;
    if (max(i, h) != h) {
        printf("Only in 2020.\n");
    }

    i = 10;
    h = 0;
    if (max(i, h) != i) {
        printf("What even is life?\n");
    }
    return EXIT_SUCCESS;
}

uint32_t max(uint32_t a, uint32_t b)
{
    uint32_t result;
    if (a > result) {
        result = a;
    }
    if (b > result) {
        result = b;
    }
    return result;
}

