#include <stdio.h>
#include <stdlib.h>

// a pointer is just a memory address


int main(){
	int age = 30;  // the integer variable is storing an integer value
				   // A pointer variable can also store a pointer
				   // It will store the memory address of another variable
				   // that is already in our program
	
	//pointer variable
	int * pAge = &age; // ""Pointer variable storing the memory address of the int var"
	

	double gpa = 3.4;
	double * pGpa = &gpa;

	char grade = 'A';
	char * aGrade = &grade;
	



	printf("age's memory address: %p\n", &age);


	return 0;
}
