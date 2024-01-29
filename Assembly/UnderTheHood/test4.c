#include <cs50.h>
#include <stdio.h>

// Just showing to a friend

int main(void) {
	string name = "Rico";
	string passwd = "p@ssw0rd";

	for (int i = 0; i < 8; i++) {
		printf("%c", name[i+5]);
	}
	printf("\n");

	return 0;


}
