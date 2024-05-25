### Pointers

Let's say we have a variable 'k' which accepts integers.

In C, such a variable is called an *object*.

There are two values associated with this object:

- an **lvalue**, or left value;

- an **rvalue**, or right value;

The **rvalue** is the value of the integer stored in 'k', like '2', for example.
The **lvalue** is the value of the memory location.

In fact, and to be more precise, *"An __object__ is a named region of storage; an lvalue is an expression referring to an object."*

Of course, as discussed before, the actual size of these objects depends of the inherent computer's architecture.

A variable that will hold an _lvalue_ (a memory address) is a pointer.

In C we declare such pointers with an asterisk, thusly:

int \*ptr;

_ptr_ is the name of our variable.

Remember that we can read the above variable declaration as "a variable named 'ptr' that is a pointer and is cpointing to an integer."

In this case, 'ptr' has no value. ANSI compliant compilers will initialize the variable to zero, but otherwise we might need to declare it (ie. int \*ptr = NULL;).

If we want to store in 'ptr' what ever value we have assigned to 'k', we'll have to:

ptr = \&k;

'&' will retrieve the lvalue of 'k' and copies that to the contents of ou pointer 'ptr'.

#### The dereferencing operator (\*)

\*ptr = 5;

This will copy 7 to the address pointed to by 'ptr'. This means that if k had a value of, say '8',
it will now have the value of '7'.
