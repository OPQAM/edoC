When programmers refer to compiling code, they're typically describing describing the process that takes source code and converts it into binary, the language that computers understand.

However, this isn't a single step process; it consists of four distinct steps, with compilation being but one of them.

Note: this analysis focuses primarily on the C programming language.

These four steps are, in order:

1) Preprocessing

During preprocessing, directives like #include<...> are processed to include the content of header files into the source code.

2) Compiling

In this step, the source code written in C is translated into Assembly language, which provides a human-readable representation of the code's machine instructions. Assembly language acts as an intermediary between high-level languages (in which we can include C, believe it or not) and the binary machine code that computers understand.

3) Assembling

The assembly code that was generated in the previous step is then assembled into binary machine code (a sequence of 1's and 0's that the computer's CPU can execute).

4) Linking

Finally, the linking step involves combining different binary files, such as object files generated from multiple source files, into a single executable program. Note that this process resolves references to external functions and libraries, ensuring that all components are working together seamlessly.

Together, these steps constitute the compilation process that programmers often allude to.
