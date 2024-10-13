#include <stdio.h>
#include <stdlib.h>

double add(double a, double b) {

	return a + b;
}

double subtract(double a, double b) {

	return a - b;
}

double multiply(double a, double b) {

	return a * b;
}

double divide(double a, double b) {
	if (b == 0) {
		printf("Error: Division by zero!\n");
		exit(EXIT_FAILURE);
	}
	return a / b;
}

// Clearing the input buffer


int main() {

	printf("The Calculator\n\n");

	double first_val, second_val;
	char operator;
	int result;

	while (1) {
		printf("Enter first number: ");
		result = scanf("%lf", &first_val);
		if (result != 1) {
			printf("Invalid input! Please enter a valid number.\n");
			clear_input_buffer();
			continue;
		}

		
		printf("Enter operator: ");
		scanf(" %c", &operator);

		printf("Enter second number: ");
		scanf("%lf", &second_val);

		switch (operator) {
		case '+':
			printf("%.2lf + %.2lf = %.2lf\n", first_val, second_val, add(first_val, second_val));
			break;
		case '-':
			printf("%.2lf - %.2lf = %.2lf\n", first_val, second_val, subtract(first_val, second_val));
			break;
		case '*':
			printf("%.2lf * %.2lf = %.2lf\n", first_val, second_val, multiply(first_val, second_val));
			break;
		case '/':
			printf("%.2lf / %.2lf = %.2lf\n", first_val, second_val, divide(first_val, second_val));
			break;
		default:
			printf("\nInvalid operator!\n");
			break;

		}

	}
	return 0;
}
