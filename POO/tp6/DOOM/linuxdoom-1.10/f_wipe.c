	.file	"f_wipe.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: f_wipe.c,v 1.2 1997/02/03 22:45:09 b1 Exp $"
	.local	go
	.comm	go,4,4
	.local	wipe_scr_start
	.comm	wipe_scr_start,8,8
	.local	wipe_scr_end
	.comm	wipe_scr_end,8,8
	.local	wipe_scr
	.comm	wipe_scr,8,8
	.text
	.globl	wipe_shittyColMajorXform
	.type	wipe_shittyColMajorXform, @function
wipe_shittyColMajorXform:
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
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	imull	-32(%rbp), %eax
	addl	%eax, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L2
.L5:
	movl	$0, -16(%rbp)
	jmp	.L3
.L4:
	movl	-12(%rbp), %eax
	imull	-28(%rbp), %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-24(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	imull	-32(%rbp), %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movzwl	(%rcx), %eax
	movw	%ax, (%rdx)
	addl	$1, -16(%rbp)
.L3:
	movl	-16(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L4
	addl	$1, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jl	.L5
	movl	-28(%rbp), %eax
	imull	-32(%rbp), %eax
	addl	%eax, %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	wipe_shittyColMajorXform, .-wipe_shittyColMajorXform
	.globl	wipe_initColorXForm
	.type	wipe_initColorXForm, @function
wipe_initColorXForm:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	wipe_scr_start(%rip), %rcx
	movq	wipe_scr(%rip), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	wipe_initColorXForm, .-wipe_initColorXForm
	.globl	wipe_doColorXForm
	.type	wipe_doColorXForm, @function
wipe_doColorXForm:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	movl	$0, -24(%rbp)
	movq	wipe_scr(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	wipe_scr_end(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L9
.L16:
	movq	-16(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	je	.L10
	movq	-16(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%dl, %al
	jnb	.L11
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	subl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cmpl	%eax, -20(%rbp)
	jge	.L12
	movq	-8(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	jmp	.L13
.L12:
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
.L13:
	movl	$1, -24(%rbp)
	jmp	.L10
.L11:
	movq	-16(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jnb	.L10
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cmpl	%eax, -20(%rbp)
	jle	.L14
	movq	-8(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	jmp	.L15
.L14:
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
.L15:
	movl	$1, -24(%rbp)
.L10:
	addq	$1, -16(%rbp)
	addq	$1, -8(%rbp)
.L9:
	movq	wipe_scr(%rip), %rdx
	movl	-36(%rbp), %eax
	imull	-40(%rbp), %eax
	cltq
	addq	%rdx, %rax
	cmpq	%rax, -16(%rbp)
	jne	.L16
	cmpl	$0, -24(%rbp)
	sete	%al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	wipe_doColorXForm, .-wipe_doColorXForm
	.globl	wipe_exitColorXForm
	.type	wipe_exitColorXForm, @function
wipe_exitColorXForm:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	wipe_exitColorXForm, .-wipe_exitColorXForm
	.local	y
	.comm	y,8,8
	.globl	wipe_initMelt
	.type	wipe_initMelt, @function
wipe_initMelt:
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
	movl	%edx, -28(%rbp)
	movl	-20(%rbp), %eax
	imull	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	wipe_scr_start(%rip), %rcx
	movq	wipe_scr(%rip), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %ecx
	movq	wipe_scr_start(%rip), %rax
	movl	-24(%rbp), %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	wipe_shittyColMajorXform
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %ecx
	movq	wipe_scr_end(%rip), %rax
	movl	-24(%rbp), %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	wipe_shittyColMajorXform
	movl	-20(%rbp), %eax
	cltq
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, y(%rip)
	call	M_Random@PLT
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$28, %eax
	addl	%eax, %edx
	andl	$15, %edx
	subl	%eax, %edx
	movq	y(%rip), %rax
	negl	%edx
	movl	%edx, (%rax)
	movl	$1, -8(%rbp)
	jmp	.L21
.L24:
	call	M_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	-1(%rdx), %eax
	movl	%eax, -4(%rbp)
	movq	y(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	subq	$4, %rdx
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	y(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	addl	%ecx, %edx
	movl	%edx, (%rax)
	movq	y(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jle	.L22
	movq	y(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	jmp	.L23
.L22:
	movq	y(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$-16, %eax
	jne	.L23
	movq	y(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$-15, (%rax)
.L23:
	addl	$1, -8(%rbp)
.L21:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L24
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	wipe_initMelt, .-wipe_initMelt
	.globl	wipe_doMelt
	.type	wipe_doMelt, @function
wipe_doMelt:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -52(%rbp)
	movl	%esi, -56(%rbp)
	movl	%edx, -60(%rbp)
	movl	$1, -20(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -52(%rbp)
	jmp	.L27
.L39:
	movl	$0, -36(%rbp)
	jmp	.L28
.L38:
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jns	.L29
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	addl	$1, %edx
	movl	%edx, (%rax)
	movl	$0, -20(%rbp)
	jmp	.L30
.L29:
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -56(%rbp)
	jle	.L30
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$15, %eax
	jg	.L31
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	$1, %eax
	jmp	.L32
.L31:
	movl	$8, %eax
.L32:
	movl	%eax, -28(%rbp)
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -56(%rbp)
	jg	.L33
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-56(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -28(%rbp)
.L33:
	movq	wipe_scr_end(%rip), %rdx
	movl	-36(%rbp), %eax
	imull	-56(%rbp), %eax
	movl	%eax, %ecx
	movq	y(%rip), %rax
	movl	-36(%rbp), %esi
	movslq	%esi, %rsi
	salq	$2, %rsi
	addq	%rsi, %rax
	movl	(%rax), %eax
	addl	%ecx, %eax
	cltq
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	wipe_scr(%rip), %rdx
	movq	y(%rip), %rax
	movl	-36(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	imull	-52(%rbp), %eax
	movl	%eax, %ecx
	movl	-36(%rbp), %eax
	addl	%ecx, %eax
	cltq
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	$0, -24(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
	jmp	.L34
.L35:
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	(%rdx,%rdx), %rcx
	movq	-8(%rbp), %rdx
	addq	%rcx, %rdx
	movzwl	(%rax), %eax
	movw	%ax, (%rdx)
	movl	-52(%rbp), %eax
	addl	%eax, -24(%rbp)
	subl	$1, -32(%rbp)
.L34:
	cmpl	$0, -32(%rbp)
	jne	.L35
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-28(%rbp), %edx
	addl	%ecx, %edx
	movl	%edx, (%rax)
	movq	wipe_scr_start(%rip), %rdx
	movl	-36(%rbp), %eax
	imull	-56(%rbp), %eax
	cltq
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	wipe_scr(%rip), %rdx
	movq	y(%rip), %rax
	movl	-36(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	imull	-52(%rbp), %eax
	movl	%eax, %ecx
	movl	-36(%rbp), %eax
	addl	%ecx, %eax
	cltq
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	$0, -24(%rbp)
	movq	y(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-56(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -32(%rbp)
	jmp	.L36
.L37:
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	(%rdx,%rdx), %rcx
	movq	-8(%rbp), %rdx
	addq	%rcx, %rdx
	movzwl	(%rax), %eax
	movw	%ax, (%rdx)
	movl	-52(%rbp), %eax
	addl	%eax, -24(%rbp)
	subl	$1, -32(%rbp)
.L36:
	cmpl	$0, -32(%rbp)
	jne	.L37
	movl	$0, -20(%rbp)
.L30:
	addl	$1, -36(%rbp)
.L28:
	movl	-36(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L38
.L27:
	movl	-60(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -60(%rbp)
	testl	%eax, %eax
	jne	.L39
	movl	-20(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	wipe_doMelt, .-wipe_doMelt
	.globl	wipe_exitMelt
	.type	wipe_exitMelt, @function
wipe_exitMelt:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movq	y(%rip), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	wipe_exitMelt, .-wipe_exitMelt
	.globl	wipe_StartScreen
	.type	wipe_StartScreen, @function
wipe_StartScreen:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movq	16+screens(%rip), %rax
	movq	%rax, wipe_scr_start(%rip)
	movq	wipe_scr_start(%rip), %rax
	movq	%rax, %rdi
	call	I_ReadScreen@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	wipe_StartScreen, .-wipe_StartScreen
	.globl	wipe_EndScreen
	.type	wipe_EndScreen, @function
wipe_EndScreen:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movq	24+screens(%rip), %rax
	movq	%rax, wipe_scr_end(%rip)
	movq	wipe_scr_end(%rip), %rax
	movq	%rax, %rdi
	call	I_ReadScreen@PLT
	movq	wipe_scr_start(%rip), %rdi
	movl	-16(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %esi
	movl	-4(%rbp), %eax
	movq	%rdi, %r9
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawBlock@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	wipe_EndScreen, .-wipe_EndScreen
	.globl	wipe_ScreenWipe
	.type	wipe_ScreenWipe, @function
wipe_ScreenWipe:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	%ecx, -32(%rbp)
	movl	%r8d, -36(%rbp)
	movl	%r9d, -40(%rbp)
	movl	go(%rip), %eax
	testl	%eax, %eax
	jne	.L48
	movl	$1, go(%rip)
	movq	screens(%rip), %rax
	movq	%rax, wipe_scr(%rip)
	movl	-20(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	wipes.0(%rip), %rax
	movq	(%rdx,%rax), %r8
	movl	-40(%rbp), %edx
	movl	-36(%rbp), %ecx
	movl	-32(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	*%r8
.L48:
	movl	-36(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %ecx
	movl	%eax, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_MarkRect@PLT
	movl	-20(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	$1, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	wipes.0(%rip), %rax
	movq	(%rdx,%rax), %r8
	movl	-40(%rbp), %edx
	movl	-36(%rbp), %ecx
	movl	-32(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	*%r8
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L49
	movl	$0, go(%rip)
	movl	-20(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	$2, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	wipes.0(%rip), %rax
	movq	(%rdx,%rax), %r8
	movl	-40(%rbp), %edx
	movl	-36(%rbp), %ecx
	movl	-32(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	*%r8
.L49:
	movl	go(%rip), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	wipe_ScreenWipe, .-wipe_ScreenWipe
	.section	.data.rel.local,"aw"
	.align 32
	.type	wipes.0, @object
	.size	wipes.0, 48
wipes.0:
	.quad	wipe_initColorXForm
	.quad	wipe_doColorXForm
	.quad	wipe_exitColorXForm
	.quad	wipe_initMelt
	.quad	wipe_doMelt
	.quad	wipe_exitMelt
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
