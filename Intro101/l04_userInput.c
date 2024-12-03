#include<stdio.h>

int main(void){
	int i = 0;
	int j = 0;

	printf("Current value of i, and j: %d,%d\n", i, j);
	printf("Change the value of i and j: ");
	scanf("%d%d", &i, &j);
	// We can't just do scanf("%d", i). We need to tell the program to
	// go to the memory location of i, with &i and replace with the
	// user input
	
	printf("New value of i, and j: %d,%d\n", i, j);
	// We can enter a value and then a second value, separating them, 
	// during input, with a space or with enter. As long as a newline
	// character is introduced, there won't be a problem.	
	// So, remember that we're using scanf here, and not a simple print.
	// This means that we can choose what character we want to use, to separate those two different values (instead of the newline character).
	
	printf("\nLet's input the values again, but starting with j. Use '-' as a separator between values, please. Otherwise your input won't be accepted.\n");
	scanf("%d-%d", &j, &i);
	printf("Final i and j: *(%d)*(%d)*\n", i, j);

}
