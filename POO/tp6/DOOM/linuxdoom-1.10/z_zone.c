	.file	"z_zone.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: z_zone.c,v 1.4 1997/02/03 16:47:58 b1 Exp $"
	.globl	mainzone
	.bss
	.align 8
	.type	mainzone, @object
	.size	mainzone, 8
mainzone:
	.zero	8
	.text
	.globl	Z_ClearZone
	.type	Z_ClearZone, @function
Z_ClearZone:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	addq	$56, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 40(%rax)
	movq	-24(%rbp), %rax
	movq	40(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 32(%rax)
	movq	-24(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movl	$1, 24(%rax)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 48(%rax)
	movq	-24(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	subl	$56, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	Z_ClearZone, .-Z_ClearZone
	.globl	Z_Init
	.type	Z_Init, @function
Z_Init:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
	call	I_ZoneBase@PLT
	movq	%rax, mainzone(%rip)
	movq	mainzone(%rip), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
	movq	mainzone(%rip), %rax
	addq	$56, %rax
	movq	%rax, -16(%rbp)
	movq	mainzone(%rip), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 40(%rax)
	movq	mainzone(%rip), %rdx
	movq	40(%rax), %rax
	movq	%rax, 32(%rdx)
	movq	mainzone(%rip), %rax
	movq	mainzone(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	mainzone(%rip), %rax
	movl	$1, 24(%rax)
	movq	mainzone(%rip), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 48(%rax)
	movq	mainzone(%rip), %rax
	leaq	8(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 32(%rax)
	movq	-16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	mainzone(%rip), %rax
	movl	(%rax), %eax
	subl	$56, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	Z_Init, .-Z_Init
	.section	.rodata
	.align 8
.LC0:
	.string	"Z_Free: freed a pointer without ZONEID"
	.text
	.globl	Z_Free
	.type	Z_Free, @function
Z_Free:
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
	subq	$40, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L5
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L5:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	$256, %rax
	jbe	.L6
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	$0, (%rax)
.L6:
	movq	-16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 16(%rax)
	movq	-16(%rbp), %rax
	movl	$0, 20(%rax)
	movq	-16(%rbp), %rax
	movq	32(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L7
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	mainzone(%rip), %rax
	movq	48(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L8
	movq	mainzone(%rip), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 48(%rax)
.L8:
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
.L7:
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L10
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	mainzone(%rip), %rax
	movq	48(%rax), %rax
	cmpq	%rax, -8(%rbp)
	jne	.L10
	movq	mainzone(%rip), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 48(%rax)
.L10:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	Z_Free, .-Z_Free
	.section	.rodata
	.align 8
.LC1:
	.string	"Z_Malloc: failed on allocation of %i bytes"
	.align 8
.LC2:
	.string	"Z_Malloc: an owner is required for purgable blocks"
	.text
	.globl	Z_Malloc
	.type	Z_Malloc, @function
Z_Malloc:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movl	%esi, -56(%rbp)
	movq	%rdx, -64(%rbp)
	movl	-52(%rbp), %eax
	addl	$3, %eax
	andl	$-4, %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	addl	$40, %eax
	movl	%eax, -52(%rbp)
	movq	mainzone(%rip), %rax
	movq	48(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L12
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	%rax, -24(%rbp)
.L12:
	movq	-24(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	%rax, -16(%rbp)
.L13:
	movq	-32(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jne	.L14
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L14:
	movq	-32(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L15
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$99, %eax
	jg	.L16
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp	.L17
.L16:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	addq	$40, %rax
	movq	%rax, %rdi
	call	Z_Free
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -32(%rbp)
	jmp	.L17
.L15:
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -32(%rbp)
.L17:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L13
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -52(%rbp)
	jg	.L13
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	subl	-52(%rbp), %eax
	movl	%eax, -36(%rbp)
	cmpl	$64, -36(%rbp)
	jle	.L19
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movl	-52(%rbp), %edx
	movl	%edx, (%rax)
.L19:
	cmpq	$0, -64(%rbp)
	je	.L20
	movq	-24(%rbp), %rax
	movq	-64(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	leaq	40(%rax), %rdx
	movq	-64(%rbp), %rax
	movq	%rdx, (%rax)
	jmp	.L21
.L20:
	cmpl	$99, -56(%rbp)
	jle	.L22
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L22:
	movq	-24(%rbp), %rax
	movq	$2, 8(%rax)
.L21:
	movq	-24(%rbp), %rax
	movl	-56(%rbp), %edx
	movl	%edx, 16(%rax)
	movq	mainzone(%rip), %rax
	movq	-24(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 48(%rax)
	movq	-24(%rbp), %rax
	movl	$1919505, 20(%rax)
	movq	-24(%rbp), %rax
	addq	$40, %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	Z_Malloc, .-Z_Malloc
	.globl	Z_FreeTags
	.type	Z_FreeTags, @function
Z_FreeTags:
.LFB4:
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
	movq	mainzone(%rip), %rax
	movq	32(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L25
.L28:
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L29
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L27
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L27
	movq	-16(%rbp), %rax
	addq	$40, %rax
	movq	%rax, %rdi
	call	Z_Free
	jmp	.L27
.L29:
	nop
.L27:
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
.L25:
	movq	mainzone(%rip), %rax
	addq	$8, %rax
	cmpq	%rax, -16(%rbp)
	jne	.L28
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	Z_FreeTags, .-Z_FreeTags
	.section	.rodata
.LC3:
	.string	"zone size: %i  location: %p\n"
.LC4:
	.string	"tag range: %i to %i\n"
	.align 8
.LC5:
	.string	"block:%p    size:%7i    user:%p    tag:%3i\n"
	.align 8
.LC6:
	.string	"ERROR: block size does not touch the next block"
	.align 8
.LC7:
	.string	"ERROR: next block doesn't have proper back link"
	.align 8
.LC8:
	.string	"ERROR: two consecutive free blocks"
	.text
	.globl	Z_DumpHeap
	.type	Z_DumpHeap, @function
Z_DumpHeap:
.LFB5:
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
	movq	mainzone(%rip), %rdx
	movq	mainzone(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	mainzone(%rip), %rax
	movq	32(%rax), %rax
	movq	%rax, -8(%rbp)
.L37:
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L31
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L31
	movq	-8(%rbp), %rax
	movl	16(%rax), %esi
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%esi, %r8d
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L31:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	mainzone(%rip), %rax
	addq	$8, %rax
	cmpq	%rax, %rdx
	je	.L39
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, %rdx
	je	.L34
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L34:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	32(%rax), %rax
	cmpq	%rax, -8(%rbp)
	je	.L35
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L35:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L36
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L36
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L36:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L37
.L39:
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	Z_DumpHeap, .-Z_DumpHeap
	.section	.rodata
	.align 8
.LC9:
	.string	"ERROR: block size does not touch the next block\n"
	.align 8
.LC10:
	.string	"ERROR: next block doesn't have proper back link\n"
	.align 8
.LC11:
	.string	"ERROR: two consecutive free blocks\n"
	.text
	.globl	Z_FileDumpHeap
	.type	Z_FileDumpHeap, @function
Z_FileDumpHeap:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	mainzone(%rip), %rcx
	movq	mainzone(%rip), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movq	mainzone(%rip), %rax
	movq	32(%rax), %rax
	movq	%rax, -8(%rbp)
.L46:
	movq	-8(%rbp), %rax
	movl	16(%rax), %edi
	movq	-8(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-8(%rbp), %rax
	movl	(%rax), %ecx
	movq	-8(%rbp), %rdx
	movq	-24(%rbp), %rax
	movl	%edi, %r9d
	movq	%rsi, %r8
	leaq	.LC5(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	mainzone(%rip), %rax
	addq	$8, %rax
	cmpq	%rax, %rdx
	je	.L48
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, %rdx
	je	.L43
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	movl	$48, %edx
	movl	$1, %esi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L43:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	32(%rax), %rax
	cmpq	%rax, -8(%rbp)
	je	.L44
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	movl	$48, %edx
	movl	$1, %esi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L44:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L45
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L45
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	movl	$35, %edx
	movl	$1, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L45:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L46
.L48:
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	Z_FileDumpHeap, .-Z_FileDumpHeap
	.section	.rodata
	.align 8
.LC12:
	.string	"Z_CheckHeap: block size does not touch the next block\n"
	.align 8
.LC13:
	.string	"Z_CheckHeap: next block doesn't have proper back link\n"
	.align 8
.LC14:
	.string	"Z_CheckHeap: two consecutive free blocks\n"
	.text
	.globl	Z_CheckHeap
	.type	Z_CheckHeap, @function
Z_CheckHeap:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	mainzone(%rip), %rax
	movq	32(%rax), %rax
	movq	%rax, -8(%rbp)
.L55:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	mainzone(%rip), %rax
	addq	$8, %rax
	cmpq	%rax, %rdx
	je	.L57
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, %rdx
	je	.L52
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L52:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	32(%rax), %rax
	cmpq	%rax, -8(%rbp)
	je	.L53
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L53:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L54
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L54
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L54:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L55
.L57:
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	Z_CheckHeap, .-Z_CheckHeap
	.section	.rodata
	.align 8
.LC15:
	.string	"Z_ChangeTag: freed a pointer without ZONEID"
	.align 8
.LC16:
	.string	"Z_ChangeTag: an owner is required for purgable blocks"
	.text
	.globl	Z_ChangeTag2
	.type	Z_ChangeTag2, @function
Z_ChangeTag2:
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
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rax
	subq	$40, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L59
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L59:
	cmpl	$99, -28(%rbp)
	jle	.L60
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	cmpl	$255, %eax
	ja	.L60
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L60:
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	Z_ChangeTag2, .-Z_ChangeTag2
	.globl	Z_FreeMemory
	.type	Z_FreeMemory, @function
Z_FreeMemory:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, -12(%rbp)
	movq	mainzone(%rip), %rax
	movq	32(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L62
.L65:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L63
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$99, %eax
	jle	.L64
.L63:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -12(%rbp)
.L64:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
.L62:
	movq	mainzone(%rip), %rax
	addq	$8, %rax
	cmpq	%rax, -8(%rbp)
	jne	.L65
	movl	-12(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	Z_FreeMemory, .-Z_FreeMemory
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
