	.file	"p_enemy.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_enemy.c,v 1.5 1997/02/03 22:45:11 b1 Exp $"
	.globl	opposite
	.data
	.align 32
	.type	opposite, @object
	.size	opposite, 36
opposite:
	.long	4
	.long	5
	.long	6
	.long	7
	.long	0
	.long	1
	.long	2
	.long	3
	.long	8
	.globl	diags
	.align 16
	.type	diags, @object
	.size	diags, 16
diags:
	.long	3
	.long	1
	.long	5
	.long	7
	.globl	soundtarget
	.bss
	.align 8
	.type	soundtarget, @object
	.size	soundtarget, 8
soundtarget:
	.zero	8
	.text
	.globl	P_RecursiveSound
	.type	P_RecursiveSound, @function
P_RecursiveSound:
.LFB6:
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
	movq	-40(%rbp), %rax
	movl	88(%rax), %edx
	movl	validcount(%rip), %eax
	cmpl	%eax, %edx
	jne	.L2
	movq	-40(%rbp), %rax
	movl	20(%rax), %edx
	movl	-44(%rbp), %eax
	addl	$1, %eax
	cmpl	%eax, %edx
	jle	.L12
.L2:
	movl	validcount(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 88(%rax)
	movl	-44(%rbp), %eax
	leal	1(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 20(%rax)
	movq	soundtarget(%rip), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 24(%rax)
	movl	$0, -20(%rbp)
	jmp	.L4
.L11:
	movq	-40(%rbp), %rax
	movq	120(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	je	.L13
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_LineOpening@PLT
	movl	openrange(%rip), %eax
	testl	%eax, %eax
	jle	.L14
	movq	sides(%rip), %rcx
	movq	-8(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	cmpq	%rax, -40(%rbp)
	jne	.L8
	movq	sides(%rip), %rcx
	movq	-8(%rbp), %rax
	movzwl	32(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L9
.L8:
	movq	sides(%rip), %rcx
	movq	-8(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	movq	%rax, -16(%rbp)
.L9:
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$64, %eax
	testl	%eax, %eax
	je	.L10
	cmpl	$0, -44(%rbp)
	jne	.L6
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_RecursiveSound
	jmp	.L6
.L10:
	movl	-44(%rbp), %edx
	movq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_RecursiveSound
	jmp	.L6
.L13:
	nop
	jmp	.L6
.L14:
	nop
.L6:
	addl	$1, -20(%rbp)
.L4:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L11
	jmp	.L1
.L12:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_RecursiveSound, .-P_RecursiveSound
	.globl	P_NoiseAlert
	.type	P_NoiseAlert, @function
P_NoiseAlert:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, soundtarget(%rip)
	movl	validcount(%rip), %eax
	addl	$1, %eax
	movl	%eax, validcount(%rip)
	movq	-16(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_RecursiveSound
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_NoiseAlert, .-P_NoiseAlert
	.globl	P_CheckMeleeRange
	.type	P_CheckMeleeRange, @function
P_CheckMeleeRange:
.LFB8:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	jne	.L17
	movl	$0, %eax
	jmp	.L18
.L17:
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	24(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movl	%esi, %eax
	subl	%ecx, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	movl	%eax, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	64(%rax), %eax
	addl	$2883583, %eax
	cmpl	%eax, -12(%rbp)
	jle	.L19
	movl	$0, %eax
	jmp	.L18
.L19:
	movq	-24(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	jne	.L20
	movl	$0, %eax
	jmp	.L18
.L20:
	movl	$1, %eax
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	P_CheckMeleeRange, .-P_CheckMeleeRange
	.globl	P_CheckMissileRange
	.type	P_CheckMissileRange, @function
P_CheckMissileRange:
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
	movq	176(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	jne	.L22
	movl	$0, %eax
	jmp	.L23
.L22:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$64, %eax
	testl	%eax, %eax
	je	.L24
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-65, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
	movl	$1, %eax
	jmp	.L23
.L24:
	movq	-24(%rbp), %rax
	movl	184(%rax), %eax
	testl	%eax, %eax
	je	.L25
	movl	$0, %eax
	jmp	.L23
.L25:
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	24(%rax), %esi
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	24(%rax), %ecx
	movl	%esi, %eax
	subl	%ecx, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	subl	$4194304, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	40(%rax), %eax
	testl	%eax, %eax
	jne	.L26
	subl	$8388608, -4(%rbp)
.L26:
	sarl	$16, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$3, %eax
	jne	.L27
	cmpl	$896, -4(%rbp)
	jle	.L27
	movl	$0, %eax
	jmp	.L23
.L27:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$5, %eax
	jne	.L28
	cmpl	$195, -4(%rbp)
	jg	.L29
	movl	$0, %eax
	jmp	.L23
.L29:
	sarl	-4(%rbp)
.L28:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	je	.L30
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$19, %eax
	je	.L30
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$18, %eax
	jne	.L31
.L30:
	sarl	-4(%rbp)
.L31:
	cmpl	$200, -4(%rbp)
	jle	.L32
	movl	$200, -4(%rbp)
.L32:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	jne	.L33
	cmpl	$160, -4(%rbp)
	jle	.L33
	movl	$160, -4(%rbp)
.L33:
	call	P_Random@PLT
	cmpl	%eax, -4(%rbp)
	jle	.L34
	movl	$0, %eax
	jmp	.L23
.L34:
	movl	$1, %eax
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	P_CheckMissileRange, .-P_CheckMissileRange
	.globl	xspeed
	.data
	.align 32
	.type	xspeed, @object
	.size	xspeed, 32
xspeed:
	.long	65536
	.long	47000
	.long	0
	.long	-47000
	.long	-65536
	.long	-47000
	.long	0
	.long	47000
	.globl	yspeed
	.align 32
	.type	yspeed, @object
	.size	yspeed, 32
yspeed:
	.long	0
	.long	47000
	.long	65536
	.long	47000
	.long	0
	.long	-47000
	.long	-65536
	.long	-47000
	.section	.rodata
.LC0:
	.string	"Weird actor->movedir!"
	.text
	.globl	P_Move
	.type	P_Move, @function
P_Move:
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
	movq	-40(%rbp), %rax
	movl	168(%rax), %eax
	cmpl	$8, %eax
	jne	.L36
	movl	$0, %eax
	jmp	.L37
.L36:
	movq	-40(%rbp), %rax
	movl	168(%rax), %eax
	cmpl	$7, %eax
	jbe	.L38
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L38:
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %edx
	movq	-40(%rbp), %rax
	movl	168(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rsi
	leaq	xspeed(%rip), %rax
	movl	(%rsi,%rax), %eax
	imull	%edx, %eax
	addl	%ecx, %eax
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %edx
	movq	-40(%rbp), %rax
	movl	168(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rsi
	leaq	yspeed(%rip), %rax
	movl	(%rsi,%rax), %eax
	imull	%edx, %eax
	addl	%ecx, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %edx
	movl	-20(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove@PLT
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jne	.L39
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16384, %eax
	testl	%eax, %eax
	je	.L40
	movl	floatok(%rip), %eax
	testl	%eax, %eax
	je	.L40
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movl	tmfloorz(%rip), %eax
	cmpl	%eax, %edx
	jge	.L41
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	leal	262144(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L42
.L41:
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 32(%rax)
.L42:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	orl	$2097152, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 160(%rax)
	movl	$1, %eax
	jmp	.L37
.L40:
	movl	numspechit(%rip), %eax
	testl	%eax, %eax
	jne	.L43
	movl	$0, %eax
	jmp	.L37
.L43:
	movq	-40(%rbp), %rax
	movl	$8, 168(%rax)
	movl	$0, -24(%rbp)
	jmp	.L44
.L46:
	movl	numspechit(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	spechit(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rcx
	movq	-40(%rbp), %rax
	movl	$0, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_UseSpecialLine@PLT
	testl	%eax, %eax
	je	.L44
	movl	$1, -24(%rbp)
.L44:
	movl	numspechit(%rip), %eax
	leal	-1(%rax), %edx
	movl	%edx, numspechit(%rip)
	testl	%eax, %eax
	jne	.L46
	movl	-24(%rbp), %eax
	jmp	.L37
.L39:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-2097153, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16384, %eax
	testl	%eax, %eax
	jne	.L47
	movq	-40(%rbp), %rax
	movl	96(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 32(%rax)
.L47:
	movl	$1, %eax
.L37:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	P_Move, .-P_Move
	.globl	P_TryWalk
	.type	P_TryWalk, @function
P_TryWalk:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_Move
	testl	%eax, %eax
	jne	.L49
	movl	$0, %eax
	jmp	.L50
.L49:
	call	P_Random@PLT
	andl	$15, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 172(%rax)
	movl	$1, %eax
.L50:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	P_TryWalk, .-P_TryWalk
	.section	.rodata
	.align 8
.LC1:
	.string	"P_NewChaseDir: called with no target"
	.text
	.globl	P_NewChaseDir
	.type	P_NewChaseDir, @function
P_NewChaseDir:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-56(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	jne	.L52
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L52:
	movq	-56(%rbp), %rax
	movl	168(%rax), %eax
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	opposite(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -32(%rbp)
	movq	-56(%rbp), %rax
	movq	176(%rax), %rax
	movl	24(%rax), %edx
	movq	-56(%rbp), %rax
	movl	24(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -28(%rbp)
	movq	-56(%rbp), %rax
	movq	176(%rax), %rax
	movl	28(%rax), %edx
	movq	-56(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -24(%rbp)
	cmpl	$655360, -28(%rbp)
	jle	.L53
	movl	$0, -16(%rbp)
	jmp	.L54
.L53:
	cmpl	$-655360, -28(%rbp)
	jge	.L55
	movl	$4, -16(%rbp)
	jmp	.L54
.L55:
	movl	$8, -16(%rbp)
.L54:
	cmpl	$-655360, -24(%rbp)
	jge	.L56
	movl	$6, -12(%rbp)
	jmp	.L57
.L56:
	cmpl	$655360, -24(%rbp)
	jle	.L58
	movl	$2, -12(%rbp)
	jmp	.L57
.L58:
	movl	$8, -12(%rbp)
.L57:
	movl	-16(%rbp), %eax
	cmpl	$8, %eax
	je	.L59
	movl	-12(%rbp), %eax
	cmpl	$8, %eax
	je	.L59
	movl	-24(%rbp), %eax
	sarl	$30, %eax
	andl	$2, %eax
	movl	%eax, %edx
	cmpl	$0, -28(%rbp)
	setg	%al
	movzbl	%al, %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	diags(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movl	168(%rax), %edx
	movl	-32(%rbp), %eax
	cmpl	%eax, %edx
	je	.L59
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L79
.L59:
	call	P_Random@PLT
	cmpl	$200, %eax
	jg	.L61
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	-28(%rbp), %eax
	movl	%eax, %ecx
	negl	%ecx
	cmovns	%ecx, %eax
	cmpl	%eax, %edx
	jle	.L62
.L61:
	movl	-16(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -12(%rbp)
.L62:
	movl	-16(%rbp), %eax
	cmpl	%eax, -32(%rbp)
	jne	.L63
	movl	$8, -16(%rbp)
.L63:
	movl	-12(%rbp), %eax
	cmpl	%eax, -32(%rbp)
	jne	.L64
	movl	$8, -12(%rbp)
.L64:
	movl	-16(%rbp), %eax
	cmpl	$8, %eax
	je	.L65
	movl	-16(%rbp), %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L80
.L65:
	movl	-12(%rbp), %eax
	cmpl	$8, %eax
	je	.L66
	movl	-12(%rbp), %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L81
.L66:
	cmpl	$8, -36(%rbp)
	je	.L67
	movl	-36(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L82
.L67:
	call	P_Random@PLT
	andl	$1, %eax
	testl	%eax, %eax
	je	.L68
	movl	$0, -40(%rbp)
	jmp	.L69
.L71:
	movl	-32(%rbp), %eax
	cmpl	%eax, -40(%rbp)
	je	.L70
	movq	-56(%rbp), %rax
	movl	-40(%rbp), %edx
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L83
.L70:
	addl	$1, -40(%rbp)
.L69:
	cmpl	$7, -40(%rbp)
	jle	.L71
	jmp	.L72
.L68:
	movl	$7, -40(%rbp)
	jmp	.L73
.L75:
	movl	-32(%rbp), %eax
	cmpl	%eax, -40(%rbp)
	je	.L74
	movq	-56(%rbp), %rax
	movl	-40(%rbp), %edx
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L84
.L74:
	subl	$1, -40(%rbp)
.L73:
	cmpl	$-1, -40(%rbp)
	jne	.L75
.L72:
	cmpl	$8, -32(%rbp)
	je	.L76
	movl	-32(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, 168(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_TryWalk
	testl	%eax, %eax
	jne	.L85
.L76:
	movq	-56(%rbp), %rax
	movl	$8, 168(%rax)
	jmp	.L51
.L79:
	nop
	jmp	.L51
.L80:
	nop
	jmp	.L51
.L81:
	nop
	jmp	.L51
.L82:
	nop
	jmp	.L51
.L83:
	nop
	jmp	.L51
.L84:
	nop
	jmp	.L51
.L85:
	nop
.L51:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L78
	call	__stack_chk_fail@PLT
.L78:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	P_NewChaseDir, .-P_NewChaseDir
	.globl	P_LookForPlayers
	.type	P_LookForPlayers, @function
P_LookForPlayers:
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
	movl	%esi, -44(%rbp)
	movq	-40(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -32(%rbp)
	movq	-40(%rbp), %rax
	movl	200(%rax), %eax
	subl	$1, %eax
	andl	$3, %eax
	movl	%eax, -28(%rbp)
.L95:
	movq	-40(%rbp), %rax
	movl	200(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L96
	movl	-32(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -32(%rbp)
	cmpl	$2, %eax
	je	.L89
	movq	-40(%rbp), %rax
	movl	200(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jne	.L90
.L89:
	movl	$0, %eax
	jmp	.L91
.L90:
	movq	-40(%rbp), %rax
	movl	200(%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	jle	.L97
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	je	.L98
	cmpl	$0, -44(%rbp)
	jne	.L94
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %ecx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -24(%rbp)
	cmpl	$1073741824, -24(%rbp)
	jbe	.L94
	cmpl	$-1073741825, -24(%rbp)
	ja	.L94
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movl	%esi, %eax
	subl	%ecx, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	movl	%eax, -20(%rbp)
	cmpl	$4194304, -20(%rbp)
	jg	.L99
.L94:
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 176(%rax)
	movl	$1, %eax
	jmp	.L91
.L96:
	nop
	jmp	.L88
.L97:
	nop
	jmp	.L88
.L98:
	nop
	jmp	.L88
.L99:
	nop
.L88:
	movq	-40(%rbp), %rax
	movl	200(%rax), %eax
	addl	$1, %eax
	andl	$3, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 200(%rax)
	jmp	.L95
.L91:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	P_LookForPlayers, .-P_LookForPlayers
	.globl	A_KeenDie
	.type	A_KeenDie, @function
A_KeenDie:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%rdi, -120(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-120(%rbp), %rax
	movq	%rax, %rdi
	call	A_Fall
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -112(%rbp)
	jmp	.L101
.L105:
	movq	-112(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L107
	movq	-112(%rbp), %rax
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	cmpq	-120(%rbp), %rax
	je	.L103
	movq	-104(%rbp), %rax
	movl	128(%rax), %edx
	movq	-120(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	%eax, %edx
	jne	.L103
	movq	-104(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jg	.L108
	jmp	.L103
.L107:
	nop
.L103:
	movq	-112(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -112(%rbp)
.L101:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -112(%rbp)
	jne	.L105
	movw	$666, -68(%rbp)
	leaq	-96(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L100
.L108:
	nop
.L100:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L106
	call	__stack_chk_fail@PLT
.L106:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	A_KeenDie, .-A_KeenDie
	.globl	A_Look
	.type	A_Look, @function
A_Look:
.LFB15:
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
	movl	$0, 188(%rax)
	movq	-24(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L110
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	je	.L110
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$32, %eax
	testl	%eax, %eax
	je	.L123
	movq	-24(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	jne	.L124
.L110:
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_LookForPlayers
	testl	%eax, %eax
	je	.L125
	jmp	.L112
.L123:
	nop
	jmp	.L112
.L124:
	nop
.L112:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	je	.L114
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %eax
	cmpl	$38, %eax
	jg	.L115
	cmpl	$36, %eax
	jge	.L116
	jmp	.L117
.L115:
	subl	$39, %eax
	cmpl	$1, %eax
	ja	.L117
	jmp	.L122
.L116:
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	36(%rdx), %eax
	movl	%eax, -12(%rbp)
	jmp	.L119
.L122:
	call	P_Random@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$31, %eax
	addl	%eax, %edx
	andl	$1, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	addl	$39, %eax
	movl	%eax, -12(%rbp)
	jmp	.L119
.L117:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %eax
	movl	%eax, -12(%rbp)
	nop
.L119:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$19, %eax
	je	.L120
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	jne	.L121
.L120:
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L114
.L121:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L114:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	12(%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L109
.L125:
	nop
.L109:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	A_Look, .-A_Look
	.globl	A_Chase
	.type	A_Chase, @function
A_Chase:
.LFB16:
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
	movl	184(%rax), %eax
	testl	%eax, %eax
	je	.L127
	movq	-24(%rbp), %rax
	movl	184(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 184(%rax)
.L127:
	movq	-24(%rbp), %rax
	movl	188(%rax), %eax
	testl	%eax, %eax
	je	.L128
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L129
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jg	.L130
.L129:
	movq	-24(%rbp), %rax
	movl	$0, 188(%rax)
	jmp	.L128
.L130:
	movq	-24(%rbp), %rax
	movl	188(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 188(%rax)
.L128:
	movq	-24(%rbp), %rax
	movl	168(%rax), %eax
	cmpl	$7, %eax
	jg	.L131
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	andl	$-536870912, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movl	56(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	168(%rax), %eax
	sall	$29, %eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jle	.L132
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	-536870912(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L131
.L132:
	cmpl	$0, -4(%rbp)
	jns	.L131
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	536870912(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
.L131:
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L133
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L134
.L133:
	movq	-24(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_LookForPlayers
	testl	%eax, %eax
	jne	.L147
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L126
.L134:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$128, %eax
	testl	%eax, %eax
	je	.L137
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andb	$127, %al
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
	movl	gameskill(%rip), %eax
	cmpl	$4, %eax
	je	.L148
	movl	fastparm(%rip), %eax
	testl	%eax, %eax
	jne	.L148
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_NewChaseDir
	jmp	.L148
.L137:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	40(%rax), %eax
	testl	%eax, %eax
	je	.L139
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMeleeRange
	testl	%eax, %eax
	je	.L139
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	24(%rax), %eax
	testl	%eax, %eax
	je	.L140
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	24(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L140:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	40(%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L126
.L139:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	44(%rax), %eax
	testl	%eax, %eax
	je	.L149
	movl	gameskill(%rip), %eax
	cmpl	$3, %eax
	ja	.L142
	movl	fastparm(%rip), %eax
	testl	%eax, %eax
	jne	.L142
	movq	-24(%rbp), %rax
	movl	172(%rax), %eax
	testl	%eax, %eax
	jne	.L150
.L142:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMissileRange
	testl	%eax, %eax
	je	.L151
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	44(%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	orb	$-128, %al
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
	jmp	.L126
.L149:
	nop
	jmp	.L141
.L150:
	nop
	jmp	.L141
.L151:
	nop
.L141:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L144
	movq	-24(%rbp), %rax
	movl	188(%rax), %eax
	testl	%eax, %eax
	jne	.L144
	movq	-24(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	jne	.L144
	movq	-24(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_LookForPlayers
	testl	%eax, %eax
	jne	.L152
.L144:
	movq	-24(%rbp), %rax
	movl	172(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 172(%rax)
	movq	-24(%rbp), %rax
	movl	172(%rax), %eax
	testl	%eax, %eax
	js	.L145
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_Move
	testl	%eax, %eax
	jne	.L146
.L145:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_NewChaseDir
.L146:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	80(%rax), %eax
	testl	%eax, %eax
	je	.L126
	call	P_Random@PLT
	cmpl	$2, %eax
	jg	.L126
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	80(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L126
.L147:
	nop
	jmp	.L126
.L148:
	nop
	jmp	.L126
.L152:
	nop
.L126:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	A_Chase, .-A_Chase
	.globl	A_FaceTarget
	.type	A_FaceTarget, @function
A_FaceTarget:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L156
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-33, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	28(%rax), %ecx
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	24(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movq	-24(%rbp), %rdx
	movl	%eax, 56(%rdx)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	160(%rax), %eax
	andl	$262144, %eax
	testl	%eax, %eax
	je	.L153
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	sall	$21, %edx
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L153
.L156:
	nop
.L153:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	A_FaceTarget, .-A_FaceTarget
	.globl	A_PosAttack
	.type	A_PosAttack, @function
A_PosAttack:
.LFB18:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L160
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	$134217728, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$20, %eax
	addl	%eax, -28(%rbp)
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	addl	$1, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-28(%rbp), %esi
	movl	-20(%rbp), %ecx
	movl	-24(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$134217728, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	jmp	.L157
.L160:
	nop
.L157:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	A_PosAttack, .-A_PosAttack
	.globl	A_SPosAttack
	.type	A_SPosAttack, @function
A_SPosAttack:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L166
	movq	-56(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-56(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %ecx
	movq	-56(%rbp), %rax
	movl	$134217728, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -28(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L164
.L165:
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	sall	$20, %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	addl	$1, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %ecx
	movl	-28(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$134217728, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	addl	$1, -36(%rbp)
.L164:
	cmpl	$2, -36(%rbp)
	jle	.L165
	jmp	.L161
.L166:
	nop
.L161:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	A_SPosAttack, .-A_SPosAttack
	.globl	A_CPosAttack
	.type	A_CPosAttack, @function
A_CPosAttack:
.LFB20:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L170
	movq	-40(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	$134217728, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -28(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	sall	$20, %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	addl	$1, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %ecx
	movl	-28(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$134217728, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	jmp	.L167
.L170:
	nop
.L167:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	A_CPosAttack, .-A_CPosAttack
	.globl	A_CPosRefire
	.type	A_CPosRefire, @function
A_CPosRefire:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	call	P_Random@PLT
	cmpl	$39, %eax
	jle	.L175
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L174
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jle	.L174
	movq	-8(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	jne	.L171
.L174:
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	12(%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L171
.L175:
	nop
.L171:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	A_CPosRefire, .-A_CPosRefire
	.globl	A_SpidRefire
	.type	A_SpidRefire, @function
A_SpidRefire:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	call	P_Random@PLT
	cmpl	$9, %eax
	jle	.L180
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L179
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jle	.L179
	movq	-8(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	jne	.L176
.L179:
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	12(%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L176
.L180:
	nop
.L176:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	A_SpidRefire, .-A_SpidRefire
	.globl	A_BspiAttack
	.type	A_BspiAttack, @function
A_BspiAttack:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L184
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-8(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-8(%rbp), %rax
	movl	$36, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	jmp	.L181
.L184:
	nop
.L181:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	A_BspiAttack, .-A_BspiAttack
	.globl	A_TroopAttack
	.type	A_TroopAttack, @function
A_TroopAttack:
.LFB24:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L189
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMeleeRange
	testl	%eax, %eax
	je	.L188
	movq	-24(%rbp), %rax
	movl	$55, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
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
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L185
.L188:
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$31, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	jmp	.L185
.L189:
	nop
.L185:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	A_TroopAttack, .-A_TroopAttack
	.globl	A_SargAttack
	.type	A_SargAttack, @function
A_SargAttack:
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
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L193
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMeleeRange
	testl	%eax, %eax
	je	.L190
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	1(%rdx), %eax
	sall	$2, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L190
.L193:
	nop
.L190:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	A_SargAttack, .-A_SargAttack
	.globl	A_HeadAttack
	.type	A_HeadAttack, @function
A_HeadAttack:
.LFB26:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L198
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMeleeRange
	testl	%eax, %eax
	je	.L197
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$715827883, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	addl	$1, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L194
.L197:
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$32, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	jmp	.L194
.L198:
	nop
.L194:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	A_HeadAttack, .-A_HeadAttack
	.globl	A_CyberAttack
	.type	A_CyberAttack, @function
A_CyberAttack:
.LFB27:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L202
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-8(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-8(%rbp), %rax
	movl	$33, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	jmp	.L199
.L202:
	nop
.L199:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	A_CyberAttack, .-A_CyberAttack
	.globl	A_BruisAttack
	.type	A_BruisAttack, @function
A_BruisAttack:
.LFB28:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L207
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMeleeRange
	testl	%eax, %eax
	je	.L206
	movq	-24(%rbp), %rax
	movl	$55, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
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
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L203
.L206:
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$16, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	jmp	.L203
.L207:
	nop
.L203:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	A_BruisAttack, .-A_BruisAttack
	.globl	A_SkelMissile
	.type	A_SkelMissile, @function
A_SkelMissile:
.LFB29:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L211
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	leal	1048576(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$6, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	leal	-1048576(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	24(%rax), %edx
	movq	-8(%rbp), %rax
	movl	112(%rax), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 24(%rax)
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 28(%rax)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 216(%rax)
	jmp	.L208
.L211:
	nop
.L208:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	A_SkelMissile, .-A_SkelMissile
	.globl	TRACEANGLE
	.data
	.align 4
	.type	TRACEANGLE, @object
	.size	TRACEANGLE, 4
TRACEANGLE:
	.long	201326592
	.text
	.globl	A_Tracer
	.type	A_Tracer, @function
A_Tracer:
.LFB30:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	gametic(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L222
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_SpawnPuff@PLT
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	movq	-40(%rbp), %rdx
	movl	28(%rdx), %ecx
	movq	-40(%rbp), %rdx
	movl	116(%rdx), %edx
	movl	%ecx, %esi
	subl	%edx, %esi
	movq	-40(%rbp), %rdx
	movl	24(%rdx), %ecx
	movq	-40(%rbp), %rdx
	movl	112(%rdx), %edx
	movl	%ecx, %edi
	subl	%edx, %edi
	movl	$7, %ecx
	movl	%eax, %edx
	call	P_SpawnMobj@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$65536, 120(%rax)
	call	P_Random@PLT
	andl	$3, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	movl	144(%rax), %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-16(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	jg	.L215
	movq	-16(%rbp), %rax
	movl	$1, 144(%rax)
.L215:
	movq	-40(%rbp), %rax
	movq	216(%rax), %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L223
	movq	-8(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jle	.L223
	movq	-8(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	cmpl	%eax, -24(%rbp)
	je	.L218
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	cmpl	$-2147483648, %edx
	jbe	.L219
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	TRACEANGLE(%rip), %edx
	movl	%edx, %ecx
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	testl	%eax, %eax
	js	.L218
	movq	-40(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, 56(%rax)
	jmp	.L218
.L219:
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	TRACEANGLE(%rip), %edx
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	cmpl	$-2147483648, %edx
	jbe	.L218
	movq	-40(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, 56(%rax)
.L218:
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -24(%rbp)
	movq	finecosine(%rip), %rax
	movl	-24(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-40(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-24(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-40(%rbp), %rdx
	movl	%eax, 116(%rdx)
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	24(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movl	%esi, %eax
	subl	%ecx, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %edi
	movl	-28(%rbp), %eax
	cltd
	idivl	%edi
	movl	%eax, -28(%rbp)
	cmpl	$0, -28(%rbp)
	jg	.L220
	movl	$1, -28(%rbp)
.L220:
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	leal	2621440(%rax), %edx
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	cltd
	idivl	-28(%rbp)
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L221
	movq	-40(%rbp), %rax
	movl	120(%rax), %eax
	leal	-8192(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 120(%rax)
	jmp	.L212
.L221:
	movq	-40(%rbp), %rax
	movl	120(%rax), %eax
	leal	8192(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 120(%rax)
	jmp	.L212
.L222:
	nop
	jmp	.L212
.L223:
	nop
.L212:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE30:
	.size	A_Tracer, .-A_Tracer
	.globl	A_SkelWhoosh
	.type	A_SkelWhoosh, @function
A_SkelWhoosh:
.LFB31:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L227
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-8(%rbp), %rax
	movl	$56, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L224
.L227:
	nop
.L224:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE31:
	.size	A_SkelWhoosh, .-A_SkelWhoosh
	.globl	A_SkelFist
	.type	A_SkelFist, @function
A_SkelFist:
.LFB32:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L231
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMeleeRange
	testl	%eax, %eax
	je	.L228
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	addl	$1, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	$53, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L228
.L231:
	nop
.L228:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE32:
	.size	A_SkelFist, .-A_SkelFist
	.globl	corpsehit
	.bss
	.align 8
	.type	corpsehit, @object
	.size	corpsehit, 8
corpsehit:
	.zero	8
	.globl	vileobj
	.align 8
	.type	vileobj, @object
	.size	vileobj, 8
vileobj:
	.zero	8
	.globl	viletryx
	.align 4
	.type	viletryx, @object
	.size	viletryx, 4
viletryx:
	.zero	4
	.globl	viletryy
	.align 4
	.type	viletryy, @object
	.size	viletryy, 4
viletryy:
	.zero	4
	.text
	.globl	PIT_VileCheck
	.type	PIT_VileCheck, @function
PIT_VileCheck:
.LFB33:
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
	andl	$1048576, %eax
	testl	%eax, %eax
	jne	.L233
	movl	$1, %eax
	jmp	.L234
.L233:
	movq	-24(%rbp), %rax
	movl	144(%rax), %eax
	cmpl	$-1, %eax
	je	.L235
	movl	$1, %eax
	jmp	.L234
.L235:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	88(%rax), %eax
	testl	%eax, %eax
	jne	.L236
	movl	$1, %eax
	jmp	.L234
.L236:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	64(%rax), %edx
	movl	340+mobjinfo(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	viletryx(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jl	.L237
	movq	-24(%rbp), %rax
	movl	28(%rax), %eax
	movl	viletryy(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jge	.L238
.L237:
	movl	$1, %eax
	jmp	.L234
.L238:
	movq	-24(%rbp), %rax
	movq	%rax, corpsehit(%rip)
	movq	corpsehit(%rip), %rax
	movl	$0, 116(%rax)
	movq	corpsehit(%rip), %rdx
	movl	116(%rax), %eax
	movl	%eax, 112(%rdx)
	movq	corpsehit(%rip), %rax
	movl	108(%rax), %edx
	movq	corpsehit(%rip), %rax
	sall	$2, %edx
	movl	%edx, 108(%rax)
	movq	corpsehit(%rip), %rax
	movl	28(%rax), %edx
	movq	corpsehit(%rip), %rax
	movl	24(%rax), %ecx
	movq	corpsehit(%rip), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_CheckPosition@PLT
	movl	%eax, -4(%rbp)
	movq	corpsehit(%rip), %rax
	movl	108(%rax), %edx
	movq	corpsehit(%rip), %rax
	sarl	$2, %edx
	movl	%edx, 108(%rax)
	cmpl	$0, -4(%rbp)
	jne	.L239
	movl	$1, %eax
	jmp	.L234
.L239:
	movl	$0, %eax
.L234:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE33:
	.size	PIT_VileCheck, .-PIT_VileCheck
	.globl	A_VileChase
	.type	A_VileChase, @function
A_VileChase:
.LFB34:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	-56(%rbp), %rax
	movl	168(%rax), %eax
	cmpl	$8, %eax
	je	.L241
	movq	-56(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-56(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %edx
	movq	-56(%rbp), %rax
	movl	168(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rsi
	leaq	xspeed(%rip), %rax
	movl	(%rsi,%rax), %eax
	imull	%edx, %eax
	addl	%ecx, %eax
	movl	%eax, viletryx(%rip)
	movq	-56(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-56(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %edx
	movq	-56(%rbp), %rax
	movl	168(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rsi
	leaq	yspeed(%rip), %rax
	movl	(%rsi,%rax), %eax
	imull	%edx, %eax
	addl	%ecx, %eax
	movl	%eax, viletryy(%rip)
	movl	viletryx(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	-4194304(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -32(%rbp)
	movl	viletryx(%rip), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	4194304(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -28(%rbp)
	movl	viletryy(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	-4194304(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -24(%rbp)
	movl	viletryy(%rip), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	4194304(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -20(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, vileobj(%rip)
	movl	-32(%rbp), %eax
	movl	%eax, -40(%rbp)
	jmp	.L242
.L247:
	movl	-24(%rbp), %eax
	movl	%eax, -36(%rbp)
	jmp	.L243
.L246:
	movl	-36(%rbp), %ecx
	movl	-40(%rbp), %eax
	leaq	PIT_VileCheck(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockThingsIterator@PLT
	testl	%eax, %eax
	jne	.L244
	movq	-56(%rbp), %rax
	movq	176(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	corpsehit(%rip), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 176(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-56(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-56(%rbp), %rax
	movl	$266, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	corpsehit(%rip), %rax
	movl	$31, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	corpsehit(%rip), %rax
	movq	136(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	88(%rax), %eax
	movl	%eax, %edx
	movq	corpsehit(%rip), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	corpsehit(%rip), %rax
	movl	108(%rax), %edx
	movq	corpsehit(%rip), %rax
	sall	$2, %edx
	movl	%edx, 108(%rax)
	movq	corpsehit(%rip), %rax
	movq	-8(%rbp), %rdx
	movl	84(%rdx), %edx
	movl	%edx, 160(%rax)
	movq	corpsehit(%rip), %rax
	movq	-8(%rbp), %rdx
	movl	8(%rdx), %edx
	movl	%edx, 164(%rax)
	movq	corpsehit(%rip), %rax
	movq	$0, 176(%rax)
	jmp	.L240
.L244:
	addl	$1, -36(%rbp)
.L243:
	movl	-36(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L246
	addl	$1, -40(%rbp)
.L242:
	movl	-40(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle	.L247
.L241:
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	A_Chase
.L240:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE34:
	.size	A_VileChase, .-A_VileChase
	.globl	A_VileStart
	.type	A_VileStart, @function
A_VileStart:
.LFB35:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$54, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE35:
	.size	A_VileStart, .-A_VileStart
	.globl	A_StartFire
	.type	A_StartFire, @function
A_StartFire:
.LFB36:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$92, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Fire
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE36:
	.size	A_StartFire, .-A_StartFire
	.globl	A_FireCrackle
	.type	A_FireCrackle, @function
A_FireCrackle:
.LFB37:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$91, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Fire
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE37:
	.size	A_FireCrackle, .-A_FireCrackle
	.globl	A_Fire
	.type	A_Fire, @function
A_Fire:
.LFB38:
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
	movq	216(%rax), %rax
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	je	.L255
	movq	-40(%rbp), %rax
	movq	176(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	je	.L256
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_UnsetThingPosition@PLT
	movq	-24(%rbp), %rax
	movl	24(%rax), %ebx
	movq	finecosine(%rip), %rax
	movl	-28(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$1572864, %edi
	call	FixedMul@PLT
	leal	(%rbx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 24(%rax)
	movq	-24(%rbp), %rax
	movl	28(%rax), %ebx
	movl	-28(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	movl	$1572864, %edi
	call	FixedMul@PLT
	leal	(%rbx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 28(%rax)
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_SetThingPosition@PLT
	jmp	.L251
.L255:
	nop
	jmp	.L251
.L256:
	nop
.L251:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE38:
	.size	A_Fire, .-A_Fire
	.globl	A_VileTarget
	.type	A_VileTarget, @function
A_VileTarget:
.LFB39:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L260
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	24(%rax), %esi
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	24(%rax), %eax
	movl	$4, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 216(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 216(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Fire
	jmp	.L257
.L260:
	nop
.L257:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE39:
	.size	A_VileTarget, .-A_VileTarget
	.globl	A_VileAttack
	.type	A_VileAttack, @function
A_VileAttack:
.LFB40:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L266
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-40(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_CheckSight@PLT
	testl	%eax, %eax
	je	.L267
	movq	-40(%rbp), %rax
	movl	$82, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-40(%rbp), %rax
	movq	176(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	-40(%rbp), %rsi
	movl	$20, %ecx
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	movq	-40(%rbp), %rax
	movq	176(%rax), %rax
	movq	136(%rax), %rax
	movl	72(%rax), %esi
	movq	-40(%rbp), %rax
	movq	176(%rax), %rcx
	movl	$65536000, %eax
	cltd
	idivl	%esi
	movl	%eax, 120(%rcx)
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movq	216(%rax), %rax
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	je	.L268
	movq	-40(%rbp), %rax
	movq	176(%rax), %rax
	movl	24(%rax), %ebx
	movq	finecosine(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$1572864, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 24(%rax)
	movq	-40(%rbp), %rax
	movq	176(%rax), %rax
	movl	28(%rax), %ebx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	movl	$1572864, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 28(%rax)
	movq	-40(%rbp), %rcx
	movq	-24(%rbp), %rax
	movl	$70, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_RadiusAttack@PLT
	jmp	.L261
.L266:
	nop
	jmp	.L261
.L267:
	nop
	jmp	.L261
.L268:
	nop
.L261:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE40:
	.size	A_VileAttack, .-A_VileAttack
	.globl	A_FatRaise
	.type	A_FatRaise, @function
A_FatRaise:
.LFB41:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-8(%rbp), %rax
	movl	$99, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE41:
	.size	A_FatRaise, .-A_FatRaise
	.globl	A_FatAttack1
	.type	A_FatAttack1, @function
A_FatAttack1:
.LFB42:
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
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	134217728(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$9, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$9, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	134217728(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 116(%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE42:
	.size	A_FatAttack1, .-A_FatAttack1
	.globl	A_FatAttack2
	.type	A_FatAttack2, @function
A_FatAttack2:
.LFB43:
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
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	-134217728(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$9, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$9, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	-268435456(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 116(%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE43:
	.size	A_FatAttack2, .-A_FatAttack2
	.globl	A_FatAttack3
	.type	A_FatAttack3, @function
A_FatAttack3:
.LFB44:
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
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$9, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	-67108864(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 116(%rdx)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$9, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	67108864(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 116(%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE44:
	.size	A_FatAttack3, .-A_FatAttack3
	.globl	A_SkullAttack
	.type	A_SkullAttack, @function
A_SkullAttack:
.LFB45:
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
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L277
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	orl	$16777216, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	24(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-12(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$1310720, %edi
	call	FixedMul@PLT
	movq	-24(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-12(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	movl	$1310720, %edi
	call	FixedMul@PLT
	movq	-24(%rbp), %rdx
	movl	%eax, 116(%rdx)
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	24(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movl	%esi, %eax
	subl	%ecx, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$19, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	jg	.L276
	movl	$1, -16(%rbp)
.L276:
	movq	-8(%rbp), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	108(%rax), %eax
	sarl	%eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	cltd
	idivl	-16(%rbp)
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
	jmp	.L273
.L277:
	nop
.L273:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE45:
	.size	A_SkullAttack, .-A_SkullAttack
	.globl	A_PainShootSkull
	.type	A_PainShootSkull, @function
A_PainShootSkull:
.LFB46:
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
	movl	%esi, -76(%rbp)
	movl	$0, -56(%rbp)
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -32(%rbp)
	jmp	.L279
.L281:
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L280
	movq	-32(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$18, %eax
	jne	.L280
	addl	$1, -56(%rbp)
.L280:
	movq	-32(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -32(%rbp)
.L279:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -32(%rbp)
	jne	.L281
	cmpl	$20, -56(%rbp)
	jg	.L285
	movl	-76(%rbp), %eax
	shrl	$19, %eax
	movl	%eax, -52(%rbp)
	movq	-72(%rbp), %rax
	movq	136(%rax), %rax
	movl	64(%rax), %edx
	movl	1720+mobjinfo(%rip), %eax
	addl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	addl	$262144, %eax
	movl	%eax, -48(%rbp)
	movq	-72(%rbp), %rax
	movl	24(%rax), %ebx
	movq	finecosine(%rip), %rax
	movl	-52(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -44(%rbp)
	movq	-72(%rbp), %rax
	movl	28(%rax), %ebx
	movl	-52(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -40(%rbp)
	movq	-72(%rbp), %rax
	movl	32(%rax), %eax
	addl	$524288, %eax
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %edx
	movl	-40(%rbp), %esi
	movl	-44(%rbp), %eax
	movl	$18, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove@PLT
	testl	%eax, %eax
	jne	.L284
	movq	-72(%rbp), %rdx
	movq	-72(%rbp), %rsi
	movq	-24(%rbp), %rax
	movl	$10000, %ecx
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L278
.L284:
	movq	-72(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 176(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	A_SkullAttack
	jmp	.L278
.L285:
	nop
.L278:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE46:
	.size	A_PainShootSkull, .-A_PainShootSkull
	.globl	A_PainAttack
	.type	A_PainAttack, @function
A_PainAttack:
.LFB47:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L289
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_FaceTarget
	movq	-8(%rbp), %rax
	movl	56(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	A_PainShootSkull
	jmp	.L286
.L289:
	nop
.L286:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE47:
	.size	A_PainAttack, .-A_PainAttack
	.globl	A_PainDie
	.type	A_PainDie, @function
A_PainDie:
.LFB48:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Fall
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	1073741824(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	A_PainShootSkull
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	-2147483648(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	A_PainShootSkull
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	leal	-1073741824(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	A_PainShootSkull
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE48:
	.size	A_PainDie, .-A_PainDie
	.globl	A_Scream
	.type	A_Scream, @function
A_Scream:
.LFB49:
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
	movq	136(%rax), %rax
	movl	56(%rax), %eax
	cmpl	$63, %eax
	jg	.L292
	cmpl	$62, %eax
	jge	.L293
	testl	%eax, %eax
	je	.L300
	testl	%eax, %eax
	js	.L292
	subl	$59, %eax
	cmpl	$2, %eax
	ja	.L292
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	59(%rdx), %eax
	movl	%eax, -4(%rbp)
	jmp	.L297
.L293:
	call	P_Random@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$31, %eax
	addl	%eax, %edx
	andl	$1, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	addl	$62, %eax
	movl	%eax, -4(%rbp)
	jmp	.L297
.L292:
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	56(%rax), %eax
	movl	%eax, -4(%rbp)
	nop
.L297:
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$19, %eax
	je	.L298
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	jne	.L299
.L298:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L291
.L299:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L291
.L300:
	nop
.L291:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE49:
	.size	A_Scream, .-A_Scream
	.globl	A_XScream
	.type	A_XScream, @function
A_XScream:
.LFB50:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$31, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE50:
	.size	A_XScream, .-A_XScream
	.globl	A_Pain
	.type	A_Pain, @function
A_Pain:
.LFB51:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	je	.L304
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	36(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L304:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE51:
	.size	A_Pain, .-A_Pain
	.globl	A_Fall
	.type	A_Fall, @function
A_Fall:
.LFB52:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-3, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 160(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE52:
	.size	A_Fall, .-A_Fall
	.globl	A_Explode
	.type	A_Explode, @function
A_Explode:
.LFB53:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	176(%rax), %rcx
	movq	-8(%rbp), %rax
	movl	$128, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_RadiusAttack@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE53:
	.size	A_Explode, .-A_Explode
	.globl	A_BossDeath
	.type	A_BossDeath, @function
A_BossDeath:
.LFB54:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%rdi, -136(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L308
	movl	gamemap(%rip), %eax
	cmpl	$7, %eax
	jne	.L348
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$8, %eax
	je	.L311
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$20, %eax
	je	.L311
	jmp	.L307
.L308:
	movl	gameepisode(%rip), %eax
	cmpl	$4, %eax
	je	.L312
	cmpl	$4, %eax
	jg	.L313
	cmpl	$3, %eax
	je	.L314
	cmpl	$3, %eax
	jg	.L313
	cmpl	$1, %eax
	je	.L315
	cmpl	$2, %eax
	je	.L316
	jmp	.L313
.L315:
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	jne	.L349
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$15, %eax
	je	.L350
	jmp	.L307
.L316:
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	jne	.L351
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	je	.L352
	jmp	.L307
.L314:
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	jne	.L353
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$19, %eax
	je	.L354
	jmp	.L307
.L312:
	movl	gamemap(%rip), %eax
	cmpl	$6, %eax
	je	.L323
	cmpl	$8, %eax
	je	.L324
	jmp	.L307
.L323:
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$21, %eax
	je	.L355
	jmp	.L307
.L324:
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$19, %eax
	jne	.L356
	jmp	.L327
.L355:
	nop
.L327:
	jmp	.L311
.L313:
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	jne	.L357
	jmp	.L311
.L350:
	nop
	jmp	.L311
.L352:
	nop
	jmp	.L311
.L354:
	nop
.L311:
	movl	$0, -116(%rbp)
	jmp	.L330
.L333:
	movl	-116(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L331
	movl	-116(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	36+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jg	.L358
.L331:
	addl	$1, -116(%rbp)
.L330:
	cmpl	$3, -116(%rbp)
	jle	.L333
	jmp	.L332
.L358:
	nop
.L332:
	cmpl	$4, -116(%rbp)
	je	.L359
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -112(%rbp)
	jmp	.L335
.L338:
	movq	-112(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L360
	movq	-112(%rbp), %rax
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	cmpq	-136(%rbp), %rax
	je	.L337
	movq	-104(%rbp), %rax
	movl	128(%rax), %edx
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	%eax, %edx
	jne	.L337
	movq	-104(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jg	.L361
	jmp	.L337
.L360:
	nop
.L337:
	movq	-112(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -112(%rbp)
.L335:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -112(%rbp)
	jne	.L338
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L339
	movl	gamemap(%rip), %eax
	cmpl	$7, %eax
	jne	.L340
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$8, %eax
	jne	.L341
	movw	$666, -68(%rbp)
	leaq	-96(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L307
.L341:
	movq	-136(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$20, %eax
	jne	.L340
	movw	$667, -68(%rbp)
	leaq	-96(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L307
.L339:
	movl	gameepisode(%rip), %eax
	cmpl	$1, %eax
	je	.L342
	cmpl	$4, %eax
	je	.L343
	jmp	.L340
.L342:
	movw	$666, -68(%rbp)
	leaq	-96(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L307
.L343:
	movl	gamemap(%rip), %eax
	cmpl	$6, %eax
	je	.L344
	cmpl	$8, %eax
	je	.L345
	jmp	.L340
.L344:
	movw	$666, -68(%rbp)
	leaq	-96(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L307
.L345:
	movw	$666, -68(%rbp)
	leaq	-96(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L307
.L340:
	call	G_ExitLevel@PLT
	jmp	.L307
.L348:
	nop
	jmp	.L307
.L349:
	nop
	jmp	.L307
.L351:
	nop
	jmp	.L307
.L353:
	nop
	jmp	.L307
.L356:
	nop
	jmp	.L307
.L357:
	nop
	jmp	.L307
.L359:
	nop
	jmp	.L307
.L361:
	nop
.L307:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L347
	call	__stack_chk_fail@PLT
.L347:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE54:
	.size	A_BossDeath, .-A_BossDeath
	.globl	A_Hoof
	.type	A_Hoof, @function
A_Hoof:
.LFB55:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$84, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Chase
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE55:
	.size	A_Hoof, .-A_Hoof
	.globl	A_Metal
	.type	A_Metal, @function
A_Metal:
.LFB56:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$85, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Chase
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE56:
	.size	A_Metal, .-A_Metal
	.globl	A_BabyMetal
	.type	A_BabyMetal, @function
A_BabyMetal:
.LFB57:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$79, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_Chase
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE57:
	.size	A_BabyMetal, .-A_BabyMetal
	.globl	A_OpenShotgun2
	.type	A_OpenShotgun2, @function
A_OpenShotgun2:
.LFB58:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE58:
	.size	A_OpenShotgun2, .-A_OpenShotgun2
	.globl	A_LoadShotgun2
	.type	A_LoadShotgun2, @function
A_LoadShotgun2:
.LFB59:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE59:
	.size	A_LoadShotgun2, .-A_LoadShotgun2
	.globl	A_CloseShotgun2
	.type	A_CloseShotgun2, @function
A_CloseShotgun2:
.LFB60:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	A_ReFire@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE60:
	.size	A_CloseShotgun2, .-A_CloseShotgun2
	.globl	braintargets
	.bss
	.align 32
	.type	braintargets, @object
	.size	braintargets, 256
braintargets:
	.zero	256
	.globl	numbraintargets
	.align 4
	.type	numbraintargets, @object
	.size	numbraintargets, 4
numbraintargets:
	.zero	4
	.globl	braintargeton
	.align 4
	.type	braintargeton, @object
	.size	braintargeton, 4
braintargeton:
	.zero	4
	.text
	.globl	A_BrainAwake
	.type	A_BrainAwake, @function
A_BrainAwake:
.LFB61:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, numbraintargets(%rip)
	movl	$0, braintargeton(%rip)
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L369
.L372:
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L373
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$27, %eax
	jne	.L371
	movl	numbraintargets(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	braintargets(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rax, (%rcx,%rdx)
	movl	numbraintargets(%rip), %eax
	addl	$1, %eax
	movl	%eax, numbraintargets(%rip)
	jmp	.L371
.L373:
	nop
.L371:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L369:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L372
	movl	$96, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE61:
	.size	A_BrainAwake, .-A_BrainAwake
	.globl	A_BrainPain
	.type	A_BrainPain, @function
A_BrainPain:
.LFB62:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$97, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE62:
	.size	A_BrainPain, .-A_BrainPain
	.globl	A_BrainScream
	.type	A_BrainScream, @function
A_BrainScream:
.LFB63:
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
	movl	24(%rax), %eax
	subl	$12845056, %eax
	movl	%eax, -20(%rbp)
	jmp	.L376
.L378:
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	subl	$20971520, %eax
	movl	%eax, -16(%rbp)
	call	P_Random@PLT
	sall	$17, %eax
	subl	$-128, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %eax
	movl	$33, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	call	P_Random@PLT
	sall	$9, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 120(%rax)
	movq	-8(%rbp), %rax
	movl	$799, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	call	P_Random@PLT
	andl	$7, %eax
	movl	%eax, %ecx
	movq	-8(%rbp), %rax
	movl	144(%rax), %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-8(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	jg	.L377
	movq	-8(%rbp), %rax
	movl	$1, 144(%rax)
.L377:
	addl	$524288, -20(%rbp)
.L376:
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	addl	$20971519, %eax
	cmpl	%eax, -20(%rbp)
	jle	.L378
	movl	$98, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE63:
	.size	A_BrainScream, .-A_BrainScream
	.globl	A_BrainExplode
	.type	A_BrainExplode, @function
A_BrainExplode:
.LFB64:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$48, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -56(%rbp)
	movq	-56(%rbp), %rax
	movl	24(%rax), %r12d
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$11, %eax
	addl	%r12d, %eax
	movl	%eax, -36(%rbp)
	movq	-56(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, -32(%rbp)
	call	P_Random@PLT
	sall	$17, %eax
	subl	$-128, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %esi
	movl	-36(%rbp), %eax
	movl	$33, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -24(%rbp)
	call	P_Random@PLT
	sall	$9, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
	movq	-24(%rbp), %rax
	movl	$799, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	call	P_Random@PLT
	andl	$7, %eax
	movl	%eax, %ecx
	movq	-24(%rbp), %rax
	movl	144(%rax), %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-24(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	jg	.L381
	movq	-24(%rbp), %rax
	movl	$1, 144(%rax)
.L381:
	nop
	addq	$48, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE64:
	.size	A_BrainExplode, .-A_BrainExplode
	.globl	A_BrainDie
	.type	A_BrainDie, @function
A_BrainDie:
.LFB65:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	call	G_ExitLevel@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE65:
	.size	A_BrainDie, .-A_BrainDie
	.globl	A_BrainSpit
	.type	A_BrainSpit, @function
A_BrainSpit:
.LFB66:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	easy.0(%rip), %eax
	xorl	$1, %eax
	movl	%eax, easy.0(%rip)
	movl	gameskill(%rip), %eax
	cmpl	$1, %eax
	ja	.L384
	movl	easy.0(%rip), %eax
	testl	%eax, %eax
	je	.L386
.L384:
	movl	braintargeton(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	braintargets(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -16(%rbp)
	movl	braintargeton(%rip), %eax
	addl	$1, %eax
	movl	numbraintargets(%rip), %esi
	cltd
	idivl	%esi
	movl	%edx, %ecx
	movl	%ecx, %eax
	movl	%eax, braintargeton(%rip)
	movq	-16(%rbp), %rcx
	movq	-24(%rbp), %rax
	movl	$28, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	P_SpawnMissile@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-16(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movq	-8(%rbp), %rax
	movl	116(%rax), %edi
	movl	%ecx, %eax
	cltd
	idivl	%edi
	cltq
	movq	-8(%rbp), %rdx
	movq	152(%rdx), %rdx
	movq	16(%rdx), %rsi
	cqto
	idivq	%rsi
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 184(%rax)
	movl	$94, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L383
.L386:
	nop
.L383:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE66:
	.size	A_BrainSpit, .-A_BrainSpit
	.globl	A_SpawnSound
	.type	A_SpawnSound, @function
A_SpawnSound:
.LFB67:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$95, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	A_SpawnFly
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE67:
	.size	A_SpawnSound, .-A_SpawnSound
	.globl	A_SpawnFly
	.type	A_SpawnFly, @function
A_SpawnFly:
.LFB68:
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
	movl	184(%rax), %eax
	leal	-1(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 184(%rax)
	movq	-40(%rbp), %rax
	movl	184(%rax), %eax
	testl	%eax, %eax
	jne	.L403
	movq	-40(%rbp), %rax
	movq	176(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	$29, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	call	P_Random@PLT
	movl	%eax, -28(%rbp)
	cmpl	$49, -28(%rbp)
	jg	.L391
	movl	$11, -32(%rbp)
	jmp	.L392
.L391:
	cmpl	$89, -28(%rbp)
	jg	.L393
	movl	$12, -32(%rbp)
	jmp	.L392
.L393:
	cmpl	$119, -28(%rbp)
	jg	.L394
	movl	$13, -32(%rbp)
	jmp	.L392
.L394:
	cmpl	$129, -28(%rbp)
	jg	.L395
	movl	$22, -32(%rbp)
	jmp	.L392
.L395:
	cmpl	$159, -28(%rbp)
	jg	.L396
	movl	$14, -32(%rbp)
	jmp	.L392
.L396:
	cmpl	$161, -28(%rbp)
	jg	.L397
	movl	$3, -32(%rbp)
	jmp	.L392
.L397:
	cmpl	$171, -28(%rbp)
	jg	.L398
	movl	$5, -32(%rbp)
	jmp	.L392
.L398:
	cmpl	$191, -28(%rbp)
	jg	.L399
	movl	$20, -32(%rbp)
	jmp	.L392
.L399:
	cmpl	$221, -28(%rbp)
	jg	.L400
	movl	$8, -32(%rbp)
	jmp	.L392
.L400:
	cmpl	$245, -28(%rbp)
	jg	.L401
	movl	$17, -32(%rbp)
	jmp	.L392
.L401:
	movl	$15, -32(%rbp)
.L392:
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	-32(%rbp), %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_LookForPlayers
	testl	%eax, %eax
	je	.L402
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	12(%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
.L402:
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TeleportMove@PLT
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj@PLT
	jmp	.L388
.L403:
	nop
.L388:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE68:
	.size	A_SpawnFly, .-A_SpawnFly
	.globl	A_PlayerScream
	.type	A_PlayerScream, @function
A_PlayerScream:
.LFB69:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$57, -4(%rbp)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L405
	movq	-24(%rbp), %rax
	movl	164(%rax), %eax
	cmpl	$-50, %eax
	jge	.L405
	movl	$58, -4(%rbp)
.L405:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE69:
	.size	A_PlayerScream, .-A_PlayerScream
	.local	easy.0
	.comm	easy.0,4,4
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
