#include <stdio.h>

int add_one(int n)
{
	return n + 1;
}

int main(void)
{
	int i = 11, j;

	j = add_one(i);   // calling the function
	
	printf("i is %d and j is %d + 1, or %d\n", i, i, j);
}
