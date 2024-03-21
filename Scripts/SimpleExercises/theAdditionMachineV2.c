#include <stdio.h>
#include <math.h>

//Presenting the much-better, the much-improved, the much-mucho, new wonderfully accurate addition machine, with a 99.99% precision, or just about


int main() {
	double value = 0.0;
	double calculation = 0.0;
	int intCalc;

	while (1) {
		printf("\nType Integer ('0' to do summation): ");
		if (scanf("%lf", &value) != 1) {                                 
			printf("\nInvalid input: not an Integer!\n");                 // (1)
			value = 0.0;                                             
			int c;
			while ((c = getchar()) != '\n' && c != EOF);             
		} else {
			if (value == 0) {
				if (calculation == 0.0) {                        
					printf("\nFinal Value: 0\n");
				} else {
					// %.0lf to trim down to 0 decimal places
					printf("\nFinal Value: %.0lf\n", calculation); 
				}
				return 0;
			} else {
				double fractional, integral;            
				fractional = modf(value, &integral);                    // (2)
				if (fractional == 0.0) {                                // (3)
					calculation += integral;                      
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
// (0) The old notes are in previous versions. See that if you want to see the notes.
//     Version control has its uses. Use it
//
//     I solved the issue with the returning 0.00000, AKA:
//     not being able to do addition on my addition machine. 
//     So, the work is complete. The V2 machine works
//
// (1) These following steps occur when there is an invalid input. The value of 'value' is reset back to 0.0 and the next two lines clear the input buffer, to make sure that nothing is left there that could cause any issue with future input
//
// (2) The modf function is taking the value attributed to 'value' and it is separating the value into two parts, the integral part, stored in integral, and the fractional part, stored in fractional, of course
//
// (3) If the fractional part is equal to zero, then we have on our hands an actual integer, and we can proceed with the calculation
//
