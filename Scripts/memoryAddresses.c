#include <stdio.h>
#include <stdlib.h>


int main(){

	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

// These created variables will be saved inside the physical memory

// We use the variable 'age' in order to change the value.
// But C uses the memory location, its address.
	printf("|Variable | Value | Memory address |\n ");
	printf("   age      %d      %p\n", age, &age);
	printf("    gpa   %f   %p\n", gpa, &gpa);

	return 0;
}
