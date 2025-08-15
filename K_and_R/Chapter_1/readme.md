### helloworld.c

- Basic hello, world program. I've experimented with several different tests, by removing parts of the code, or adding other parts, just to check on the error messages given when we do 'cc first.c'


#### NOTE: we can also use
#### gcc -masm=intel -save-temps file.c -o file.out

##### This will give us 4 different files:
file.i   --> preprocessing stage (#include, #define and macros expanded)
file.s   --> compilation stage (assembly code)
file.o   --> assembly stage (machine code)
file.out --> linking stage (full binary, executable file)
----------------------------------------------------------------------

Note: \0 is the escape character for strings. If this is used in a string, we're telling that it is the string's end, and nothing afterwards will be read.
----------------------------------------------------------------------


