Thu 18 Jan 22:42:43 WET 2024

A folder to compare C and Assembly scripts.

**Rules**
There will be 4 files per project:

- The C source code Script (ex: file.c)
- The Assembly code (ex: file.s)
- The Compiled program (ex: file)
- The disassembled code (ex: file_dis.s)

**Examples**
Converting a C script into an Assembly script (file.s):

**gcc -S file.c

Compiling a C script into a program (file). Remember to have a main():

**gcc file.c -o file

Disassembling a program (file_dis.s):

**objdump -d file > file_dis.s
    
--snip--
