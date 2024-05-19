#include <stdio.h>

int main() {
    int a;
    char b;
    float c;
    double d;
    int arr[10];

	printf("ZU");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of a (int variable): %zu bytes\n", sizeof(a));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of b (char variable): %zu bytes\n", sizeof(b));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of c (float variable): %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of d (double variable): %zu bytes\n", sizeof(d));
    printf("Size of arr (array of 10 int elements): %zu bytes\n", sizeof(arr));
    printf("Number of elements in arr: %zu\n", sizeof(arr) / sizeof(arr[0]));
    
	return 0;
}

// Note %zu is used for size_t values and %lu is used for unsigned long values.
//
//
