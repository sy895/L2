	.file	"p_doors.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_doors.c,v 1.4 1997/02/03 16:47:53 b1 Exp $"
	.text
	.globl	T_VerticalDoor
	.type	T_VerticalDoor, @function
T_VerticalDoor:
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
	movl	48(%rax), %eax
	cmpl	$2, %eax
	je	.L2
	cmpl	$2, %eax
	jg	.L26
	cmpl	$1, %eax
	je	.L4
	cmpl	$1, %eax
	jg	.L26
	cmpl	$-1, %eax
	je	.L5
	testl	%eax, %eax
	jne	.L26
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	jne	.L27
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$5, %eax
	je	.L7
	cmpl	$5, %eax
	ja	.L28
	testl	%eax, %eax
	je	.L9
	cmpl	$1, %eax
	je	.L10
	jmp	.L28
.L7:
	movq	-24(%rbp), %rax
	movl	$-1, 48(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$89, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L6
.L9:
	movq	-24(%rbp), %rax
	movl	$-1, 48(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$21, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L6
.L10:
	movq	-24(%rbp), %rax
	movl	$1, 48(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L6
.L28:
	nop
.L6:
	jmp	.L27
.L2:
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	jne	.L29
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$4, %eax
	jne	.L30
	movq	-24(%rbp), %rax
	movl	$1, 48(%rax)
	movq	-24(%rbp), %rax
	movl	$0, 24(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L11
.L30:
	nop
.L11:
	jmp	.L29
.L5:
	movq	-24(%rbp), %rax
	movl	48(%rax), %ecx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	44(%rax), %esi
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	%ecx, %r9d
	movl	$1, %r8d
	movl	$0, %ecx
	movq	%rax, %rdi
	call	T_MovePlane@PLT
	movl	%eax, -4(%rbp)
	cmpl	$2, -4(%rbp)
	jne	.L13
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$7, %eax
	ja	.L31
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L16(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L16(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L16:
	.long	.L17-.L16
	.long	.L18-.L16
	.long	.L17-.L16
	.long	.L31-.L16
	.long	.L31-.L16
	.long	.L15-.L16
	.long	.L31-.L16
	.long	.L15-.L16
	.text
.L15:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	$0, 104(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$89, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L20
.L17:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	$0, 104(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	jmp	.L20
.L18:
	movq	-24(%rbp), %rax
	movl	$0, 48(%rax)
	movq	-24(%rbp), %rax
	movl	$1050, 56(%rax)
	jmp	.L20
.L13:
	cmpl	$1, -4(%rbp)
	jne	.L32
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$2, %eax
	je	.L33
	cmpl	$7, %eax
	je	.L33
	movq	-24(%rbp), %rax
	movl	$1, 48(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L20
.L31:
	nop
	jmp	.L32
.L33:
	nop
.L20:
	jmp	.L32
.L4:
	movq	-24(%rbp), %rax
	movl	48(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	40(%rax), %edx
	movq	-24(%rbp), %rax
	movl	44(%rax), %esi
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	%ecx, %r9d
	movl	$1, %r8d
	movl	$0, %ecx
	movq	%rax, %rdi
	call	T_MovePlane@PLT
	movl	%eax, -4(%rbp)
	cmpl	$2, -4(%rbp)
	jne	.L34
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$6, %eax
	seta	%dl
	testb	%dl, %dl
	jne	.L35
	movl	$1, %edx
	movl	%eax, %ecx
	salq	%cl, %rdx
	movq	%rdx, %rax
	movq	%rax, %rdx
	andl	$74, %edx
	testq	%rdx, %rdx
	setne	%dl
	testb	%dl, %dl
	jne	.L25
	andl	$33, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L35
	movq	-24(%rbp), %rax
	movl	$0, 48(%rax)
	movq	-24(%rbp), %rax
	movl	52(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L23
.L25:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	$0, 104(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	jmp	.L23
.L35:
	nop
.L23:
	jmp	.L34
.L27:
	nop
	jmp	.L26
.L29:
	nop
	jmp	.L26
.L32:
	nop
	jmp	.L26
.L34:
	nop
.L26:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	T_VerticalDoor, .-T_VerticalDoor
	.section	.rodata
	.align 8
.LC0:
	.string	"You need a blue key to activate this object"
	.align 8
.LC1:
	.string	"You need a red key to activate this object"
	.align 8
.LC2:
	.string	"You need a yellow key to activate this object"
	.text
	.globl	EV_DoLockedDoor
	.type	EV_DoLockedDoor, @function
EV_DoLockedDoor:
.LFB1:
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
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	192(%rax), %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L37
	movl	$0, %eax
	jmp	.L38
.L37:
	movq	-24(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$137, %eax
	jg	.L39
	cmpl	$136, %eax
	jge	.L40
	cmpl	$135, %eax
	jg	.L39
	cmpl	$134, %eax
	jge	.L41
	cmpl	$99, %eax
	je	.L42
	cmpl	$133, %eax
	jne	.L39
.L42:
	cmpq	$0, -8(%rbp)
	jne	.L43
	movl	$0, %eax
	jmp	.L38
.L43:
	movq	-8(%rbp), %rax
	movl	72(%rax), %eax
	testl	%eax, %eax
	jne	.L49
	movq	-8(%rbp), %rax
	movl	84(%rax), %eax
	testl	%eax, %eax
	jne	.L49
	movq	-8(%rbp), %rax
	leaq	.LC0(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %eax
	jmp	.L38
.L41:
	cmpq	$0, -8(%rbp)
	jne	.L45
	movl	$0, %eax
	jmp	.L38
.L45:
	movq	-8(%rbp), %rax
	movl	80(%rax), %eax
	testl	%eax, %eax
	jne	.L50
	movq	-8(%rbp), %rax
	movl	92(%rax), %eax
	testl	%eax, %eax
	jne	.L50
	movq	-8(%rbp), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %eax
	jmp	.L38
.L40:
	cmpq	$0, -8(%rbp)
	jne	.L47
	movl	$0, %eax
	jmp	.L38
.L47:
	movq	-8(%rbp), %rax
	movl	76(%rax), %eax
	testl	%eax, %eax
	jne	.L51
	movq	-8(%rbp), %rax
	movl	88(%rax), %eax
	testl	%eax, %eax
	jne	.L51
	movq	-8(%rbp), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %eax
	jmp	.L38
.L49:
	nop
	jmp	.L39
.L50:
	nop
	jmp	.L39
.L51:
	nop
.L39:
	movl	-28(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	EV_DoDoor
.L38:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	EV_DoLockedDoor, .-EV_DoLockedDoor
	.globl	EV_DoDoor
	.type	EV_DoDoor, @function
EV_DoDoor:
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
	movl	%esi, -44(%rbp)
	movl	$-1, -24(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L53
.L65:
	movq	sectors(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L67
	movl	$1, -20(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	leaq	T_VerticalDoor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$150, 52(%rax)
	movq	-8(%rbp), %rax
	movl	$131072, 44(%rax)
	cmpl	$7, -44(%rbp)
	ja	.L68
	movl	-44(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L58(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L58(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L58:
	.long	.L60-.L58
	.long	.L62-.L58
	.long	.L61-.L58
	.long	.L60-.L58
	.long	.L68-.L58
	.long	.L59-.L58
	.long	.L59-.L58
	.long	.L57-.L58
	.text
.L57:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 48(%rax)
	movq	-8(%rbp), %rax
	movl	$524288, 44(%rax)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$89, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L53
.L61:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 48(%rax)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$21, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L53
.L62:
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 48(%rax)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$21, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L53
.L59:
	movq	-8(%rbp), %rax
	movl	$1, 48(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$524288, 44(%rax)
	movq	-8(%rbp), %rax
	movl	40(%rax), %edx
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	je	.L69
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$88, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L69
.L60:
	movq	-8(%rbp), %rax
	movl	$1, 48(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	40(%rax), %edx
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	je	.L70
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L70
.L67:
	nop
	jmp	.L53
.L68:
	nop
	jmp	.L53
.L69:
	nop
	jmp	.L53
.L70:
	nop
.L53:
	movl	-24(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag@PLT
	movl	%eax, -24(%rbp)
	cmpl	$0, -24(%rbp)
	jns	.L65
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	EV_DoDoor, .-EV_DoDoor
	.section	.rodata
	.align 8
.LC3:
	.string	"You need a blue key to open this door"
	.align 8
.LC4:
	.string	"You need a yellow key to open this door"
	.align 8
.LC5:
	.string	"You need a red key to open this door"
	.text
	.globl	EV_VerticalDoor
	.type	EV_VerticalDoor, @function
EV_VerticalDoor:
.LFB3:
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
	movl	$0, -32(%rbp)
	movq	-48(%rbp), %rax
	movq	192(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$34, %eax
	seta	%dl
	testb	%dl, %dl
	jne	.L72
	movl	$1, %edx
	movl	%eax, %ecx
	salq	%cl, %rdx
	movq	%rdx, %rax
	movabsq	$8858370048, %rdx
	andq	%rax, %rdx
	testq	%rdx, %rdx
	setne	%dl
	testb	%dl, %dl
	jne	.L73
	movabsq	$17314086912, %rdx
	andq	%rax, %rdx
	testq	%rdx, %rdx
	setne	%dl
	testb	%dl, %dl
	jne	.L74
	movabsq	$4362076160, %rdx
	andq	%rdx, %rax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L72
	cmpq	$0, -24(%rbp)
	je	.L96
	movq	-24(%rbp), %rax
	movl	72(%rax), %eax
	testl	%eax, %eax
	jne	.L97
	movq	-24(%rbp), %rax
	movl	84(%rax), %eax
	testl	%eax, %eax
	jne	.L97
	movq	-24(%rbp), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L71
.L74:
	cmpq	$0, -24(%rbp)
	je	.L98
	movq	-24(%rbp), %rax
	movl	76(%rax), %eax
	testl	%eax, %eax
	jne	.L99
	movq	-24(%rbp), %rax
	movl	88(%rax), %eax
	testl	%eax, %eax
	jne	.L99
	movq	-24(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L71
.L73:
	cmpq	$0, -24(%rbp)
	je	.L100
	movq	-24(%rbp), %rax
	movl	80(%rax), %eax
	testl	%eax, %eax
	jne	.L101
	movq	-24(%rbp), %rax
	movl	92(%rax), %eax
	testl	%eax, %eax
	jne	.L101
	movq	-24(%rbp), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L71
.L97:
	nop
	jmp	.L72
.L99:
	nop
	jmp	.L72
.L101:
	nop
.L72:
	movq	sides(%rip), %rcx
	movl	-32(%rbp), %eax
	xorl	$1, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	sectors(%rip), %rax
	movq	-16(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movl	%eax, -28(%rbp)
	movq	-16(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	je	.L82
	movq	-16(%rbp), %rax
	movq	104(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$117, %eax
	je	.L83
	cmpl	$117, %eax
	jg	.L82
	cmpl	$1, %eax
	je	.L83
	testl	%eax, %eax
	jle	.L82
	subl	$26, %eax
	cmpl	$2, %eax
	ja	.L82
.L83:
	movq	-8(%rbp), %rax
	movl	48(%rax), %eax
	cmpl	$-1, %eax
	jne	.L84
	movq	-8(%rbp), %rax
	movl	$1, 48(%rax)
	jmp	.L71
.L84:
	movq	-48(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L102
	movq	-8(%rbp), %rax
	movl	$-1, 48(%rax)
	jmp	.L71
.L82:
	movq	-40(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$118, %eax
	jg	.L87
	cmpl	$117, %eax
	jge	.L88
	cmpl	$1, %eax
	je	.L89
	cmpl	$31, %eax
	je	.L89
	jmp	.L87
.L88:
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$88, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L90
.L89:
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L90
.L87:
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
.L90:
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	leaq	T_VerticalDoor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 48(%rax)
	movq	-8(%rbp), %rax
	movl	$131072, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$150, 52(%rax)
	movq	-40(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$118, %eax
	je	.L91
	cmpl	$118, %eax
	jg	.L92
	cmpl	$117, %eax
	je	.L93
	cmpl	$117, %eax
	jg	.L92
	cmpl	$34, %eax
	jg	.L92
	cmpl	$31, %eax
	jge	.L94
	cmpl	$1, %eax
	je	.L95
	testl	%eax, %eax
	jle	.L92
	subl	$26, %eax
	cmpl	$2, %eax
	ja	.L92
.L95:
	movq	-8(%rbp), %rax
	movl	$0, 24(%rax)
	jmp	.L92
.L94:
	movq	-8(%rbp), %rax
	movl	$3, 24(%rax)
	movq	-40(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L92
.L93:
	movq	-8(%rbp), %rax
	movl	$5, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$524288, 44(%rax)
	jmp	.L92
.L91:
	movq	-8(%rbp), %rax
	movl	$6, 24(%rax)
	movq	-40(%rbp), %rax
	movw	$0, 26(%rax)
	movq	-8(%rbp), %rax
	movl	$524288, 44(%rax)
	nop
.L92:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	jmp	.L71
.L96:
	nop
	jmp	.L71
.L98:
	nop
	jmp	.L71
.L100:
	nop
	jmp	.L71
.L102:
	nop
.L71:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	EV_VerticalDoor, .-EV_VerticalDoor
	.globl	P_SpawnDoorCloseIn30
	.type	P_SpawnDoorCloseIn30, @function
P_SpawnDoorCloseIn30:
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
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-24(%rbp), %rax
	movw	$0, 14(%rax)
	movq	-8(%rbp), %rax
	leaq	T_VerticalDoor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 48(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$131072, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$1050, 56(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_SpawnDoorCloseIn30, .-P_SpawnDoorCloseIn30
	.globl	P_SpawnDoorRaiseIn5Mins
	.type	P_SpawnDoorRaiseIn5Mins, @function
P_SpawnDoorRaiseIn5Mins:
.LFB5:
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
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-24(%rbp), %rax
	movw	$0, 14(%rax)
	movq	-8(%rbp), %rax
	leaq	T_VerticalDoor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	$2, 48(%rax)
	movq	-8(%rbp), %rax
	movl	$4, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$131072, 44(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	-262144(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$150, 52(%rax)
	movq	-8(%rbp), %rax
	movl	$10500, 56(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_SpawnDoorRaiseIn5Mins, .-P_SpawnDoorRaiseIn5Mins
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
