	.file	"p_telept.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: p_telept.c,v 1.3 1997/01/28 22:08:29 b1 Exp $"
	.text
	.globl	EV_Teleport
	.type	EV_Teleport, @function
EV_Teleport:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%rdi, -72(%rbp)
	movl	%esi, -76(%rbp)
	movq	%rdx, -88(%rbp)
	movq	-88(%rbp), %rax
	movl	160(%rax), %eax
	andl	$65536, %eax
	testl	%eax, %eax
	je	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	cmpl	$1, -76(%rbp)
	jne	.L4
	movl	$0, %eax
	jmp	.L3
.L4:
	movq	-72(%rbp), %rax
	movzwl	28(%rax), %eax
	cwtl
	movl	%eax, -52(%rbp)
	movl	$0, -56(%rbp)
	jmp	.L5
.L16:
	movq	sectors(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -52(%rbp)
	jne	.L6
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -32(%rbp)
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -32(%rbp)
	jmp	.L7
.L15:
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L17
	movq	-32(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$41, %eax
	jne	.L18
	movq	-24(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	sectors(%rip), %rax
	movq	-16(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$7, %rax
	movq	%rax, %rdx
	movl	-56(%rbp), %eax
	cltq
	cmpq	%rax, %rdx
	jne	.L19
	movq	-88(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, -48(%rbp)
	movq	-88(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, -44(%rbp)
	movq	-88(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -40(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %edx
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-88(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_TeleportMove@PLT
	testl	%eax, %eax
	jne	.L12
	movl	$0, %eax
	jmp	.L3
.L12:
	movq	-88(%rbp), %rax
	movl	96(%rax), %edx
	movq	-88(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-88(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L13
	movq	-88(%rbp), %rax
	movl	32(%rax), %ecx
	movq	-88(%rbp), %rax
	movq	192(%rax), %rax
	movl	24(%rax), %edx
	movq	-88(%rbp), %rax
	movq	192(%rax), %rax
	addl	%ecx, %edx
	movl	%edx, 20(%rax)
.L13:
	movl	-40(%rbp), %edx
	movl	-44(%rbp), %esi
	movl	-48(%rbp), %eax
	movl	$39, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	shrl	$19, %eax
	movl	%eax, -36(%rbp)
	movq	-88(%rbp), %rax
	movl	32(%rax), %esi
	movq	-24(%rbp), %rax
	movl	28(%rax), %ecx
	movl	-36(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	leal	(%rcx,%rax), %edi
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movq	finecosine(%rip), %rax
	movl	-36(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	movl	$39, %ecx
	movl	%esi, %edx
	movl	%edi, %esi
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-88(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L14
	movq	-88(%rbp), %rax
	movl	$18, 184(%rax)
.L14:
	movq	-24(%rbp), %rax
	movl	56(%rax), %edx
	movq	-88(%rbp), %rax
	movl	%edx, 56(%rax)
	movq	-88(%rbp), %rax
	movl	$0, 120(%rax)
	movq	-88(%rbp), %rax
	movl	120(%rax), %edx
	movq	-88(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-88(%rbp), %rax
	movl	116(%rax), %edx
	movq	-88(%rbp), %rax
	movl	%edx, 112(%rax)
	movl	$1, %eax
	jmp	.L3
.L17:
	nop
	jmp	.L9
.L18:
	nop
	jmp	.L9
.L19:
	nop
.L9:
	movq	-32(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -32(%rbp)
.L7:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -32(%rbp)
	jne	.L15
.L6:
	addl	$1, -56(%rbp)
.L5:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L16
	movl	$0, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	EV_Teleport, .-EV_Teleport
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
