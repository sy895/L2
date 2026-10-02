	.file	"p_sight.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_sight.c,v 1.3 1997/01/28 22:08:28 b1 Exp $"
	.globl	sightzstart
	.bss
	.align 4
	.type	sightzstart, @object
	.size	sightzstart, 4
sightzstart:
	.zero	4
	.globl	topslope
	.align 4
	.type	topslope, @object
	.size	topslope, 4
topslope:
	.zero	4
	.globl	bottomslope
	.align 4
	.type	bottomslope, @object
	.size	bottomslope, 4
bottomslope:
	.zero	4
	.globl	strace
	.align 16
	.type	strace, @object
	.size	strace, 16
strace:
	.zero	16
	.globl	t2x
	.align 4
	.type	t2x, @object
	.size	t2x, 4
t2x:
	.zero	4
	.globl	t2y
	.align 4
	.type	t2y, @object
	.size	t2y, 4
t2y:
	.zero	4
	.globl	sightcounts
	.align 8
	.type	sightcounts, @object
	.size	sightcounts, 8
sightcounts:
	.zero	8
	.text
	.globl	P_DivlineSide
	.type	P_DivlineSide, @function
P_DivlineSide:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jne	.L2
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jne	.L3
	movl	$2, %eax
	jmp	.L4
.L3:
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L5
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L4
.L5:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L4
.L2:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	jne	.L6
	movq	-32(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jne	.L7
	movl	$2, %eax
	jmp	.L4
.L7:
	movq	-32(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L8
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L4
.L8:
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L4
.L6:
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
	movl	12(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	sarl	$16, %eax
	imull	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-12(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	sarl	$16, %eax
	imull	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L9
	movl	$0, %eax
	jmp	.L4
.L9:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L10
	movl	$2, %eax
	jmp	.L4
.L10:
	movl	$1, %eax
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_DivlineSide, .-P_DivlineSide
	.globl	P_InterceptVector2
	.type	P_InterceptVector2, @function
P_InterceptVector2:
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
	jne	.L12
	movl	$0, %eax
	jmp	.L13
.L12:
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
.L13:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_InterceptVector2, .-P_InterceptVector2
	.section	.rodata
	.align 8
.LC0:
	.string	"P_CrossSubsector: ss %i with numss = %i"
	.text
	.globl	P_CrossSubsector
	.type	P_CrossSubsector, @function
P_CrossSubsector:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movl	%edi, -132(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	numsubsectors(%rip), %eax
	cmpl	%eax, -132(%rbp)
	jl	.L15
	movl	numsubsectors(%rip), %edx
	movl	-132(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L15:
	movq	subsectors(%rip), %rax
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -116(%rbp)
	movq	segs(%rip), %rcx
	movq	-80(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -88(%rbp)
	jmp	.L16
.L31:
	movq	-88(%rbp), %rax
	movq	32(%rax), %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movl	72(%rax), %edx
	movl	validcount(%rip), %eax
	cmpl	%eax, %edx
	je	.L34
	movl	validcount(%rip), %edx
	movq	-72(%rbp), %rax
	movl	%edx, 72(%rax)
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -64(%rbp)
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -56(%rbp)
	movq	-64(%rbp), %rax
	movl	4(%rax), %ecx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	leaq	strace(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_DivlineSide
	movl	%eax, -104(%rbp)
	movq	-56(%rbp), %rax
	movl	4(%rax), %ecx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	leaq	strace(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_DivlineSide
	movl	%eax, -100(%rbp)
	movl	-104(%rbp), %eax
	cmpl	-100(%rbp), %eax
	je	.L35
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-56(%rbp), %rax
	movl	(%rax), %edx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -24(%rbp)
	movq	-56(%rbp), %rax
	movl	4(%rax), %edx
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	movl	4+strace(%rip), %ecx
	movl	strace(%rip), %eax
	leaq	-32(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_DivlineSide
	movl	%eax, -104(%rbp)
	movl	t2y(%rip), %ecx
	movl	t2x(%rip), %eax
	leaq	-32(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_DivlineSide
	movl	%eax, -100(%rbp)
	movl	-104(%rbp), %eax
	cmpl	-100(%rbp), %eax
	je	.L36
	movq	-72(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L21
	movl	$0, %eax
	jmp	.L32
.L21:
	movq	-88(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rax, -48(%rbp)
	movq	-88(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L23
	movq	-48(%rbp), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	je	.L37
.L23:
	movq	-48(%rbp), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jge	.L24
	movq	-48(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -112(%rbp)
	jmp	.L25
.L24:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -112(%rbp)
.L25:
	movq	-48(%rbp), %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L26
	movq	-48(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -108(%rbp)
	jmp	.L27
.L26:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -108(%rbp)
.L27:
	movl	-108(%rbp), %eax
	cmpl	-112(%rbp), %eax
	jl	.L28
	movl	$0, %eax
	jmp	.L32
.L28:
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	strace(%rip), %rax
	movq	%rax, %rdi
	call	P_InterceptVector2
	movl	%eax, -96(%rbp)
	movq	-48(%rbp), %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	je	.L29
	movl	sightzstart(%rip), %eax
	movl	-108(%rbp), %edx
	subl	%eax, %edx
	movl	-96(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -92(%rbp)
	movl	bottomslope(%rip), %eax
	cmpl	%eax, -92(%rbp)
	jle	.L29
	movl	-92(%rbp), %eax
	movl	%eax, bottomslope(%rip)
.L29:
	movq	-48(%rbp), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	je	.L30
	movl	sightzstart(%rip), %eax
	movl	-112(%rbp), %edx
	subl	%eax, %edx
	movl	-96(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -92(%rbp)
	movl	topslope(%rip), %eax
	cmpl	%eax, -92(%rbp)
	jge	.L30
	movl	-92(%rbp), %eax
	movl	%eax, topslope(%rip)
.L30:
	movl	topslope(%rip), %edx
	movl	bottomslope(%rip), %eax
	cmpl	%eax, %edx
	jg	.L18
	movl	$0, %eax
	jmp	.L32
.L34:
	nop
	jmp	.L18
.L35:
	nop
	jmp	.L18
.L36:
	nop
	jmp	.L18
.L37:
	nop
.L18:
	addq	$56, -88(%rbp)
	subl	$1, -116(%rbp)
.L16:
	cmpl	$0, -116(%rbp)
	jne	.L31
	movl	$1, %eax
.L32:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L33
	call	__stack_chk_fail@PLT
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_CrossSubsector, .-P_CrossSubsector
	.globl	P_CrossBSPNode
	.type	P_CrossBSPNode, @function
P_CrossBSPNode:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	andl	$32768, %eax
	testl	%eax, %eax
	je	.L39
	cmpl	$-1, -20(%rbp)
	jne	.L40
	movl	$0, %edi
	call	P_CrossSubsector
	jmp	.L41
.L40:
	movl	-20(%rbp), %eax
	andb	$127, %ah
	movl	%eax, %edi
	call	P_CrossSubsector
	jmp	.L41
.L39:
	movq	nodes(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movl	4+strace(%rip), %ecx
	movl	strace(%rip), %eax
	movq	-8(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_DivlineSide
	movl	%eax, -12(%rbp)
	cmpl	$2, -12(%rbp)
	jne	.L42
	movl	$0, -12(%rbp)
.L42:
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$24, %rdx
	movzwl	(%rax,%rdx,2), %eax
	movzwl	%ax, %eax
	movl	%eax, %edi
	call	P_CrossBSPNode
	testl	%eax, %eax
	jne	.L43
	movl	$0, %eax
	jmp	.L41
.L43:
	movl	t2y(%rip), %ecx
	movl	t2x(%rip), %eax
	movq	-8(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	P_DivlineSide
	cmpl	%eax, -12(%rbp)
	jne	.L44
	movl	$1, %eax
	jmp	.L41
.L44:
	movl	-12(%rbp), %eax
	xorl	$1, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movslq	%edx, %rdx
	addq	$24, %rdx
	movzwl	(%rax,%rdx,2), %eax
	movzwl	%ax, %eax
	movl	%eax, %edi
	call	P_CrossBSPNode
.L41:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_CrossBSPNode, .-P_CrossBSPNode
	.globl	P_CheckSight
	.type	P_CheckSight, @function
P_CheckSight:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movl	%eax, -20(%rbp)
	movq	-48(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movl	%eax, -16(%rbp)
	movl	numsectors(%rip), %eax
	imull	-20(%rbp), %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	sarl	$3, %eax
	movl	%eax, -8(%rbp)
	movl	-12(%rbp), %eax
	andl	$7, %eax
	movl	$1, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	movl	%eax, -4(%rbp)
	movq	rejectmatrix(%rip), %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	andl	-4(%rbp), %eax
	testl	%eax, %eax
	je	.L46
	movl	sightcounts(%rip), %eax
	addl	$1, %eax
	movl	%eax, sightcounts(%rip)
	movl	$0, %eax
	jmp	.L47
.L46:
	movl	4+sightcounts(%rip), %eax
	addl	$1, %eax
	movl	%eax, 4+sightcounts(%rip)
	movl	validcount(%rip), %eax
	addl	$1, %eax
	movl	%eax, validcount(%rip)
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movq	-40(%rbp), %rax
	movl	108(%rax), %eax
	leal	(%rdx,%rax), %ecx
	movq	-40(%rbp), %rax
	movl	108(%rax), %eax
	sarl	$2, %eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, sightzstart(%rip)
	movq	-48(%rbp), %rax
	movl	32(%rax), %edx
	movq	-48(%rbp), %rax
	movl	108(%rax), %eax
	addl	%eax, %edx
	movl	sightzstart(%rip), %eax
	subl	%eax, %edx
	movl	%edx, topslope(%rip)
	movq	-48(%rbp), %rax
	movl	32(%rax), %edx
	movl	sightzstart(%rip), %eax
	subl	%eax, %edx
	movl	%edx, bottomslope(%rip)
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, strace(%rip)
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, 4+strace(%rip)
	movq	-48(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, t2x(%rip)
	movq	-48(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, t2y(%rip)
	movq	-48(%rbp), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movl	24(%rax), %eax
	subl	%eax, %edx
	movl	%edx, 8+strace(%rip)
	movq	-48(%rbp), %rax
	movl	28(%rax), %edx
	movq	-40(%rbp), %rax
	movl	28(%rax), %eax
	subl	%eax, %edx
	movl	%edx, 12+strace(%rip)
	movl	numnodes(%rip), %eax
	subl	$1, %eax
	movl	%eax, %edi
	call	P_CrossBSPNode
.L47:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_CheckSight, .-P_CheckSight
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
