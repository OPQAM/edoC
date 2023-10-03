#include <stdio.h>

// Creating our own functions


int add3(int a, int b, int c)
{
	int result = a + b + c;
	return result;	
}


int main() {
	printf("We are going to return the function we created:\n");
	printf("add3 = %i\n", add3(3,5,20));



}
