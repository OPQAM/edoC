#include<stdio.h>
#define N 5

int main(void){
	
	int a[N] = {1,2,3,4,5};


	// Let's try to check what is the size of the array.
	// We want to make sure that people can't just input or retrieve values ourside of our array ranges
	
	printf("%ld\n", sizeof(a)/sizeof(a[0])); // This gives us the length of the array

	// ld - long signed int

	return 0;
}

