#include <stdin.h>


int main() {
	int calculation = 0;
	int value = 0;

	while (true) {
		printf("\nType Integer ('0' to do summation): ");
		scanf("%d", &value);

		if (scanf("%d", &value) != 1) {
			printf("\nNot an Integer. Game Over.\n");
			return 1;
		}
		else {
			if (value == 0) {
				printf("\nFinal Value: %d", calculation);
				return 0;
			}
			else
			{
				calculation += value;
			}
		}
	}
}
