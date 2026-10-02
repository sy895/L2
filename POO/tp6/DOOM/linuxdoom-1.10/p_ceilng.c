	.file	"p_ceilng.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: p_ceilng.c,v 1.4 1997/02/03 16:47:53 b1 Exp $"
	.globl	activeceilings
	.bss
	.align 32
	.type	activeceilings, @object
	.size	activeceilings, 240
activeceilings:
	.zero	240
	.text
	.globl	T_MoveCeiling
	.type	T_MoveCeiling, @function
T_MoveCeiling:
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
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	cmpl	$1, %eax
	je	.L2
	cmpl	$1, %eax
	jg	.L26
	cmpl	$-1, %eax
	je	.L4
	testl	%eax, %eax
	jne	.L26
	jmp	.L3
.L2:
	movq	-24(%rbp), %rax
	movl	56(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	44(%rax), %edx
	movq	-24(%rbp), %rax
	movl	48(%rax), %esi
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	%ecx, %r9d
	movl	$1, %r8d
	movl	$0, %ecx
	movq	%rax, %rdi
	call	T_MovePlane@PLT
	movl	%eax, -4(%rbp)
	movl	leveltime(%rip), %eax
	andl	$7, %eax
	testl	%eax, %eax
	jne	.L5
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$5, %eax
	je	.L27
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$22, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L5
.L27:
	nop
.L5:
	cmpl	$2, -4(%rbp)
	jne	.L28
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$5, %eax
	je	.L8
	cmpl	$5, %eax
	ja	.L29
	cmpl	$1, %eax
	je	.L10
	testl	%eax, %eax
	je	.L29
	subl	$3, %eax
	cmpl	$1, %eax
	ja	.L29
	jmp	.L11
.L10:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveActiveCeiling
	jmp	.L7
.L8:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$19, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L11:
	movq	-24(%rbp), %rax
	movl	$-1, 56(%rax)
	jmp	.L7
.L29:
	nop
.L7:
	jmp	.L28
.L4:
	movq	-24(%rbp), %rax
	movl	56(%rax), %edi
	movq	-24(%rbp), %rax
	movl	52(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	40(%rax), %edx
	movq	-24(%rbp), %rax
	movl	48(%rax), %esi
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	%edi, %r9d
	movl	$1, %r8d
	movq	%rax, %rdi
	call	T_MovePlane@PLT
	movl	%eax, -4(%rbp)
	movl	leveltime(%rip), %eax
	andl	$7, %eax
	testl	%eax, %eax
	jne	.L12
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$5, %eax
	je	.L30
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$22, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L12
.L30:
	nop
.L12:
	cmpl	$2, -4(%rbp)
	jne	.L14
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$5, %eax
	ja	.L31
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L17(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L17(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L17:
	.long	.L20-.L17
	.long	.L31-.L17
	.long	.L20-.L17
	.long	.L19-.L17
	.long	.L18-.L17
	.long	.L16-.L17
	.text
.L16:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$19, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L19:
	movq	-24(%rbp), %rax
	movl	$65536, 48(%rax)
.L18:
	movq	-24(%rbp), %rax
	movl	$1, 56(%rax)
	jmp	.L22
.L20:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveActiveCeiling
	jmp	.L22
.L14:
	cmpl	$1, -4(%rbp)
	jne	.L32
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$3, %eax
	ja	.L23
	cmpl	$2, %eax
	jnb	.L24
	jmp	.L33
.L23:
	cmpl	$5, %eax
	jne	.L33
.L24:
	movq	-24(%rbp), %rax
	movl	$8192, 48(%rax)
	jmp	.L22
.L31:
	nop
	jmp	.L32
.L33:
	nop
.L22:
	jmp	.L32
.L28:
	nop
	jmp	.L26
.L32:
	nop
.L3:
.L26:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	T_MoveCeiling, .-T_MoveCeiling
	.globl	EV_DoCeiling
	.type	EV_DoCeiling, @function
EV_DoCeiling:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	$-1, -24(%rbp)
	movl	$0, -20(%rbp)
	movl	-44(%rbp), %eax
	subl	$3, %eax
	cmpl	$2, %eax
	ja	.L49
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_ActivateInStasisCeiling
.L49:
	nop
	jmp	.L36
.L46:
	movq	sectors(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L50
	movl	$1, -20(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$72, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	leaq	T_MoveCeiling(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 52(%rax)
	cmpl	$5, -44(%rbp)
	ja	.L39
	movl	-44(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L41(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L41(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L41:
	.long	.L43-.L41
	.long	.L44-.L41
	.long	.L43-.L41
	.long	.L40-.L41
	.long	.L42-.L41
	.long	.L40-.L41
	.text
.L42:
	movq	-8(%rbp), %rax
	movl	$1, 52(%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 44(%rax)
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	leal	524288(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 56(%rax)
	movq	-8(%rbp), %rax
	movl	$131072, 48(%rax)
	jmp	.L39
.L40:
	movq	-8(%rbp), %rax
	movl	$1, 52(%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 44(%rax)
.L43:
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	cmpl	$0, -44(%rbp)
	je	.L45
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	524288(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
.L45:
	movq	-8(%rbp), %rax
	movl	$-1, 56(%rax)
	movq	-8(%rbp), %rax
	movl	$65536, 48(%rax)
	jmp	.L39
.L44:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindHighestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 44(%rdx)
	movq	-8(%rbp), %rax
	movl	$1, 56(%rax)
	movq	-8(%rbp), %rax
	movl	$65536, 48(%rax)
	nop
.L39:
	movq	-16(%rbp), %rax
	movzwl	16(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 60(%rax)
	movq	-8(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddActiveCeiling
	jmp	.L36
.L50:
	nop
.L36:
	movl	-24(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag@PLT
	movl	%eax, -24(%rbp)
	cmpl	$0, -24(%rbp)
	jns	.L46
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	EV_DoCeiling, .-EV_DoCeiling
	.globl	P_AddActiveCeiling
	.type	P_AddActiveCeiling, @function
P_AddActiveCeiling:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L52
.L55:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	jne	.L53
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	activeceilings(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, (%rcx,%rdx)
	jmp	.L51
.L53:
	addl	$1, -4(%rbp)
.L52:
	cmpl	$29, -4(%rbp)
	jle	.L55
.L51:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_AddActiveCeiling, .-P_AddActiveCeiling
	.globl	P_RemoveActiveCeiling
	.type	P_RemoveActiveCeiling, @function
P_RemoveActiveCeiling:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L57
.L60:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L58
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	32(%rax), %rax
	movq	$0, 104(%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	$0, (%rdx,%rax)
	jmp	.L59
.L58:
	addl	$1, -4(%rbp)
.L57:
	cmpl	$29, -4(%rbp)
	jle	.L60
	nop
.L59:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_RemoveActiveCeiling, .-P_RemoveActiveCeiling
	.globl	P_ActivateInStasisCeiling
	.type	P_ActivateInStasisCeiling, @function
P_ActivateInStasisCeiling:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L62
.L64:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L63
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	60(%rax), %edx
	movq	-24(%rbp), %rax
	movzwl	28(%rax), %eax
	cwtl
	cmpl	%eax, %edx
	jne	.L63
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	jne	.L63
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	activeceilings(%rip), %rax
	movq	(%rcx,%rax), %rax
	movl	64(%rdx), %edx
	movl	%edx, 56(%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	leaq	T_MoveCeiling(%rip), %rdx
	movq	%rdx, 16(%rax)
.L63:
	addl	$1, -4(%rbp)
.L62:
	cmpl	$29, -4(%rbp)
	jle	.L64
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_ActivateInStasisCeiling, .-P_ActivateInStasisCeiling
	.globl	EV_CeilingCrushStop
	.type	EV_CeilingCrushStop, @function
EV_CeilingCrushStop:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L66
.L68:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L67
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	60(%rax), %edx
	movq	-24(%rbp), %rax
	movzwl	28(%rax), %eax
	cwtl
	cmpl	%eax, %edx
	jne	.L67
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	je	.L67
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	activeceilings(%rip), %rax
	movq	(%rcx,%rax), %rax
	movl	56(%rdx), %edx
	movl	%edx, 64(%rax)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	$0, 16(%rax)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$0, 56(%rax)
	movl	$1, -4(%rbp)
.L67:
	addl	$1, -8(%rbp)
.L66:
	cmpl	$29, -8(%rbp)
	jle	.L68
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	EV_CeilingCrushStop, .-EV_CeilingCrushStop
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
