	.file	"p_saveg.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: p_tick.c,v 1.4 1997/02/03 16:47:55 b1 Exp $"
	.globl	save_p
	.bss
	.align 8
	.type	save_p, @object
	.size	save_p, 8
save_p:
	.zero	8
	.text
	.globl	P_ArchivePlayers
	.type	P_ArchivePlayers, @function
P_ArchivePlayers:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -16(%rbp)
	jmp	.L2
.L8:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L9
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	leaq	(%rax,%rdx), %rcx
	movq	-8(%rbp), %rax
	movl	$320, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$320, %rax
	movq	%rax, save_p(%rip)
	movl	$0, -12(%rbp)
	jmp	.L5
.L7:
	movq	-8(%rbp), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	addq	$264, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L6
	movq	-8(%rbp), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	addq	$264, %rax
	movq	(%rax), %rdx
	leaq	states(%rip), %rax
	subq	%rax, %rdx
	sarq	$3, %rdx
	movabsq	$7905747460161236407, %rax
	imulq	%rdx, %rax
	movq	%rax, %rsi
	movq	-8(%rbp), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	addq	$264, %rax
	movq	%rsi, (%rax)
.L6:
	addl	$1, -12(%rbp)
.L5:
	cmpl	$1, -12(%rbp)
	jle	.L7
	jmp	.L4
.L9:
	nop
.L4:
	addl	$1, -16(%rbp)
.L2:
	cmpl	$3, -16(%rbp)
	jle	.L8
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_ArchivePlayers, .-P_ArchivePlayers
	.globl	P_UnArchivePlayers
	.type	P_UnArchivePlayers, @function
P_UnArchivePlayers:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -8(%rbp)
	jmp	.L11
.L17:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L18
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rcx
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movl	$320, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$320, %rax
	movq	%rax, save_p(%rip)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	$0, (%rdx,%rax)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	224+players(%rip), %rax
	movq	$0, (%rdx,%rax)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	240+players(%rip), %rax
	movq	$0, (%rdx,%rax)
	movl	$0, -4(%rbp)
	jmp	.L14
.L16:
	movl	-4(%rbp), %eax
	cltq
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	%rax, %rdx
	addq	%rdx, %rdx
	addq	%rax, %rdx
	leaq	0(,%rdx,8), %rax
	movq	%rax, %rdx
	movq	%rcx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	salq	$6, %rax
	addq	%rax, %rdx
	leaq	264+players(%rip), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L15
	movl	-4(%rbp), %eax
	cltq
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	%rax, %rdx
	addq	%rdx, %rdx
	addq	%rax, %rdx
	leaq	0(,%rdx,8), %rax
	movq	%rax, %rdx
	movq	%rcx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	salq	$6, %rax
	addq	%rax, %rdx
	leaq	264+players(%rip), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	leaq	(%rax,%rdx), %rsi
	movl	-4(%rbp), %eax
	cltq
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	%rax, %rdx
	addq	%rdx, %rdx
	addq	%rax, %rdx
	leaq	0(,%rdx,8), %rax
	movq	%rax, %rdx
	movq	%rcx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	salq	$6, %rax
	addq	%rax, %rdx
	leaq	264+players(%rip), %rax
	addq	%rdx, %rax
	movq	%rsi, (%rax)
.L15:
	addl	$1, -4(%rbp)
.L14:
	cmpl	$1, -4(%rbp)
	jle	.L16
	jmp	.L13
.L18:
	nop
.L13:
	addl	$1, -8(%rbp)
.L11:
	cmpl	$3, -8(%rbp)
	jle	.L17
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_UnArchivePlayers, .-P_UnArchivePlayers
	.globl	P_ArchiveWorld
	.type	P_ArchiveWorld, @function
P_ArchiveWorld:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	save_p(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -40(%rbp)
	movq	sectors(%rip), %rax
	movq	%rax, -32(%rbp)
	jmp	.L20
.L21:
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movq	-32(%rbp), %rax
	movl	4(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-32(%rbp), %rdx
	movzwl	8(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-32(%rbp), %rdx
	movzwl	10(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-32(%rbp), %rdx
	movzwl	12(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-32(%rbp), %rdx
	movzwl	14(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-32(%rbp), %rdx
	movzwl	16(%rdx), %edx
	movw	%dx, (%rax)
	addl	$1, -40(%rbp)
	subq	$-128, -32(%rbp)
.L20:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L21
	movl	$0, -40(%rbp)
	movq	lines(%rip), %rax
	movq	%rax, -24(%rbp)
	jmp	.L22
.L27:
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-24(%rbp), %rdx
	movzwl	24(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-24(%rbp), %rdx
	movzwl	26(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-24(%rbp), %rdx
	movzwl	28(%rdx), %edx
	movw	%dx, (%rax)
	movl	$0, -36(%rbp)
	jmp	.L23
.L26:
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	cmpw	$-1, %ax
	je	.L28
	movq	sides(%rip), %rcx
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-8(%rbp), %rdx
	movzwl	8(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-8(%rbp), %rdx
	movzwl	10(%rdx), %edx
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	-8(%rbp), %rdx
	movzwl	12(%rdx), %edx
	movw	%dx, (%rax)
	jmp	.L25
.L28:
	nop
.L25:
	addl	$1, -36(%rbp)
.L23:
	cmpl	$1, -36(%rbp)
	jle	.L26
	addl	$1, -40(%rbp)
	addq	$88, -24(%rbp)
.L22:
	movl	numlines(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L27
	movq	-16(%rbp), %rax
	movq	%rax, save_p(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_ArchiveWorld, .-P_ArchiveWorld
	.globl	P_UnArchiveWorld
	.type	P_UnArchiveWorld, @function
P_UnArchiveWorld:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	save_p(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -40(%rbp)
	movq	sectors(%rip), %rax
	movq	%rax, -32(%rbp)
	jmp	.L30
.L31:
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 10(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 12(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 14(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 16(%rax)
	movq	-32(%rbp), %rax
	movq	$0, 104(%rax)
	movq	-32(%rbp), %rax
	movq	$0, 24(%rax)
	addl	$1, -40(%rbp)
	subq	$-128, -32(%rbp)
.L30:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L31
	movl	$0, -40(%rbp)
	movq	lines(%rip), %rax
	movq	%rax, -24(%rbp)
	jmp	.L32
.L37:
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-24(%rbp), %rax
	movw	%dx, 24(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-24(%rbp), %rax
	movw	%dx, 26(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-24(%rbp), %rax
	movw	%dx, 28(%rax)
	movl	$0, -36(%rbp)
	jmp	.L33
.L36:
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	cmpw	$-1, %ax
	je	.L38
	movq	sides(%rip), %rcx
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 10(%rax)
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzwl	(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 12(%rax)
	jmp	.L35
.L38:
	nop
.L35:
	addl	$1, -36(%rbp)
.L33:
	cmpl	$1, -36(%rbp)
	jle	.L36
	addl	$1, -40(%rbp)
	addq	$88, -24(%rbp)
.L32:
	movl	numlines(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L37
	movq	-16(%rbp), %rax
	movq	%rax, save_p(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_UnArchiveWorld, .-P_UnArchiveWorld
	.globl	P_ArchiveThinkers
	.type	P_ArchiveThinkers, @function
P_ArchiveThinkers:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L40
.L43:
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L41
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$1, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$224, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$224, %rax
	movq	%rax, save_p(%rip)
	movq	-8(%rbp), %rax
	movq	152(%rax), %rdx
	leaq	states(%rip), %rax
	subq	%rax, %rdx
	sarq	$3, %rdx
	movabsq	$7905747460161236407, %rax
	imulq	%rdx, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 152(%rax)
	movq	-8(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L44
	movq	-8(%rbp), %rax
	movq	192(%rax), %rdx
	leaq	players(%rip), %rax
	subq	%rax, %rdx
	sarq	$6, %rdx
	movabsq	$-3689348814741910323, %rax
	imulq	%rdx, %rax
	addq	$1, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 192(%rax)
.L44:
	nop
.L41:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L40:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L43
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$0, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_ArchiveThinkers, .-P_ArchiveThinkers
	.section	.rodata
.LC0:
	.string	"Unknown tclass %i in savegame"
	.text
	.globl	P_UnArchiveThinkers
	.type	P_UnArchiveThinkers, @function
P_UnArchiveThinkers:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -24(%rbp)
	jmp	.L46
.L49:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L47
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj@PLT
	jmp	.L48
.L47:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
.L48:
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
.L46:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L49
	call	P_InitThinkers@PLT
.L56:
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movb	%al, -25(%rbp)
	movzbl	-25(%rbp), %eax
	testl	%eax, %eax
	je	.L58
	cmpl	$1, %eax
	jne	.L57
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$224, %edi
	call	Z_Malloc@PLT
	movq	%rax, -16(%rbp)
	movq	save_p(%rip), %rcx
	movq	-16(%rbp), %rax
	movl	$224, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$224, %rax
	movq	%rax, save_p(%rip)
	movq	-16(%rbp), %rax
	movq	152(%rax), %rax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 152(%rax)
	movq	-16(%rbp), %rax
	movq	$0, 176(%rax)
	movq	-16(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L54
	movq	-16(%rbp), %rax
	movq	192(%rax), %rax
	subl	$1, %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 192(%rax)
	movq	-16(%rbp), %rax
	movq	192(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
.L54:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_SetThingPosition@PLT
	movq	-16(%rbp), %rax
	movl	128(%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	mobjinfo(%rip), %rdx
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 136(%rax)
	movq	-16(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 96(%rax)
	movq	-16(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 100(%rax)
	movq	-16(%rbp), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	jmp	.L55
.L57:
	movzbl	-25(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L55:
	jmp	.L56
.L58:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_UnArchiveThinkers, .-P_UnArchiveThinkers
	.globl	specials_e
	.bss
	.align 4
	.type	specials_e, @object
	.size	specials_e, 4
specials_e:
	.zero	4
	.text
	.globl	P_ArchiveSpecials
	.type	P_ArchiveSpecials, @function
P_ArchiveSpecials:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -64(%rbp)
	jmp	.L60
.L74:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L61
	movl	$0, -68(%rbp)
	jmp	.L62
.L65:
	movl	-68(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	%rax, -64(%rbp)
	je	.L75
	addl	$1, -68(%rbp)
.L62:
	cmpl	$29, -68(%rbp)
	jle	.L65
	jmp	.L64
.L75:
	nop
.L64:
	cmpl	$29, -68(%rbp)
	jg	.L76
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$0, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	-64(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$72, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$72, %rax
	movq	%rax, save_p(%rip)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 32(%rax)
	jmp	.L76
.L61:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_MoveCeiling@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L68
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$0, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	-64(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$72, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$72, %rax
	movq	%rax, save_p(%rip)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 32(%rax)
	jmp	.L67
.L68:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_VerticalDoor@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L69
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$1, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	-64(%rbp), %rcx
	movq	-16(%rbp), %rax
	movl	$64, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$64, %rax
	movq	%rax, save_p(%rip)
	movq	-16(%rbp), %rax
	movq	32(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 32(%rax)
	jmp	.L67
.L69:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_MoveFloor@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L70
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$2, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -24(%rbp)
	movq	-64(%rbp), %rcx
	movq	-24(%rbp), %rax
	movl	$64, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$64, %rax
	movq	%rax, save_p(%rip)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 32(%rax)
	jmp	.L67
.L70:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_PlatRaise@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L71
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$3, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -32(%rbp)
	movq	-64(%rbp), %rcx
	movq	-32(%rbp), %rax
	movl	$72, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$72, %rax
	movq	%rax, save_p(%rip)
	movq	-32(%rbp), %rax
	movq	24(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 24(%rax)
	jmp	.L67
.L71:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_LightFlash@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L72
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$4, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -40(%rbp)
	movq	-64(%rbp), %rcx
	movq	-40(%rbp), %rax
	movl	$56, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$56, %rax
	movq	%rax, save_p(%rip)
	movq	-40(%rbp), %rax
	movq	24(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 24(%rax)
	jmp	.L67
.L72:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_StrobeFlash@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L73
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$5, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -48(%rbp)
	movq	-64(%rbp), %rcx
	movq	-48(%rbp), %rax
	movl	$56, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$56, %rax
	movq	%rax, save_p(%rip)
	movq	-48(%rbp), %rax
	movq	24(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-48(%rbp), %rax
	movq	%rdx, 24(%rax)
	jmp	.L67
.L73:
	movq	-64(%rbp), %rax
	movq	16(%rax), %rax
	movq	T_Glow@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L67
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$6, (%rax)
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	%rax, -56(%rbp)
	movq	-64(%rbp), %rcx
	movq	-56(%rbp), %rax
	movl	$48, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$48, %rax
	movq	%rax, save_p(%rip)
	movq	-56(%rbp), %rax
	movq	24(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 24(%rax)
	jmp	.L67
.L76:
	nop
.L67:
	movq	-64(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -64(%rbp)
.L60:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -64(%rbp)
	jne	.L74
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$7, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_ArchiveSpecials, .-P_ArchiveSpecials
	.section	.rodata
	.align 8
.LC1:
	.string	"P_UnarchiveSpecials:Unknown tclass %i in savegame"
	.text
	.globl	P_UnArchiveSpecials
	.type	P_UnArchiveSpecials, @function
P_UnArchiveSpecials:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
.L92:
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movb	%al, -57(%rbp)
	movzbl	-57(%rbp), %eax
	cmpl	$7, %eax
	ja	.L78
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L80(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L80(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L80:
	.long	.L87-.L80
	.long	.L86-.L80
	.long	.L85-.L80
	.long	.L84-.L80
	.long	.L83-.L80
	.long	.L82-.L80
	.long	.L81-.L80
	.long	.L93-.L80
	.text
.L87:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$72, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	save_p(%rip), %rcx
	movq	-8(%rbp), %rax
	movl	$72, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$72, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L89
	movq	-8(%rbp), %rax
	movq	T_MoveCeiling@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
.L89:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddActiveCeiling@PLT
	jmp	.L90
.L86:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -16(%rbp)
	movq	save_p(%rip), %rcx
	movq	-16(%rbp), %rax
	movl	$64, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$64, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-16(%rbp), %rax
	movq	T_VerticalDoor@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	jmp	.L90
.L85:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -24(%rbp)
	movq	save_p(%rip), %rcx
	movq	-24(%rbp), %rax
	movl	$64, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$64, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 32(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-24(%rbp), %rax
	movq	T_MoveFloor@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	jmp	.L90
.L84:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$72, %edi
	call	Z_Malloc@PLT
	movq	%rax, -32(%rbp)
	movq	save_p(%rip), %rcx
	movq	-32(%rbp), %rax
	movl	$72, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$72, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L91
	movq	-32(%rbp), %rax
	movq	T_PlatRaise@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
.L91:
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddActivePlat@PLT
	jmp	.L90
.L83:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$56, %edi
	call	Z_Malloc@PLT
	movq	%rax, -40(%rbp)
	movq	save_p(%rip), %rcx
	movq	-40(%rbp), %rax
	movl	$56, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$56, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-40(%rbp), %rax
	movq	24(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-40(%rbp), %rax
	movq	T_LightFlash@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	jmp	.L90
.L82:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$56, %edi
	call	Z_Malloc@PLT
	movq	%rax, -48(%rbp)
	movq	save_p(%rip), %rcx
	movq	-48(%rbp), %rax
	movl	$56, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$56, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-48(%rbp), %rax
	movq	24(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-48(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-48(%rbp), %rax
	movq	T_StrobeFlash@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	jmp	.L90
.L81:
	movq	save_p(%rip), %rax
	movq	save_p(%rip), %rdx
	andl	$3, %edx
	movl	$4, %ecx
	subl	%edx, %ecx
	movslq	%ecx, %rdx
	andl	$3, %edx
	addq	%rdx, %rax
	movq	%rax, save_p(%rip)
	movl	$0, %edx
	movl	$50, %esi
	movl	$48, %edi
	call	Z_Malloc@PLT
	movq	%rax, -56(%rbp)
	movq	save_p(%rip), %rcx
	movq	-56(%rbp), %rax
	movl	$48, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$48, %rax
	movq	%rax, save_p(%rip)
	movq	sectors(%rip), %rdx
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	cltq
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-56(%rbp), %rax
	movq	T_Glow@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	jmp	.L90
.L78:
	movzbl	-57(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L90:
	jmp	.L92
.L93:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_UnArchiveSpecials, .-P_UnArchiveSpecials
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
