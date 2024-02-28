--WIP--

We'll be taking a look at the script pyramidExample.c

This program asks the user for a specific value and creates a couple of pyramids with a size equal to that value.

So, if the user inputs 4, the result will be:

   # #
  ## ##
 ### ###
#### ####

So, a cool pyramid pair.

Ok, there are quite a few things we'll be looking at. But let's start with the compiler.

In order to compile this script, we'll use gcc:

#CHECK BELOW - can I close this '''bash box?

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
# IMAGE HERE FOR THE SIMPLE GCC compilation
![Placeholder ext description not shown](path/to/the/image/from/this/location) #place here small gif showing program


But while using the GCC or GNU Compiler Collection, we have a few choices on how exactly to compile our code, to later be analyzed by the GDB or GNU Debugger.

In our first attempt, we compiled the code in a simple fashion, so to speak, and didn't include any debugging symbols. This means that we won't have variables or other niceties, and instead will see the code in Assembly, with registers and so on.

But we can compile it differently, and include debugging symbols and controls. Let's try that with the following command:

. gcc -Wall -Wextra -g -std=c11 pyramidExample.c -o pyramidExample2 -lcs50

# IMAGE HERE FOR THE DEBUGGING GCC compilation
![Placeholder description not shown](path/to/the/image/from/this/location) #place here small gif showin    g program

Let's explain briefly what those commands are doing:

-> -Wall               (enable all warnings)
-> -Wextra             (enable extra warnings)
-> -g                  (debugging)
-> -std=c11            (the C language standard - a 2011 revision of C)

Let's now open the debugger and take a gander at what it's doing and what commands we can use.
