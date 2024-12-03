#include<stdio.h>

// Think of structs very much loke objects

struct student {
	//properties of the object student
	char* name;
	int age;
};              // notice the ; here, please


int main(void){
	struct student s;
	s.name = "Ricardo";
	s.age = 45;

	struct student s2 = {"Jane",20};
	s2.name = "Mary Jane";

	printf("%s %d\n", s.name, s.age);
	printf("%s %d\n", s2.name, s2.age);
	
	return 0;
}
