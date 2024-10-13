# The static storage class

- It can be used on local and global variables, as well as functions

- When applied to local variables it instructs the compiler to keep the variable in existence during the life-time of the program.

- When applied to global variables, the static modifier causes that variable's scope to be restricted to the file in which it is declared.

- When applied to functions, the static function can be called only from within the same file as the function appears.

---

- Remember that creating a function with a local variable, without any previous declaration, this means that we're creating an automatic local variable.

- That variable will not exist after the function is executed - it will be destroyed.

- If we want that variable to persist, we need to make it into a static variable.
