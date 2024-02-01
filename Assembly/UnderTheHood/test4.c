#include <cs50.h>
#include <stdio.h>

// Assim corre normalmente... estou a pedir 4 caracteres (rico)


int main(void) {
	string name = "Rico";
	string passwd = "p@ssw0rd";

	for (int i = 0; i < 4; i++) {
		printf("%c", name[i]);
	}
	printf("\n");

	return 0;


}
