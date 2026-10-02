	.file	"m_bbox.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.text
	.globl	M_ClearBox
	.type	M_ClearBox, @function
M_ClearBox:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$12, %rax
	movl	$-2147483648, (%rax)
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	$2147483647, (%rax)
	movq	-8(%rbp), %rdx
	addq	$4, %rdx
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	M_ClearBox, .-M_ClearBox
	.globl	M_AddToBox
	.type	M_AddToBox, @function
M_AddToBox:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jge	.L3
	movq	-8(%rbp), %rax
	leaq	8(%rax), %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
	jmp	.L4
.L3:
	movq	-8(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jle	.L4
	movq	-8(%rbp), %rax
	leaq	12(%rax), %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
.L4:
	movq	-8(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %eax
	cmpl	%eax, -16(%rbp)
	jge	.L5
	movq	-8(%rbp), %rax
	leaq	4(%rax), %rdx
	movl	-16(%rbp), %eax
	movl	%eax, (%rdx)
	jmp	.L7
.L5:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -16(%rbp)
	jle	.L7
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, (%rax)
.L7:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	M_AddToBox, .-M_AddToBox
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
