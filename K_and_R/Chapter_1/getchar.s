	.file	"getchar.c"
	.intel_syntax noprefix
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	call	getchar@PLT
	mov	DWORD PTR -4[rbp], eax
	jmp	.L2
.L3:
	mov	eax, DWORD PTR -4[rbp]
	mov	edi, eax
	call	putchar@PLT
	call	getchar@PLT
	mov	DWORD PTR -4[rbp], eax
.L2:
	cmp	DWORD PTR -4[rbp], -1
	jne	.L3
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 12.2.0-14+deb12u1) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
