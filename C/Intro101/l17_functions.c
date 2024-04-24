#include <stdio.h>

// Remember that we should declare the function here before the main
// (explicit declaration)

int add(int, int);

int main(void){

	printf("%d\n", add(2,3));

	return 0;
}

int add(int a, int b){
	return a+b;
}
