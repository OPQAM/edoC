#include <stdio.h>
#include <stdlib.h>


int main(){

	int luckyNumbers[] = {1, 2, 3, 5, 6, 77, 8, 999};

	int i;

		for(i = 0; i < 8; i++){
			printf("Index: %d, Array Number: %d\n", i, luckyNumbers[i+1]);
		}
	return 0;
}

// NOTE: there's an error I made on purpose. Note that the index call is going up to 8,
// but there aren't 8 elements in our luckyNumbers array. In some other languages, our code might break (ex: C#), while in others, just like with C, the code will not break. Instead it will have undefined behavior.
//
// In this case, the printed list will inclde, at the end, the number 4096, 
// which happens to be in memory at that location. It's similar to a Buffer Overflow.
