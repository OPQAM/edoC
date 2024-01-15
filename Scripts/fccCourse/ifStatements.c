#include <stdio.h>
#include <stdlib.h>

//a max function
int max(int num1, int num2, int num3)
{
	int result;

	if(num1 >= num2 && num1 >= num3)
	{
		result = num1;

	}
	else if(num2 >= num1 && num2 >= num3)
	{	
		result = num2;
	}
	else
	{
		result = num3;
	}

	return result;
}

//calling the max funct
int main()
{

	printf("Max value: %d\n", max(3,100, 22));
		
	return 0;
}

// Note: as with C++ and other languages, we can use
// ||, <=, !=, ...
