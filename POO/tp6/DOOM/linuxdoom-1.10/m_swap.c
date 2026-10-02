	.file	"m_swap.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.text
	.globl	SwapSHORT
	.type	SwapSHORT, @function
SwapSHORT:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movw	%ax, -4(%rbp)
	movzwl	-4(%rbp), %eax
	shrw	$8, %ax
	movl	%eax, %edx
	movzwl	-4(%rbp), %eax
	sall	$8, %eax
	orl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	SwapSHORT, .-SwapSHORT
	.globl	SwapLONG
	.type	SwapLONG, @function
SwapLONG:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	shrq	$24, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	shrq	$8, %rax
	andl	$65280, %eax
	orq	%rax, %rdx
	movq	-8(%rbp), %rax
	salq	$8, %rax
	andl	$16711680, %eax
	orq	%rax, %rdx
	movq	-8(%rbp), %rax
	salq	$24, %rax
	orq	%rdx, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	SwapLONG, .-SwapLONG
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
