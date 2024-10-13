#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NOTE: I always find this syntax to be a bit 'gnarly' so I typedef the 'Pointer-to-Function-returning-Integer' like this
typedef int(*PFI)(int);

// our example functions

int identity(int a) {
	return a;
}

int square(int a) {
	return a*a;
}

int cube(int a) {
	return a*a*a;
}

int fourth(int a) {
	return a*a*a*a;
}

PFI power[] = { identity, square, cube, fourth };

int main() {
	char input[50];
	int value;
	int exponent;
	int result;

	printf("Enter a number to select a function ... \n");
    printf("[1] identity, [2] square, [3] cube, [4] fourth\n> ");
	exponent = atoi(gets(input));	
	// NOTE: the sizeof(PFI) is 4 and the sizeof the 'power' array here is 16 
	if (exponent <= 0 || exponent > sizeof(power)/sizeof(PFI)) {
		printf("ERROR: out of range!\n");
	} else {
        printf("Enter the value\n> ");
        value = atoi(gets(input));
		// here, I'm indexing into an array of function pointers, selecting the 'power'
		// that the user entered (that, is the 'exponent') and using that function to 
		// calculate the 'value' to the power of 'exponent'
		result = power[exponent - 1](value);
		printf("The result is %d\n", result);
	}
	return 0;
}