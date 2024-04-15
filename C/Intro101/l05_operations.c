#include<stdio.h>

int main(void){
	
	int i = 2;
	int j = 3;
	double k = 2;
	double l = 3;
	float m = 2.0f;
	float n = 3.0f;

	int sum = i+j;
	printf("%d\n", sum);

	double division = k/l;

	printf("%f\n", division);
	
	// What happens when I divide an int with a double?
	
	double div = i/l;
	printf("%f\n", div);
	// No issues
	
	// Let's now try to divide a double with an int:
	double div2 = k/j;
	printf("%f\n", div2);
	// Also no issues here. If at least one of the items is a float/double, we'll get a decimal result
	
	//Let's add doubles to ints and floats to ints.
	
	double sum2 = i + k;
	printf("%f\n", sum2);

	float sum3 = i + m;
	printf("%f\n", sum3);

	// No issues. As long as one is a float/double and the final result is a double/float, all is well.
	


	return 0;

}
