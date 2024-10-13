#include <stdio.h> 


int main(void) {

    char a;
    short b;
    int c;
    long d;
    long long e;
    unsigned char f;
    unsigned short g;
    unsigned int h;
    unsigned long i;
    unsigned long long j;
    float k;
    double l;
    long double m;
    void* n;

    // Checking the sizes of these types
    
    printf("char: %zu bytes\n", sizeof(a));
    printf("short: %zu bytes\n", sizeof(b));
    printf("int: %zu bytes\n", sizeof(c));
    printf("long: %zu bytes\n", sizeof(d));
    printf("long long: %zu bytes\n", sizeof(e));
    printf("unsigned char: %zu bytes\n", sizeof(f));
    printf("unsigned short: %zu bytes\n", sizeof(g));
    printf("unsigned int: %zu bytes\n", sizeof(h));
    printf("unsigned long: %zu bytes\n", sizeof(i));
    printf("unsigned long long: %zu bytes\n", sizeof(j));
    printf("float: %zu bytes\n", sizeof(k));
    printf("double: %zu bytes\n", sizeof(l));
    printf("long double: %zu bytes\n", sizeof(m));
    printf("void*: %zu bytes\n", sizeof(n));

    return 0;
}
