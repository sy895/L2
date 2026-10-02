	.file	"p_tick.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: p_tick.c,v 1.4 1997/02/03 16:47:55 b1 Exp $"
	.globl	leveltime
	.bss
	.align 4
	.type	leveltime, @object
	.size	leveltime, 4
leveltime:
	.zero	4
	.globl	thinkercap
	.align 16
	.type	thinkercap, @object
	.size	thinkercap, 24
thinkercap:
	.zero	24
	.text
	.globl	P_InitThinkers
	.type	P_InitThinkers, @function
P_InitThinkers:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	thinkercap(%rip), %rax
	movq	%rax, 8+thinkercap(%rip)
	movq	8+thinkercap(%rip), %rax
	movq	%rax, thinkercap(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_InitThinkers, .-P_InitThinkers
	.globl	P_AddThinker
	.type	P_AddThinker, @function
P_AddThinker:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	thinkercap(%rip), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	leaq	thinkercap(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	thinkercap(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, thinkercap(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_AddThinker, .-P_AddThinker
	.globl	P_RemoveThinker
	.type	P_RemoveThinker, @function
P_RemoveThinker:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$-1, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_RemoveThinker, .-P_RemoveThinker
	.globl	P_AllocateThinker
	.type	P_AllocateThinker, @function
P_AllocateThinker:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_AllocateThinker, .-P_AllocateThinker
	.globl	P_RunThinkers
	.type	P_RunThinkers, @function
P_RunThinkers:
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
	movq	%rax, -8(%rbp)
	jmp	.L6
.L9:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	$-1, %rax
	jne	.L7
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	jmp	.L8
.L7:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L8
	movq	-8(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	*%rdx
.L8:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L6:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -8(%rbp)
	jne	.L9
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_RunThinkers, .-P_RunThinkers
	.globl	P_Ticker
	.type	P_Ticker, @function
P_Ticker:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	paused(%rip), %eax
	testl	%eax, %eax
	jne	.L17
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L13
	movl	menuactive(%rip), %eax
	testl	%eax, %eax
	je	.L13
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L13
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	20+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L18
.L13:
	movl	$0, -4(%rbp)
	jmp	.L14
.L16:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L15
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	P_PlayerThink@PLT
.L15:
	addl	$1, -4(%rbp)
.L14:
	cmpl	$3, -4(%rbp)
	jle	.L16
	call	P_RunThinkers
	call	P_UpdateSpecials@PLT
	call	P_RespawnSpecials@PLT
	movl	leveltime(%rip), %eax
	addl	$1, %eax
	movl	%eax, leveltime(%rip)
	jmp	.L10
.L17:
	nop
	jmp	.L10
.L18:
	nop
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_Ticker, .-P_Ticker
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
