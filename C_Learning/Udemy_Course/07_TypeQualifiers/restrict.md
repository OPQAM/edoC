# Restrict type qualifier

- This is an optimization hint for the compiler (it can choose to ignore it)

- It's used in pointer declarations as a type qualifier for pointers
 States that the specific pointer is the only means of access to a certain value ir points to.

---

Note that with the restrict keyword, teh compiler is free to look for computational shortcuts.
Ifa  programmer uses restrict and violate this condiction, we get undefined behavior

---

Syntax:

int * restrict intPtrA;

Tells the compiler that, for the duration of the scope in which intPtrA is defined, it will never access the same value.


