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

// We'll be using 3 files:
//
// -> node, which has a value and pointer to another node
// -> header file 
// -> C file for the stack - the implementation
