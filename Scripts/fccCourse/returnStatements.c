#include <stdio.h>
#include <stdlib.h>

// NOTE: if a function wil 
// return a value, we need to put it above the function that will call that function. We can use prototyping, though, placing double cube(double num) above and everything else related (double result) below.

double cube(double num)
{
	double result = num * num * num;

	return result; // will break us out of the function and return the value of result back to the caler

}


int main() 
{
	printf("Answer: %f", cube(5.0));



	return 0;
}
