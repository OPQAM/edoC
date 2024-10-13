#notes

. gcc -o file file.c -g   # With debug info, not stripped
                          # Makes file a bit bigger


. gdb ./file
. (gdb) lay next
. (enter to load the code + assembly)
. (gdb) break main
. (gdb) run
. (gdb) next              # jumping to line 5 of our code
. (gdb) nexti             # next line of assembly
. (gdb) ref               # refresh
. (gdb) x/i $pc           # examine the instruction at pc (see what command broke)
. (gdb) info registers    # what is the state of the register that did this
