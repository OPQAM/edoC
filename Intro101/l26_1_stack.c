#include "stack.h"

struct stack init(){                     // (1)
	struct stack ret = {NULL,0};     // (2)
	return ret;                      // (3)
}

void push(struct stack *s, int val){     // (4)
	struct node *newNode = mallic(sizeof(struct node)); 

	if (s->size == 0){
		newNode->value = val;
		newNode->next = NULL;

		s->top = newNode;
		s->size++;
	}else{
		newNode->value = val;
		newNode->next = s->top;
		s->top = newNode;

		s->size++;
	
	}
}




// NOTES:
//
// (0) - 'main.c' is our testing grounds
//
// (1) - The init function will initialize the stack and return it back to the caller
//
// (2) - NULL because there's nothing at the start, and size = 0 because there's nothing in there
//
// (3) - return the value to whoever called the function
//
// (4) - there will be a stack 's' and a value will be added onto the stack (adding to the top and becoming the new top value)
//
// malloc - set up memory that is going to be used to create a node.. now we need to determine what value and what next pointer this node should have, based on the idea if there is something on the stack or not.
