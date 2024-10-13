# register info and usage

A processor register (CPU register) is one of a small set of data holding places taht are part of the computer processor. It can hold an instruction, a storage address or any kind of data.

_(other info elsewhere in Assembly studies)_

### Usage

- Register variables are much faster than those stored in memory during the runtime of the program

- It should only be used for variables that require quick access (the most frequently used in a C program)

- We use the keyword register, informing the compiler that a given variable can be put in a register
- NOTE: the compiler will choose if it will put in a register or not
- It will depend on hardware and implementation restrictions
- Generally, compilers themselves do this and optimize variables putting them or not in registers

- Local variables and formal parameters can be declared as register variables

- The lifetime of a register variable remains only when control is within the block

- The variable stored ina  register has a max size = register size

- NOTE: **We _cannot_ obtain the address of a register variable using pointers. It cannot have the unary (&) operator applie to it (it does not have a memory location)**

