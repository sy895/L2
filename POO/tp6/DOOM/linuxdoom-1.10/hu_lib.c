	.file	"hu_lib.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: hu_lib.c,v 1.3 1997/01/26 07:44:58 b1 Exp $"
	.text
	.globl	HUlib_init
	.type	HUlib_init, @function
HUlib_init:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	HUlib_init, .-HUlib_init
	.globl	HUlib_clearTextLine
	.type	HUlib_clearTextLine, @function
HUlib_clearTextLine:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, 104(%rax)
	movq	-8(%rbp), %rax
	movb	$0, 20(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 108(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	HUlib_clearTextLine, .-HUlib_clearTextLine
	.globl	HUlib_initTextLine
	.type	HUlib_initTextLine, @function
HUlib_initTextLine:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	%rcx, -24(%rbp)
	movl	%r8d, -28(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_clearTextLine
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	HUlib_initTextLine, .-HUlib_initTextLine
	.globl	HUlib_addCharToTextLine
	.type	HUlib_addCharToTextLine, @function
HUlib_addCharToTextLine:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, %eax
	movb	%al, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	cmpl	$80, %eax
	jne	.L5
	movl	$0, %eax
	jmp	.L6
.L5:
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	leal	1(%rax), %ecx
	movq	-8(%rbp), %rdx
	movl	%ecx, 104(%rdx)
	movq	-8(%rbp), %rdx
	cltq
	movzbl	-12(%rbp), %ecx
	movb	%cl, 20(%rdx,%rax)
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	movq	-8(%rbp), %rdx
	cltq
	movb	$0, 20(%rdx,%rax)
	movq	-8(%rbp), %rax
	movl	$4, 108(%rax)
	movl	$1, %eax
.L6:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	HUlib_addCharToTextLine, .-HUlib_addCharToTextLine
	.globl	HUlib_delCharFromTextLine
	.type	HUlib_delCharFromTextLine, @function
HUlib_delCharFromTextLine:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	testl	%eax, %eax
	jne	.L8
	movl	$0, %eax
	jmp	.L9
.L8:
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 104(%rax)
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	movq	-8(%rbp), %rdx
	cltq
	movb	$0, 20(%rdx,%rax)
	movq	-8(%rbp), %rax
	movl	$4, 108(%rax)
	movl	$1, %eax
.L9:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	HUlib_delCharFromTextLine, .-HUlib_delCharFromTextLine
	.globl	HUlib_drawTextLine
	.type	HUlib_drawTextLine, @function
HUlib_drawTextLine:
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
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L11
.L16:
	movq	-24(%rbp), %rdx
	movl	-12(%rbp), %eax
	cltq
	movzbl	20(%rdx,%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	toupper@PLT
	movb	%al, -13(%rbp)
	cmpb	$32, -13(%rbp)
	je	.L12
	movzbl	-13(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, %edx
	jl	.L12
	cmpb	$95, -13(%rbp)
	ja	.L12
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	movzbl	-13(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	subl	%eax, %ecx
	movslq	%ecx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L18
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	movzbl	-13(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	subl	%eax, %ecx
	movslq	%ecx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	4(%rax), %esi
	movl	-8(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	movl	-4(%rbp), %eax
	addl	%eax, -8(%rbp)
	jmp	.L15
.L12:
	addl	$4, -8(%rbp)
	cmpl	$319, -8(%rbp)
	jg	.L19
.L15:
	addl	$1, -12(%rbp)
.L11:
	movq	-24(%rbp), %rax
	movl	104(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L16
	jmp	.L14
.L18:
	nop
	jmp	.L14
.L19:
	nop
.L14:
	cmpl	$0, -28(%rbp)
	je	.L20
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	movl	$95, %ecx
	subl	%eax, %ecx
	movslq	%ecx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L20
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	movl	$95, %ecx
	subl	%eax, %ecx
	movslq	%ecx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	4(%rax), %esi
	movl	-8(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
.L20:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	HUlib_drawTextLine, .-HUlib_drawTextLine
	.globl	HUlib_eraseTextLine
	.type	HUlib_eraseTextLine, @function
HUlib_eraseTextLine:
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
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	jne	.L22
	movl	viewwindowx(%rip), %eax
	testl	%eax, %eax
	je	.L22
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	testl	%eax, %eax
	je	.L22
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movl	%eax, -8(%rbp)
	jmp	.L23
.L27:
	movl	viewwindowy(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L24
	movl	viewwindowy(%rip), %edx
	movl	viewheight(%rip), %eax
	addl	%edx, %eax
	cmpl	%eax, -12(%rbp)
	jl	.L25
.L24:
	movl	-8(%rbp), %eax
	movl	$320, %esi
	movl	%eax, %edi
	call	R_VideoErase@PLT
	jmp	.L26
.L25:
	movl	viewwindowx(%rip), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_VideoErase@PLT
	movl	viewwindowx(%rip), %eax
	movl	viewwindowx(%rip), %ecx
	movl	-8(%rbp), %edx
	addl	%edx, %ecx
	movl	viewwidth(%rip), %edx
	addl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	R_VideoErase@PLT
.L26:
	addl	$1, -12(%rbp)
	addl	$320, -8(%rbp)
.L23:
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -12(%rbp)
	jl	.L27
.L22:
	movl	automapactive(%rip), %eax
	movl	%eax, lastautomapactive.0(%rip)
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	testl	%eax, %eax
	je	.L29
	movq	-24(%rbp), %rax
	movl	108(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 108(%rax)
.L29:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	HUlib_eraseTextLine, .-HUlib_eraseTextLine
	.globl	HUlib_initSText
	.type	HUlib_initSText, @function
HUlib_initSText:
.LFB7:
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
	movq	%r8, -48(%rbp)
	movl	%r9d, -40(%rbp)
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, 448(%rax)
	movq	-24(%rbp), %rax
	movq	16(%rbp), %rdx
	movq	%rdx, 456(%rax)
	movq	-24(%rbp), %rax
	movl	$1, 464(%rax)
	movq	-24(%rbp), %rax
	movl	$0, 452(%rax)
	movl	$0, -4(%rbp)
	jmp	.L31
.L32:
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	cwtl
	addl	$1, %eax
	imull	-4(%rbp), %eax
	movl	-32(%rbp), %edx
	movl	%edx, %esi
	subl	%eax, %esi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	movq	-24(%rbp), %rdx
	leaq	(%rax,%rdx), %rdi
	movl	-40(%rbp), %ecx
	movq	-48(%rbp), %rdx
	movl	-28(%rbp), %eax
	movl	%ecx, %r8d
	movq	%rdx, %rcx
	movl	%esi, %edx
	movl	%eax, %esi
	call	HUlib_initTextLine
	addl	$1, -4(%rbp)
.L31:
	movl	-4(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L32
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	HUlib_initSText, .-HUlib_initSText
	.globl	HUlib_addLineToSText
	.type	HUlib_addLineToSText, @function
HUlib_addLineToSText:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$24, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	452(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 452(%rax)
	movq	-24(%rbp), %rax
	movl	452(%rax), %edx
	movq	-24(%rbp), %rax
	movl	448(%rax), %eax
	cmpl	%eax, %edx
	jne	.L34
	movq	-24(%rbp), %rax
	movl	$0, 452(%rax)
.L34:
	movq	-24(%rbp), %rax
	movl	452(%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	HUlib_clearTextLine
	movl	$0, -4(%rbp)
	jmp	.L35
.L36:
	movq	-24(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	addq	%rcx, %rax
	addq	$108, %rax
	movl	$4, (%rax)
	addl	$1, -4(%rbp)
.L35:
	movq	-24(%rbp), %rax
	movl	448(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L36
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	HUlib_addLineToSText, .-HUlib_addLineToSText
	.globl	HUlib_addMessageToSText
	.type	HUlib_addMessageToSText, @function
HUlib_addMessageToSText:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$24, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_addLineToSText
	cmpq	$0, -16(%rbp)
	je	.L41
	jmp	.L39
.L40:
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %ecx
	movq	-8(%rbp), %rax
	movl	452(%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	movq	-8(%rbp), %rdx
	addq	%rdx, %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	HUlib_addCharToTextLine
.L39:
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L40
	jmp	.L41
.L42:
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %ecx
	movq	-8(%rbp), %rax
	movl	452(%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	movq	-8(%rbp), %rdx
	addq	%rdx, %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	HUlib_addCharToTextLine
.L41:
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L42
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	HUlib_addMessageToSText, .-HUlib_addMessageToSText
	.globl	HUlib_drawSText
	.type	HUlib_drawSText, @function
HUlib_drawSText:
.LFB10:
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
	movq	456(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L49
	movl	$0, -16(%rbp)
	jmp	.L46
.L48:
	movq	-24(%rbp), %rax
	movl	452(%rax), %eax
	subl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L47
	movq	-24(%rbp), %rax
	movl	448(%rax), %eax
	addl	%eax, -12(%rbp)
.L47:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	HUlib_drawTextLine
	addl	$1, -16(%rbp)
.L46:
	movq	-24(%rbp), %rax
	movl	448(%rax), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L48
	jmp	.L43
.L49:
	nop
.L43:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	HUlib_drawSText, .-HUlib_drawSText
	.globl	HUlib_eraseSText
	.type	HUlib_eraseSText, @function
HUlib_eraseSText:
.LFB11:
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
	jmp	.L51
.L53:
	movq	-24(%rbp), %rax
	movl	464(%rax), %eax
	testl	%eax, %eax
	je	.L52
	movq	-24(%rbp), %rax
	movq	456(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L52
	movq	-24(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	addq	%rcx, %rax
	addq	$108, %rax
	movl	$4, (%rax)
.L52:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$4, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	HUlib_eraseTextLine
	addl	$1, -4(%rbp)
.L51:
	movq	-24(%rbp), %rax
	movl	448(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L53
	movq	-24(%rbp), %rax
	movq	456(%rax), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 464(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	HUlib_eraseSText, .-HUlib_eraseSText
	.globl	HUlib_initIText
	.type	HUlib_initIText, @function
HUlib_initIText:
.LFB12:
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
	movl	%r8d, -28(%rbp)
	movq	%r9, -40(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, 112(%rax)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 120(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 128(%rax)
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edi
	movq	-24(%rbp), %rcx
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %esi
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	HUlib_initTextLine
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	HUlib_initIText, .-HUlib_initIText
	.globl	HUlib_delCharFromIText
	.type	HUlib_delCharFromIText, @function
HUlib_delCharFromIText:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	104(%rax), %edx
	movq	-8(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, %edx
	je	.L57
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_delCharFromTextLine
.L57:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	HUlib_delCharFromIText, .-HUlib_delCharFromIText
	.globl	HUlib_eraseLineFromIText
	.type	HUlib_eraseLineFromIText, @function
HUlib_eraseLineFromIText:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8, %rsp
	movq	%rdi, -8(%rbp)
	jmp	.L59
.L60:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_delCharFromTextLine
.L59:
	movq	-8(%rbp), %rax
	movl	112(%rax), %edx
	movq	-8(%rbp), %rax
	movl	104(%rax), %eax
	cmpl	%eax, %edx
	jne	.L60
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	HUlib_eraseLineFromIText, .-HUlib_eraseLineFromIText
	.globl	HUlib_resetIText
	.type	HUlib_resetIText, @function
HUlib_resetIText:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, 112(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_clearTextLine
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	HUlib_resetIText, .-HUlib_resetIText
	.globl	HUlib_addPrefixToIText
	.type	HUlib_addPrefixToIText, @function
HUlib_addPrefixToIText:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	jmp	.L63
.L64:
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	HUlib_addCharToTextLine
.L63:
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L64
	movq	-8(%rbp), %rax
	movl	104(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 112(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	HUlib_addPrefixToIText, .-HUlib_addPrefixToIText
	.globl	HUlib_keyInIText
	.type	HUlib_keyInIText, @function
HUlib_keyInIText:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, %eax
	movb	%al, -12(%rbp)
	cmpb	$31, -12(%rbp)
	jbe	.L66
	cmpb	$95, -12(%rbp)
	ja	.L66
	movzbl	-12(%rbp), %eax
	movsbl	%al, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	HUlib_addCharToTextLine
	jmp	.L67
.L66:
	cmpb	$127, -12(%rbp)
	jne	.L68
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_delCharFromIText
	jmp	.L67
.L68:
	cmpb	$13, -12(%rbp)
	je	.L67
	movl	$0, %eax
	jmp	.L69
.L67:
	movl	$1, %eax
.L69:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	HUlib_keyInIText, .-HUlib_keyInIText
	.globl	HUlib_drawIText
	.type	HUlib_drawIText, @function
HUlib_drawIText:
.LFB18:
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
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L73
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	HUlib_drawTextLine
	jmp	.L70
.L73:
	nop
.L70:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	HUlib_drawIText, .-HUlib_drawIText
	.globl	HUlib_eraseIText
	.type	HUlib_eraseIText, @function
HUlib_eraseIText:
.LFB19:
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
	movl	128(%rax), %eax
	testl	%eax, %eax
	je	.L75
	movq	-8(%rbp), %rax
	movq	120(%rax), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L75
	movq	-8(%rbp), %rax
	movl	$4, 108(%rax)
.L75:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HUlib_eraseTextLine
	movq	-8(%rbp), %rax
	movq	120(%rax), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 128(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	HUlib_eraseIText, .-HUlib_eraseIText
	.data
	.align 4
	.type	lastautomapactive.0, @object
	.size	lastautomapactive.0, 4
lastautomapactive.0:
	.long	1
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
