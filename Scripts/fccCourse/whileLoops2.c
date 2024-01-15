#include <stdio.h>
#include <stdlib.h>

int main(){

	int index = 6;
	do {
		printf("%d\n", index);
		index++;
	}while(index <= 5);


	return 0;
}


// Note: we can use a do->while loop every time we don't want to check the
// 		 inner condition first.
