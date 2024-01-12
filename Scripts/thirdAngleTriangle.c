#include <stdio.h>

int main()
{
	// Program to find the third angle of a triangle
	float angle1, angle2, angle3;

	printf("\nWe're going to find the third angle of a triangle, given two initial angles.\nPlease insert the value of the first angle [0-180]: ");
	scanf("%f", &angle1);
	if (angle1 <= 0 || angle1 >= 180) {
		printf("\nThe angle can't be bigger than 180 or smaller than 0.\nBye, bye!\n\n");
		return 0;
	}
	printf("\nAlright, thanks.\nFirst angle is %.2f. Enter the second angle, please: ", angle1);
	scanf("%f", &angle2);
	if (angle2 <= 0 || angle2 >= 180 || angle1 + angle2 >= 180) {
		printf("\nThe sum of your angles makes for an impossible triangle.\nBye, bye!\n");
		return 0;
	}
	angle3 = 180 - angle1 - angle2;

	printf("\nThank you for your input.\nYour triangle has, for angles: %.2f, %.2f, %.2f.\n\n", angle1, angle2, angle3);
	return 0;
}

