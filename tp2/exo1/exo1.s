	.file	"exo1.c"
	.text
	.globl	ab
	.data
	.align 4
	.type	ab, @object
	.size	ab, 4
ab:
	.long	3
	.globl	cn
	.section	.rodata
	.align 4
	.type	cn, @object
	.size	cn, 4
cn:
	.long	5
.LC0:
	.string	"Bonjour : %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$12, -4(%rbp)
	movl	ab(%rip), %eax
	movl	$5, %edx
	addl	%eax, %edx
	movl	vex(%rip), %eax
	addl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Debian 13.2.0-4) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
