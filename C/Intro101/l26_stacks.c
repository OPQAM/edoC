#include<stdio.h>




// NOTES BELOW:
//
// The stack uses the concept of LIFO ('last in, first out')
//
// ACTIONS: Enter 2; Enter 3
// 
// STACK:
//    ---
//    |3|      -> This one sits at the top and will be removed first
//    ---
//     ^
//     |
//    ---
//    |2|      -> This becomes the new top, once 3 is removed
//    --- 
//

// We'll be using 3 files, generally:
//
// - node.h      -> which has a value and pointer to another node
// - stack.h     -> header file 
// - stack.c     -> C file for the stack - the implementation
//
// The header file will define the stack and all the functions that our stack will have
//
