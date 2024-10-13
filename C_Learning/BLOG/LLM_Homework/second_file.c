#include <stdio.h>

#define PI_VALUE 3.14159

int main(void) {

    float x = 3.223f;
    float radius;
    char answer;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = PI_VALUE * radius * radius;
    float circumference = 2 * PI_VALUE * radius;

    printf("Your circle has an area of %.2f and a circumference of %.2f\n", area, circumference);
    printf("Would you like to name your circle (y/n)? ");
    scanf(" %c", &answer);

    if (answer != 'y') {
        printf("Ok, bye!\n");
    }
    else {
        char name[20];
        printf("Enter name: ");
        scanf(" %s", name);
        printf("Ok! %s (your circle) has an area of %.2f and a circumference of %.2f\n", name, area, circumference);
    }

    printf("Done!\n");
    

}
