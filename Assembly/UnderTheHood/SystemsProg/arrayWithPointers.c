#include <stdio.h>
#include <stdint.h>

int64_t sum(int64_t *xs, size_t length);

int main()
{
	int64_t nums[] = { 1, 2, 3, 4 };
	size_t nums_length = sizeof(nums) / sizeof(int64_t);

	int64_t total = sum(nums, nums_length);
	printf("%ld\n", total);
}

int64_t sum(int64_t *xs, size_t length)
{
	int64_t result = 0;
	while (length-- > 0) {
		result += *xs;
		xs++;
	}
	return result;
}
