#include <stdio.h>




int main(int argc, char **argv) 
{
    // generic pointer:
    void *ptr;

    int my_list[2] = { 1, 2 };

    // set the generic pointer to the address of my_list
    ptr = my_list;

    // We are casting the generic pointer to a list item
    printf("item pointed to by ptr is %d\n", *(int *)ptr);

    // The cast tells the compiler what the address type is
    // Let's now increment the generic pointer
    printf("item pointed to by ptr is now %d\n", *(int *)(ptr + 1));

    return 0;
}
