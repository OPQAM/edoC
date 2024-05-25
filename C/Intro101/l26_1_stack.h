#include "node.h"
#include <stdef.h>
#include <stdio.h>
#include <stdlib.h>

struct stack{
	struct node *top;                    // (1)
	int size;

};

struct stack init();                         // (2)
void push(struct stack *, int);              // (3)



// NOTES:
//
// (1) - The 'top' doesn't actually have to be a pointer, but this will make our life easier
//
// (2) - Function taht will initialize our stack
//
// (3) - Function that will add values to the stack
//
// (4) - 
