

A stack follows the LIFO principle.
This means that the last element addede to the stack will be the first one to be removed.

In this example, a stack is implemented using structs to define the stack and its elementss (nodes).


### Definitions and Headers

#### node.h

**node.h** defines a *node* struct, which represents such an element.

- *value* stores the data of the node

- *next* is a pointer to the next nodein the stack

#### stack.h

**stack.h** defines the *stack* struct, along with declarations for the stack operations.

- *top* points to the top node of the stack

- *size* keeps track of the number of elements in the stack

### Implementations

#### stack.c

**stack.c** contains the implementations of the stack functions

- the *init* function initializes a stack with the *top* set to 'NULL' and *size* set to '0', indicating an empty stack

- the *push* function adds a new element to the stack

- *newNode* is allocated memory to store the new element

- if the stack is empty (*size* is 0), the new node is set as the top node, and *next* is set to *NULL*

- if the stack is not empty, the new node points to the current top node, and then it becomes the new top node

- the sie of the stack is incremented by 1 in both cases

### Main Program

#### main.c

**main.c** femonstrated the usage of the stack functiomns

- the stack 's' is initialized during the *init* function

- two values (1 and 2) are pushed onto the stack

- the top value of the stack (2) is printed

-------------------

The stack is a collection of elements with two main operations: **push** and **pop** which, respectively, add an element and remove the top element.

In this implementation, a linked list is used to represent the stack. Each element, or node, points to the next element in the stack.

The *top* pointer in the stack struct always points to the most recentlyy added node.

The *size* keeps track of how many elements are in the stack

Note as well that in a linked list each node points to the next node, allowing the stack to grow dynamically.

-------------------
