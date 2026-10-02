	.file	"p_plats.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_plats.c,v 1.5 1997/02/03 22:45:12 b1 Exp $"
	.globl	activeplats
	.bss
	.align 32
	.type	activeplats, @object
	.size	activeplats, 240
activeplats:
	.zero	240
	.text
	.globl	T_PlatRaise
	.type	T_PlatRaise, @function
T_PlatRaise:
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
	movl	52(%rax), %eax
	cmpl	$3, %eax
	je	.L18
	cmpl	$3, %eax
	ja	.L19
	cmpl	$2, %eax
	je	.L4
	cmpl	$2, %eax
	ja	.L19
	testl	%eax, %eax
	je	.L5
	cmpl	$1, %eax
	je	.L6
	jmp	.L19
.L5:
	movq	-24(%rbp), %rax
	movl	60(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	40(%rax), %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %esi
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movl	$1, %r9d
	movl	$0, %r8d
	movq	%rax, %rdi
	call	T_MovePlane@PLT
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	cmpl	$2, %eax
	je	.L7
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	cmpl	$3, %eax
	jne	.L8
.L7:
	movl	leveltime(%rip), %eax
	andl	$7, %eax
	testl	%eax, %eax
	jne	.L8
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	addq	$48, %rax
	movl	$22, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L8:
	cmpl	$1, -4(%rbp)
	jne	.L9
	movq	-24(%rbp), %rax
	movl	60(%rax), %eax
	testl	%eax, %eax
	jne	.L9
	movq	-24(%rbp), %rax
	movl	44(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	-24(%rbp), %rax
	movl	$1, 52(%rax)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	addq	$48, %rax
	movl	$18, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L10
.L9:
	cmpl	$2, -4(%rbp)
	jne	.L20
	movq	-24(%rbp), %rax
	movl	44(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	-24(%rbp), %rax
	movl	$2, 52(%rax)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	addq	$48, %rax
	movl	$19, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-24(%rbp), %rax
	movl	68(%rax), %eax
	cmpl	$4, %eax
	je	.L11
	cmpl	$4, %eax
	ja	.L21
	cmpl	$1, %eax
	je	.L11
	testl	%eax, %eax
	je	.L21
	subl	$2, %eax
	cmpl	$1, %eax
	ja	.L21
	jmp	.L17
.L11:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveActivePlat
	jmp	.L10
.L17:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveActivePlat
	jmp	.L10
.L21:
	nop
.L10:
	jmp	.L20
.L6:
	movq	-24(%rbp), %rax
	movl	36(%rax), %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %esi
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movl	$-1, %r9d
	movl	$0, %r8d
	movl	$0, %ecx
	movq	%rax, %rdi
	call	T_MovePlane@PLT
	movl	%eax, -4(%rbp)
	cmpl	$2, -4(%rbp)
	jne	.L22
	movq	-24(%rbp), %rax
	movl	44(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	-24(%rbp), %rax
	movl	$2, 52(%rax)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	addq	$48, %rax
	movl	$19, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L22
.L4:
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	-24(%rbp), %rax
	movl	48(%rax), %eax
	testl	%eax, %eax
	jne	.L18
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	%eax, %edx
	jne	.L15
	movq	-24(%rbp), %rax
	movl	$0, 52(%rax)
	jmp	.L16
.L15:
	movq	-24(%rbp), %rax
	movl	$1, 52(%rax)
.L16:
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	addq	$48, %rax
	movl	$18, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L18:
	nop
	jmp	.L19
.L20:
	nop
	jmp	.L19
.L22:
	nop
.L19:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	T_PlatRaise, .-T_PlatRaise
	.globl	EV_DoPlat
	.type	EV_DoPlat, @function
EV_DoPlat:
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
	movl	%edx, -48(%rbp)
	movl	$-1, -24(%rbp)
	movl	$0, -20(%rbp)
	cmpl	$0, -44(%rbp)
	jne	.L42
	movq	-40(%rbp), %rax
	movzwl	28(%rax), %eax
	cwtl
	movl	%eax, %edi
	call	P_ActivateInStasis
	jmp	.L25
.L42:
	nop
.L25:
	jmp	.L26
.L40:
	movq	sectors(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L43
	movl	$1, -20(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$72, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-8(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 68(%rax)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	leaq	T_PlatRaise(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 60(%rax)
	movq	-40(%rbp), %rax
	movzwl	28(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 64(%rax)
	cmpl	$4, -44(%rbp)
	ja	.L29
	movl	-44(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L31(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L31(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L31:
	.long	.L35-.L31
	.long	.L34-.L31
	.long	.L33-.L31
	.long	.L32-.L31
	.long	.L30-.L31
	.text
.L32:
	movq	-8(%rbp), %rax
	movl	$32768, 32(%rax)
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	movzwl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindNextHighestFloor@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	$0, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 52(%rax)
	movq	-16(%rbp), %rax
	movw	$0, 14(%rax)
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$22, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L29
.L33:
	movq	-8(%rbp), %rax
	movl	$32768, 32(%rax)
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	movzwl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	movl	-48(%rbp), %edx
	sall	$16, %edx
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 52(%rax)
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$22, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L29
.L34:
	movq	-8(%rbp), %rax
	movl	$262144, 32(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestFloorSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 36(%rdx)
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L36
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
.L36:
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$105, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 52(%rax)
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$18, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L29
.L30:
	movq	-8(%rbp), %rax
	movl	$524288, 32(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestFloorSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 36(%rdx)
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L37
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
.L37:
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$105, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 52(%rax)
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$18, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L29
.L35:
	movq	-8(%rbp), %rax
	movl	$65536, 32(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindLowestFloorSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 36(%rdx)
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L38
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
.L38:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_FindHighestFloorSurrounding@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	40(%rax), %edx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L39
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
.L39:
	movq	-8(%rbp), %rax
	movl	$105, 44(%rax)
	call	P_Random@PLT
	andl	$1, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 52(%rax)
	movq	-16(%rbp), %rax
	addq	$48, %rax
	movl	$18, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
.L29:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddActivePlat
	jmp	.L26
.L43:
	nop
.L26:
	movl	-24(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag@PLT
	movl	%eax, -24(%rbp)
	cmpl	$0, -24(%rbp)
	jns	.L40
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	EV_DoPlat, .-EV_DoPlat
	.globl	P_ActivateInStasis
	.type	P_ActivateInStasis, @function
P_ActivateInStasis:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L45
.L47:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L46
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	64(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jne	.L46
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	52(%rax), %eax
	cmpl	$3, %eax
	jne	.L46
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	activeplats(%rip), %rax
	movq	(%rcx,%rax), %rax
	movl	56(%rdx), %edx
	movl	%edx, 52(%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	leaq	T_PlatRaise(%rip), %rdx
	movq	%rdx, 16(%rax)
.L46:
	addl	$1, -4(%rbp)
.L45:
	cmpl	$29, -4(%rbp)
	jle	.L47
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_ActivateInStasis, .-P_ActivateInStasis
	.globl	EV_StopPlat
	.type	EV_StopPlat, @function
EV_StopPlat:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L49
.L51:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L50
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	52(%rax), %eax
	cmpl	$3, %eax
	je	.L50
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	64(%rax), %edx
	movq	-24(%rbp), %rax
	movzwl	28(%rax), %eax
	cwtl
	cmpl	%eax, %edx
	jne	.L50
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	activeplats(%rip), %rax
	movq	(%rcx,%rax), %rax
	movl	52(%rdx), %edx
	movl	%edx, 56(%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$3, 52(%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	$0, 16(%rax)
.L50:
	addl	$1, -4(%rbp)
.L49:
	cmpl	$29, -4(%rbp)
	jle	.L51
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	EV_StopPlat, .-EV_StopPlat
	.section	.rodata
	.align 8
.LC0:
	.string	"P_AddActivePlat: no more plats!"
	.text
	.globl	P_AddActivePlat
	.type	P_AddActivePlat, @function
P_AddActivePlat:
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
	movl	$0, -4(%rbp)
	jmp	.L53
.L56:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	jne	.L54
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	activeplats(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, (%rcx,%rdx)
	jmp	.L52
.L54:
	addl	$1, -4(%rbp)
.L53:
	cmpl	$29, -4(%rbp)
	jle	.L56
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L52:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_AddActivePlat, .-P_AddActivePlat
	.section	.rodata
	.align 8
.LC1:
	.string	"P_RemoveActivePlat: can't find plat!"
	.text
	.globl	P_RemoveActivePlat
	.type	P_RemoveActivePlat, @function
P_RemoveActivePlat:
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
	movl	$0, -4(%rbp)
	jmp	.L58
.L61:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L59
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	24(%rax), %rax
	movq	$0, 104(%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdi
	call	P_RemoveThinker@PLT
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	$0, (%rdx,%rax)
	jmp	.L57
.L59:
	addl	$1, -4(%rbp)
.L58:
	cmpl	$29, -4(%rbp)
	jle	.L61
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L57:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_RemoveActivePlat, .-P_RemoveActivePlat
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
