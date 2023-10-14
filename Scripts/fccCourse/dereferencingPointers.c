#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int age = 30;
	int * pAge = &age;

	//de-referencing the pointer
	printf("%d", *pAge); // this is no longer a pointer. This will be an integer(30)

	// this would give us the memory address: printf("%d", &*&pAge);



	return 0;
}
