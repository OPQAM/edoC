#include <stdio.h>
#include <math.h>

//Presenting the much-better, the much-improved, the much-mucho, new wonderfully accurate addition machine, with a 99.99% precision, or just about


int main() {
	double fractional, integral;
	double value = 0.0;
	double calculation = 0.0;
	int intCalc;

	while (1) {
		printf("\nType Integer ('0' to do summation): ");
		if (scanf("%lf", &value) != 1) {                                 // (1)
			printf("\nInvalid input: not an Integer!\n");
			value = 0.0;                                             // (2)
			int c;
			while ((c = getchar()) != '\n' && c != EOF);             // (3)
		}
		else {
			if (value == 0) {
				if (calculation == 0.0) {                        // (4)
					printf("\nFinal Value: 0\n");
				}
				else {
				printf("\nFinal Value: %lf\n", intCalc);
				return 0;
				}
			}
			else
			{
				fractional = modf(value, &integral);             // (5)
				if (fractional == 0) {
				calculation += integral;
				intCalc = (int)calculation;                      // (6)
				}
				else
				{
					printf("\nInvalid input: not an Integer!\n");
					value = 0.0;
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
				}	

			}
		}
	}
}

//NOTES: (0) The main idea here is to be able to take in a number like 7.0 and still accept it as an integer, thus making the program a little less stupid. Another addition is to have the program not crash on a bad input. Instead, the user is asked again to input an adequate value
//
// (1)  
//
// (2) 
//
// (3) 
//
// (4) 
//
// (5) 
//
// (6) 
