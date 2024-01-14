#include <stdio.h>
#include <stdlib.h>

int main() 
{
	double num1;
	double num2;

	printf("Enter first number: ");
	scanf("%lf", &num1); // since adding a non-string, we need '&' (accessing the address of num1)

	printf("Enter second number: ");	
	scanf("%lf", &num2);

	printf("Answer: %f", num1 + num2);

	return 0;


	// in scanf, if we want to accept a double, we need %lf.
	// and to printf we need to use %f
}
