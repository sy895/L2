	.file	"m_cheat.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: m_cheat.c,v 1.1 1997/02/03 21:24:34 b1 Exp $"
	.data
	.align 4
	.type	firsttime, @object
	.size	firsttime, 4
firsttime:
	.long	1
	.local	cheat_xlate_table
	.comm	cheat_xlate_table,256,32
	.text
	.globl	cht_CheckCheat
	.type	cht_CheckCheat, @function
cht_CheckCheat:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, %eax
	movb	%al, -28(%rbp)
	movl	$0, -4(%rbp)
	movl	firsttime(%rip), %eax
	testl	%eax, %eax
	je	.L2
	movl	$0, firsttime(%rip)
	movl	$0, -8(%rbp)
	jmp	.L3
.L4:
	movl	-8(%rbp), %eax
	sall	$7, %eax
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	sall	$5, %eax
	andl	$64, %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	andl	$4, %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%eax, %eax
	andl	$16, %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	sarl	%eax
	andl	$8, %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	andl	$32, %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	sarl	$5, %eax
	andl	$2, %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	sarl	$7, %eax
	andl	$1, %eax
	leal	(%rdx,%rax), %ecx
	movl	-8(%rbp), %eax
	cltq
	leaq	cheat_xlate_table(%rip), %rdx
	movb	%cl, (%rax,%rdx)
	addl	$1, -8(%rbp)
.L3:
	cmpl	$255, -8(%rbp)
	jle	.L4
.L2:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L5
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
.L5:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L6
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	leaq	1(%rax), %rcx
	movq	-24(%rbp), %rdx
	movq	%rcx, 8(%rdx)
	movzbl	-28(%rbp), %edx
	movb	%dl, (%rax)
	jmp	.L7
.L6:
	movzbl	-28(%rbp), %eax
	movzbl	%al, %eax
	cltq
	leaq	cheat_xlate_table(%rip), %rdx
	movzbl	(%rax,%rdx), %edx
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L8
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	leaq	1(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L7
.L8:
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
.L7:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$1, %al
	jne	.L9
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	leaq	1(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L10
.L9:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L10
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
	movl	$1, -4(%rbp)
.L10:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	cht_CheckCheat, .-cht_CheckCheat
	.globl	cht_GetParam
	.type	cht_GetParam, @function
cht_GetParam:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	nop
.L13:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	cmpb	$1, %al
	jne	.L13
.L15:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
	movq	-32(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movzbl	-9(%rbp), %edx
	movb	%dl, (%rax)
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movb	$0, (%rax)
	cmpb	$0, -9(%rbp)
	je	.L14
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L15
.L14:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L17
	movq	-32(%rbp), %rax
	movb	$0, (%rax)
.L17:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	cht_GetParam, .-cht_GetParam
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
