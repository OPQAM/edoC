#include <stdio.h>

int main() {

	// Recalling how to convert a data type into another with cast:
	
	float myFloat = 2.7;
	printf("Float Value: %f\n", myFloat);
	
	int myInt = (int) myFloat;
	printf("Integer Value: %d\n", myInt);

	// As we can see, the converted int value was floored
}
