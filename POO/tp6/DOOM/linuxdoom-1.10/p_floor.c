	.file	"p_floor.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_floor.c,v 1.4 1997/02/03 16:47:54 b1 Exp $"
	.text
	.globl	T_MovePlane
	.type	T_MovePlane, @function
T_MovePlane:
.LFB0:
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
	movl	%r9d, -44(%rbp)
	cmpl	$0, -40(%rbp)
	je	.L2
	cmpl	$1, -40(%rbp)
	je	.L3
	jmp	.L4
.L2:
	cmpl	$-1, -44(%rbp)
	je	.L5
	cmpl	$1, -44(%rbp)
	je	.L6
	jmp	.L4
.L5:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	subl	-28(%rbp), %eax
	cmpl	%eax, -32(%rbp)
	jle	.L8
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L9
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
.L9:
	movl	$2, %eax
	jmp	.L10
.L8:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	subl	-28(%rbp), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L25
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	$1, %eax
	jmp	.L10
.L6:
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -32(%rbp)
	jge	.L12
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L13
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
.L13:
	movl	$2, %eax
	jmp	.L10
.L12:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L26
	cmpl	$1, -36(%rbp)
	jne	.L15
	movl	$1, %eax
	jmp	.L10
.L15:
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, (%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	$1, %eax
	jmp	.L10
.L25:
	nop
	jmp	.L4
.L26:
	nop
	jmp	.L4
.L3:
	cmpl	$-1, -44(%rbp)
	je	.L16
	cmpl	$1, -44(%rbp)
	je	.L17
	jmp	.L28
.L16:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	subl	-28(%rbp), %eax
	cmpl	%eax, -32(%rbp)
	jle	.L19
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L20
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
.L20:
	movl	$2, %eax
	jmp	.L10
.L19:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	subl	-28(%rbp), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L27
	cmpl	$1, -36(%rbp)
	jne	.L22
	movl	$1, %eax
	jmp	.L10
.L22:
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	$1, %eax
	jmp	.L10
.L17:
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -32(%rbp)
	jge	.L23
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L24
	movq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
.L24:
	movl	$2, %eax
	jmp	.L10
.L23:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 4(%rax)
	movl	-36(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_ChangeSector@PLT
	movl	%eax, -4(%rbp)
	jmp	.L18
.L27:
	nop
.L18:
.L28:
	nop
.L4:
	movl	$0, %eax
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	T_MovePlane, .-T_MovePlane
	.globl	T_MoveFloor
	.type	T_MoveFloor, @function
T_MoveFloor:
.LFB1:
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
	movl	40(%rax), %edi
	movq	-24(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	52(%rax), %edx
	movq	-24(%rbp), %rax
	movl	56(%rax), %esi
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	%edi, %r9d
	movl	$0, %r8d
	movq	%rax, %rdi
	call	T_MovePlane
	movl	%eax, -4(%rbp)
	movl	leveltime(%rip), %eax
	andl	$7, %eax
	testl	%eax, %eax
	jne	.L30
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$22, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L30:
	cmpl	$2, -4(%rbp)
	jne	.L36
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	$0, 104(%rax)
	movq	-24(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	$1, %eax
	jne	.L32
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$11, %eax
	jne	.L37
	movq	-24(%rbp), %rax
	movl	44(%rax), %edx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movw	%dx, 14(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	-24(%rbp), %rdx
	movzwl	48(%rdx), %edx
	movw	%dx, 8(%rax)
	jmp	.L37
.L32:
	movq	-24(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	$-1, %eax
	jne	.L34
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	cmpl	$6, %eax
	jne	.L38
	movq	-24(%rbp), %rax
	movl	44(%rax), %edx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movw	%dx, 14(%rax)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	-24(%rbp), %rdx
	movzwl	48(%rdx), %edx
	movw	%dx, 8(%rax)
	jmp	.L38
.L37:
	nop
	jmp	.L34
.L38:
	nop
.L34:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	addq	$48, %rax
	movl	$19, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L36:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	T_MoveFloor, .-T_MoveFloor
	.globl	EV_DoFloor
	.type	EV_DoFloor, @function
EV_DoFloor:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movl	$-1, -40(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L40
.L69:
	movq	sectors(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L71
	movl	$1, -36(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-16(%rbp), %rax
	leaq	T_MoveFloor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movl	-60(%rbp), %edx
	movl	%edx, 24(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 28(%rax)
	cmpl	$12, -60(%rbp)
	ja	.L72
	movl	-60(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L45(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L45(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L45:
	.long	.L56-.L45
	.long	.L55-.L45
	.long	.L54-.L45
	.long	.L53-.L45
	.long	.L52-.L45
	.long	.L51-.L45
	.long	.L50-.L45
	.long	.L49-.L45
	.long	.L48-.L45
	.long	.L47-.L45
	.long	.L46-.L45
	.long	.L72-.L45
	.long	.L44-.L45
	.text
.L56:
	movq	-16(%rbp), %rax
	movl	$-1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindHighestFloorSurrounding@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	jmp	.L40
.L55:
	movq	-16(%rbp), %rax
	movl	$-1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestFloorSurrounding@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	jmp	.L40
.L54:
	movq	-16(%rbp), %rax
	movl	$-1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$262144, 56(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindHighestFloorSurrounding@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	movq	-16(%rbp), %rax
	movl	52(%rax), %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	je	.L73
	movq	-16(%rbp), %rax
	movl	52(%rax), %eax
	leal	524288(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
	jmp	.L73
.L47:
	movq	-16(%rbp), %rax
	movl	$1, 28(%rax)
.L53:
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestCeilingSurrounding@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	movq	-16(%rbp), %rax
	movl	52(%rax), %edx
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jle	.L58
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
.L58:
	movq	-16(%rbp), %rax
	movl	52(%rax), %eax
	cmpl	$9, -60(%rbp)
	jne	.L59
	movl	$524288, %ecx
	jmp	.L60
.L59:
	movl	$0, %ecx
.L60:
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
	jmp	.L40
.L46:
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$262144, 56(%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindNextHighestFloor@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	jmp	.L40
.L52:
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindNextHighestFloor@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	jmp	.L40
.L49:
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	movl	(%rax), %eax
	leal	1572864(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
	jmp	.L40
.L44:
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	movl	(%rax), %eax
	leal	33554432(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
	jmp	.L40
.L48:
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	movl	(%rax), %eax
	leal	1572864(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
	movq	-56(%rbp), %rax
	movq	56(%rax), %rax
	movzwl	8(%rax), %edx
	movq	-24(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-56(%rbp), %rax
	movq	56(%rax), %rax
	movzwl	14(%rax), %edx
	movq	-24(%rbp), %rax
	movw	%dx, 14(%rax)
	jmp	.L40
.L51:
	movl	$2147483647, -28(%rbp)
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movl	$0, -32(%rbp)
	jmp	.L61
.L64:
	movl	-32(%rbp), %edx
	movl	-40(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	twoSided@PLT
	testl	%eax, %eax
	je	.L62
	movl	-32(%rbp), %ecx
	movl	-40(%rbp), %eax
	movl	$0, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	getSide@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	testw	%ax, %ax
	js	.L63
	movq	textureheight(%rip), %rdx
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jle	.L63
	movq	textureheight(%rip), %rdx
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
.L63:
	movl	-32(%rbp), %ecx
	movl	-40(%rbp), %eax
	movl	$1, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	getSide@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	testw	%ax, %ax
	js	.L62
	movq	textureheight(%rip), %rdx
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jle	.L62
	movq	textureheight(%rip), %rdx
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
.L62:
	addl	$1, -32(%rbp)
.L61:
	movq	-24(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -32(%rbp)
	jl	.L64
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 52(%rax)
	jmp	.L40
.L50:
	movq	-16(%rbp), %rax
	movl	$-1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$65536, 56(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestFloorSurrounding@PLT
	movq	-16(%rbp), %rdx
	movl	%eax, 52(%rdx)
	movq	-24(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 48(%rax)
	movl	$0, -32(%rbp)
	jmp	.L65
.L68:
	movl	-32(%rbp), %edx
	movl	-40(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	twoSided@PLT
	testl	%eax, %eax
	je	.L66
	movl	-32(%rbp), %ecx
	movl	-40(%rbp), %eax
	movl	$0, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	getSide@PLT
	movq	16(%rax), %rdx
	movq	sectors(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movl	-40(%rbp), %eax
	cltq
	cmpq	%rax, %rdx
	jne	.L67
	movl	-32(%rbp), %ecx
	movl	-40(%rbp), %eax
	movl	$1, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	getSector@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	52(%rax), %eax
	cmpl	%eax, %edx
	jne	.L66
	movq	-24(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 48(%rax)
	movq	-24(%rbp), %rax
	movzwl	14(%rax), %eax
	movswl	%ax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 44(%rax)
	jmp	.L43
.L67:
	movl	-32(%rbp), %ecx
	movl	-40(%rbp), %eax
	movl	$0, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	getSector@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	52(%rax), %eax
	cmpl	%eax, %edx
	jne	.L66
	movq	-24(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 48(%rax)
	movq	-24(%rbp), %rax
	movzwl	14(%rax), %eax
	movswl	%ax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 44(%rax)
	jmp	.L43
.L66:
	addl	$1, -32(%rbp)
.L65:
	movq	-24(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -32(%rbp)
	jl	.L68
	jmp	.L72
.L43:
	jmp	.L72
.L71:
	nop
	jmp	.L40
.L72:
	nop
	jmp	.L40
.L73:
	nop
.L40:
	movl	-40(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag@PLT
	movl	%eax, -40(%rbp)
	cmpl	$0, -40(%rbp)
	jns	.L69
	movl	-36(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	EV_DoFloor, .-EV_DoFloor
	.globl	EV_BuildStairs
	.type	EV_BuildStairs, @function
EV_BuildStairs:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	movl	%esi, -76(%rbp)
	movl	$-1, -60(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L75
.L90:
	movq	sectors(%rip), %rax
	movl	-60(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L92
	movl	$1, -44(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-16(%rbp), %rax
	leaq	T_MoveFloor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	cmpl	$0, -76(%rbp)
	je	.L78
	cmpl	$1, -76(%rbp)
	je	.L79
	jmp	.L80
.L78:
	movl	$16384, -36(%rbp)
	movl	$524288, -40(%rbp)
	jmp	.L80
.L79:
	movl	$262144, -36(%rbp)
	movl	$1048576, -40(%rbp)
	nop
.L80:
	movq	-16(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, 56(%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movq	-16(%rbp), %rax
	movl	-56(%rbp), %edx
	movl	%edx, 52(%rax)
	movq	-24(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -32(%rbp)
.L89:
	movl	$0, -48(%rbp)
	movl	$0, -52(%rbp)
	jmp	.L81
.L88:
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-52(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	je	.L93
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-52(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	56(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	sectors(%rip), %rax
	movq	-8(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movl	%eax, -28(%rbp)
	movl	-60(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jne	.L94
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-52(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	64(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	sectors(%rip), %rax
	movq	-8(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movl	%eax, -28(%rbp)
	movq	-8(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	cmpl	%eax, -32(%rbp)
	jne	.L95
	movl	-40(%rbp), %eax
	addl	%eax, -56(%rbp)
	movq	-8(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L96
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -60(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-16(%rbp), %rax
	leaq	T_MoveFloor(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, 56(%rax)
	movq	-16(%rbp), %rax
	movl	-56(%rbp), %edx
	movl	%edx, 52(%rax)
	movl	$1, -48(%rbp)
	jmp	.L87
.L93:
	nop
	jmp	.L83
.L94:
	nop
	jmp	.L83
.L95:
	nop
	jmp	.L83
.L96:
	nop
.L83:
	addl	$1, -52(%rbp)
.L81:
	movq	-24(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -52(%rbp)
	jl	.L88
.L87:
	cmpl	$0, -48(%rbp)
	jne	.L89
	jmp	.L75
.L92:
	nop
.L75:
	movl	-60(%rbp), %edx
	movq	-72(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag@PLT
	movl	%eax, -60(%rbp)
	cmpl	$0, -60(%rbp)
	jns	.L90
	movl	-44(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	EV_BuildStairs, .-EV_BuildStairs
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
