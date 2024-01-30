Tue 30 Jan 11:45:42 WET 2024

Assembly files I've created

// Assembling our code
**as file.s -o file.o

// We now want it to become an executable elf file (we can use the linker or gcc)
**gcc -o file file.o -nostdlib -static     

// so that the binary doesn't get additional stuff from libc (makes it easier to run)

// Running our file
**./file

For list of syscall:

https://x64.syscall.sh/

OR

https://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/

                        --snip--


