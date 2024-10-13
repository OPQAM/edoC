#include <stdio.h>

// Remember the example about a structure with f1-f3, type and index? This is it in a bit field
struct packed_struct {
	unsigned int :3;       // padding of 3
	unsigned int f1:1;
	unsigned int f2:1;
	unsigned int f3:1;
	unsigned int type:8;
	unsigned int index:18;



int main(void) {
	struct packed_struct packed_data;

	unsigned int bit = packed_data.type = 7;
	
	unsigned int i = packed_data.index / 5 + 1;

	// if (packed_data.f1) { ....} <- we can do this, ofc (if True, or if 1...)
	

}
