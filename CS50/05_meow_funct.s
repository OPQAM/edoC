	.file	"05_meow_funct.c"
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
	call	meow_count
	mov	DWORD PTR -4[rbp], eax
	mov	eax, DWORD PTR -4[rbp]
	mov	edi, eax
	call	meow
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"You need a cat."
.LC1:
	.string	"Meow"
	.text
	.globl	meow
	.type	meow, @function
meow:
.LFB1:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	DWORD PTR -20[rbp], edi
	cmp	DWORD PTR -20[rbp], 0
	jne	.L4
	lea	rax, .LC0[rip]
	mov	rdi, rax
	call	puts@PLT
	jmp	.L3
.L4:
	mov	DWORD PTR -4[rbp], 0
	jmp	.L6
.L7:
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	puts@PLT
	add	DWORD PTR -4[rbp], 1
.L6:
	mov	eax, DWORD PTR -4[rbp]
	cmp	eax, DWORD PTR -20[rbp]
	jl	.L7
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	meow, .-meow
	.section	.rodata
.LC2:
	.string	"How many cats?\n"
	.text
	.globl	meow_count
	.type	meow_count, @function
meow_count:
.LFB2:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
.L9:
	lea	rax, .LC2[rip]
	mov	rdi, rax
	mov	eax, 0
	call	get_int@PLT
	mov	DWORD PTR -4[rbp], eax
	cmp	DWORD PTR -4[rbp], 0
	js	.L9
	mov	eax, DWORD PTR -4[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	meow_count, .-meow_count
	.ident	"GCC: (Debian 12.2.0-14+deb12u1) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
