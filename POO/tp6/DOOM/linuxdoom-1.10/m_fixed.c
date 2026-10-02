	.file	"m_fixed.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.text
	.globl	FixedMul
	.type	FixedMul, @function
FixedMul:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movl	-8(%rbp), %eax
	cltq
	imulq	%rdx, %rax
	sarq	$16, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	FixedMul, .-FixedMul
	.globl	FixedDiv
	.type	FixedDiv, @function
FixedDiv:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	sarl	$14, %eax
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	movl	%eax, %ecx
	negl	%ecx
	cmovns	%ecx, %eax
	cmpl	%eax, %edx
	jl	.L4
	movl	-4(%rbp), %eax
	xorl	-8(%rbp), %eax
	testl	%eax, %eax
	jns	.L5
	movl	$-2147483648, %eax
	jmp	.L7
.L5:
	movl	$2147483647, %eax
	jmp	.L7
.L4:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv2
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	FixedDiv, .-FixedDiv
	.section	.rodata
.LC3:
	.string	"FixedDiv: divide by zero"
	.text
	.globl	FixedDiv2
	.type	FixedDiv2, @function
FixedDiv2:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-20(%rbp), %xmm0
	pxor	%xmm2, %xmm2
	cvtsi2sdl	-24(%rbp), %xmm2
	movapd	%xmm0, %xmm1
	divsd	%xmm2, %xmm1
	movsd	.LC0(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	comisd	.LC1(%rip), %xmm0
	jnb	.L9
	movsd	.LC2(%rip), %xmm0
	comisd	-8(%rbp), %xmm0
	jbe	.L10
.L9:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L10:
	movsd	-8(%rbp), %xmm0
	cvttsd2sil	%xmm0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	FixedDiv2, .-FixedDiv2
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1089470464
	.align 8
.LC1:
	.long	0
	.long	1105199104
	.align 8
.LC2:
	.long	0
	.long	-1042284544
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
