#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	if (argc == 3) {                         // (1)
		double base = atof(argv[1]);     // (2)
		double height = atof(argv[2]);
		double area = base * height / 2;
		printf("\nYour triangle of base %.2lf and height %.2lf has an area of %.2lf.\n", base, height, area);
		return 0;
	}
	else
	{
		printf("\nusage: %s <base> <height>\n", argv[0]);
		return 1;                        // (3)
	}


}

// NOTES: (0) We're using math.h in order to round, stdlib.h in order to do conversions from char to double
//
//  (1) Meaning if there are 3 arguments the program runs. Else, we get an explanation of how to use the program. Note that the first element is the program itself
//
//  (2) Remember that argv is taking characters, hence the need to convert sai chars into numbers. A double in this case
//
//  (3) We're exiting with an error. The program didn't run as expected
