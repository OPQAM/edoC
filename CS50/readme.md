**C Refresher - CS50 2026**


Created Makefile to speedup the process of compiling any program.
Using:

gcc program.c -o program -Wall -Wextra -std=c11

(etc - see file for ASM outputs)

NOTE: .god files have succint ASM code from godbolt (x86-64 gcc 15.2)
---

Use man pages for info. Ex:

man 3 printf
man 3 malloc

---

The file timestamp keeps track of current video position

---

For debugging purposes, I've installed cgdb, which works fine.

Common commands, as per usual:
b main
n
s
print <variable>
info locals
info args
info display

---

