#include <stdio.h>
#include <stdlib.h>
#include <string.h>                       // we need string.h to use strcpy


struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;

};

int main() {
	
	struct Student student1;              // we created a container, named 'student1' with a name, major, age and gpa
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "Jim");        // we have to use the 'string copy function' to work with a string
	strcpy( student1.major, "Business");

	struct Student student2;              // we created a container, named 'student1' with a name, major, age and gpa
	student1.age = 44;
	student1.gpa = 3.5;
	strcpy( student2.name, "Pam");        // we have to use the 'string copy function' to work with a string
	strcpy( student2.major, "Art");
	

	printf("%f", student1.gpa);
	printf("\n");
	printf("%s", student2.name);
	return 0;
}
