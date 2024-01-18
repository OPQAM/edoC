# NOTES: Add below (!) - WIP

	.file	"teste2.c"
	.text
	.globl	x
	.data
	.type	x, @object
	.size	x, 1
x:
	.byte	97
	.globl	str             # character array 'str' STARTS HERE vvv
	.align 8                # aligns memory location to be a multiple of 8 bytes
	.type	str, @object  
	.size	str, 13
str:
	.string	"Bye"
	.zero	9               # character array 'str' ENDS HERE ^^^
	.globl	y
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.long	257
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits


