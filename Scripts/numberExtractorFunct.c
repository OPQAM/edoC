#include <stdio.h>

// Simple function to extract the last elements of a number

int testDrive(int n) {
	int temp = n;
	int lastDigit;

	while(temp) {
		lastDigit = temp % 10;
		printf("%d\n", lastDigit);
		temp = temp / 10; // This is erasing the numbers that have been added, so that we can repeat the process to the last number.
	}

}

int main() {
	int num;
	printf("Hi. We'll be uplifting your number today!\n");
	printf("Please tell us your number: ");
	scanf("%d", &num);
	testDrive(num);
}
