#include <stdio.h>

/*TPC*/

// Global double variable only accessible within this file
static double y = 44.5;

// Global float variable accessible throughout the entire program
float globalFloat = 3.14f;

// Function only accessible within this file
static void myclosedFunct() {
    printf("This function only exists within this file\n");
}


void exampleFunct() {
    // Local variable with temporary storage (automatically de-allocated when the function exits)
    int x = 42;

    // Local float variable with permanent storage
    static float localPermanentFloat = 9.0f;
    // Register int variable
    register int registerInt = 2;

    // Clearing x before it gets out of scope
    x = 0;

    printf("Static local float variable(BEFORE): %f\n", localPermanentFloat);
    // Modify static local float variable to show it retains value
    localPermanentFloat += 1.0f;
    printf("Static local float variable(AFTER): %f\n", localPermanentFloat);

}


int main(void) {

    exampleFunction();

    // Accessing global float variable
    printf("Global float variable: %f\n", globalFloat);

    // Call static function
    myClosedFunction();

    return 0;

}