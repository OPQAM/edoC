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