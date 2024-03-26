#include <stdio.h>
#include <stdint.h>
 

int main()
{
	// A variable in uint16 will occupy 2 bytes and uin32 will occupy 4 bytes
	// Variables whose types are larger than 1 byte will occupy multiple addresses in memory.
	
	uint16_t a = 1;
	uint16_t b = 2;
	uint32_t c = 1;
	uint32_t d = 2;

	// So uint16 will occupy 2 positions and uint32 will occupy 4

	printf("\nNotice how the different addresses are presented. a = 1, b = 2 (uint_16), c = 1, d = 2 (uint_32)\n");
	printf("&a: %p\n", &a);
	printf("&b: %p\n", &b);
	printf("&c: %p\n", &c);
	printf("&d: %p\n", &d);
}
