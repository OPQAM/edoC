#include <stdio.h>

int main(void)
{
	int i = 0;

	i += 1; //Add one to i
	i -= 1; //Subtract one from i
	
	i++;    //Add one to i (post-increment)
	i--;	//Subtract one from i (post-decrement)

	++i;    //Add one to i (pre-increment)
	--i;    //Subtract one from i (pre-decrement)
	
	int incremented = 0;
	i = 1;

	printf("i: %d; pre-incremention: %d -> will add 5\n", i, incremented);

	incremented = 5 + i++; // the incremented expression takes the original i
	
	printf("\ni: %d; incremented(i++): %d -> i is now 2 but that wasn't computed\n", i, incremented);
	
	i = 1;

	incremented = 5 + ++i; // the incremented expression has i+1 added

	printf("\ni: %d; incremented(++i): %d -> i is 2 and that was added\n", i, incremented);
}
