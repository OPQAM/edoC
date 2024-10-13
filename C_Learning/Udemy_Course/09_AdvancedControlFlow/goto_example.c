#include <stdio.h>



int main(void) {

    const int maxInput = 5;
    int i  = 0;
    double number, average, sum = 0.0;

    for (i = 1; i < maxInput; i++) {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);

        if (number <= 0.0) {
            goto jump;
        }

        sum += number;

    }

    jump:
        average = sum/(i-1);
        printf("sum = %.2f\n", sum);
        printf("average = %.2f\n", average);

    return 1;

}
/*
####GOTO STATEMENTS

- A goto statement causes a program to jump to the specified line.
- to identify where in the program a branch is to be made, a label is needed
- a label is a name formed by the same rules of variable names
- the label is placed directly before the statement to which the branch is to be made and must appear in the same function as the goto

-> goto has a bad rep since it can let us jump anywhere in the program and can make it really hard to mantain

Form:

goto label;



label:statement

-> Remember: we must jump inside the function

...Avoid using goto in general, and in particular as well (the exception might be escaping out of nested loops).
*/
