#include <stdio.h>
#include <math.h>

//Presenting the much-better, the much-improved, the much-mucho, new wonderfully accurate addition machine, with a 99.99% precision, or just about


int main() {
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
		} else {
			if (value == 0) {
				if (calculation == 0.0) {                        // (4)
					printf("\nFinal Value: 0\n");
				} else {
					// %.0lf to trim down to 0 decimal places
					printf("\nFinal Value: %.0lf\n", calculation); 
				}
				return 0;
			} else {
				double fractional, integral;             // (5)
				fractional = modf(value, &integral);
				if (fractional == 0.0) {
					calculation += integral;                      // (6)
				} else {
					printf("\nInvalid input: not an Integer!\n");
				}	
			}
		}
	}
	return 0;
}

//NEW NOTES:
//
//The old notes are in previous versions. See that if you want to see the notes.
//Version control has its uses. Use it
//
//I solved the issue with the returning 0.00000, AKA: not being able to do addition on my addition machine. So, the work is complete. The V2 machine works
