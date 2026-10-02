	.file	"m_argv.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_argv.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.globl	myargc
	.bss
	.align 4
	.type	myargc, @object
	.size	myargc, 4
myargc:
	.zero	4
	.globl	myargv
	.align 8
	.type	myargv, @object
	.size	myargv, 8
myargv:
	.zero	8
	.text
	.globl	M_CheckParm
	.type	M_CheckParm, @function
M_CheckParm:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L2
.L5:
	movq	myargv(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcasecmp@PLT
	testl	%eax, %eax
	jne	.L3
	movl	-4(%rbp), %eax
	jmp	.L4
.L3:
	addl	$1, -4(%rbp)
.L2:
	movl	myargc(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L5
	movl	$0, %eax
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	M_CheckParm, .-M_CheckParm
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
