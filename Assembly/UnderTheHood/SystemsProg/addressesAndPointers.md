The memory of each process is isolated from other processes


-> We get **segmentation faults** whenever we try to read or write to segments of memory we aren't allowed to read/write into (segmentation faults = program crash).

Through virtual memory, the OS gives the illusion that each process has a vast, contiguous memory.

-> A systems language, like C, gives us a more direct access to memory.

The Call Stack


main - Frame 0
Function Call - Frame 1
...
Function Call - Frame N

-> Variables local to function calls are typically found in the Stack or function call stack.

-> Each function call has a frame on the stack

This enables separation of storage between functions (critical for generalized recursion)

-> Frames contain not only variable values, but also argument values, return address, return value, aditional CPU state...

---

Remember that a memory address depends on the word size of a computer. If our laptop is 64-bits, then our word size is 64 bits. Basically, a very large unsigned int.

(check: addressValues.c and related files for examples and more notes)

We can print memory addresses with printf by using the %p format specifier. 'p' stands here for pointer -> a name for a memory address value.

Note that if a variable points to 0x7fffd545bd17 that, basically 140,736,771,505,430. A huge number, ofc.

As we know (again, check the .c files) variables can span multiple addresses in memory, if they are larger than 1-byte in memory.
