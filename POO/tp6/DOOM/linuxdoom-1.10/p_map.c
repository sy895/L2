	.file	"p_map.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 48
rcsid:
	.string	"$Id: p_map.c,v 1.5 1997/02/03 22:45:11 b1 Exp $"
	.globl	tmbbox
	.bss
	.align 16
	.type	tmbbox, @object
	.size	tmbbox, 16
tmbbox:
	.zero	16
	.globl	tmthing
	.align 8
	.type	tmthing, @object
	.size	tmthing, 8
tmthing:
	.zero	8
	.globl	tmflags
	.align 4
	.type	tmflags, @object
	.size	tmflags, 4
tmflags:
	.zero	4
	.globl	tmx
	.align 4
	.type	tmx, @object
	.size	tmx, 4
tmx:
	.zero	4
	.globl	tmy
	.align 4
	.type	tmy, @object
	.size	tmy, 4
tmy:
	.zero	4
	.globl	floatok
	.align 4
	.type	floatok, @object
	.size	floatok, 4
floatok:
	.zero	4
	.globl	tmfloorz
	.align 4
	.type	tmfloorz, @object
	.size	tmfloorz, 4
tmfloorz:
	.zero	4
	.globl	tmceilingz
	.align 4
	.type	tmceilingz, @object
	.size	tmceilingz, 4
tmceilingz:
	.zero	4
	.globl	tmdropoffz
	.align 4
	.type	tmdropoffz, @object
	.size	tmdropoffz, 4
tmdropoffz:
	.zero	4
	.globl	ceilingline
	.align 8
	.type	ceilingline, @object
	.size	ceilingline, 8
ceilingline:
	.zero	8
	.globl	spechit
	.align 32
	.type	spechit, @object
	.size	spechit, 64
spechit:
	.zero	64
	.globl	numspechit
	.align 4
	.type	numspechit, @object
	.size	numspechit, 4
numspechit:
	.zero	4
	.text
	.globl	PIT_StompThing
	.type	PIT_StompThing, @function
PIT_StompThing:
.LFB6:
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
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movq	-24(%rbp), %rax
	movl	104(%rax), %edx
	movq	tmthing(%rip), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	tmx(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	cmpl	%eax, -4(%rbp)
	jle	.L4
	movq	-24(%rbp), %rax
	movl	28(%rax), %eax
	movl	tmy(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	cmpl	%eax, -4(%rbp)
	jg	.L5
.L4:
	movl	$1, %eax
	jmp	.L3
.L5:
	movq	tmthing(%rip), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L6
	movl	$1, %eax
	jmp	.L3
.L6:
	movq	tmthing(%rip), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L7
	movl	gamemap(%rip), %eax
	cmpl	$30, %eax
	je	.L7
	movl	$0, %eax
	jmp	.L3
.L7:
	movq	tmthing(%rip), %rdx
	movq	tmthing(%rip), %rsi
	movq	-24(%rbp), %rax
	movl	$10000, %ecx
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	movl	$1, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	PIT_StompThing, .-PIT_StompThing
	.globl	P_TeleportMove
	.type	P_TeleportMove, @function
P_TeleportMove:
.LFB7:
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
	movl	%edx, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, tmthing(%rip)
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	movl	%eax, tmflags(%rip)
	movl	-44(%rbp), %eax
	movl	%eax, tmx(%rip)
	movl	-48(%rbp), %eax
	movl	%eax, tmy(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %edx
	movl	-48(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, tmbbox(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %eax
	movl	-48(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, 4+tmbbox(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, 12+tmbbox(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %eax
	movl	-44(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, 8+tmbbox(%rip)
	movl	-48(%rbp), %edx
	movl	-44(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointInSubsector@PLT
	movq	%rax, -8(%rbp)
	movq	$0, ceilingline(%rip)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, tmdropoffz(%rip)
	movl	tmdropoffz(%rip), %eax
	movl	%eax, tmfloorz(%rip)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, tmceilingz(%rip)
	movl	validcount(%rip), %eax
	addl	$1, %eax
	movl	%eax, validcount(%rip)
	movl	$0, numspechit(%rip)
	movl	8+tmbbox(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	-2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -24(%rbp)
	movl	12+tmbbox(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -20(%rbp)
	movl	4+tmbbox(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	-2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -16(%rbp)
	movl	tmbbox(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -12(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -32(%rbp)
	jmp	.L9
.L14:
	movl	-16(%rbp), %eax
	movl	%eax, -28(%rbp)
	jmp	.L10
.L13:
	movl	-28(%rbp), %ecx
	movl	-32(%rbp), %eax
	leaq	PIT_StompThing(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockThingsIterator@PLT
	testl	%eax, %eax
	jne	.L11
	movl	$0, %eax
	jmp	.L12
.L11:
	addl	$1, -28(%rbp)
.L10:
	movl	-28(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L13
	addl	$1, -32(%rbp)
.L9:
	movl	-32(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L14
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_UnsetThingPosition@PLT
	movl	tmfloorz(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 96(%rax)
	movl	tmceilingz(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 100(%rax)
	movq	-40(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 24(%rax)
	movq	-40(%rbp), %rax
	movl	-48(%rbp), %edx
	movl	%edx, 28(%rax)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_SetThingPosition@PLT
	movl	$1, %eax
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_TeleportMove, .-P_TeleportMove
	.globl	PIT_CheckLine
	.type	PIT_CheckLine, @function
PIT_CheckLine:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	12+tmbbox(%rip), %edx
	movq	-8(%rbp), %rax
	movl	44(%rax), %eax
	cmpl	%eax, %edx
	jle	.L16
	movl	8+tmbbox(%rip), %edx
	movq	-8(%rbp), %rax
	movl	48(%rax), %eax
	cmpl	%eax, %edx
	jge	.L16
	movl	tmbbox(%rip), %edx
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	%eax, %edx
	jle	.L16
	movl	4+tmbbox(%rip), %edx
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	%eax, %edx
	jl	.L17
.L16:
	movl	$1, %eax
	jmp	.L18
.L17:
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	tmbbox(%rip), %rax
	movq	%rax, %rdi
	call	P_BoxOnLineSide@PLT
	cmpl	$-1, %eax
	je	.L19
	movl	$1, %eax
	jmp	.L18
.L19:
	movq	-8(%rbp), %rax
	movq	64(%rax), %rax
	testq	%rax, %rax
	jne	.L20
	movl	$0, %eax
	jmp	.L18
.L20:
	movq	tmthing(%rip), %rax
	movl	160(%rax), %eax
	andl	$65536, %eax
	testl	%eax, %eax
	jne	.L21
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$1, %eax
	testl	%eax, %eax
	je	.L22
	movl	$0, %eax
	jmp	.L18
.L22:
	movq	tmthing(%rip), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L21
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$2, %eax
	testl	%eax, %eax
	je	.L21
	movl	$0, %eax
	jmp	.L18
.L21:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_LineOpening@PLT
	movl	opentop(%rip), %edx
	movl	tmceilingz(%rip), %eax
	cmpl	%eax, %edx
	jge	.L23
	movl	opentop(%rip), %eax
	movl	%eax, tmceilingz(%rip)
	movq	-8(%rbp), %rax
	movq	%rax, ceilingline(%rip)
.L23:
	movl	openbottom(%rip), %edx
	movl	tmfloorz(%rip), %eax
	cmpl	%eax, %edx
	jle	.L24
	movl	openbottom(%rip), %eax
	movl	%eax, tmfloorz(%rip)
.L24:
	movl	lowfloor(%rip), %edx
	movl	tmdropoffz(%rip), %eax
	cmpl	%eax, %edx
	jge	.L25
	movl	lowfloor(%rip), %eax
	movl	%eax, tmdropoffz(%rip)
.L25:
	movq	-8(%rbp), %rax
	movzwl	26(%rax), %eax
	testw	%ax, %ax
	je	.L26
	movl	numspechit(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	spechit(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rax, (%rcx,%rdx)
	movl	numspechit(%rip), %eax
	addl	$1, %eax
	movl	%eax, numspechit(%rip)
.L26:
	movl	$1, %eax
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	PIT_CheckLine, .-PIT_CheckLine
	.globl	PIT_CheckThing
	.type	PIT_CheckThing, @function
PIT_CheckThing:
.LFB9:
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
	movl	160(%rax), %eax
	andl	$7, %eax
	testl	%eax, %eax
	jne	.L28
	movl	$1, %eax
	jmp	.L29
.L28:
	movq	-24(%rbp), %rax
	movl	104(%rax), %edx
	movq	tmthing(%rip), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	tmx(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	cmpl	%eax, -12(%rbp)
	jle	.L30
	movq	-24(%rbp), %rax
	movl	28(%rax), %eax
	movl	tmy(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	cmpl	%eax, -12(%rbp)
	jg	.L31
.L30:
	movl	$1, %eax
	jmp	.L29
.L31:
	movq	tmthing(%rip), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L32
	movl	$1, %eax
	jmp	.L29
.L32:
	movq	tmthing(%rip), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	je	.L33
	call	P_Random@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$29, %eax
	addl	%eax, %edx
	andl	$7, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	leal	1(%rax), %edx
	movq	tmthing(%rip), %rax
	movq	136(%rax), %rax
	movl	76(%rax), %eax
	imull	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	tmthing(%rip), %rdx
	movq	tmthing(%rip), %rsi
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	movq	tmthing(%rip), %rax
	movl	160(%rax), %edx
	movq	tmthing(%rip), %rax
	andl	$-16777217, %edx
	movl	%edx, 160(%rax)
	movq	tmthing(%rip), %rdx
	movl	$0, 120(%rdx)
	movq	tmthing(%rip), %rax
	movl	120(%rdx), %edx
	movl	%edx, 116(%rax)
	movq	tmthing(%rip), %rdx
	movl	116(%rax), %eax
	movl	%eax, 112(%rdx)
	movq	tmthing(%rip), %rax
	movq	136(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, %edx
	movq	tmthing(%rip), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movl	$0, %eax
	jmp	.L29
.L33:
	movq	tmthing(%rip), %rax
	movl	160(%rax), %eax
	andl	$65536, %eax
	testl	%eax, %eax
	je	.L34
	movq	tmthing(%rip), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	addl	%ecx, %eax
	cmpl	%eax, %edx
	jle	.L35
	movl	$1, %eax
	jmp	.L29
.L35:
	movq	tmthing(%rip), %rax
	movl	32(%rax), %edx
	movq	tmthing(%rip), %rax
	movl	108(%rax), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	%eax, %edx
	jge	.L36
	movl	$1, %eax
	jmp	.L29
.L36:
	movq	tmthing(%rip), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L37
	movq	tmthing(%rip), %rax
	movq	176(%rax), %rax
	movl	128(%rax), %edx
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	%eax, %edx
	je	.L38
	movq	tmthing(%rip), %rax
	movq	176(%rax), %rax
	movl	128(%rax), %eax
	cmpl	$17, %eax
	jne	.L39
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$15, %eax
	je	.L38
.L39:
	movq	tmthing(%rip), %rax
	movq	176(%rax), %rax
	movl	128(%rax), %eax
	cmpl	$15, %eax
	jne	.L37
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$17, %eax
	jne	.L37
.L38:
	movq	tmthing(%rip), %rax
	movq	176(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L40
	movl	$1, %eax
	jmp	.L29
.L40:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	testl	%eax, %eax
	je	.L37
	movl	$0, %eax
	jmp	.L29
.L37:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L41
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	jmp	.L29
.L41:
	call	P_Random@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$29, %eax
	addl	%eax, %edx
	andl	$7, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	leal	1(%rax), %edx
	movq	tmthing(%rip), %rax
	movq	136(%rax), %rax
	movl	76(%rax), %eax
	imull	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	tmthing(%rip), %rax
	movq	176(%rax), %rdx
	movq	tmthing(%rip), %rsi
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	movl	$0, %eax
	jmp	.L29
.L34:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L42
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$2, %eax
	movl	%eax, -8(%rbp)
	movl	tmflags(%rip), %eax
	andl	$2048, %eax
	testl	%eax, %eax
	je	.L43
	movq	tmthing(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_TouchSpecialThing@PLT
.L43:
	cmpl	$0, -8(%rbp)
	sete	%al
	movzbl	%al, %eax
	jmp	.L29
.L42:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
.L29:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	PIT_CheckThing, .-PIT_CheckThing
	.globl	P_CheckPosition
	.type	P_CheckPosition, @function
P_CheckPosition:
.LFB10:
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
	movl	%edx, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, tmthing(%rip)
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	movl	%eax, tmflags(%rip)
	movl	-44(%rbp), %eax
	movl	%eax, tmx(%rip)
	movl	-48(%rbp), %eax
	movl	%eax, tmy(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %edx
	movl	-48(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, tmbbox(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %eax
	movl	-48(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, 4+tmbbox(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, 12+tmbbox(%rip)
	movq	tmthing(%rip), %rax
	movl	104(%rax), %eax
	movl	-44(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, 8+tmbbox(%rip)
	movl	-48(%rbp), %edx
	movl	-44(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointInSubsector@PLT
	movq	%rax, -8(%rbp)
	movq	$0, ceilingline(%rip)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, tmdropoffz(%rip)
	movl	tmdropoffz(%rip), %eax
	movl	%eax, tmfloorz(%rip)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, tmceilingz(%rip)
	movl	validcount(%rip), %eax
	addl	$1, %eax
	movl	%eax, validcount(%rip)
	movl	$0, numspechit(%rip)
	movl	tmflags(%rip), %eax
	andl	$4096, %eax
	testl	%eax, %eax
	je	.L45
	movl	$1, %eax
	jmp	.L46
.L45:
	movl	8+tmbbox(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	-2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -24(%rbp)
	movl	12+tmbbox(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -20(%rbp)
	movl	4+tmbbox(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	-2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -16(%rbp)
	movl	tmbbox(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -12(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -32(%rbp)
	jmp	.L47
.L51:
	movl	-16(%rbp), %eax
	movl	%eax, -28(%rbp)
	jmp	.L48
.L50:
	movl	-28(%rbp), %ecx
	movl	-32(%rbp), %eax
	leaq	PIT_CheckThing(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockThingsIterator@PLT
	testl	%eax, %eax
	jne	.L49
	movl	$0, %eax
	jmp	.L46
.L49:
	addl	$1, -28(%rbp)
.L48:
	movl	-28(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L50
	addl	$1, -32(%rbp)
.L47:
	movl	-32(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L51
	movl	8+tmbbox(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -24(%rbp)
	movl	12+tmbbox(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -20(%rbp)
	movl	4+tmbbox(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -16(%rbp)
	movl	tmbbox(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -12(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -32(%rbp)
	jmp	.L52
.L56:
	movl	-16(%rbp), %eax
	movl	%eax, -28(%rbp)
	jmp	.L53
.L55:
	movl	-28(%rbp), %ecx
	movl	-32(%rbp), %eax
	leaq	PIT_CheckLine(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockLinesIterator@PLT
	testl	%eax, %eax
	jne	.L54
	movl	$0, %eax
	jmp	.L46
.L54:
	addl	$1, -28(%rbp)
.L53:
	movl	-28(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L55
	addl	$1, -32(%rbp)
.L52:
	movl	-32(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L56
	movl	$1, %eax
.L46:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	P_CheckPosition, .-P_CheckPosition
	.globl	P_TryMove
	.type	P_TryMove, @function
P_TryMove:
.LFB11:
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
	movl	%edx, -48(%rbp)
	movl	$0, floatok(%rip)
	movl	-48(%rbp), %edx
	movl	-44(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_CheckPosition
	testl	%eax, %eax
	jne	.L58
	movl	$0, %eax
	jmp	.L59
.L58:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4096, %eax
	testl	%eax, %eax
	jne	.L60
	movl	tmceilingz(%rip), %edx
	movl	tmfloorz(%rip), %eax
	subl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	108(%rax), %eax
	cmpl	%eax, %edx
	jge	.L61
	movl	$0, %eax
	jmp	.L59
.L61:
	movl	$1, floatok(%rip)
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$32768, %eax
	testl	%eax, %eax
	jne	.L62
	movl	tmceilingz(%rip), %edx
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	108(%rax), %eax
	cmpl	%eax, %edx
	jge	.L62
	movl	$0, %eax
	jmp	.L59
.L62:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$32768, %eax
	testl	%eax, %eax
	jne	.L63
	movl	tmfloorz(%rip), %edx
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	cmpl	$1572864, %edx
	jle	.L63
	movl	$0, %eax
	jmp	.L59
.L63:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$17408, %eax
	testl	%eax, %eax
	jne	.L60
	movl	tmfloorz(%rip), %edx
	movl	tmdropoffz(%rip), %eax
	subl	%eax, %edx
	cmpl	$1572864, %edx
	jle	.L60
	movl	$0, %eax
	jmp	.L59
.L60:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_UnsetThingPosition@PLT
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, -20(%rbp)
	movl	tmfloorz(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 96(%rax)
	movl	tmceilingz(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 100(%rax)
	movq	-40(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 24(%rax)
	movq	-40(%rbp), %rax
	movl	-48(%rbp), %edx
	movl	%edx, 28(%rax)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_SetThingPosition@PLT
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$36864, %eax
	testl	%eax, %eax
	jne	.L64
	jmp	.L65
.L67:
	movl	numspechit(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	spechit(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movq	-8(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide@PLT
	movl	%eax, -16(%rbp)
	movq	-8(%rbp), %rdx
	movl	-20(%rbp), %ecx
	movl	-24(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide@PLT
	movl	%eax, -12(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.L65
	movq	-8(%rbp), %rax
	movzwl	26(%rax), %eax
	testw	%ax, %ax
	je	.L65
	movq	lines(%rip), %rax
	movq	-8(%rbp), %rdx
	subq	%rax, %rdx
	sarq	$3, %rdx
	movabsq	$3353953467947191203, %rax
	imulq	%rdx, %rax
	movl	%eax, %ecx
	movq	-40(%rbp), %rdx
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	%ecx, %edi
	call	P_CrossSpecialLine@PLT
.L65:
	movl	numspechit(%rip), %eax
	leal	-1(%rax), %edx
	movl	%edx, numspechit(%rip)
	testl	%eax, %eax
	jne	.L67
.L64:
	movl	$1, %eax
.L59:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	P_TryMove, .-P_TryMove
	.globl	P_ThingHeightClip
	.type	P_ThingHeightClip, @function
P_ThingHeightClip:
.LFB12:
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
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	sete	%al
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_CheckPosition
	movl	tmfloorz(%rip), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 96(%rax)
	movl	tmceilingz(%rip), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 100(%rax)
	cmpl	$0, -4(%rbp)
	je	.L69
	movq	-24(%rbp), %rax
	movl	96(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L70
.L69:
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	100(%rax), %eax
	cmpl	%eax, %edx
	jle	.L70
	movq	-24(%rbp), %rax
	movl	100(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
.L70:
	movq	-24(%rbp), %rax
	movl	100(%rax), %edx
	movq	-24(%rbp), %rax
	movl	96(%rax), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	cmpl	%eax, %edx
	jge	.L71
	movl	$0, %eax
	jmp	.L72
.L71:
	movl	$1, %eax
.L72:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	P_ThingHeightClip, .-P_ThingHeightClip
	.globl	bestslidefrac
	.bss
	.align 4
	.type	bestslidefrac, @object
	.size	bestslidefrac, 4
bestslidefrac:
	.zero	4
	.globl	secondslidefrac
	.align 4
	.type	secondslidefrac, @object
	.size	secondslidefrac, 4
secondslidefrac:
	.zero	4
	.globl	bestslideline
	.align 8
	.type	bestslideline, @object
	.size	bestslideline, 8
bestslideline:
	.zero	8
	.globl	secondslideline
	.align 8
	.type	secondslideline, @object
	.size	secondslideline, 8
secondslideline:
	.zero	8
	.globl	slidemo
	.align 8
	.type	slidemo, @object
	.size	slidemo, 8
slidemo:
	.zero	8
	.globl	tmxmove
	.align 4
	.type	tmxmove, @object
	.size	tmxmove, 4
tmxmove:
	.zero	4
	.globl	tmymove
	.align 4
	.type	tmymove, @object
	.size	tmymove, 4
tmymove:
	.zero	4
	.text
	.globl	P_HitSlideLine
	.type	P_HitSlideLine, @function
P_HitSlideLine:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movl	52(%rax), %eax
	testl	%eax, %eax
	jne	.L74
	movl	$0, tmymove(%rip)
	jmp	.L73
.L74:
	movq	-40(%rbp), %rax
	movl	52(%rax), %eax
	cmpl	$1, %eax
	jne	.L76
	movl	$0, tmxmove(%rip)
	jmp	.L73
.L76:
	movq	slidemo(%rip), %rax
	movl	28(%rax), %ecx
	movq	slidemo(%rip), %rax
	movl	24(%rax), %eax
	movq	-40(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide@PLT
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movl	20(%rax), %edx
	movq	-40(%rbp), %rax
	movl	16(%rax), %eax
	movl	%edx, %ecx
	movl	%eax, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -24(%rbp)
	cmpl	$1, -16(%rbp)
	jne	.L77
	addl	$-2147483648, -24(%rbp)
.L77:
	movl	tmymove(%rip), %edx
	movl	tmxmove(%rip), %eax
	movl	%edx, %ecx
	movl	%eax, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	subl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
	cmpl	$-2147483648, -20(%rbp)
	jbe	.L78
	addl	$-2147483648, -20(%rbp)
.L78:
	shrl	$19, -24(%rbp)
	shrl	$19, -20(%rbp)
	movl	tmymove(%rip), %edx
	movl	tmxmove(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	movl	%eax, -8(%rbp)
	movq	finecosine(%rip), %rax
	movl	-20(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movq	finecosine(%rip), %rax
	movl	-24(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, tmxmove(%rip)
	movl	-24(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, tmymove(%rip)
.L73:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	P_HitSlideLine, .-P_HitSlideLine
	.section	.rodata
	.align 8
.LC0:
	.string	"PTR_SlideTraverse: not a line?"
	.text
	.globl	PTR_SlideTraverse
	.type	PTR_SlideTraverse, @function
PTR_SlideTraverse:
.LFB14:
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
	movl	4(%rax), %eax
	testl	%eax, %eax
	jne	.L80
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L80:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L81
	movq	slidemo(%rip), %rax
	movl	28(%rax), %ecx
	movq	slidemo(%rip), %rax
	movl	24(%rax), %eax
	movq	-8(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide@PLT
	testl	%eax, %eax
	je	.L89
	movl	$1, %eax
	jmp	.L83
.L81:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_LineOpening@PLT
	movq	slidemo(%rip), %rax
	movl	108(%rax), %edx
	movl	openrange(%rip), %eax
	cmpl	%eax, %edx
	jg	.L90
	movl	opentop(%rip), %edx
	movq	slidemo(%rip), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movq	slidemo(%rip), %rax
	movl	108(%rax), %eax
	cmpl	%eax, %edx
	jl	.L91
	movl	openbottom(%rip), %edx
	movq	slidemo(%rip), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	cmpl	$1572864, %edx
	jg	.L92
	movl	$1, %eax
	jmp	.L83
.L89:
	nop
	jmp	.L84
.L90:
	nop
	jmp	.L84
.L91:
	nop
	jmp	.L84
.L92:
	nop
.L84:
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	bestslidefrac(%rip), %eax
	cmpl	%eax, %edx
	jge	.L88
	movl	bestslidefrac(%rip), %eax
	movl	%eax, secondslidefrac(%rip)
	movq	bestslideline(%rip), %rax
	movq	%rax, secondslideline(%rip)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, bestslidefrac(%rip)
	movq	-8(%rbp), %rax
	movq	%rax, bestslideline(%rip)
.L88:
	movl	$0, %eax
.L83:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	PTR_SlideTraverse, .-PTR_SlideTraverse
	.globl	P_SlideMove
	.type	P_SlideMove, @function
P_SlideMove:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, slidemo(%rip)
	movl	$0, -12(%rbp)
.L94:
	addl	$1, -12(%rbp)
	cmpl	$3, -12(%rbp)
	je	.L107
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	testl	%eax, %eax
	jle	.L97
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	jmp	.L98
.L97:
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -28(%rbp)
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
.L98:
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	jle	.L99
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	jmp	.L100
.L99:
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
.L100:
	movl	$65537, bestslidefrac(%rip)
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movl	-24(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movq	-40(%rbp), %rax
	movl	112(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%eax, %edx
	movl	-24(%rbp), %esi
	movl	-28(%rbp), %eax
	leaq	PTR_SlideTraverse(%rip), %r9
	movl	$1, %r8d
	movl	%eax, %edi
	call	P_PathTraverse@PLT
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movl	-24(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movq	-40(%rbp), %rax
	movl	112(%rax), %edx
	movl	-20(%rbp), %eax
	addl	%eax, %edx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	leaq	PTR_SlideTraverse(%rip), %r9
	movl	$1, %r8d
	movl	%eax, %edi
	call	P_PathTraverse@PLT
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movl	-16(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movq	-40(%rbp), %rax
	movl	112(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%eax, %edx
	movl	-16(%rbp), %esi
	movl	-28(%rbp), %eax
	leaq	PTR_SlideTraverse(%rip), %r9
	movl	$1, %r8d
	movl	%eax, %edi
	call	P_PathTraverse@PLT
	movl	bestslidefrac(%rip), %eax
	cmpl	$65537, %eax
	jne	.L101
	jmp	.L96
.L107:
	nop
	jmp	.L96
.L109:
	nop
.L96:
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove
	testl	%eax, %eax
	jne	.L108
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	addl	%eax, %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove
	jmp	.L108
.L101:
	movl	bestslidefrac(%rip), %eax
	subl	$2048, %eax
	movl	%eax, bestslidefrac(%rip)
	movl	bestslidefrac(%rip), %eax
	testl	%eax, %eax
	jle	.L104
	movl	bestslidefrac(%rip), %edx
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movl	bestslidefrac(%rip), %edx
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movl	-8(%rbp), %eax
	addl	%eax, %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove
	testl	%eax, %eax
	je	.L109
.L104:
	movl	bestslidefrac(%rip), %eax
	movl	$63488, %edx
	subl	%eax, %edx
	movl	%edx, bestslidefrac(%rip)
	movl	bestslidefrac(%rip), %eax
	cmpl	$65536, %eax
	jle	.L105
	movl	$65536, bestslidefrac(%rip)
.L105:
	movl	bestslidefrac(%rip), %eax
	testl	%eax, %eax
	jle	.L110
	movl	bestslidefrac(%rip), %edx
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, tmxmove(%rip)
	movl	bestslidefrac(%rip), %edx
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, tmymove(%rip)
	movq	bestslideline(%rip), %rax
	movq	%rax, %rdi
	call	P_HitSlideLine
	movl	tmxmove(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 112(%rax)
	movl	tmymove(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movl	tmymove(%rip), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movl	tmxmove(%rip), %eax
	addl	%eax, %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove
	testl	%eax, %eax
	jne	.L93
	jmp	.L94
.L108:
	nop
	jmp	.L93
.L110:
	nop
.L93:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	P_SlideMove, .-P_SlideMove
	.globl	linetarget
	.bss
	.align 8
	.type	linetarget, @object
	.size	linetarget, 8
linetarget:
	.zero	8
	.globl	shootthing
	.align 8
	.type	shootthing, @object
	.size	shootthing, 8
shootthing:
	.zero	8
	.globl	shootz
	.align 4
	.type	shootz, @object
	.size	shootz, 4
shootz:
	.zero	4
	.globl	la_damage
	.align 4
	.type	la_damage, @object
	.size	la_damage, 4
la_damage:
	.zero	4
	.globl	attackrange
	.align 4
	.type	attackrange, @object
	.size	attackrange, 4
attackrange:
	.zero	4
	.globl	aimslope
	.align 4
	.type	aimslope, @object
	.size	aimslope, 4
aimslope:
	.zero	4
	.text
	.globl	PTR_AimTraverse
	.type	PTR_AimTraverse, @function
PTR_AimTraverse:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	je	.L112
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L113
	movl	$0, %eax
	jmp	.L114
.L113:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_LineOpening@PLT
	movl	openbottom(%rip), %edx
	movl	opentop(%rip), %eax
	cmpl	%eax, %edx
	jl	.L115
	movl	$0, %eax
	jmp	.L114
.L115:
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movl	attackrange(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	56(%rax), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	64(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	je	.L116
	movl	openbottom(%rip), %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -20(%rbp)
	movl	bottomslope(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L116
	movl	-20(%rbp), %eax
	movl	%eax, bottomslope(%rip)
.L116:
	movq	-8(%rbp), %rax
	movq	56(%rax), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movq	64(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	je	.L117
	movl	opentop(%rip), %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -20(%rbp)
	movl	topslope(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L117
	movl	-20(%rbp), %eax
	movl	%eax, topslope(%rip)
.L117:
	movl	topslope(%rip), %edx
	movl	bottomslope(%rip), %eax
	cmpl	%eax, %edx
	jg	.L118
	movl	$0, %eax
	jmp	.L114
.L118:
	movl	$1, %eax
	jmp	.L114
.L112:
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	shootthing(%rip), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L119
	movl	$1, %eax
	jmp	.L114
.L119:
	movq	-16(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L120
	movl	$1, %eax
	jmp	.L114
.L120:
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movl	attackrange(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -24(%rbp)
	movq	-16(%rbp), %rax
	movl	32(%rax), %edx
	movq	-16(%rbp), %rax
	movl	108(%rax), %eax
	addl	%eax, %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -32(%rbp)
	movl	bottomslope(%rip), %eax
	cmpl	%eax, -32(%rbp)
	jge	.L121
	movl	$1, %eax
	jmp	.L114
.L121:
	movq	-16(%rbp), %rax
	movl	32(%rax), %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -28(%rbp)
	movl	topslope(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jle	.L122
	movl	$1, %eax
	jmp	.L114
.L122:
	movl	topslope(%rip), %eax
	cmpl	%eax, -32(%rbp)
	jle	.L123
	movl	topslope(%rip), %eax
	movl	%eax, -32(%rbp)
.L123:
	movl	bottomslope(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jge	.L124
	movl	bottomslope(%rip), %eax
	movl	%eax, -28(%rbp)
.L124:
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, aimslope(%rip)
	movq	-16(%rbp), %rax
	movq	%rax, linetarget(%rip)
	movl	$0, %eax
.L114:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	PTR_AimTraverse, .-PTR_AimTraverse
	.globl	PTR_ShootTraverse
	.type	PTR_ShootTraverse, @function
PTR_ShootTraverse:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	-72(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	je	.L126
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movzwl	26(%rax), %eax
	testw	%ax, %ax
	je	.L127
	movq	shootthing(%rip), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_ShootSpecialLine@PLT
.L127:
	movq	-24(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	je	.L142
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_LineOpening@PLT
	movq	-72(%rbp), %rax
	movl	(%rax), %edx
	movl	attackrange(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -64(%rbp)
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movq	64(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	je	.L130
	movl	openbottom(%rip), %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -36(%rbp)
	movl	aimslope(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jg	.L143
.L130:
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movq	64(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	je	.L131
	movl	opentop(%rip), %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -36(%rbp)
	movl	aimslope(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L144
.L131:
	movl	$1, %eax
	jmp	.L132
.L142:
	nop
	jmp	.L129
.L143:
	nop
	jmp	.L129
.L144:
	nop
.L129:
	movq	-72(%rbp), %rax
	movl	(%rax), %ebx
	movl	attackrange(%rip), %eax
	movl	%eax, %esi
	movl	$262144, %edi
	call	FixedDiv@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, -52(%rbp)
	movl	trace(%rip), %ebx
	movl	8+trace(%rip), %eax
	movl	-52(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -48(%rbp)
	movl	4+trace(%rip), %ebx
	movl	12+trace(%rip), %eax
	movl	-52(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -44(%rbp)
	movl	attackrange(%rip), %edx
	movl	-52(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movl	aimslope(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	shootz(%rip), %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L133
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -40(%rbp)
	jle	.L134
	movl	$0, %eax
	jmp	.L132
.L134:
	movq	-24(%rbp), %rax
	movq	64(%rax), %rax
	testq	%rax, %rax
	je	.L133
	movq	-24(%rbp), %rax
	movq	64(%rax), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L133
	movl	$0, %eax
	jmp	.L132
.L133:
	movl	-40(%rbp), %edx
	movl	-44(%rbp), %ecx
	movl	-48(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_SpawnPuff@PLT
	movl	$0, %eax
	jmp	.L132
.L126:
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	shootthing(%rip), %rax
	cmpq	%rax, -32(%rbp)
	jne	.L135
	movl	$1, %eax
	jmp	.L132
.L135:
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L136
	movl	$1, %eax
	jmp	.L132
.L136:
	movq	-72(%rbp), %rax
	movl	(%rax), %edx
	movl	attackrange(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -64(%rbp)
	movq	-32(%rbp), %rax
	movl	32(%rax), %edx
	movq	-32(%rbp), %rax
	movl	108(%rax), %eax
	addl	%eax, %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -60(%rbp)
	movl	aimslope(%rip), %eax
	cmpl	%eax, -60(%rbp)
	jge	.L137
	movl	$1, %eax
	jmp	.L132
.L137:
	movq	-32(%rbp), %rax
	movl	32(%rax), %edx
	movl	shootz(%rip), %eax
	subl	%eax, %edx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -56(%rbp)
	movl	aimslope(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jle	.L138
	movl	$1, %eax
	jmp	.L132
.L138:
	movq	-72(%rbp), %rax
	movl	(%rax), %ebx
	movl	attackrange(%rip), %eax
	movl	%eax, %esi
	movl	$655360, %edi
	call	FixedDiv@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, -52(%rbp)
	movl	trace(%rip), %ebx
	movl	8+trace(%rip), %eax
	movl	-52(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -48(%rbp)
	movl	4+trace(%rip), %ebx
	movl	12+trace(%rip), %eax
	movl	-52(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -44(%rbp)
	movl	attackrange(%rip), %edx
	movl	-52(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movl	aimslope(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	shootz(%rip), %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movl	160(%rax), %eax
	andl	$524288, %eax
	testl	%eax, %eax
	je	.L139
	movl	-40(%rbp), %edx
	movl	-44(%rbp), %ecx
	movl	-48(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_SpawnPuff@PLT
	jmp	.L140
.L139:
	movl	la_damage(%rip), %ecx
	movl	-40(%rbp), %edx
	movl	-44(%rbp), %esi
	movl	-48(%rbp), %eax
	movl	%eax, %edi
	call	P_SpawnBlood@PLT
.L140:
	movl	la_damage(%rip), %eax
	testl	%eax, %eax
	je	.L141
	movl	la_damage(%rip), %ecx
	movq	shootthing(%rip), %rdx
	movq	shootthing(%rip), %rsi
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
.L141:
	movl	$0, %eax
.L132:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	PTR_ShootTraverse, .-PTR_ShootTraverse
	.globl	P_AimLineAttack
	.type	P_AimLineAttack, @function
P_AimLineAttack:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	shrl	$19, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, shootthing(%rip)
	movq	-24(%rbp), %rax
	movl	24(%rax), %edx
	movl	-32(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	finecosine(%rip), %rax
	movl	-28(%rbp), %esi
	salq	$2, %rsi
	addq	%rsi, %rax
	movl	(%rax), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movl	-32(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	leaq	0(,%rax,4), %rsi
	leaq	finesine(%rip), %rax
	movl	(%rsi,%rax), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	sarl	%eax
	addl	%edx, %eax
	addl	$524288, %eax
	movl	%eax, shootz(%rip)
	movl	$40960, topslope(%rip)
	movl	$-40960, bottomslope(%rip)
	movl	-32(%rbp), %eax
	movl	%eax, attackrange(%rip)
	movq	$0, linetarget(%rip)
	movq	-24(%rbp), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	-4(%rbp), %ecx
	movl	-8(%rbp), %edx
	leaq	PTR_AimTraverse(%rip), %r9
	movl	$3, %r8d
	movl	%eax, %edi
	call	P_PathTraverse@PLT
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	je	.L146
	movl	aimslope(%rip), %eax
	jmp	.L147
.L146:
	movl	$0, %eax
.L147:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	P_AimLineAttack, .-P_AimLineAttack
	.globl	P_LineAttack
	.type	P_LineAttack, @function
P_LineAttack:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	%ecx, -36(%rbp)
	movl	%r8d, -40(%rbp)
	shrl	$19, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, shootthing(%rip)
	movl	-40(%rbp), %eax
	movl	%eax, la_damage(%rip)
	movq	-24(%rbp), %rax
	movl	24(%rax), %edx
	movl	-32(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	finecosine(%rip), %rax
	movl	-28(%rbp), %esi
	salq	$2, %rsi
	addq	%rsi, %rax
	movl	(%rax), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movl	-32(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	leaq	0(,%rax,4), %rsi
	leaq	finesine(%rip), %rax
	movl	(%rsi,%rax), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	sarl	%eax
	addl	%edx, %eax
	addl	$524288, %eax
	movl	%eax, shootz(%rip)
	movl	-32(%rbp), %eax
	movl	%eax, attackrange(%rip)
	movl	-36(%rbp), %eax
	movl	%eax, aimslope(%rip)
	movq	-24(%rbp), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	-4(%rbp), %ecx
	movl	-8(%rbp), %edx
	leaq	PTR_ShootTraverse(%rip), %r9
	movl	$3, %r8d
	movl	%eax, %edi
	call	P_PathTraverse@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	P_LineAttack, .-P_LineAttack
	.globl	usething
	.bss
	.align 8
	.type	usething, @object
	.size	usething, 8
usething:
	.zero	8
	.text
	.globl	PTR_UseTraverse
	.type	PTR_UseTraverse, @function
PTR_UseTraverse:
.LFB20:
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
	movq	8(%rax), %rax
	movzwl	26(%rax), %eax
	testw	%ax, %ax
	jne	.L150
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	P_LineOpening@PLT
	movl	openrange(%rip), %eax
	testl	%eax, %eax
	jg	.L151
	movq	usething(%rip), %rax
	movl	$81, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	$0, %eax
	jmp	.L152
.L151:
	movl	$1, %eax
	jmp	.L152
.L150:
	movl	$0, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	movq	usething(%rip), %rax
	movl	28(%rax), %ecx
	movq	usething(%rip), %rax
	movl	24(%rax), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide@PLT
	cmpl	$1, %eax
	jne	.L153
	movl	$1, -4(%rbp)
.L153:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rcx
	movq	usething(%rip), %rax
	movl	-4(%rbp), %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_UseSpecialLine@PLT
	movl	$0, %eax
.L152:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	PTR_UseTraverse, .-PTR_UseTraverse
	.globl	P_UseLines
	.type	P_UseLines, @function
P_UseLines:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, usething(%rip)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %eax
	movl	%eax, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	sall	$6, %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	sall	$6, %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %ecx
	movl	-8(%rbp), %edx
	movl	-12(%rbp), %esi
	movl	-16(%rbp), %eax
	leaq	PTR_UseTraverse(%rip), %r9
	movl	$1, %r8d
	movl	%eax, %edi
	call	P_PathTraverse@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	P_UseLines, .-P_UseLines
	.globl	bombsource
	.bss
	.align 8
	.type	bombsource, @object
	.size	bombsource, 8
bombsource:
	.zero	8
	.globl	bombspot
	.align 8
	.type	bombspot, @object
	.size	bombspot, 8
bombspot:
	.zero	8
	.globl	bombdamage
	.align 4
	.type	bombdamage, @object
	.size	bombdamage, 4
bombdamage:
	.zero	4
	.text
	.globl	PIT_RadiusAttack
	.type	PIT_RadiusAttack, @function
PIT_RadiusAttack:
.LFB22:
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
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L156
	movl	$1, %eax
	jmp	.L157
.L156:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	je	.L158
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$19, %eax
	jne	.L159
.L158:
	movl	$1, %eax
	jmp	.L157
.L159:
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movq	bombspot(%rip), %rax
	movl	24(%rax), %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %ecx
	movq	bombspot(%rip), %rax
	movl	28(%rax), %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, -12(%rbp)
	movq	-24(%rbp), %rax
	movl	104(%rax), %eax
	movl	-12(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$16, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L160
	movl	$0, -12(%rbp)
.L160:
	movl	bombdamage(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L161
	movl	$1, %eax
	jmp	.L157
.L161:
	movq	bombspot(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	je	.L162
	movl	bombdamage(%rip), %eax
	subl	-12(%rbp), %eax
	movl	%eax, %ecx
	movq	bombsource(%rip), %rdx
	movq	bombspot(%rip), %rsi
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
.L162:
	movl	$1, %eax
.L157:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	PIT_RadiusAttack, .-PIT_RadiusAttack
	.globl	P_RadiusAttack
	.type	P_RadiusAttack, @function
P_RadiusAttack:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	-52(%rbp), %eax
	addl	$2097152, %eax
	sall	$16, %eax
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movl	-20(%rbp), %eax
	addl	%eax, %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	subl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -12(%rbp)
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movl	-20(%rbp), %eax
	addl	%eax, %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -8(%rbp)
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	subl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -4(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, bombspot(%rip)
	movq	-48(%rbp), %rax
	movq	%rax, bombsource(%rip)
	movl	-52(%rbp), %eax
	movl	%eax, bombdamage(%rip)
	movl	-12(%rbp), %eax
	movl	%eax, -24(%rbp)
	jmp	.L164
.L167:
	movl	-4(%rbp), %eax
	movl	%eax, -28(%rbp)
	jmp	.L165
.L166:
	movl	-24(%rbp), %ecx
	movl	-28(%rbp), %eax
	leaq	PIT_RadiusAttack(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockThingsIterator@PLT
	addl	$1, -28(%rbp)
.L165:
	movl	-28(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L166
	addl	$1, -24(%rbp)
.L164:
	movl	-24(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L167
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	P_RadiusAttack, .-P_RadiusAttack
	.globl	crushchange
	.bss
	.align 4
	.type	crushchange, @object
	.size	crushchange, 4
crushchange:
	.zero	4
	.globl	nofit
	.align 4
	.type	nofit, @object
	.size	nofit, 4
nofit:
	.zero	4
	.text
	.globl	PIT_ChangeSector
	.type	PIT_ChangeSector, @function
PIT_ChangeSector:
.LFB24:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_ThingHeightClip
	testl	%eax, %eax
	je	.L169
	movl	$1, %eax
	jmp	.L170
.L169:
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jg	.L171
	movq	-40(%rbp), %rax
	movl	$895, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-3, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-40(%rbp), %rax
	movl	$0, 108(%rax)
	movq	-40(%rbp), %rax
	movl	$0, 104(%rax)
	movl	$1, %eax
	jmp	.L170
.L171:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$131072, %eax
	testl	%eax, %eax
	je	.L172
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj@PLT
	movl	$1, %eax
	jmp	.L170
.L172:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L173
	movl	$1, %eax
	jmp	.L170
.L173:
	movl	$1, nofit(%rip)
	movl	crushchange(%rip), %eax
	testl	%eax, %eax
	je	.L174
	movl	leveltime(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L174
	movq	-40(%rbp), %rax
	movl	$10, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	108(%rax), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	$38, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -24(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	sall	$12, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 112(%rax)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	sall	$12, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 116(%rax)
.L174:
	movl	$1, %eax
.L170:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	PIT_ChangeSector, .-PIT_ChangeSector
	.globl	P_ChangeSector
	.type	P_ChangeSector, @function
P_ChangeSector:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, nofit(%rip)
	movl	-28(%rbp), %eax
	movl	%eax, crushchange(%rip)
	movq	-24(%rbp), %rax
	movl	40(%rax), %eax
	movl	%eax, -8(%rbp)
	jmp	.L176
.L179:
	movq	-24(%rbp), %rax
	movl	36(%rax), %eax
	movl	%eax, -4(%rbp)
	jmp	.L177
.L178:
	movl	-4(%rbp), %ecx
	movl	-8(%rbp), %eax
	leaq	PIT_ChangeSector(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockThingsIterator@PLT
	addl	$1, -4(%rbp)
.L177:
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L178
	addl	$1, -8(%rbp)
.L176:
	movq	-24(%rbp), %rax
	movl	44(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jle	.L179
	movl	nofit(%rip), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	P_ChangeSector, .-P_ChangeSector
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
