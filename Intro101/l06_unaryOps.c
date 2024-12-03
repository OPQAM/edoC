#include<stdio.h>


int main(void){
	
	int i = 7;
	float j = 2.3f;
	double k = 2.4;


	i = -i;
	j = -j;
	k = -k;

	i %= 2;   // modulus of 1
	j++;      // add 1
	k -= 1;   // subtract 1

	printf("Negative i: %d\n", i);
	printf("Negative j: %f\n", j);
	printf("Negative k: %f\n", k);
}

// Unary operations, remember, have precedence over other operations in C


