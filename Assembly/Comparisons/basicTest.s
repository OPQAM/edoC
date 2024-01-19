	.file	"teste.c"
	.text
	.globl	x
	.bss                           # Block Started by Symbol
	.align 4                       # Aligns the memory location for 'x' to be a multiple of 4 bytes.
	.type	x, @object             # Specifies the type of the symbol 'x' as an object
	.size	x, 4                   # Specifying the size of 'x' as 4 bytes
x:                                 # defines the symbol 'x'
	.zero	4                      # initializes as zero 4 bytes of space for 'x'
	.globl	y
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.zero	4
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
