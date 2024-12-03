#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int* p = (int*) malloc(3*sizeof(int));
	p[1] = 3;
	p[2] = 90;
	printf("The values are %d, %d and %d.\n", p[0], p[1], p[2]);
	free(p);

	return 0;
}
