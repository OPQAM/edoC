#include<stdio.h>

int main(void){

	int a[10];
	int *p;	

	p = &a[0];
	*(p+1) = 5;                       // (1)

	/*
	for (int i = 0; i < 10; i++) {
	printf("%d\n",a[i]);
	}

	*/

	printf("%d\n",a[0]);

	return 0;
}

// NOTES:
//
// (1) This will move my pointer one position.
// This is similat of how assembly programs work.
//
//
