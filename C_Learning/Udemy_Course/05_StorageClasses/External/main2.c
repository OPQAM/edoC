#include <stdio.h>

int count;

extern void write_extern();

int main()
{
    count = 5;
    write_extern();
    return 1;
}

// int count is declared in main2.c, its allocated memory and its scope is not just limited to main2.c because it was explicitly made available in foo2.c by the usage of the extern keyword
// extern void write_extern() is a forward declaration of write_extern. This tells the compiler that 'write_extern' is defined elsewhere

// So count is defined in main2.c and referenced in foo2.c via extern
// And write_extern is declared in main.c and defined in foo2.c