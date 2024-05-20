###Arrays Overview

**In C, arrays:**

- Are a notation to allocate a contiguous span of memory whose size is # elements * byte width of type of each element.

For example, char[10] is 10 bytes and int16\_t[10] is 20 bytes. Remember that int16\_t is actually 16 bits, which is 2 bytes, of course.

The sizeof(array) operator returns array's total size in byte.

- Are just a name for the address of the array's first element

- cannot really be used as function parameters

**Unlike Java, Python and JavaScript...**

- Local C arrays allocate space in a function's stack frame

- We're always referencing the address of a specific element. In those other languages we have a reference to the _object_ not a specific element within it.

- We cannot reassign an array name after initialization

**Arrays and Pointers are closely related but not the same**

-> An array's name is an identifier that evaluates to the address fo its first element.
- It is _not_ a variable. It cannot be reassigned.
- It's like a special, restricted case of a pointer.

-> A pointer is a variable that holds the address of another value.
- Since it is a true variable, a pointer can be reassigned.

(see pointerArray.c))

####Address Arithmetic and Dereferencing

**Equivalent expressions for computing the address of arry element i:**

	a + i
	&a[i]

**Equivalent expressions for reading the value of array element i:**

	*(a + i)
	a[i]

-> Address arithmetic/dereferencing trasparently reveals memory organization
-> Indexing gives affordance of array abstraction focused on element values

(see arithmeticDereferencing.c))

- As shown, we can use either method to access the individual values stored in the array

**sizeof(OPERATOR)**

- Returns the number of bytes of its operand
-> Note that that sizeof isn't a function, it's an _operator_, just like the '+' symbol or the '&&'.
-> This allows to do things that a function couldn't, like getting type name as a valid operand (ex: sizeof(int))

- Note that size\_t's width in memory is machine dependent, just like pointers (same width)

(see sizeOfTests.c)

-> Common technique to compute the 'length' of an array of type T:

T an \_array[] = { ... };                                // Uncommiting the actual size of the array
size\_t length = sizeof(an\_array) / sizeof(T);           // Size of array divided by the size of a specific element in the array

####Array Iteration with Pointers

- It's common to use a pointer into an array as a cursor to iterate through elements

- With strings there's a sentinel value (ending mark) in the null termination character '\0'

- Otherwise we need to know how many times to iterate
(see arrayWithPointers.c)








