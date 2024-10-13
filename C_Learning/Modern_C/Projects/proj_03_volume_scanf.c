#include <stdio.h>

#define PI 3.14159f

int main(void) {

    printf("We're calculating the volume of any sphere of radius 'r'.\n");
    printf("Please enter the radius: ");
    /*Note that below I cannot write float radius = scanf(..)
    This is because scanf will read the value, store it in radius, through
    the pointer, but since there is the equal sign, there, it will place '1'
    , which basically means that it read the input correctly, onto the variable that was created.
    Thus we need to first create the radius variable. And then get the input which is then attributed through the pointer.*/
    float radius;
    scanf("%f", &radius);

    float volume_of_sphere = (4.0f/3.0f) * PI * radius * radius * radius;

    printf("Value of sphere: %.2f\n", volume_of_sphere);

    return 0;   
    
}