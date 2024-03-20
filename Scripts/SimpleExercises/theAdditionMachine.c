#include <stdin.h>


int main() {
	int calculation = 0;
	int value = 0;

	while (true) {
		printf("\nType Integer ('0' to do summation): ");
		scanf("%d", &value);
		if (value == 0) {
			printf("\nFinal Value: %d", calculation)
		}
		else
		{
			calculation += value;
		}
	}




}
