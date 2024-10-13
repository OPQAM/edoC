#The GDB Text User Interface

This is a terminal interface which uses the curses library to show the source file, assembly output, program registers and gdb commands in separate text windows.

####Running it:

´´´
gdb -tui {filename}
´´´

####Commands:

_remember to have debug symbols on compilation with the '-g' flag in gcc:_

´´´
gcc -g -o {program} {script.c}
´´´

normal gdb commands and more:

´´´
layout asm      (assembly)
layout split    (src + asm layouts)
layout src      (source code)
layout regs     (registers)
tui reg general (general registers)

b <location>    (breakpoint)
s               (step)
n     	        (next)
r               (run)
c               (continue)
f               (run to end function)

b               (breakpoint)
d               (delete)

p               (print)
w               (watch)

u               (up the stack)
d               (down the stack)

q               (quit)

info locals
info args

set disassembly-flavor intel
set disassembly-flavor att
´´´

####Key Bindings
´´´
CTRL-x + a      (toggle between TUI and CLI)
CTRL-x + 2      (change active window)
CTRL-L          (refresh screen)
´´´
