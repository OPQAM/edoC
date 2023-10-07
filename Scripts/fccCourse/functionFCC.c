#include <stdio.h>
#include <stdlib.h>


int main()
{
	//Calling the function we created below
	sayHi("Mike", 33);
	sayHi("Paul", 42);
	sayHi("Abdul", 12);
	sayHi("John", 22);
	sayHi("Santina", 27);
	sayHi("Aaron", 76);

	return 0;
}


// creating  a new function
void sayHi(char name[], int age) 
{
	printf("Hello %s, you are %d.\n", name, age);
} 
