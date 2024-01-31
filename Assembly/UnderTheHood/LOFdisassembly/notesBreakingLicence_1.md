Looking at the disassembled file. Some notes on the process:

Annotated (pen and paper make this easier to get):

**0x00000000004005cc <+15>:	cmp    DWORD PTR [rbp-0x4],0x2**  # (1)
*This is a compare(cmp) with number 2*

**0x00000000004005d0 <+19>:	jne    0x400623 <main+102>**    # go to 623
*a jump not equal (jne)*

*If the comparison is indeed = 2, we move several steps to a printf:*
**0x00000000004005ea <+45>:	call   0x400490 <printf@plt>

*Then we have a string compare*
**0x0000000000400602 <+69>:	call   0x4004b0 <strcmp@plt>**
*check man 3 strcmp -> it compares strings and returns 0 if same*

*Then we get another jump not equal*
**0x0000000000400609 <+76>:	jne    0x400617 <main+90>**     # go to 617

*If it returned 0, we follow on with call:*
**0x0000000000400610 <+83>:	call   0x400480 <puts@plt>**

*Jumped from 5d0 because the comparison failed:*
**0x0000000000400623 <+102>:	mov    edi,0x400701**
**0x0000000000400628 <+107>:	call   0x400480 <puts@plt>**

*Jumped from 609 because the comparison failed*
**0x0000000000400617 <+90>:	mov    edi,0x4006fa**
**0x000000000040061c <+95>:	call   0x400480 <puts@plt>**


*So, in fact, if our first compare with 2 isn't true (1), then we jump*
*To the address 400623. It prints another text and exists*

*Note: always add the address or part of the address of important*
*locations, so that we know where we are (i.e, 5cc, 5d0, 5ea, 623, ...)*

So, we get two basic paths. One if we print nothing (which basically lets us know how to use the program) and another that is the result of us trying something. If we try something, we get a compare, to check if the password we added is correct. If it isn't, then we go to another message telling us that we're wrong.

We had a break at the beginning of main. And we added another break, afterwards, when we found the exact point where we're comparing our output and figuring out if it is == 0. We then change that point in our code so that it actually becomes 0. We force it to 0, so to speak and, as a result, we trick the system into thinking that we got the right answer. The program then proceeds to a successful exit.


- relevant commands, instructions, etc (more notes in notebook, ofc):

. gdb filename                         # run debugger on file
. run <input>                          # run program with parameter or not
. disassemble main                     # disassemble at main part of code
. set disassembly-flavor intel         # change the presentation to nice
. break *main                          # set the break at <main>
. info registers                       # check the current code point
. si                                   # step 1 instruction at a time
. ni                                   # step one line at a time
. continue                             # run program until our next break
. set $eax=0                           # sets register eax to the value 0


