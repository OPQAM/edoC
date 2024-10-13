#include <stdio.h>

int fun() {
    static int count = 0; // static
    count++;
    return count;
}
int un_fun() {
    int counter = 0; // not-static
    counter++;
    return counter;
}

// By stating that it is static it will retain the status of its previous call.
// This means that since we're adding to 1 on each iteration, it will add up to 3.
// On the other hand, counter is being destroyed every time it's called, so it always displays the same value of 1
// On a more poignant  note, when the function exits, the stack frame for the function is remove, but the exact memory location used for counter isn't necessarily overwritten or cleared immediately.
// Static variables aren't allocated on the stack, they are allocated in a special area of memory reserved for static variables. This area persists for the lifetime of the program.

// As for static functions, they help with encapsulation - restricting the function to the file, reducing the chance of unintended interactions, it also helps with naming conflicts - assuring that the function is local to the file, and it may help with linker optimization (for some linkers)

// unlike normal variables, static variables are stored in the memory data segment, which is separated from the stack and heap.
// Course mistake: saying that static variables are allocated memory on the heap. They aren't. They're allocated memory on the data segment.

int main()
{
    printf("Static: %d\n", fun());
    printf("Static: %d\n", fun());
    printf("Static: %d\n", fun());

    printf("Not-Static: %d\n", un_fun());
    printf("Not-Static: %d\n", un_fun());
    printf("Not-Static: %d\n", un_fun());

    return 1;
}
