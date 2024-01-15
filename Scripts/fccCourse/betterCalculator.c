#include <stdio.h>
#include <stdlib.h>

// This is my own version - pre-video

int main()
{
	double num1;
	double num2;
	char operator;
	double result;

	printf("Welcome to our Calculator v.2\n");
	printf("Enter a number, an operator (+, -, *, :), and another number:\n");


	scanf("%lf", &num1);              // attention at the %lf and &num1
	scanf(" %c", &operator);          // attention at the empty space
	scanf("%lf", &num2);
	
	if(operator == '+')
	{
	result = num1 + num2;
	}else if(operator == '-')
	{
	result = num1 - num2;
	}else if(operator == '*')
	{
	result = num1 * num2;
	}else if(operator == ':')
	{
		if(num2 == 0)
		{
			printf("\nDividing by zero.\n");
			return 0;
		}else
		{
			result = num1 / num2;
		}
	}else
	{
		printf("Error.\n");
		return 0;
	}
	
	printf("%f %c %f = %f", num1, operator, num2, result);

	
	return 0;
}
