--WIP--

We'll be taking a look at the script pyramidExample.c

This program asks the user for a specific value and creates a couple of pyramids with a size equal to that value.

So, if the user inputs 4, the result will be:

   # #
  ## ##
 ### ###
#### ####

So, a cute pyramid pair.

Ok, there are quite a few things we'll be looking at. But let's start with the compiler.

In order to compile this script, we'll use gcc:

#CHECK BELOW

```bash
. gcc -o pyramidExample pyramidExample.c -lcs50

Let's explain this command:

-> gcc                 (the gnu compiler command)
-> -o pyramidExample   (specifies the output file)
-> pyramidExample.c    (the source file. Our script)
-> -lcs50              (tells the compiler to link against the CS50 library)

As far as I understand it, typically, our libraries (like cs50.h) have a corresponding .c file, or a similar file that contains the actual implementations of the functions and declarations of cs50.h.

Ok, so now we have an outputted file - a program, in fact, with the name pyramidExample.

We can now run it.

As you can probably tell, I'm on Linux system and so whatever I'm doing is geared towards my system. But it will be similar in other (lesser, ahem) systems.

So, to run this program, we can:

./pyramidExample

Like this:

![Placeholder ext description not shown](path/to/the/image/from/this/location) #place here small gif showing program


