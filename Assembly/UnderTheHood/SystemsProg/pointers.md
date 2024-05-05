**Pointers**

Pointers are used to store and manage the addresses of dynamically allocated blocks of memory.

These blocks of memory are used to store data objects or arrays of objects.


**The Heap**

Most structured and object-oriented languages provide an area of memory, called the heap, or free store, from which objects are dynamically allocated.

--snip--

A pointer references a location in memory. Obtaining the value stored at that location = dereferencing the pointer.

-> Using pointers significatly improves performance for repetitive operations (ie. traversing iterable data structures)

pointer0.c showcases pointers and dereferencing -> Please see the file notes.

-> Since pointers facilitate dynamic memory allocation, they enable programs to allocate memory as needed during runtime.

-> Pointers enable sharing data structures between function calls without having to copy the structure.

But they have many other use cases:

They are efficient when iterating through arrays;
They sort strings and objects without having to move their values in memory;
They dinamically dispatch functions;
...

--snip--

**Pointer Declaration**

char *a_char_ptr = &my_char;
 |   |     |          |
3rd  2nd  1st        4th

"My variable (a_char_ptr) is a pointer (*) to a character (char), and this is it (my_char)."

-> Remember that a pointer is pointing towards the memory location of the variable.

-> **In C, we can change the value of a local variable by manipulating a pointer to that local variable's memory address(!)**

Take a look at pointer01.c to see a function (add1) actually changing a variable that is local to main().

**Remember:**

Local variables are on our call stack.
After a frame is returned, we have no guarantee that its memory will still be there.
So, we should treat any memory that was local to a function call, and in that frame, as invalid as soon as that function returns.
Otherwise, accessing this access might result in accessing invalid memory.

**snip**


