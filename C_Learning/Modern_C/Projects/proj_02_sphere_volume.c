#include <stdio.h>

#define RADIUS 10.0f
#define PI 3.14159f

int main(void) {

    float volume_of_sphere = (4.0f/3.0f) * PI * RADIUS * RADIUS * RADIUS;

    printf("Value of sphere: %.2f\n", volume_of_sphere);

    return 0;   
    
}