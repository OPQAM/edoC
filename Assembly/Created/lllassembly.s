# Boilerplate code to tell Assembly how to start

#where to start
.global _start

#making code readable for avg human
.intel_syntax noprefix

#start of code
_start:

# sys_write
		mov rax, 1               
		mov rdi, 1				                  # (1).
		#lea rsi, [hello_world]                   # (2) 
		mov rdx, 14                               # (3) 
		syscall


# sys_exit call
		mov rax, 60
		mov rdi, 69
		syscall

# We create our new symbol
hello_world:
		.asciz "Hello, World!\n"   # ASCII string, zero-delimited

# for more info on the syscall (open, close program, write, ...)
# check the list at:
# https://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/

# NOTES:
# 
# (1) We need these two lines for the sys_write
#
# (2) Load effective address into rsi of symbol
#
# (3) Length of the buffer
