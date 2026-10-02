	.file	"p_user.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: p_user.c,v 1.3 1997/01/28 22:08:29 b1 Exp $"
	.globl	onground
	.bss
	.align 4
	.type	onground, @object
	.size	onground, 4
onground:
	.zero	4
	.text
	.globl	P_Thrust
	.type	P_Thrust, @function
P_Thrust:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	shrl	$19, -12(%rbp)
	movq	finecosine(%rip), %rax
	movl	-12(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-16(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	112(%rax), %ecx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addl	%ecx, %edx
	movl	%edx, 112(%rax)
	movl	-12(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-16(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	116(%rax), %ecx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addl	%ecx, %edx
	movl	%edx, 116(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_Thrust, .-P_Thrust
	.globl	P_CalcHeight
	.type	P_CalcHeight, @function
P_CalcHeight:
.LFB1:
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
	movq	(%rax), %rax
	movl	112(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	112(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %ebx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	116(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	116(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	leal	(%rbx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	sarl	$2, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	$1048576, %eax
	jle	.L3
	movq	-40(%rbp), %rax
	movl	$1048576, 32(%rax)
.L3:
	movq	-40(%rbp), %rax
	movl	200(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L4
	movl	onground(%rip), %eax
	testl	%eax, %eax
	jne	.L5
.L4:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %eax
	leal	2686976(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 20(%rax)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	100(%rax), %eax
	leal	-262143(%rax), %edx
	movq	-40(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jg	.L6
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	100(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 20(%rax)
.L6:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 20(%rax)
	jmp	.L2
.L5:
	movl	leveltime(%rip), %eax
	imull	$409, %eax, %eax
	andl	$8191, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jne	.L8
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 24(%rax)
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$2686976, %eax
	jle	.L9
	movq	-40(%rbp), %rax
	movl	$2686976, 24(%rax)
	movq	-40(%rbp), %rax
	movl	$0, 28(%rax)
.L9:
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$1343487, %eax
	jg	.L10
	movq	-40(%rbp), %rax
	movl	$1343488, 24(%rax)
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	testl	%eax, %eax
	jg	.L10
	movq	-40(%rbp), %rax
	movl	$1, 28(%rax)
.L10:
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	testl	%eax, %eax
	je	.L8
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	leal	16384(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 28(%rax)
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	testl	%eax, %eax
	jne	.L8
	movq	-40(%rbp), %rax
	movl	$1, 28(%rax)
.L8:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	addl	%eax, %edx
	movl	-20(%rbp), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 20(%rax)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	100(%rax), %eax
	leal	-262143(%rax), %edx
	movq	-40(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jg	.L2
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	100(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 20(%rax)
.L2:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_CalcHeight, .-P_CalcHeight
	.globl	P_MovePlayer
	.type	P_MovePlayer, @function
P_MovePlayer:
.LFB2:
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
	addq	$12, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %edx
	movq	-8(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %ecx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	addl	%ecx, %edx
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	setle	%al
	movzbl	%al, %eax
	movl	%eax, onground(%rip)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L12
	movl	onground(%rip), %eax
	testl	%eax, %eax
	je	.L12
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	sall	$11, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_Thrust
.L12:
	movq	-8(%rbp), %rax
	movzbl	1(%rax), %eax
	testb	%al, %al
	je	.L13
	movl	onground(%rip), %eax
	testl	%eax, %eax
	je	.L13
	movq	-8(%rbp), %rax
	movzbl	1(%rax), %eax
	movsbl	%al, %eax
	sall	$11, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	leal	-1073741824(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_Thrust
.L13:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L14
	movq	-8(%rbp), %rax
	movzbl	1(%rax), %eax
	testb	%al, %al
	je	.L16
.L14:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	152(%rax), %rdx
	leaq	8344+states(%rip), %rax
	cmpq	%rax, %rdx
	jne	.L16
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$150, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
.L16:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_MovePlayer, .-P_MovePlayer
	.globl	P_DeathThink
	.type	P_DeathThink, @function
P_DeathThink:
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
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_MovePsprites@PLT
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$393216, %eax
	jle	.L18
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	leal	-65536(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 24(%rax)
.L18:
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$393215, %eax
	jg	.L19
	movq	-24(%rbp), %rax
	movl	$393216, 24(%rax)
.L19:
	movq	-24(%rbp), %rax
	movl	$0, 28(%rax)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	setle	%al
	movzbl	%al, %eax
	movl	%eax, onground(%rip)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CalcHeight
	movq	-24(%rbp), %rax
	movq	240(%rax), %rax
	testq	%rax, %rax
	je	.L20
	movq	-24(%rbp), %rax
	movq	240(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	je	.L20
	movq	-24(%rbp), %rax
	movq	240(%rax), %rax
	movl	28(%rax), %ecx
	movq	-24(%rbp), %rax
	movq	240(%rax), %rax
	movl	24(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	-8(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -4(%rbp)
	cmpl	$59652322, -4(%rbp)
	jbe	.L21
	cmpl	$-59652323, -4(%rbp)
	jbe	.L22
.L21:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-8(%rbp), %edx
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movl	232(%rax), %eax
	testl	%eax, %eax
	je	.L24
	movq	-24(%rbp), %rax
	movl	232(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 232(%rax)
	jmp	.L24
.L22:
	movl	-4(%rbp), %eax
	testl	%eax, %eax
	js	.L25
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	addl	$59652323, %edx
	movl	%edx, 56(%rax)
	jmp	.L26
.L25:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	subl	$59652323, %edx
	movl	%edx, 56(%rax)
	jmp	.L26
.L24:
	jmp	.L26
.L20:
	movq	-24(%rbp), %rax
	movl	232(%rax), %eax
	testl	%eax, %eax
	je	.L26
	movq	-24(%rbp), %rax
	movl	232(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 232(%rax)
.L26:
	movq	-24(%rbp), %rax
	movzbl	19(%rax), %eax
	movzbl	%al, %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L28
	movq	-24(%rbp), %rax
	movl	$2, 8(%rax)
.L28:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_DeathThink, .-P_DeathThink
	.globl	P_PlayerThink
	.type	P_PlayerThink, @function
P_PlayerThink:
.LFB4:
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
	movl	200(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L30
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	orb	$16, %dh
	movl	%edx, 160(%rax)
	jmp	.L31
.L30:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	andb	$-17, %dh
	movl	%edx, 160(%rax)
.L31:
	movq	-24(%rbp), %rax
	addq	$12, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %eax
	andl	$128, %eax
	testl	%eax, %eax
	je	.L32
	movq	-8(%rbp), %rax
	movw	$0, 2(%rax)
	movq	-8(%rbp), %rax
	movb	$100, (%rax)
	movq	-8(%rbp), %rax
	movb	$0, 1(%rax)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	andb	$127, %dl
	movl	%edx, 160(%rax)
.L32:
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$1, %eax
	jne	.L33
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_DeathThink
	jmp	.L29
.L33:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	184(%rax), %eax
	testl	%eax, %eax
	je	.L35
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	184(%rax), %edx
	subl	$1, %edx
	movl	%edx, 184(%rax)
	jmp	.L36
.L35:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_MovePlayer
.L36:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CalcHeight
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movzwl	14(%rax), %eax
	testw	%ax, %ax
	je	.L37
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_PlayerInSpecialSector@PLT
.L37:
	movq	-8(%rbp), %rax
	movzbl	7(%rax), %eax
	testb	%al, %al
	jns	.L38
	movq	-8(%rbp), %rax
	movb	$0, 7(%rax)
.L38:
	movq	-8(%rbp), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	andl	$4, %eax
	testl	%eax, %eax
	je	.L39
	movq	-8(%rbp), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	sarl	$3, %eax
	andl	$7, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jne	.L40
	movq	-24(%rbp), %rax
	movl	152(%rax), %eax
	testl	%eax, %eax
	je	.L40
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$7, %eax
	jne	.L41
	movq	-24(%rbp), %rax
	movl	52(%rax), %eax
	testl	%eax, %eax
	jne	.L40
.L41:
	movl	$7, -12(%rbp)
.L40:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L42
	cmpl	$2, -12(%rbp)
	jne	.L42
	movq	-24(%rbp), %rax
	movl	156(%rax), %eax
	testl	%eax, %eax
	je	.L42
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$8, %eax
	je	.L42
	movl	$8, -12(%rbp)
.L42:
	movq	-24(%rbp), %rax
	movl	-12(%rbp), %edx
	addq	$28, %rdx
	movl	12(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L39
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	%eax, -12(%rbp)
	je	.L39
	cmpl	$5, -12(%rbp)
	je	.L43
	cmpl	$6, -12(%rbp)
	jne	.L44
.L43:
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	je	.L39
.L44:
	movq	-24(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, 120(%rax)
.L39:
	movq	-8(%rbp), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L45
	movq	-24(%rbp), %rax
	movl	196(%rax), %eax
	testl	%eax, %eax
	jne	.L46
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_UseLines@PLT
	movq	-24(%rbp), %rax
	movl	$1, 196(%rax)
	jmp	.L46
.L45:
	movq	-24(%rbp), %rax
	movl	$0, 196(%rax)
.L46:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_MovePsprites@PLT
	movq	-24(%rbp), %rax
	movl	52(%rax), %eax
	testl	%eax, %eax
	je	.L47
	movq	-24(%rbp), %rax
	movl	52(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 52(%rax)
.L47:
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	testl	%eax, %eax
	je	.L48
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 48(%rax)
.L48:
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	je	.L49
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	jne	.L49
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	andl	$-262145, %edx
	movl	%edx, 160(%rax)
.L49:
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	testl	%eax, %eax
	je	.L50
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 68(%rax)
.L50:
	movq	-24(%rbp), %rax
	movl	60(%rax), %eax
	testl	%eax, %eax
	je	.L51
	movq	-24(%rbp), %rax
	movl	60(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 60(%rax)
.L51:
	movq	-24(%rbp), %rax
	movl	232(%rax), %eax
	testl	%eax, %eax
	je	.L52
	movq	-24(%rbp), %rax
	movl	232(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 232(%rax)
.L52:
	movq	-24(%rbp), %rax
	movl	236(%rax), %eax
	testl	%eax, %eax
	je	.L53
	movq	-24(%rbp), %rax
	movl	236(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 236(%rax)
.L53:
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	testl	%eax, %eax
	je	.L54
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	cmpl	$128, %eax
	jg	.L55
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	andl	$8, %eax
	testl	%eax, %eax
	je	.L56
.L55:
	movq	-24(%rbp), %rax
	movl	$32, 252(%rax)
	jmp	.L29
.L56:
	movq	-24(%rbp), %rax
	movl	$0, 252(%rax)
	jmp	.L29
.L54:
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	testl	%eax, %eax
	je	.L58
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	cmpl	$128, %eax
	jg	.L59
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	andl	$8, %eax
	testl	%eax, %eax
	je	.L60
.L59:
	movq	-24(%rbp), %rax
	movl	$1, 252(%rax)
	jmp	.L29
.L60:
	movq	-24(%rbp), %rax
	movl	$0, 252(%rax)
	jmp	.L29
.L58:
	movq	-24(%rbp), %rax
	movl	$0, 252(%rax)
.L29:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_PlayerThink, .-P_PlayerThink
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
