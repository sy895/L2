	.file	"p_maputl.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: p_maputl.c,v 1.5 1997/02/03 22:45:11 b1 Exp $"
	.text
	.globl	P_AproxDistance
	.type	P_AproxDistance, @function
P_AproxDistance:
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
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L2
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	sarl	%eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	jmp	.L3
.L2:
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-8(%rbp), %eax
	sarl	%eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_AproxDistance, .-P_AproxDistance
	.globl	P_PointOnLineSide
	.type	P_PointOnLineSide, @function
P_PointOnLineSide:
.LFB7:
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
	movq	%rdx, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	jne	.L5
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L6
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L7
.L6:
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L7
.L5:
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	testl	%eax, %eax
	jne	.L8
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L9
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L7
.L9:
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L7
.L8:
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L10
	movl	$0, %eax
	jmp	.L7
.L10:
	movl	$1, %eax
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_PointOnLineSide, .-P_PointOnLineSide
	.globl	P_BoxOnLineSide
	.type	P_BoxOnLineSide, @function
P_BoxOnLineSide:
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
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	52(%rax), %eax
	cmpl	$3, %eax
	je	.L12
	cmpl	$3, %eax
	ja	.L13
	cmpl	$2, %eax
	je	.L14
	cmpl	$2, %eax
	ja	.L13
	testl	%eax, %eax
	je	.L15
	cmpl	$1, %eax
	je	.L16
	jmp	.L13
.L15:
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	setg	%al
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	setg	%al
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	jns	.L21
	xorl	$1, -8(%rbp)
	xorl	$1, -4(%rbp)
	jmp	.L21
.L16:
	movq	-24(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	setl	%al
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	setl	%al
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	testl	%eax, %eax
	jns	.L22
	xorl	$1, -8(%rbp)
	xorl	$1, -4(%rbp)
	jmp	.L22
.L14:
	movq	-24(%rbp), %rax
	movl	(%rax), %ecx
	movq	-24(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	movq	-32(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %ecx
	movq	-24(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %eax
	movq	-32(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide
	movl	%eax, -4(%rbp)
	jmp	.L13
.L12:
	movq	-24(%rbp), %rax
	movl	(%rax), %ecx
	movq	-24(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %eax
	movq	-32(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %ecx
	movq	-24(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	movq	-32(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide
	movl	%eax, -4(%rbp)
	jmp	.L13
.L21:
	nop
	jmp	.L13
.L22:
	nop
.L13:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L19
	movl	-8(%rbp), %eax
	jmp	.L20
.L19:
	movl	$-1, %eax
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	P_BoxOnLineSide, .-P_BoxOnLineSide
	.globl	P_PointOnDivlineSide
	.type	P_PointOnDivlineSide, @function
P_PointOnDivlineSide:
.LFB9:
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
	movq	%rdx, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jne	.L24
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L25
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L26
.L25:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L26
.L24:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	jne	.L27
	movq	-32(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L28
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L26
.L28:
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L26
.L27:
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movq	-32(%rbp), %rax
	movl	4(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movq	-32(%rbp), %rax
	movl	12(%rax), %edx
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	xorl	%edx, %eax
	xorl	-16(%rbp), %eax
	xorl	-12(%rbp), %eax
	testl	%eax, %eax
	jns	.L29
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	xorl	-16(%rbp), %eax
	testl	%eax, %eax
	jns	.L30
	movl	$1, %eax
	jmp	.L26
.L30:
	movl	$0, %eax
	jmp	.L26
.L29:
	movl	-16(%rbp), %eax
	sarl	$8, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	sarl	$8, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	sarl	$8, %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	sarl	$8, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L31
	movl	$0, %eax
	jmp	.L26
.L31:
	movl	$1, %eax
.L26:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	P_PointOnDivlineSide, .-P_PointOnDivlineSide
	.globl	P_MakeDivline
	.type	P_MakeDivline, @function
P_MakeDivline:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	16(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-8(%rbp), %rax
	movl	20(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 12(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	P_MakeDivline, .-P_MakeDivline
	.globl	P_InterceptVector
	.type	P_InterceptVector, @function
P_InterceptVector:
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
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rax
	movl	8(%rax), %eax
	movq	-48(%rbp), %rdx
	movl	12(%rdx), %edx
	sarl	$8, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, %ebx
	movq	-40(%rbp), %rax
	movl	12(%rax), %eax
	movq	-48(%rbp), %rdx
	movl	8(%rdx), %edx
	sarl	$8, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, -28(%rbp)
	cmpl	$0, -28(%rbp)
	jne	.L34
	movl	$0, %eax
	jmp	.L35
.L34:
	movq	-48(%rbp), %rax
	movl	12(%rax), %eax
	movq	-48(%rbp), %rdx
	movl	(%rdx), %ecx
	movq	-40(%rbp), %rdx
	movl	(%rdx), %edx
	subl	%edx, %ecx
	sarl	$8, %ecx
	movl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, %ebx
	movq	-48(%rbp), %rax
	movl	8(%rax), %eax
	movq	-40(%rbp), %rdx
	movl	4(%rdx), %ecx
	movq	-48(%rbp), %rdx
	movl	4(%rdx), %edx
	subl	%edx, %ecx
	sarl	$8, %ecx
	movl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -24(%rbp)
	movl	-28(%rbp), %edx
	movl	-24(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
.L35:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	P_InterceptVector, .-P_InterceptVector
	.globl	opentop
	.bss
	.align 4
	.type	opentop, @object
	.size	opentop, 4
opentop:
	.zero	4
	.globl	openbottom
	.align 4
	.type	openbottom, @object
	.size	openbottom, 4
openbottom:
	.zero	4
	.globl	openrange
	.align 4
	.type	openrange, @object
	.size	openrange, 4
openrange:
	.zero	4
	.globl	lowfloor
	.align 4
	.type	lowfloor, @object
	.size	lowfloor, 4
lowfloor:
	.zero	4
	.text
	.globl	P_LineOpening
	.type	P_LineOpening, @function
P_LineOpening:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movzwl	32(%rax), %eax
	cmpw	$-1, %ax
	jne	.L37
	movl	$0, openrange(%rip)
	jmp	.L36
.L37:
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	64(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jge	.L39
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, opentop(%rip)
	jmp	.L40
.L39:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, opentop(%rip)
.L40:
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L41
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, openbottom(%rip)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, lowfloor(%rip)
	jmp	.L42
.L41:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, openbottom(%rip)
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, lowfloor(%rip)
.L42:
	movl	opentop(%rip), %edx
	movl	openbottom(%rip), %eax
	subl	%eax, %edx
	movl	%edx, openrange(%rip)
.L36:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	P_LineOpening, .-P_LineOpening
	.globl	P_UnsetThingPosition
	.type	P_UnsetThingPosition, @function
P_UnsetThingPosition:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$8, %eax
	testl	%eax, %eax
	jne	.L44
	movq	-24(%rbp), %rax
	movq	40(%rax), %rax
	testq	%rax, %rax
	je	.L45
	movq	-24(%rbp), %rax
	movq	40(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	48(%rdx), %rdx
	movq	%rdx, 48(%rax)
.L45:
	movq	-24(%rbp), %rax
	movq	48(%rax), %rax
	testq	%rax, %rax
	je	.L46
	movq	-24(%rbp), %rax
	movq	48(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	40(%rdx), %rdx
	movq	%rdx, 40(%rax)
	jmp	.L44
.L46:
	movq	-24(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	40(%rdx), %rdx
	movq	%rdx, 96(%rax)
.L44:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16, %eax
	testl	%eax, %eax
	jne	.L50
	movq	-24(%rbp), %rax
	movq	72(%rax), %rax
	testq	%rax, %rax
	je	.L48
	movq	-24(%rbp), %rax
	movq	72(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	80(%rdx), %rdx
	movq	%rdx, 80(%rax)
.L48:
	movq	-24(%rbp), %rax
	movq	80(%rax), %rax
	testq	%rax, %rax
	je	.L49
	movq	-24(%rbp), %rax
	movq	80(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	72(%rdx), %rdx
	movq	%rdx, 72(%rax)
	jmp	.L50
.L49:
	movq	-24(%rbp), %rax
	movl	24(%rax), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -8(%rbp)
	js	.L50
	movl	bmapwidth(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L50
	cmpl	$0, -4(%rbp)
	js	.L50
	movl	bmapheight(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L50
	movq	blocklinks(%rip), %rdx
	movl	bmapwidth(%rip), %eax
	imull	-4(%rbp), %eax
	movl	%eax, %ecx
	movl	-8(%rbp), %eax
	addl	%ecx, %eax
	cltq
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	72(%rax), %rax
	movq	%rax, (%rdx)
.L50:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	P_UnsetThingPosition, .-P_UnsetThingPosition
	.globl	P_SetThingPosition
	.type	P_SetThingPosition, @function
P_SetThingPosition:
.LFB14:
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
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointInSubsector@PLT
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 88(%rax)
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$8, %eax
	testl	%eax, %eax
	jne	.L52
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rax
	movq	$0, 48(%rax)
	movq	-16(%rbp), %rax
	movq	96(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 40(%rax)
	movq	-16(%rbp), %rax
	movq	96(%rax), %rax
	testq	%rax, %rax
	je	.L53
	movq	-16(%rbp), %rax
	movq	96(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 48(%rax)
.L53:
	movq	-16(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 96(%rax)
.L52:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16, %eax
	testl	%eax, %eax
	jne	.L57
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -32(%rbp)
	movq	-40(%rbp), %rax
	movl	28(%rax), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$23, %eax
	movl	%eax, -28(%rbp)
	cmpl	$0, -32(%rbp)
	js	.L55
	movl	bmapwidth(%rip), %eax
	cmpl	%eax, -32(%rbp)
	jge	.L55
	cmpl	$0, -28(%rbp)
	js	.L55
	movl	bmapheight(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jge	.L55
	movq	blocklinks(%rip), %rdx
	movl	bmapwidth(%rip), %eax
	imull	-28(%rbp), %eax
	movl	%eax, %ecx
	movl	-32(%rbp), %eax
	addl	%ecx, %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movq	$0, 80(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 72(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L56
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 80(%rax)
.L56:
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, (%rax)
	jmp	.L57
.L55:
	movq	-40(%rbp), %rax
	movq	$0, 80(%rax)
	movq	-40(%rbp), %rax
	movq	80(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 72(%rax)
.L57:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	P_SetThingPosition, .-P_SetThingPosition
	.globl	P_BlockLinesIterator
	.type	P_BlockLinesIterator, @function
P_BlockLinesIterator:
.LFB15:
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
	movq	%rdx, -48(%rbp)
	cmpl	$0, -36(%rbp)
	js	.L59
	cmpl	$0, -40(%rbp)
	js	.L59
	movl	bmapwidth(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jge	.L59
	movl	bmapheight(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L60
.L59:
	movl	$1, %eax
	jmp	.L61
.L60:
	movl	bmapwidth(%rip), %eax
	imull	-40(%rbp), %eax
	movl	%eax, %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movq	blockmap(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -20(%rbp)
	movq	blockmaplump(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	jmp	.L62
.L65:
	movq	lines(%rip), %rcx
	movq	-16(%rbp), %rax
	movzwl	(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	72(%rax), %edx
	movl	validcount(%rip), %eax
	cmpl	%eax, %edx
	je	.L66
	movl	validcount(%rip), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 72(%rax)
	movq	-8(%rbp), %rax
	movq	-48(%rbp), %rdx
	movq	%rax, %rdi
	call	*%rdx
	testl	%eax, %eax
	jne	.L64
	movl	$0, %eax
	jmp	.L61
.L66:
	nop
.L64:
	addq	$2, -16(%rbp)
.L62:
	movq	-16(%rbp), %rax
	movzwl	(%rax), %eax
	cmpw	$-1, %ax
	jne	.L65
	movl	$1, %eax
.L61:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	P_BlockLinesIterator, .-P_BlockLinesIterator
	.globl	P_BlockThingsIterator
	.type	P_BlockThingsIterator, @function
P_BlockThingsIterator:
.LFB16:
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
	movq	%rdx, -32(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L68
	cmpl	$0, -24(%rbp)
	js	.L68
	movl	bmapwidth(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L68
	movl	bmapheight(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L69
.L68:
	movl	$1, %eax
	jmp	.L70
.L69:
	movq	blocklinks(%rip), %rdx
	movl	bmapwidth(%rip), %eax
	imull	-24(%rbp), %eax
	movl	%eax, %ecx
	movl	-20(%rbp), %eax
	addl	%ecx, %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L71
.L73:
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rax, %rdi
	call	*%rdx
	testl	%eax, %eax
	jne	.L72
	movl	$0, %eax
	jmp	.L70
.L72:
	movq	-8(%rbp), %rax
	movq	72(%rax), %rax
	movq	%rax, -8(%rbp)
.L71:
	cmpq	$0, -8(%rbp)
	jne	.L73
	movl	$1, %eax
.L70:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	P_BlockThingsIterator, .-P_BlockThingsIterator
	.globl	intercepts
	.bss
	.align 32
	.type	intercepts, @object
	.size	intercepts, 2048
intercepts:
	.zero	2048
	.globl	intercept_p
	.align 8
	.type	intercept_p, @object
	.size	intercept_p, 8
intercept_p:
	.zero	8
	.globl	trace
	.align 16
	.type	trace, @object
	.size	trace, 16
trace:
	.zero	16
	.globl	earlyout
	.align 4
	.type	earlyout, @object
	.size	earlyout, 4
earlyout:
	.zero	4
	.globl	ptflags
	.align 4
	.type	ptflags, @object
	.size	ptflags, 4
ptflags:
	.zero	4
	.text
	.globl	PIT_AddLineIntercepts
	.type	PIT_AddLineIntercepts, @function
PIT_AddLineIntercepts:
.LFB17:
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
	movl	8+trace(%rip), %eax
	cmpl	$1048576, %eax
	jg	.L75
	movl	12+trace(%rip), %eax
	cmpl	$1048576, %eax
	jg	.L75
	movl	8+trace(%rip), %eax
	cmpl	$-1048576, %eax
	jl	.L75
	movl	12+trace(%rip), %eax
	cmpl	$-1048576, %eax
	jge	.L76
.L75:
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %ecx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	leaq	trace(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnDivlineSide
	movl	%eax, -44(%rbp)
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movl	4(%rax), %ecx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	leaq	trace(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnDivlineSide
	movl	%eax, -40(%rbp)
	jmp	.L77
.L76:
	movl	4+trace(%rip), %ecx
	movl	trace(%rip), %eax
	movq	-56(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnLineSide
	movl	%eax, -44(%rbp)
	movl	4+trace(%rip), %edx
	movl	12+trace(%rip), %eax
	leal	(%rdx,%rax), %esi
	movl	trace(%rip), %edx
	movl	8+trace(%rip), %eax
	leal	(%rdx,%rax), %ecx
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movl	%ecx, %edi
	call	P_PointOnLineSide
	movl	%eax, -40(%rbp)
.L77:
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jne	.L78
	movl	$1, %eax
	jmp	.L82
.L78:
	leaq	-32(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_MakeDivline
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	trace(%rip), %rax
	movq	%rax, %rdi
	call	P_InterceptVector
	movl	%eax, -36(%rbp)
	cmpl	$0, -36(%rbp)
	jns	.L80
	movl	$1, %eax
	jmp	.L82
.L80:
	movl	earlyout(%rip), %eax
	testl	%eax, %eax
	je	.L81
	cmpl	$65535, -36(%rbp)
	jg	.L81
	movq	-56(%rbp), %rax
	movq	64(%rax), %rax
	testq	%rax, %rax
	jne	.L81
	movl	$0, %eax
	jmp	.L82
.L81:
	movq	intercept_p(%rip), %rax
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	movq	intercept_p(%rip), %rax
	movl	$1, 4(%rax)
	movq	intercept_p(%rip), %rax
	movq	-56(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	intercept_p(%rip), %rax
	addq	$16, %rax
	movq	%rax, intercept_p(%rip)
	movl	$1, %eax
.L82:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L83
	call	__stack_chk_fail@PLT
.L83:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	PIT_AddLineIntercepts, .-PIT_AddLineIntercepts
	.globl	PIT_AddThingIntercepts
	.type	PIT_AddThingIntercepts, @function
PIT_AddThingIntercepts:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	8+trace(%rip), %edx
	movl	12+trace(%rip), %eax
	xorl	%edx, %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	movl	%eax, -48(%rbp)
	cmpl	$0, -48(%rbp)
	je	.L85
	movq	-72(%rbp), %rax
	movl	24(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -64(%rbp)
	movq	-72(%rbp), %rax
	movl	28(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -60(%rbp)
	movq	-72(%rbp), %rax
	movl	24(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movq	-72(%rbp), %rax
	movl	28(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -52(%rbp)
	jmp	.L86
.L85:
	movq	-72(%rbp), %rax
	movl	24(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -64(%rbp)
	movq	-72(%rbp), %rax
	movl	28(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -60(%rbp)
	movq	-72(%rbp), %rax
	movl	24(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movq	-72(%rbp), %rax
	movl	28(%rax), %edx
	movq	-72(%rbp), %rax
	movl	104(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
.L86:
	movl	-60(%rbp), %ecx
	movl	-64(%rbp), %eax
	leaq	trace(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnDivlineSide
	movl	%eax, -44(%rbp)
	movl	-52(%rbp), %ecx
	movl	-56(%rbp), %eax
	leaq	trace(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_PointOnDivlineSide
	movl	%eax, -40(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jne	.L87
	movl	$1, %eax
	jmp	.L90
.L87:
	movl	-64(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-56(%rbp), %eax
	subl	-64(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-52(%rbp), %eax
	subl	-60(%rbp), %eax
	movl	%eax, -20(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	trace(%rip), %rax
	movq	%rax, %rdi
	call	P_InterceptVector
	movl	%eax, -36(%rbp)
	cmpl	$0, -36(%rbp)
	jns	.L89
	movl	$1, %eax
	jmp	.L90
.L89:
	movq	intercept_p(%rip), %rax
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	movq	intercept_p(%rip), %rax
	movl	$0, 4(%rax)
	movq	intercept_p(%rip), %rax
	movq	-72(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	intercept_p(%rip), %rax
	addq	$16, %rax
	movq	%rax, intercept_p(%rip)
	movl	$1, %eax
.L90:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L91
	call	__stack_chk_fail@PLT
.L91:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	PIT_AddThingIntercepts, .-PIT_AddThingIntercepts
	.globl	P_TraverseIntercepts
	.type	P_TraverseIntercepts, @function
P_TraverseIntercepts:
.LFB19:
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
	movq	intercept_p(%rip), %rdx
	leaq	intercepts(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movl	%eax, -24(%rbp)
	movq	$0, -8(%rbp)
	jmp	.L93
.L100:
	movl	$2147483647, -20(%rbp)
	leaq	intercepts(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L94
.L96:
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L95
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
.L95:
	addq	$16, -16(%rbp)
.L94:
	movq	intercept_p(%rip), %rax
	cmpq	%rax, -16(%rbp)
	jb	.L96
	movl	-20(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jle	.L97
	movl	$1, %eax
	jmp	.L98
.L97:
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rax, %rdi
	call	*%rdx
	testl	%eax, %eax
	jne	.L99
	movl	$0, %eax
	jmp	.L98
.L99:
	movq	-8(%rbp), %rax
	movl	$2147483647, (%rax)
.L93:
	movl	-24(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -24(%rbp)
	testl	%eax, %eax
	jne	.L100
	movl	$1, %eax
.L98:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	P_TraverseIntercepts, .-P_TraverseIntercepts
	.globl	P_PathTraverse
	.type	P_PathTraverse, @function
P_PathTraverse:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movl	%edi, -84(%rbp)
	movl	%esi, -88(%rbp)
	movl	%edx, -92(%rbp)
	movl	%ecx, -96(%rbp)
	movl	%r8d, -100(%rbp)
	movq	%r9, -112(%rbp)
	movl	-100(%rbp), %eax
	andl	$4, %eax
	movl	%eax, earlyout(%rip)
	movl	validcount(%rip), %eax
	addl	$1, %eax
	movl	%eax, validcount(%rip)
	leaq	intercepts(%rip), %rax
	movq	%rax, intercept_p(%rip)
	movl	bmaporgx(%rip), %eax
	movl	-84(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	andl	$8388607, %eax
	testl	%eax, %eax
	jne	.L102
	addl	$65536, -84(%rbp)
.L102:
	movl	bmaporgy(%rip), %eax
	movl	-88(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	andl	$8388607, %eax
	testl	%eax, %eax
	jne	.L103
	addl	$65536, -88(%rbp)
.L103:
	movl	-84(%rbp), %eax
	movl	%eax, trace(%rip)
	movl	-88(%rbp), %eax
	movl	%eax, 4+trace(%rip)
	movl	-92(%rbp), %eax
	subl	-84(%rbp), %eax
	movl	%eax, 8+trace(%rip)
	movl	-96(%rbp), %eax
	subl	-88(%rbp), %eax
	movl	%eax, 12+trace(%rip)
	movl	bmaporgx(%rip), %eax
	subl	%eax, -84(%rbp)
	movl	bmaporgy(%rip), %eax
	subl	%eax, -88(%rbp)
	movl	-84(%rbp), %eax
	sarl	$23, %eax
	movl	%eax, -32(%rbp)
	movl	-88(%rbp), %eax
	sarl	$23, %eax
	movl	%eax, -28(%rbp)
	movl	bmaporgx(%rip), %eax
	subl	%eax, -92(%rbp)
	movl	bmaporgy(%rip), %eax
	subl	%eax, -96(%rbp)
	movl	-92(%rbp), %eax
	sarl	$23, %eax
	movl	%eax, -24(%rbp)
	movl	-96(%rbp), %eax
	sarl	$23, %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jle	.L104
	movl	$1, -44(%rbp)
	movl	-84(%rbp), %eax
	sarl	$7, %eax
	movzwl	%ax, %eax
	movl	$65536, %edx
	subl	%eax, %edx
	movl	%edx, -64(%rbp)
	movl	-92(%rbp), %eax
	subl	-84(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	-96(%rbp), %eax
	subl	-88(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -68(%rbp)
	jmp	.L105
.L104:
	movl	-24(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L106
	movl	$-1, -44(%rbp)
	movl	-84(%rbp), %eax
	sarl	$7, %eax
	andl	$65535, %eax
	movl	%eax, -64(%rbp)
	movl	-92(%rbp), %eax
	subl	-84(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	-96(%rbp), %eax
	subl	-88(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -68(%rbp)
	jmp	.L105
.L106:
	movl	$0, -44(%rbp)
	movl	$65536, -64(%rbp)
	movl	$16777216, -68(%rbp)
.L105:
	movl	-88(%rbp), %eax
	sarl	$7, %eax
	movl	%eax, %ebx
	movl	-68(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -56(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle	.L107
	movl	$1, -40(%rbp)
	movl	-88(%rbp), %eax
	sarl	$7, %eax
	movzwl	%ax, %eax
	movl	$65536, %edx
	subl	%eax, %edx
	movl	%edx, -64(%rbp)
	movl	-96(%rbp), %eax
	subl	-88(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	-92(%rbp), %eax
	subl	-84(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -72(%rbp)
	jmp	.L108
.L107:
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L109
	movl	$-1, -40(%rbp)
	movl	-88(%rbp), %eax
	sarl	$7, %eax
	andl	$65535, %eax
	movl	%eax, -64(%rbp)
	movl	-96(%rbp), %eax
	subl	-88(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	-92(%rbp), %eax
	subl	-84(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -72(%rbp)
	jmp	.L108
.L109:
	movl	$0, -40(%rbp)
	movl	$65536, -64(%rbp)
	movl	$16777216, -72(%rbp)
.L108:
	movl	-84(%rbp), %eax
	sarl	$7, %eax
	movl	%eax, %ebx
	movl	-72(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	addl	%ebx, %eax
	movl	%eax, -60(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -52(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -48(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L110
.L118:
	movl	-100(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L111
	movl	-48(%rbp), %ecx
	movl	-52(%rbp), %eax
	leaq	PIT_AddLineIntercepts(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockLinesIterator
	testl	%eax, %eax
	jne	.L111
	movl	$0, %eax
	jmp	.L112
.L111:
	movl	-100(%rbp), %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L113
	movl	-48(%rbp), %ecx
	movl	-52(%rbp), %eax
	leaq	PIT_AddThingIntercepts(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_BlockThingsIterator
	testl	%eax, %eax
	jne	.L113
	movl	$0, %eax
	jmp	.L112
.L113:
	movl	-52(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jne	.L114
	movl	-48(%rbp), %eax
	cmpl	-20(%rbp), %eax
	je	.L119
.L114:
	movl	-56(%rbp), %eax
	sarl	$16, %eax
	cmpl	%eax, -48(%rbp)
	jne	.L116
	movl	-68(%rbp), %eax
	addl	%eax, -56(%rbp)
	movl	-44(%rbp), %eax
	addl	%eax, -52(%rbp)
	jmp	.L117
.L116:
	movl	-60(%rbp), %eax
	sarl	$16, %eax
	cmpl	%eax, -52(%rbp)
	jne	.L117
	movl	-72(%rbp), %eax
	addl	%eax, -60(%rbp)
	movl	-40(%rbp), %eax
	addl	%eax, -48(%rbp)
.L117:
	addl	$1, -36(%rbp)
.L110:
	cmpl	$63, -36(%rbp)
	jle	.L118
	jmp	.L115
.L119:
	nop
.L115:
	movq	-112(%rbp), %rax
	movl	$65536, %esi
	movq	%rax, %rdi
	call	P_TraverseIntercepts
.L112:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	P_PathTraverse, .-P_PathTraverse
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
