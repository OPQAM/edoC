#TryCatchOnSteroids?

We use longjmp and setjmp for exception handling (like with try catch in Python).

- setjmp (=) try
- longjmp (=) throw

-> We use these two so that we can deal with exception handling at a top level, instead of having to do at every level of a deeply nested set of functions.

-> This works similarly to a goto, but we can jump in between functions.

###HOW IT WORKS

- setjmp saves a copy of the program counter to the current pointer at the top of the stack;

. int setjmp (jmp_buf j)

-> 'j' is there to remind us of where we are. It must be called first

. (longjmp(jmp_buf j, int i) )

-> Basically: go back to the place that 'j' is refering to;
-> Will restore the process to the state before calling setjmp;
-> Return the value of 'i', so that the code can know when we actually got here via longjmp;
-> The contents of 'j' get destroyed after using longjmp.
-> setjmp is more like a 'come from' statement than a 'go to' statement.
