- NOTES:

- Registers are 8 to 32 *global variables* of *fixed size*

- In a 32 bit machine, these registers are 32 bits in size, and
in a 64 bit machine they are 64 bits in size.

- Some of those registers are specials, like the Program Counter
which tells the computer which instruction comes next.

- Program Counter: *PC*, *RIP*, *eip*, *ip* (depends)

- The Pointer Counter holds the number of the line to be
executed next (also called 'pointing to').

- When that line is executed, it increases by one, to execute
the next line.

- EX:

mov eax, 0x5    -> Move eax to 5 (eax now has the value 5)
add eax, 0x3    -> Add the value 3 to the eax
mov ebx, 0x8    -> ebx to have the value 8
sub eax, ebx    -> ebx is subtracted from eax and the result is
                   stored in eax. So, now ebx = 8 and eax = 0 

- Stack = area at the bottom of the memory

- Stack pointer (*SP*, *ESP*, *RSP*) = point to the stack bottom
- Say:
esp = 28
- If we do, for example:

push 0x5        -> We are pushing the top of the stack, 
                   incrementing it by 5
so, we move to:
esp = 27 

- and place the value 5 there

pop eax         -> The value 5 is saved into the eax register,
                   and the stack is incremented,
so:
eax is now = 0x5
and...
esp = 26

Ideally we would access memory as little as possible and do all
operations in registers, as that is very, very fast.

- jumps 5       -> Helps to repeat a task, going directly to
                   the step we want.

- zeroflag = 1  -> means that that value at the register is 0

.beq == branch (if) equal to zero
.je/jz == jump (if) equal to zero


