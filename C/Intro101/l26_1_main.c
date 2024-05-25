#include "stack.h"
#include <stdio.h>

int main(void){
	struct stack s = init();
	push(&s,1);
	push(&s,2);

	printf("%d\n", s.top->value);       // the top stack value (2)
	printf("%d\n", s.top->next->value); // the next value in the staack (1)
	return 0;
}
