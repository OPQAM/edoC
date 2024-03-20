#include <stdio.h>
#include <math.h>

//Presenting the much-better, the much-improved, the much-mucho, new wonderfully accurate addition machine, with a 99.99% precision, or just about


int main() {
	double fractional, integral;
	double value = 0.0;
	double calculation = 0;
	int intCalc = (int)calculation;

	while (1) {
		printf("\nType Integer ('0' to do summation): ");
		if (scanf("%lf", &value) != 1) {
			printf("\nInvalid input: not an Integer!\n");
			value = 0.0;
		}
		else {
			if (value == 0) {
				printf("\nFinal Value: %lf\n", intCalc);
				return 0;
			}
			else
			{
				fractional = modf(value, &integral);
				if (fractional == 0) {
				calculation += integral;
				}
				else
				{
					printf("\nInvalid input: not an Integer!\n");
					value = 0.0;
				}	

			}
		}
	}
}
