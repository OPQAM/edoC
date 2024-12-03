#include <stdio.h>


// Passing by value: means that a copy of the argument's value is created and sent to the function. so, modifications made within the function only affect the copy, not the original variable



void increment(int a) // Always put void for functions that takes no parameters (ex: void my_funct() {...)
{
	    a++;
}

int main(void)
{
	    int i = 10;

	    increment(i);

	    printf("i == %d\n", i);
}

// for function prototypes that take no parameters, it's a good idea to do 'void foo(void)'; In older C code, just using 'void foo()' could result in the compiler accepting that the void function foo could take any number of arguments. This has been revised and changed. But it's best practice to keep it and make sure that there is consistend behavior acreoss compilers.
