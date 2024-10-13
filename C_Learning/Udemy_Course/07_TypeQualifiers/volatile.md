#Volatile type qualifiers

These tell the compiler explicitly that the specified variable WILL change its value.

It's provided so that a program can tell the compiler to suppress different kinds of optimizations.

-> Essentially it prevents the compiler from 'caching' variables

-> Used in real-time or embedded systems programming
(programs with lots of threading, or where resources are scarce)

**3 types of variables that should use volatile:**

- Memory-mapped peripheral registers

- Global variables (non-stack) modified by an interrupt service routine

- Global variables accessed by multiple tasks within a multi-threaded application

---

Syntax is similar as const

---

We can use it together with const, actually.

as an example, a hardware clock (not changeable by the program, but changed by an outside agency)

---


