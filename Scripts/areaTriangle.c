#include <stdio.h>

int main()
{
	float base, height, area;
	
	printf("\nEnter the base of the triangle: ");
	scanf("%f", &base);                          
	
	printf("Enter the height of the triangle: ");
	scanf("%f", &height);
	
	area = (base * height) / 2;
	printf("Area of the triangle: %.2f square units.\n\n", area);
}
