#include <stdio.h>
#include <stdlib.h>

int main() {
	int nums[3][2] = {                  // a two-dimensional array, 3 by 2
					{1, 2},
					{3, 4},
					{5, 6}
					};
	
	printf("%d", nums[0][1]);

	return 0;
}
