#include <stdio.h>

		/*STRUCTS*/

struct person {
	char name[50];
	int age;
	int height_in_inches;
};


int main() {
	
	// Creating more structs
	struct person me;
	struct person you;
	struct person friend;

	// Accessing specific member of the person's struct
	me.age = 39;
	you.height_in_inches = 5;

	printf("My Age: %i, your Height: %i inches.\n",me.age,you.height_in_inches);

	
}
