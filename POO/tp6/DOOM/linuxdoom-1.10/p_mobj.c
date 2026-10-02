	.file	"p_mobj.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: p_mobj.c,v 1.5 1997/02/03 22:45:12 b1 Exp $"
	.globl	test
	.bss
	.align 4
	.type	test, @object
	.size	test, 4
test:
	.zero	4
	.text
	.globl	P_SetMobjState
	.type	P_SetMobjState, @function
P_SetMobjState:
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
	movl	%esi, -28(%rbp)
.L5:
	cmpl	$0, -28(%rbp)
	jne	.L2
	movq	-24(%rbp), %rax
	movq	$0, 152(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj
	movl	$0, %eax
	jmp	.L3
.L2:
	movl	-28(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 152(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 60(%rax)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 64(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L4
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	*%rdx
.L4:
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-24(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	je	.L5
	movl	$1, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_SetMobjState, .-P_SetMobjState
	.globl	P_ExplodeMissile
	.type	P_ExplodeMissile, @function
P_ExplodeMissile:
.LFB1:
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
	movl	$0, 120(%rax)
	movq	-8(%rbp), %rax
	movl	120(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-8(%rbp), %rax
	movl	116(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 112(%rax)
	movq	-8(%rbp), %rax
	movl	128(%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	48+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
	call	P_Random@PLT
	andl	$3, %eax
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
	jg	.L7
	movq	-8(%rbp), %rax
	movl	$1, 144(%rax)
.L7:
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-65537, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	je	.L9
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	56(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L9:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_ExplodeMissile, .-P_ExplodeMissile
	.globl	P_XYMovement
	.type	P_XYMovement, @function
P_XYMovement:
.LFB2:
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
	movl	112(%rax), %eax
	testl	%eax, %eax
	jne	.L11
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	jne	.L11
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	je	.L35
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-16777217, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-40(%rbp), %rax
	movl	$0, 120(%rax)
	movq	-40(%rbp), %rax
	movl	120(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 112(%rax)
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
	jmp	.L35
.L11:
	movq	-40(%rbp), %rax
	movq	192(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	$1966080, %eax
	jle	.L14
	movq	-40(%rbp), %rax
	movl	$1966080, 112(%rax)
	jmp	.L15
.L14:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	$-1966080, %eax
	jge	.L15
	movq	-40(%rbp), %rax
	movl	$-1966080, 112(%rax)
.L15:
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$1966080, %eax
	jle	.L16
	movq	-40(%rbp), %rax
	movl	$1966080, 116(%rax)
	jmp	.L17
.L16:
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$-1966080, %eax
	jge	.L17
	movq	-40(%rbp), %rax
	movl	$-1966080, 116(%rax)
.L17:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, -12(%rbp)
.L18:
	cmpl	$983040, -16(%rbp)
	jg	.L19
	cmpl	$983040, -12(%rbp)
	jle	.L20
.L19:
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movl	-16(%rbp), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movl	-12(%rbp), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	sarl	-16(%rbp)
	sarl	-12(%rbp)
	jmp	.L21
.L20:
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	$0, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
.L21:
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove@PLT
	testl	%eax, %eax
	jne	.L22
	movq	-40(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L23
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_SlideMove@PLT
	jmp	.L22
.L23:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$65536, %eax
	testl	%eax, %eax
	je	.L24
	movq	ceilingline(%rip), %rax
	testq	%rax, %rax
	je	.L25
	movq	ceilingline(%rip), %rax
	movq	64(%rax), %rax
	testq	%rax, %rax
	je	.L25
	movq	ceilingline(%rip), %rax
	movq	64(%rax), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L25
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj
	jmp	.L10
.L25:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_ExplodeMissile
	jmp	.L22
.L24:
	movq	-40(%rbp), %rax
	movl	$0, 116(%rax)
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 112(%rax)
.L22:
	cmpl	$0, -16(%rbp)
	jne	.L18
	cmpl	$0, -12(%rbp)
	jne	.L18
	cmpq	$0, -8(%rbp)
	je	.L27
	movq	-8(%rbp), %rax
	movl	200(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	je	.L27
	movq	-40(%rbp), %rax
	movl	$0, 116(%rax)
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 112(%rax)
	jmp	.L10
.L27:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16842752, %eax
	testl	%eax, %eax
	jne	.L36
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	jg	.L37
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$1048576, %eax
	testl	%eax, %eax
	je	.L30
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	$16384, %eax
	jg	.L31
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	$-16384, %eax
	jl	.L31
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$16384, %eax
	jg	.L31
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$-16384, %eax
	jge	.L30
.L31:
	movq	-40(%rbp), %rax
	movl	96(%rax), %edx
	movq	-40(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L38
.L30:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	$-4095, %eax
	jl	.L32
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	$4095, %eax
	jg	.L32
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$-4095, %eax
	jl	.L32
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$4095, %eax
	jg	.L32
	cmpq	$0, -8(%rbp)
	je	.L33
	movq	-8(%rbp), %rax
	movzbl	12(%rax), %eax
	testb	%al, %al
	jne	.L32
	movq	-8(%rbp), %rax
	movzbl	13(%rax), %eax
	testb	%al, %al
	jne	.L32
.L33:
	cmpq	$0, -8(%rbp)
	je	.L34
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	152(%rax), %rdx
	leaq	states(%rip), %rax
	subq	%rax, %rdx
	sarq	$3, %rdx
	movabsq	$7905747460161236407, %rax
	imulq	%rdx, %rax
	subl	$150, %eax
	cmpl	$3, %eax
	ja	.L34
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$149, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
.L34:
	movq	-40(%rbp), %rax
	movl	$0, 112(%rax)
	movq	-40(%rbp), %rax
	movl	$0, 116(%rax)
	jmp	.L10
.L32:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	movl	$59392, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-40(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	$59392, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-40(%rbp), %rdx
	movl	%eax, 116(%rdx)
	jmp	.L10
.L35:
	nop
	jmp	.L10
.L36:
	nop
	jmp	.L10
.L37:
	nop
	jmp	.L10
.L38:
	nop
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_XYMovement, .-P_XYMovement
	.globl	P_ZMovement
	.type	P_ZMovement, @function
P_ZMovement:
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
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L40
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	jge	.L40
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	movl	24(%rax), %edx
	movq	-24(%rbp), %rax
	movl	96(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %ecx
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	subl	%ecx, %edx
	movl	%edx, 24(%rax)
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	movl	24(%rax), %eax
	movl	$2686976, %edx
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	sarl	$3, %edx
	movl	%edx, 28(%rax)
.L40:
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16384, %eax
	testl	%eax, %eax
	je	.L41
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	testq	%rax, %rax
	je	.L41
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	jne	.L41
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$2097152, %eax
	testl	%eax, %eax
	jne	.L41
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
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	sarl	%eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L42
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	leal	0(,%rax,4), %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jge	.L42
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L41
.L42:
	cmpl	$0, -4(%rbp)
	jle	.L41
	movl	-4(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jge	.L41
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	leal	262144(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
.L41:
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	jg	.L43
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	je	.L44
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
.L44:
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	testl	%eax, %eax
	jns	.L45
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L46
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	$-524288, %eax
	jge	.L46
	movq	-24(%rbp), %rax
	movl	120(%rax), %edx
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	sarl	$3, %edx
	movl	%edx, 28(%rax)
	movq	-24(%rbp), %rax
	movl	$34, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L46:
	movq	-24(%rbp), %rax
	movl	$0, 120(%rax)
.L45:
	movq	-24(%rbp), %rax
	movl	96(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$65536, %eax
	testl	%eax, %eax
	je	.L47
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4096, %eax
	testl	%eax, %eax
	jne	.L47
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_ExplodeMissile
	jmp	.L39
.L43:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$512, %eax
	testl	%eax, %eax
	jne	.L47
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	testl	%eax, %eax
	jne	.L49
	movq	-24(%rbp), %rax
	movl	$-131072, 120(%rax)
	jmp	.L47
.L49:
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	leal	-65536(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
.L47:
	movq	-24(%rbp), %rax
	movl	32(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	100(%rax), %eax
	cmpl	%eax, %edx
	jle	.L39
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	testl	%eax, %eax
	jle	.L50
	movq	-24(%rbp), %rax
	movl	$0, 120(%rax)
.L50:
	movq	-24(%rbp), %rax
	movl	100(%rax), %edx
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	je	.L51
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
.L51:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$65536, %eax
	testl	%eax, %eax
	je	.L39
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4096, %eax
	testl	%eax, %eax
	jne	.L39
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_ExplodeMissile
	nop
.L39:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_ZMovement, .-P_ZMovement
	.globl	P_NightmareRespawn
	.type	P_NightmareRespawn, @function
P_NightmareRespawn:
.LFB4:
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
	movzwl	204(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -32(%rbp)
	movq	-56(%rbp), %rax
	movzwl	206(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %ecx
	movq	-56(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_CheckPosition@PLT
	testl	%eax, %eax
	je	.L58
	movq	-56(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	-56(%rbp), %rax
	movl	28(%rax), %esi
	movq	-56(%rbp), %rax
	movl	24(%rax), %eax
	movl	$39, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointInSubsector@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %esi
	movl	-32(%rbp), %eax
	movl	$39, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-56(%rbp), %rax
	addq	$204, %rax
	movq	%rax, -8(%rbp)
	movq	-56(%rbp), %rax
	movq	136(%rax), %rax
	movl	84(%rax), %eax
	andl	$256, %eax
	testl	%eax, %eax
	je	.L55
	movl	$2147483647, -36(%rbp)
	jmp	.L56
.L55:
	movl	$-2147483648, -36(%rbp)
.L56:
	movq	-56(%rbp), %rax
	movl	128(%rax), %ecx
	movl	-36(%rbp), %edx
	movl	-28(%rbp), %esi
	movl	-32(%rbp), %eax
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	-56(%rbp), %rdx
	movq	204(%rdx), %rcx
	movq	%rcx, 204(%rax)
	movzwl	212(%rdx), %edx
	movw	%dx, 212(%rax)
	movq	-8(%rbp), %rax
	movzwl	4(%rax), %eax
	movswl	%ax, %edx
	imull	$11651, %edx, %edx
	shrl	$16, %edx
	sarw	$3, %dx
	sarw	$15, %ax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	cwtl
	sall	$29, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-8(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	andl	$8, %eax
	testl	%eax, %eax
	je	.L57
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	orl	$32, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
.L57:
	movq	-24(%rbp), %rax
	movl	$18, 184(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj
	jmp	.L52
.L58:
	nop
.L52:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_NightmareRespawn, .-P_NightmareRespawn
	.globl	P_MobjThinker
	.type	P_MobjThinker, @function
P_MobjThinker:
.LFB5:
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
	movl	112(%rax), %eax
	testl	%eax, %eax
	jne	.L60
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	jne	.L60
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	je	.L61
.L60:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_XYMovement
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	$-1, %rax
	je	.L71
.L61:
	movq	-8(%rbp), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	96(%rax), %eax
	cmpl	%eax, %edx
	jne	.L63
	movq	-8(%rbp), %rax
	movl	120(%rax), %eax
	testl	%eax, %eax
	je	.L64
.L63:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_ZMovement
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	$-1, %rax
	je	.L72
.L64:
	movq	-8(%rbp), %rax
	movl	144(%rax), %eax
	cmpl	$-1, %eax
	je	.L65
	movq	-8(%rbp), %rax
	movl	144(%rax), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-8(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	jne	.L59
	movq	-8(%rbp), %rax
	movq	152(%rax), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
	testl	%eax, %eax
	jmp	.L59
.L65:
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4194304, %eax
	testl	%eax, %eax
	je	.L73
	movl	respawnmonsters(%rip), %eax
	testl	%eax, %eax
	je	.L74
	movq	-8(%rbp), %rax
	movl	172(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 172(%rax)
	movq	-8(%rbp), %rax
	movl	172(%rax), %eax
	cmpl	$419, %eax
	jle	.L75
	movl	leveltime(%rip), %eax
	andl	$31, %eax
	testl	%eax, %eax
	jne	.L76
	call	P_Random@PLT
	cmpl	$4, %eax
	jg	.L77
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_NightmareRespawn
	jmp	.L59
.L71:
	nop
	jmp	.L59
.L72:
	nop
	jmp	.L59
.L73:
	nop
	jmp	.L59
.L74:
	nop
	jmp	.L59
.L75:
	nop
	jmp	.L59
.L76:
	nop
	jmp	.L59
.L77:
	nop
.L59:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_MobjThinker, .-P_MobjThinker
	.globl	P_SpawnMobj
	.type	P_SpawnMobj, @function
P_SpawnMobj:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	movl	%ecx, -48(%rbp)
	movl	$0, %edx
	movl	$50, %esi
	movl	$224, %edi
	call	Z_Malloc@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$224, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-48(%rbp), %eax
	imulq	$92, %rax, %rax
	leaq	mobjinfo(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movl	-48(%rbp), %edx
	movl	%edx, 128(%rax)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 136(%rax)
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, 24(%rax)
	movq	-24(%rbp), %rax
	movl	-40(%rbp), %edx
	movl	%edx, 28(%rax)
	movq	-16(%rbp), %rax
	movl	64(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 104(%rax)
	movq	-16(%rbp), %rax
	movl	68(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 108(%rax)
	movq	-16(%rbp), %rax
	movl	84(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-16(%rbp), %rax
	movl	8(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 164(%rax)
	movl	gameskill(%rip), %eax
	cmpl	$4, %eax
	je	.L79
	movq	-16(%rbp), %rax
	movl	20(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 184(%rax)
.L79:
	call	P_Random@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$30, %eax
	addl	%eax, %edx
	andl	$3, %edx
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 200(%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 152(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 60(%rax)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 64(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_SetThingPosition@PLT
	movq	-24(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 96(%rax)
	movq	-24(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 100(%rax)
	cmpl	$-2147483648, -44(%rbp)
	jne	.L80
	movq	-24(%rbp), %rax
	movl	96(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L81
.L80:
	cmpl	$2147483647, -44(%rbp)
	jne	.L82
	movq	-24(%rbp), %rax
	movl	100(%rax), %edx
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	68(%rax), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L81
.L82:
	movq	-24(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 32(%rax)
.L81:
	movq	-24(%rbp), %rax
	leaq	P_MobjThinker(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_SpawnMobj, .-P_SpawnMobj
	.globl	itemrespawnque
	.bss
	.align 32
	.type	itemrespawnque, @object
	.size	itemrespawnque, 1280
itemrespawnque:
	.zero	1280
	.globl	itemrespawntime
	.align 32
	.type	itemrespawntime, @object
	.size	itemrespawntime, 512
itemrespawntime:
	.zero	512
	.globl	iquehead
	.align 4
	.type	iquehead, @object
	.size	iquehead, 4
iquehead:
	.zero	4
	.globl	iquetail
	.align 4
	.type	iquetail, @object
	.size	iquetail, 4
iquetail:
	.zero	4
	.text
	.globl	P_RemoveMobj
	.type	P_RemoveMobj, @function
P_RemoveMobj:
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
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L85
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$131072, %eax
	testl	%eax, %eax
	jne	.L85
	movq	-8(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$56, %eax
	je	.L85
	movq	-8(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$58, %eax
	je	.L85
	movl	iquehead(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rcx
	leaq	itemrespawnque(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	204(%rax), %rsi
	movq	%rsi, (%rcx,%rdx)
	movzwl	212(%rax), %eax
	movw	%ax, 8(%rcx,%rdx)
	movl	iquehead(%rip), %edx
	movl	leveltime(%rip), %eax
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	itemrespawntime(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	iquehead(%rip), %eax
	addl	$1, %eax
	andl	$127, %eax
	movl	%eax, iquehead(%rip)
	movl	iquehead(%rip), %edx
	movl	iquetail(%rip), %eax
	cmpl	%eax, %edx
	jne	.L85
	movl	iquetail(%rip), %eax
	addl	$1, %eax
	andl	$127, %eax
	movl	%eax, iquetail(%rip)
.L85:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_UnsetThingPosition@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	S_StopSound@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_RemoveMobj, .-P_RemoveMobj
	.globl	P_RespawnSpecials
	.type	P_RespawnSpecials, @function
P_RespawnSpecials:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	deathmatch(%rip), %eax
	cmpl	$2, %eax
	jne	.L97
	movl	iquehead(%rip), %edx
	movl	iquetail(%rip), %eax
	cmpl	%eax, %edx
	je	.L98
	movl	leveltime(%rip), %edx
	movl	iquetail(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	itemrespawntime(%rip), %rax
	movl	(%rcx,%rax), %eax
	subl	%eax, %edx
	cmpl	$1049, %edx
	jle	.L99
	movl	iquetail(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	itemrespawnque(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -32(%rbp)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointInSubsector@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %esi
	movl	-32(%rbp), %eax
	movl	$40, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$90, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	$0, -36(%rbp)
	jmp	.L91
.L94:
	movq	-24(%rbp), %rax
	movzwl	6(%rax), %eax
	movswl	%ax, %edx
	movl	-36(%rbp), %eax
	cltq
	imulq	$92, %rax, %rax
	leaq	mobjinfo(%rip), %rcx
	movl	(%rax,%rcx), %eax
	cmpl	%eax, %edx
	je	.L100
	addl	$1, -36(%rbp)
.L91:
	cmpl	$136, -36(%rbp)
	jle	.L94
	jmp	.L93
.L100:
	nop
.L93:
	movl	-36(%rbp), %eax
	cltq
	imulq	$92, %rax, %rax
	leaq	84+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	andl	$256, %eax
	testl	%eax, %eax
	je	.L95
	movl	$2147483647, -40(%rbp)
	jmp	.L96
.L95:
	movl	$-2147483648, -40(%rbp)
.L96:
	movl	-36(%rbp), %ecx
	movl	-40(%rbp), %edx
	movl	-28(%rbp), %esi
	movl	-32(%rbp), %eax
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	(%rdx), %rcx
	movq	%rcx, 204(%rax)
	movzwl	8(%rdx), %edx
	movw	%dx, 212(%rax)
	movq	-24(%rbp), %rax
	movzwl	4(%rax), %eax
	movswl	%ax, %edx
	imull	$11651, %edx, %edx
	shrl	$16, %edx
	sarw	$3, %dx
	sarw	$15, %ax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	cwtl
	sall	$29, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movl	iquetail(%rip), %eax
	addl	$1, %eax
	andl	$127, %eax
	movl	%eax, iquetail(%rip)
	jmp	.L86
.L97:
	nop
	jmp	.L86
.L98:
	nop
	jmp	.L86
.L99:
	nop
.L86:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	P_RespawnSpecials, .-P_RespawnSpecials
	.globl	P_SpawnPlayer
	.type	P_SpawnPlayer, @function
P_SpawnPlayer:
.LFB9:
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
	movzwl	6(%rax), %eax
	cwtl
	subl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L109
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	$1, %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$2, %eax
	jne	.L104
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	$1, %eax
	movl	%eax, %edi
	call	G_PlayerReborn@PLT
.L104:
	movq	-40(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -24(%rbp)
	movl	$-2147483648, -20(%rbp)
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %esi
	movl	-28(%rbp), %eax
	movl	$0, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cmpw	$1, %ax
	jle	.L105
	movq	-8(%rbp), %rax
	movl	160(%rax), %edx
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	$1, %eax
	sall	$26, %eax
	orl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 160(%rax)
.L105:
	movq	-40(%rbp), %rax
	movzwl	4(%rax), %eax
	movswl	%ax, %edx
	imull	$11651, %edx, %edx
	shrl	$16, %edx
	sarw	$3, %dx
	sarw	$15, %ax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	cwtl
	sall	$29, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 192(%rax)
	movq	-16(%rbp), %rax
	movl	36(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 164(%rax)
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movl	$0, 8(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 204(%rax)
	movq	-16(%rbp), %rax
	movq	$0, 224(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 232(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 236(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 248(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 252(%rax)
	movq	-16(%rbp), %rax
	movl	$2686976, 24(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_SetupPsprites@PLT
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L106
	movl	$0, -32(%rbp)
	jmp	.L107
.L108:
	movq	-16(%rbp), %rax
	movl	-32(%rbp), %edx
	movslq	%edx, %rdx
	addq	$16, %rdx
	movl	$1, 8(%rax,%rdx,4)
	addl	$1, -32(%rbp)
.L107:
	cmpl	$5, -32(%rbp)
	jle	.L108
.L106:
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	leal	-1(%rax), %edx
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, %edx
	jne	.L101
	call	ST_Start@PLT
	call	HU_Start@PLT
	jmp	.L101
.L109:
	nop
.L101:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	P_SpawnPlayer, .-P_SpawnPlayer
	.section	.rodata
	.align 8
.LC0:
	.string	"P_SpawnMapThing: Unknown type %i at (%i, %i)"
	.text
	.globl	P_SpawnMapThing
	.type	P_SpawnMapThing, @function
P_SpawnMapThing:
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
	movzwl	6(%rax), %eax
	cmpw	$11, %ax
	jne	.L111
	movq	deathmatch_p(%rip), %rdx
	leaq	100+deathmatchstarts(%rip), %rax
	cmpq	%rax, %rdx
	jnb	.L134
	movq	deathmatch_p(%rip), %rax
	movq	-40(%rbp), %rcx
	movl	$10, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	deathmatch_p(%rip), %rax
	addq	$10, %rax
	movq	%rax, deathmatch_p(%rip)
	jmp	.L134
.L111:
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cmpw	$4, %ax
	jg	.L114
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	$1, %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rcx
	leaq	playerstarts(%rip), %rdx
	movq	-40(%rbp), %rax
	movq	(%rax), %rsi
	movq	%rsi, (%rcx,%rdx)
	movzwl	8(%rax), %eax
	movw	%ax, 8(%rcx,%rdx)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	jne	.L135
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_SpawnPlayer
	jmp	.L135
.L114:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L116
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	andl	$16, %eax
	testl	%eax, %eax
	jne	.L136
.L116:
	movl	gameskill(%rip), %eax
	testl	%eax, %eax
	jne	.L117
	movl	$1, -24(%rbp)
	jmp	.L118
.L117:
	movl	gameskill(%rip), %eax
	cmpl	$4, %eax
	jne	.L119
	movl	$4, -24(%rbp)
	jmp	.L118
.L119:
	movl	gameskill(%rip), %eax
	subl	$1, %eax
	movl	$1, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	movl	%eax, -24(%rbp)
.L118:
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	andl	-24(%rbp), %eax
	testl	%eax, %eax
	je	.L137
	movl	$0, -28(%rbp)
	jmp	.L121
.L124:
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	movswl	%ax, %edx
	movl	-28(%rbp), %eax
	cltq
	imulq	$92, %rax, %rax
	leaq	mobjinfo(%rip), %rcx
	movl	(%rax,%rcx), %eax
	cmpl	%eax, %edx
	je	.L138
	addl	$1, -28(%rbp)
.L121:
	cmpl	$136, -28(%rbp)
	jle	.L124
	jmp	.L123
.L138:
	nop
.L123:
	cmpl	$137, -28(%rbp)
	jne	.L125
	movq	-40(%rbp), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %ecx
	movq	-40(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L125:
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L126
	movl	-28(%rbp), %eax
	cltq
	imulq	$92, %rax, %rax
	leaq	84+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	andl	$33554432, %eax
	testl	%eax, %eax
	jne	.L139
.L126:
	movl	nomonsters(%rip), %eax
	testl	%eax, %eax
	je	.L127
	cmpl	$18, -28(%rbp)
	je	.L140
	movl	-28(%rbp), %eax
	cltq
	imulq	$92, %rax, %rax
	leaq	84+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	andl	$4194304, %eax
	testl	%eax, %eax
	jne	.L140
.L127:
	movq	-40(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -12(%rbp)
	movl	-28(%rbp), %eax
	cltq
	imulq	$92, %rax, %rax
	leaq	84+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	andl	$256, %eax
	testl	%eax, %eax
	je	.L129
	movl	$2147483647, -20(%rbp)
	jmp	.L130
.L129:
	movl	$-2147483648, -20(%rbp)
.L130:
	movl	-28(%rbp), %ecx
	movl	-20(%rbp), %edx
	movl	-12(%rbp), %esi
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	(%rdx), %rcx
	movq	%rcx, 204(%rax)
	movzwl	8(%rdx), %edx
	movw	%dx, 212(%rax)
	movq	-8(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	jle	.L131
	call	P_Random@PLT
	movq	-8(%rbp), %rdx
	movl	144(%rdx), %edi
	cltd
	idivl	%edi
	movl	%edx, %ecx
	movl	%ecx, %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 144(%rax)
.L131:
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4194304, %eax
	testl	%eax, %eax
	je	.L132
	movl	totalkills(%rip), %eax
	addl	$1, %eax
	movl	%eax, totalkills(%rip)
.L132:
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	andl	$8388608, %eax
	testl	%eax, %eax
	je	.L133
	movl	totalitems(%rip), %eax
	addl	$1, %eax
	movl	%eax, totalitems(%rip)
.L133:
	movq	-40(%rbp), %rax
	movzwl	4(%rax), %eax
	movswl	%ax, %edx
	imull	$11651, %edx, %edx
	shrl	$16, %edx
	sarw	$3, %dx
	sarw	$15, %ax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	cwtl
	sall	$29, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	andl	$8, %eax
	testl	%eax, %eax
	je	.L110
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	orl	$32, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 160(%rax)
	jmp	.L110
.L134:
	nop
	jmp	.L110
.L135:
	nop
	jmp	.L110
.L136:
	nop
	jmp	.L110
.L137:
	nop
	jmp	.L110
.L139:
	nop
	jmp	.L110
.L140:
	nop
.L110:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	P_SpawnMapThing, .-P_SpawnMapThing
	.globl	P_SpawnPuff
	.type	P_SpawnPuff, @function
P_SpawnPuff:
.LFB11:
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
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$10, %eax
	addl	%eax, -44(%rbp)
	movl	-44(%rbp), %edx
	movl	-40(%rbp), %esi
	movl	-36(%rbp), %eax
	movl	$37, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$65536, 120(%rax)
	call	P_Random@PLT
	andl	$3, %eax
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
	jg	.L142
	movq	-24(%rbp), %rax
	movl	$1, 144(%rax)
.L142:
	movl	attackrange(%rip), %eax
	cmpl	$4194304, %eax
	jne	.L144
	movq	-24(%rbp), %rax
	movl	$95, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
.L144:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	P_SpawnPuff, .-P_SpawnPuff
	.globl	P_SpawnBlood
	.type	P_SpawnBlood, @function
P_SpawnBlood:
.LFB12:
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
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	movl	%ecx, -48(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$10, %eax
	addl	%eax, -44(%rbp)
	movl	-44(%rbp), %edx
	movl	-40(%rbp), %esi
	movl	-36(%rbp), %eax
	movl	$38, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$131072, 120(%rax)
	call	P_Random@PLT
	andl	$3, %eax
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
	jg	.L146
	movq	-24(%rbp), %rax
	movl	$1, 144(%rax)
.L146:
	cmpl	$12, -48(%rbp)
	jg	.L147
	cmpl	$8, -48(%rbp)
	jle	.L147
	movq	-24(%rbp), %rax
	movl	$91, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
	jmp	.L149
.L147:
	cmpl	$8, -48(%rbp)
	jg	.L149
	movq	-24(%rbp), %rax
	movl	$92, %esi
	movq	%rax, %rdi
	call	P_SetMobjState
.L149:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	P_SpawnBlood, .-P_SpawnBlood
	.globl	P_CheckMissileSpawn
	.type	P_CheckMissileSpawn, @function
P_CheckMissileSpawn:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	call	P_Random@PLT
	andl	$3, %eax
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
	jg	.L151
	movq	-8(%rbp), %rax
	movl	$1, 144(%rax)
.L151:
	movq	-8(%rbp), %rax
	movl	24(%rax), %edx
	movq	-8(%rbp), %rax
	movl	112(%rax), %eax
	sarl	%eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 24(%rax)
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	sarl	%eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 28(%rax)
	movq	-8(%rbp), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	120(%rax), %eax
	sarl	%eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TryMove@PLT
	testl	%eax, %eax
	jne	.L153
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_ExplodeMissile
.L153:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	P_CheckMissileSpawn, .-P_CheckMissileSpawn
	.globl	P_SpawnMissile
	.type	P_SpawnMissile, @function
P_SpawnMissile:
.LFB14:
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
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	leal	2097152(%rax), %edi
	movq	-40(%rbp), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	-52(%rbp), %edx
	movl	%edx, %ecx
	movl	%edi, %edx
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	je	.L155
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L155:
	movq	-24(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-48(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-48(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -32(%rbp)
	movq	-48(%rbp), %rax
	movl	160(%rax), %eax
	andl	$262144, %eax
	testl	%eax, %eax
	je	.L156
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$20, %eax
	addl	%eax, -32(%rbp)
.L156:
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, 56(%rax)
	shrl	$19, -32(%rbp)
	movq	finecosine(%rip), %rax
	movl	-32(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-24(%rbp), %rdx
	movl	%eax, 112(%rdx)
	movl	-32(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-24(%rbp), %rdx
	movl	%eax, 116(%rdx)
	movq	-48(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movq	-48(%rbp), %rax
	movl	24(%rax), %esi
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movl	%esi, %eax
	subl	%ecx, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	P_AproxDistance@PLT
	movl	%eax, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %ebx
	movl	-28(%rbp), %eax
	cltd
	idivl	%ebx
	movl	%eax, -28(%rbp)
	cmpl	$0, -28(%rbp)
	jg	.L157
	movl	$1, -28(%rbp)
.L157:
	movq	-48(%rbp), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	cltd
	idivl	-28(%rbp)
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMissileSpawn
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	P_SpawnMissile, .-P_SpawnMissile
	.globl	P_SpawnPlayerMissile
	.type	P_SpawnPlayerMissile, @function
P_SpawnPlayerMissile:
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
	movl	%esi, -44(%rbp)
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -24(%rbp)
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	jne	.L160
	addl	$67108864, -28(%rbp)
	movl	-28(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -24(%rbp)
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	jne	.L161
	subl	$134217728, -28(%rbp)
	movl	-28(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -24(%rbp)
.L161:
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	jne	.L160
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -28(%rbp)
	movl	$0, -24(%rbp)
.L160:
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	addl	$2097152, %eax
	movl	%eax, -12(%rbp)
	movl	-44(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	P_SpawnMobj
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	je	.L162
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	16(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L162:
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 56(%rax)
	movq	finecosine(%rip), %rax
	movl	-28(%rbp), %edx
	shrl	$19, %edx
	movl	%edx, %edx
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
	movl	-28(%rbp), %eax
	shrl	$19, %eax
	movl	%eax, %eax
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
	movq	-8(%rbp), %rax
	movq	136(%rax), %rax
	movl	60(%rax), %eax
	movl	-24(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 120(%rdx)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckMissileSpawn
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	P_SpawnPlayerMissile, .-P_SpawnPlayerMissile
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
