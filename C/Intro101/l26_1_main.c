#include "stack.h"
#include <stdio.h>

int main(void){
	struct stack s = init();
	push(&s,1);
	push(&s,2);

	printf("%d\n", s.top->value);
	return 0;
}
