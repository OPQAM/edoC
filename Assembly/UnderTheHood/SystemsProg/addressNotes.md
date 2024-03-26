These are notes from the video 'Introducing Pointers and the Address of Operator in C'

The scripts addressValuesX.c deal with the programmatic part of this.

We have been using 16-bit datatypes and 32-bit datatypes.

16-bit datatype variables occupy 2 bytes of memory size, while 32-bit datatype variables occupy 4 bytes of memory size.

As we can see in the notes in the addressValuesX.c scripts, the way these are set in memory isn't random.

If we run the same program twice, with 2 8-bit variables, we might get something like this:

&a: 0x7ffc0b676f66
&b: 0x7ffc0b676f67

Or, similar variables in 16-bit:

&a: 0x7ffcc7d932fe
&b: 0x7ffcc7d932fc

Or even in 32-bits:

&c: 0x7ffcc7d932f8
&d: 0x7ffcc7d932f4

(note the +1 from one variable to the other at the lower-order bit on the)

This 'ordered chaos' is the result of Address Space Layout Randomization, or ASLR, which randomizes the starting address of the call stack everytime a program runs.

This is dome for security purposes - hacking a program is much harder when the exact addresses of data have randomness to them.

Notice that the high-order bits keep within the same vicinity of addresses.

0x (7ff) (c02bf4836)

Note that in the video lecture, since the lecturer is running a Docker container, address space randomization cannot be disabled, therefore whenever running gdb, the addresses shown are truly randomized, unlike what I'm seeing locally on my PC, which is showing things like 0x7ffffffc996 



****
Side Note:

Let's take the case of a variable 'a' that was created as a 16-bit data type. It will be assigned the value '1'.

This means that that to bytes of memory will be allocated for our variable, with each byte containing 8 bits, of course. Initially, both bytes will be filled with zeros. 

The binary representation of '1' with these two bytes will be 00000000 00000001. Which means that its lowest position will hold the 1, or 00000001 and the highest memory position will hold 00000000 (basically sitting empty). 
Say its memory location is at:

0x7ffcc7d932f2

This means that it's also occupying 0x7ffcc7d932f3 (with all 0's).

If we now create another variable 'b', with the value 258, we would write that as 00000001 00000010

Which means that if our variable is presented as occupying:

0x7ffcc7d932f0

Then it will also occupy 0x7ffcc7d932f1. The lowest memory address will hold
00000010 (or 2 in decimal) and the highest memory address will hold 00000001 (or 256 in decimal).

I hope this clarifies things a bit.
****
