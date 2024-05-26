#include <stdio.h>

int x = 1;

if (x) {
	printf("x is true.\n");
}

/*
 * We could, of course, use <stdbool.h>
 * and do:
 *
 * int main(void) {
 *	bool x = true;
 *
 *	if (x) {
 *		printf("x is true!\n");
 *		}
 * }
 */
