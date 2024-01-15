#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Int Arrays
	int luckyNumbers[] = {4, 5, 8, 15, 11, 23};
	int someNumbers[10];  // an array with a capacity for 10 elements
	luckyNumbers[3] = 200;		
	someNumbers[1] = 60;
	
	printf("%d", luckyNumbers[3]);
	printf("\n");
	printf("%d", someNumbers[1]);
	return 0;
}
