	.file	"st_lib.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: st_lib.c,v 1.4 1997/02/03 16:47:56 b1 Exp $"
	.globl	sttminus
	.bss
	.align 8
	.type	sttminus, @object
	.size	sttminus, 8
sttminus:
	.zero	8
	.section	.rodata
.LC0:
	.string	"STTMINUS"
	.text
	.globl	STlib_init
	.type	STlib_init, @function
STlib_init:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, sttminus(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	STlib_init, .-STlib_init
	.globl	STlib_initNum
	.type	STlib_initNum, @function
STlib_initNum:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	%rcx, -24(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -40(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 12(%rax)
	movq	-8(%rbp), %rax
	movl	16(%rbp), %edx
	movl	%edx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	STlib_initNum, .-STlib_initNum
	.section	.rodata
.LC1:
	.string	"drawNum: n->y - ST_Y < 0"
	.text
	.globl	STlib_drawNum
	.type	STlib_drawNum, @function
STlib_drawNum:
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
	movq	-40(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -12(%rbp)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 12(%rax)
	movl	-20(%rbp), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L4
	cmpl	$2, -24(%rbp)
	jne	.L5
	cmpl	$-9, -20(%rbp)
	jge	.L5
	movl	$-9, -20(%rbp)
	jmp	.L6
.L5:
	cmpl	$3, -24(%rbp)
	jne	.L6
	cmpl	$-99, -20(%rbp)
	jge	.L6
	movl	$-99, -20(%rbp)
.L6:
	negl	-20(%rbp)
.L4:
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movl	-24(%rbp), %eax
	imull	-12(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$167, %eax
	jg	.L7
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L7:
	movq	-40(%rbp), %rax
	movl	4(%rax), %ecx
	movl	-12(%rbp), %eax
	imull	-24(%rbp), %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	leal	-168(%rax), %esi
	movl	-16(%rbp), %r8d
	movl	-8(%rbp), %edi
	movl	-16(%rbp), %eax
	pushq	$0
	pushq	%rcx
	movl	%r8d, %r9d
	movl	%edi, %r8d
	movl	%edx, %ecx
	movl	$4, %edx
	movl	%eax, %edi
	call	V_CopyRect@PLT
	addq	$16, %rsp
	cmpl	$1994, -20(%rbp)
	je	.L14
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -20(%rbp)
	jne	.L11
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movl	4(%rax), %esi
	movl	-16(%rbp), %eax
	subl	-12(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	jmp	.L11
.L13:
	movl	-12(%rbp), %eax
	subl	%eax, -16(%rbp)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rsi
	movl	-20(%rbp), %ecx
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
	movslq	%edx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movl	4(%rax), %esi
	movl	-16(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$2, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -20(%rbp)
.L11:
	cmpl	$0, -20(%rbp)
	je	.L12
	movl	-24(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -24(%rbp)
	testl	%eax, %eax
	jne	.L13
.L12:
	cmpl	$0, -4(%rbp)
	je	.L3
	movq	sttminus(%rip), %rdx
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movl	-16(%rbp), %ecx
	leal	-8(%rcx), %edi
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	jmp	.L3
.L14:
	nop
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	STlib_drawNum, .-STlib_drawNum
	.globl	STlib_updateNum
	.type	STlib_updateNum, @function
STlib_updateNum:
.LFB3:
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
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L17
	movl	-12(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	STlib_drawNum
.L17:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	STlib_updateNum, .-STlib_updateNum
	.globl	STlib_initPercent
	.type	STlib_initPercent, @function
STlib_initPercent:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	%rcx, -24(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -40(%rbp)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %r8
	movq	-32(%rbp), %rdi
	movq	-24(%rbp), %rcx
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %esi
	pushq	$3
	movq	%r8, %r9
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	STlib_initNum
	addq	$8, %rsp
	movq	-8(%rbp), %rax
	movq	16(%rbp), %rdx
	movq	%rdx, 48(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	STlib_initPercent, .-STlib_initPercent
	.globl	STlib_updatePercent
	.type	STlib_updatePercent, @function
STlib_updatePercent:
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
	movl	%esi, -12(%rbp)
	cmpl	$0, -12(%rbp)
	je	.L20
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L20
	movq	-8(%rbp), %rax
	movq	48(%rax), %rdx
	movq	-8(%rbp), %rax
	movl	4(%rax), %esi
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
.L20:
	movl	-12(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	STlib_updateNum
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	STlib_updatePercent, .-STlib_updatePercent
	.globl	STlib_initMultIcon
	.type	STlib_initMultIcon, @function
STlib_initMultIcon:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	%rcx, -24(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -40(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 8(%rax)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	STlib_initMultIcon, .-STlib_initMultIcon
	.section	.rodata
.LC2:
	.string	"updateMultIcon: y - ST_Y < 0"
	.text
	.globl	STlib_updateMultIcon
	.type	STlib_updateMultIcon, @function
STlib_updateMultIcon:
.LFB7:
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
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L27
	movq	-24(%rbp), %rax
	movl	8(%rax), %edx
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L24
	cmpl	$0, -28(%rbp)
	je	.L27
.L24:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	cmpl	$-1, %eax
	je	.L27
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$-1, %eax
	je	.L25
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movzwl	4(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rcx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	cwtl
	movl	%eax, -4(%rbp)
	cmpl	$167, -12(%rbp)
	jg	.L26
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L26:
	movl	-12(%rbp), %eax
	leal	-168(%rax), %esi
	movl	-16(%rbp), %r8d
	movl	-4(%rbp), %edi
	movl	-8(%rbp), %edx
	movl	-16(%rbp), %eax
	pushq	$0
	movl	-12(%rbp), %ecx
	pushq	%rcx
	movl	%r8d, %r9d
	movl	%edi, %r8d
	movl	%edx, %ecx
	movl	$4, %edx
	movl	%eax, %edi
	call	V_CopyRect@PLT
	addq	$16, %rsp
.L25:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	4(%rax), %esi
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 8(%rax)
.L27:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	STlib_updateMultIcon, .-STlib_updateMultIcon
	.globl	STlib_initBinIcon
	.type	STlib_initBinIcon, @function
STlib_initBinIcon:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	%rcx, -24(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -40(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	STlib_initBinIcon, .-STlib_initBinIcon
	.section	.rodata
.LC3:
	.string	"updateBinIcon: y - ST_Y < 0"
	.text
	.globl	STlib_updateBinIcon
	.type	STlib_updateBinIcon, @function
STlib_updateBinIcon:
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
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L35
	movq	-24(%rbp), %rax
	movl	8(%rax), %edx
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L31
	cmpl	$0, -28(%rbp)
	je	.L35
.L31:
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movzwl	4(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movzwl	2(%rax), %eax
	cwtl
	movl	%eax, -4(%rbp)
	cmpl	$167, -12(%rbp)
	jg	.L32
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L32:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L33
	movq	-24(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	4(%rax), %esi
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	jmp	.L34
.L33:
	movl	-12(%rbp), %eax
	leal	-168(%rax), %esi
	movl	-16(%rbp), %r8d
	movl	-4(%rbp), %edi
	movl	-8(%rbp), %edx
	movl	-16(%rbp), %eax
	pushq	$0
	movl	-12(%rbp), %ecx
	pushq	%rcx
	movl	%r8d, %r9d
	movl	%edi, %r8d
	movl	%edx, %ecx
	movl	$4, %edx
	movl	%eax, %edi
	call	V_CopyRect@PLT
	addq	$16, %rsp
.L34:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 8(%rax)
.L35:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	STlib_updateBinIcon, .-STlib_updateBinIcon
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
