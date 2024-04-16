#include<stdio.h>


int main(void){
	
	int i = 0;

	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);

//The main difference between a do while loop and a while loop is that with the former the condition is only checked AFTER the fact. As we can see above, the message is being printed and then the condition is checked.

	// So, if i = 11, that value will still be printed once, despite not being within the formal range of the loop.

	return 0;
	

}
