#include <stdio.h>

// function prototype
float calculate_area_rectangle(float length, float width);

int main(void)
{
	float x = 3.44;
	float y = 2.22;

	// function call
	float area = calculate_area_rectangle(x, y);

	printf("The area of a rectangle with length %.2f and width %.2f is: %.2f.\n", x, y, area);

	return 0;
}

// the function
float calculate_area_rectangle(float length, float width)
{
	return length * width;
}
