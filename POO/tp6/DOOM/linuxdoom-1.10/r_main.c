	.file	"r_main.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: r_main.c,v 1.5 1997/02/03 22:45:12 b1 Exp $"
	.globl	viewangleoffset
	.bss
	.align 4
	.type	viewangleoffset, @object
	.size	viewangleoffset, 4
viewangleoffset:
	.zero	4
	.globl	validcount
	.data
	.align 4
	.type	validcount, @object
	.size	validcount, 4
validcount:
	.long	1
	.globl	fixedcolormap
	.bss
	.align 8
	.type	fixedcolormap, @object
	.size	fixedcolormap, 8
fixedcolormap:
	.zero	8
	.globl	centerx
	.align 4
	.type	centerx, @object
	.size	centerx, 4
centerx:
	.zero	4
	.globl	centery
	.align 4
	.type	centery, @object
	.size	centery, 4
centery:
	.zero	4
	.globl	centerxfrac
	.align 4
	.type	centerxfrac, @object
	.size	centerxfrac, 4
centerxfrac:
	.zero	4
	.globl	centeryfrac
	.align 4
	.type	centeryfrac, @object
	.size	centeryfrac, 4
centeryfrac:
	.zero	4
	.globl	projection
	.align 4
	.type	projection, @object
	.size	projection, 4
projection:
	.zero	4
	.globl	framecount
	.align 4
	.type	framecount, @object
	.size	framecount, 4
framecount:
	.zero	4
	.globl	sscount
	.align 4
	.type	sscount, @object
	.size	sscount, 4
sscount:
	.zero	4
	.globl	linecount
	.align 4
	.type	linecount, @object
	.size	linecount, 4
linecount:
	.zero	4
	.globl	loopcount
	.align 4
	.type	loopcount, @object
	.size	loopcount, 4
loopcount:
	.zero	4
	.globl	viewx
	.align 4
	.type	viewx, @object
	.size	viewx, 4
viewx:
	.zero	4
	.globl	viewy
	.align 4
	.type	viewy, @object
	.size	viewy, 4
viewy:
	.zero	4
	.globl	viewz
	.align 4
	.type	viewz, @object
	.size	viewz, 4
viewz:
	.zero	4
	.globl	viewangle
	.align 4
	.type	viewangle, @object
	.size	viewangle, 4
viewangle:
	.zero	4
	.globl	viewcos
	.align 4
	.type	viewcos, @object
	.size	viewcos, 4
viewcos:
	.zero	4
	.globl	viewsin
	.align 4
	.type	viewsin, @object
	.size	viewsin, 4
viewsin:
	.zero	4
	.globl	viewplayer
	.align 8
	.type	viewplayer, @object
	.size	viewplayer, 8
viewplayer:
	.zero	8
	.globl	detailshift
	.align 4
	.type	detailshift, @object
	.size	detailshift, 4
detailshift:
	.zero	4
	.globl	clipangle
	.align 4
	.type	clipangle, @object
	.size	clipangle, 4
clipangle:
	.zero	4
	.globl	viewangletox
	.align 32
	.type	viewangletox, @object
	.size	viewangletox, 16384
viewangletox:
	.zero	16384
	.globl	xtoviewangle
	.align 32
	.type	xtoviewangle, @object
	.size	xtoviewangle, 1284
xtoviewangle:
	.zero	1284
	.globl	finecosine
	.section	.data.rel,"aw"
	.align 8
	.type	finecosine, @object
	.size	finecosine, 8
finecosine:
	.quad	finesine+8192
	.globl	scalelight
	.bss
	.align 32
	.type	scalelight, @object
	.size	scalelight, 6144
scalelight:
	.zero	6144
	.globl	scalelightfixed
	.align 32
	.type	scalelightfixed, @object
	.size	scalelightfixed, 384
scalelightfixed:
	.zero	384
	.globl	zlight
	.align 32
	.type	zlight, @object
	.size	zlight, 16384
zlight:
	.zero	16384
	.globl	extralight
	.align 4
	.type	extralight, @object
	.size	extralight, 4
extralight:
	.zero	4
	.globl	colfunc
	.align 8
	.type	colfunc, @object
	.size	colfunc, 8
colfunc:
	.zero	8
	.globl	basecolfunc
	.align 8
	.type	basecolfunc, @object
	.size	basecolfunc, 8
basecolfunc:
	.zero	8
	.globl	fuzzcolfunc
	.align 8
	.type	fuzzcolfunc, @object
	.size	fuzzcolfunc, 8
fuzzcolfunc:
	.zero	8
	.globl	transcolfunc
	.align 8
	.type	transcolfunc, @object
	.size	transcolfunc, 8
transcolfunc:
	.zero	8
	.globl	spanfunc
	.align 8
	.type	spanfunc, @object
	.size	spanfunc, 8
spanfunc:
	.zero	8
	.text
	.globl	R_AddPointToBox
	.type	R_AddPointToBox, @function
R_AddPointToBox:
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
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L2
	movq	-16(%rbp), %rax
	leaq	8(%rax), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
.L2:
	movq	-16(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L3
	movq	-16(%rbp), %rax
	leaq	12(%rax), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
.L3:
	movq	-16(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L4
	movq	-16(%rbp), %rax
	leaq	4(%rax), %rdx
	movl	-8(%rbp), %eax
	movl	%eax, (%rdx)
.L4:
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jle	.L6
	movq	-16(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, (%rax)
.L6:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	R_AddPointToBox, .-R_AddPointToBox
	.globl	R_PointOnSide
	.type	R_PointOnSide, @function
R_PointOnSide:
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
	movl	8(%rax), %eax
	testl	%eax, %eax
	jne	.L8
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L9
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L10
.L9:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L10
.L8:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	jne	.L11
	movq	-32(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L12
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L10
.L12:
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	jmp	.L10
.L11:
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
	jns	.L13
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	xorl	-16(%rbp), %eax
	testl	%eax, %eax
	jns	.L14
	movl	$1, %eax
	jmp	.L10
.L14:
	movl	$0, %eax
	jmp	.L10
.L13:
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L15
	movl	$0, %eax
	jmp	.L10
.L15:
	movl	$1, %eax
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_PointOnSide, .-R_PointOnSide
	.globl	R_PointOnSegSide
	.type	R_PointOnSegSide, @function
R_PointOnSegSide:
.LFB8:
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
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-48(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	subl	-32(%rbp), %eax
	movl	%eax, -24(%rbp)
	movq	-48(%rbp), %rax
	movq	8(%rax), %rax
	movl	4(%rax), %eax
	subl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
	cmpl	$0, -24(%rbp)
	jne	.L17
	movl	-36(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jg	.L18
	cmpl	$0, -20(%rbp)
	setg	%al
	movzbl	%al, %eax
	jmp	.L19
.L18:
	movl	-20(%rbp), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L19
.L17:
	cmpl	$0, -20(%rbp)
	jne	.L20
	movl	-40(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jg	.L21
	movl	-24(%rbp), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	jmp	.L19
.L21:
	cmpl	$0, -24(%rbp)
	setg	%al
	movzbl	%al, %eax
	jmp	.L19
.L20:
	movl	-36(%rbp), %eax
	subl	-32(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-40(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-20(%rbp), %eax
	xorl	-24(%rbp), %eax
	xorl	-16(%rbp), %eax
	xorl	-12(%rbp), %eax
	testl	%eax, %eax
	jns	.L22
	movl	-20(%rbp), %eax
	xorl	-16(%rbp), %eax
	testl	%eax, %eax
	jns	.L23
	movl	$1, %eax
	jmp	.L19
.L23:
	movl	$0, %eax
	jmp	.L19
.L22:
	movl	-20(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movl	-24(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L24
	movl	$0, %eax
	jmp	.L19
.L24:
	movl	$1, %eax
.L19:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	R_PointOnSegSide, .-R_PointOnSegSide
	.globl	R_PointToAngle
	.type	R_PointToAngle, @function
R_PointToAngle:
.LFB9:
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
	movl	viewx(%rip), %eax
	subl	%eax, -4(%rbp)
	movl	viewy(%rip), %eax
	subl	%eax, -8(%rbp)
	cmpl	$0, -4(%rbp)
	jne	.L26
	cmpl	$0, -8(%rbp)
	jne	.L26
	movl	$0, %eax
	jmp	.L27
.L26:
	cmpl	$0, -4(%rbp)
	js	.L28
	cmpl	$0, -8(%rbp)
	js	.L29
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L30
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %eax
	jmp	.L27
.L30:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	$1073741823, %eax
	subl	%edx, %eax
	jmp	.L27
.L29:
	negl	-8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L31
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %eax
	negl	%eax
	jmp	.L27
.L31:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	$1073741824, %eax
	jmp	.L27
.L28:
	negl	-4(%rbp)
	cmpl	$0, -8(%rbp)
	js	.L32
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L33
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	$2147483647, %eax
	subl	%edx, %eax
	jmp	.L27
.L33:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	$1073741824, %eax
	jmp	.L27
.L32:
	negl	-8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L34
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	$-2147483648, %eax
	jmp	.L27
.L34:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	SlopeDiv@PLT
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	$-1073741825, %eax
	subl	%edx, %eax
.L27:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	R_PointToAngle, .-R_PointToAngle
	.globl	R_PointToAngle2
	.type	R_PointToAngle2, @function
R_PointToAngle2:
.LFB10:
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
	movl	-4(%rbp), %eax
	movl	%eax, viewx(%rip)
	movl	-8(%rbp), %eax
	movl	%eax, viewy(%rip)
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToAngle
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	R_PointToAngle2, .-R_PointToAngle2
	.globl	R_PointToDist
	.type	R_PointToDist, @function
R_PointToDist:
.LFB11:
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
	movl	viewx(%rip), %edx
	movl	-36(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	viewy(%rip), %edx
	movl	-40(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L38
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
.L38:
	movl	-20(%rbp), %edx
	movl	-16(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	sarl	$5, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	tantoangle(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	$1073741824, %eax
	shrl	$19, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	R_PointToDist, .-R_PointToDist
	.globl	R_InitPointToAngle
	.type	R_InitPointToAngle, @function
R_InitPointToAngle:
.LFB12:
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
.LFE12:
	.size	R_InitPointToAngle, .-R_InitPointToAngle
	.globl	R_ScaleFromGlobalAngle
	.type	R_ScaleFromGlobalAngle, @function
R_ScaleFromGlobalAngle:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	viewangle(%rip), %eax
	movl	-36(%rbp), %edx
	subl	%eax, %edx
	leal	1073741824(%rdx), %eax
	movl	%eax, -24(%rbp)
	movl	rw_normalangle(%rip), %eax
	movl	-36(%rbp), %edx
	subl	%eax, %edx
	leal	1073741824(%rdx), %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %eax
	sarl	$19, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -16(%rbp)
	movl	-20(%rbp), %eax
	sarl	$19, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -12(%rbp)
	movl	projection(%rip), %eax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	rw_distance(%rip), %eax
	movl	-16(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	sarl	$16, %eax
	cmpl	%eax, -4(%rbp)
	jle	.L42
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -28(%rbp)
	cmpl	$4194304, -28(%rbp)
	jle	.L43
	movl	$4194304, -28(%rbp)
	jmp	.L44
.L43:
	cmpl	$255, -28(%rbp)
	jg	.L44
	movl	$256, -28(%rbp)
	jmp	.L44
.L42:
	movl	$4194304, -28(%rbp)
.L44:
	movl	-28(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	R_ScaleFromGlobalAngle, .-R_ScaleFromGlobalAngle
	.globl	R_InitTables
	.type	R_InitTables, @function
R_InitTables:
.LFB14:
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
.LFE14:
	.size	R_InitTables, .-R_InitTables
	.globl	R_InitTextureMapping
	.type	R_InitTextureMapping, @function
R_InitTextureMapping:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	12288+finetangent(%rip), %edx
	movl	centerxfrac(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -4(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L48
.L53:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finetangent(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$131072, %eax
	jle	.L49
	movl	$-1, -8(%rbp)
	jmp	.L50
.L49:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finetangent(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$-131072, %eax
	jge	.L51
	movl	viewwidth(%rip), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L50
.L51:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finetangent(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movl	centerxfrac(%rip), %eax
	subl	-8(%rbp), %eax
	addl	$65535, %eax
	sarl	$16, %eax
	movl	%eax, -8(%rbp)
	cmpl	$-1, -8(%rbp)
	jge	.L52
	movl	$-1, -8(%rbp)
	jmp	.L50
.L52:
	movl	viewwidth(%rip), %eax
	addl	$1, %eax
	cmpl	%eax, -8(%rbp)
	jle	.L50
	movl	viewwidth(%rip), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
.L50:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	viewangletox(%rip), %rdx
	movl	-8(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	addl	$1, -16(%rbp)
.L48:
	cmpl	$4095, -16(%rbp)
	jle	.L53
	movl	$0, -12(%rbp)
	jmp	.L54
.L57:
	movl	$0, -16(%rbp)
	jmp	.L55
.L56:
	addl	$1, -16(%rbp)
.L55:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L56
	movl	-16(%rbp), %eax
	sall	$19, %eax
	subl	$1073741824, %eax
	movl	%eax, %ecx
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	xtoviewangle(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -12(%rbp)
.L54:
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jle	.L57
	movl	$0, -16(%rbp)
	jmp	.L58
.L61:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finetangent(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -8(%rbp)
	movl	centerx(%rip), %eax
	subl	-8(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$-1, %eax
	jne	.L59
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	$0, (%rdx,%rax)
	jmp	.L60
.L59:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	viewwidth(%rip), %eax
	addl	$1, %eax
	cmpl	%eax, %edx
	jne	.L60
	movl	viewwidth(%rip), %eax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	viewangletox(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
.L60:
	addl	$1, -16(%rbp)
.L58:
	cmpl	$4095, -16(%rbp)
	jle	.L61
	movl	xtoviewangle(%rip), %eax
	movl	%eax, clipangle(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	R_InitTextureMapping, .-R_InitTextureMapping
	.globl	R_InitLightTables
	.type	R_InitLightTables, @function
R_InitLightTables:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$0, -20(%rbp)
	jmp	.L63
.L68:
	movl	$15, %eax
	subl	-20(%rbp), %eax
	sall	$2, %eax
	movl	%eax, -8(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L64
.L67:
	movl	-16(%rbp), %eax
	addl	$1, %eax
	sall	$20, %eax
	movl	%eax, %esi
	movl	$10485760, %edi
	call	FixedDiv@PLT
	movl	%eax, -4(%rbp)
	sarl	$12, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L65
	movl	$0, -12(%rbp)
.L65:
	cmpl	$31, -12(%rbp)
	jle	.L66
	movl	$31, -12(%rbp)
.L66:
	movq	colormaps(%rip), %rdx
	movl	-12(%rbp), %eax
	sall	$8, %eax
	cltq
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	cltq
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	zlight(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -16(%rbp)
.L64:
	cmpl	$127, -16(%rbp)
	jle	.L67
	addl	$1, -20(%rbp)
.L63:
	cmpl	$15, -20(%rbp)
	jle	.L68
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	R_InitLightTables, .-R_InitLightTables
	.globl	setsizeneeded
	.bss
	.align 4
	.type	setsizeneeded, @object
	.size	setsizeneeded, 4
setsizeneeded:
	.zero	4
	.globl	setblocks
	.align 4
	.type	setblocks, @object
	.size	setblocks, 4
setblocks:
	.zero	4
	.globl	setdetail
	.align 4
	.type	setdetail, @object
	.size	setdetail, 4
setdetail:
	.zero	4
	.text
	.globl	R_SetViewSize
	.type	R_SetViewSize, @function
R_SetViewSize:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	$1, setsizeneeded(%rip)
	movl	-4(%rbp), %eax
	movl	%eax, setblocks(%rip)
	movl	-8(%rbp), %eax
	movl	%eax, setdetail(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	R_SetViewSize, .-R_SetViewSize
	.globl	R_ExecuteSetViewSize
	.type	R_ExecuteSetViewSize, @function
R_ExecuteSetViewSize:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$0, setsizeneeded(%rip)
	movl	setblocks(%rip), %eax
	cmpl	$11, %eax
	jne	.L71
	movl	$320, scaledviewwidth(%rip)
	movl	$200, viewheight(%rip)
	jmp	.L72
.L71:
	movl	setblocks(%rip), %eax
	sall	$5, %eax
	movl	%eax, scaledviewwidth(%rip)
	movl	setblocks(%rip), %eax
	imull	$168, %eax, %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	andl	$-8, %eax
	movl	%eax, viewheight(%rip)
.L72:
	movl	setdetail(%rip), %eax
	movl	%eax, detailshift(%rip)
	movl	scaledviewwidth(%rip), %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	movl	%eax, viewwidth(%rip)
	movl	viewheight(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, centery(%rip)
	movl	viewwidth(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, centerx(%rip)
	movl	centerx(%rip), %eax
	sall	$16, %eax
	movl	%eax, centerxfrac(%rip)
	movl	centery(%rip), %eax
	sall	$16, %eax
	movl	%eax, centeryfrac(%rip)
	movl	centerxfrac(%rip), %eax
	movl	%eax, projection(%rip)
	movl	detailshift(%rip), %eax
	testl	%eax, %eax
	jne	.L73
	movq	R_DrawColumn@GOTPCREL(%rip), %rax
	movq	%rax, basecolfunc(%rip)
	movq	basecolfunc(%rip), %rax
	movq	%rax, colfunc(%rip)
	movq	R_DrawFuzzColumn@GOTPCREL(%rip), %rax
	movq	%rax, fuzzcolfunc(%rip)
	movq	R_DrawTranslatedColumn@GOTPCREL(%rip), %rax
	movq	%rax, transcolfunc(%rip)
	movq	R_DrawSpan@GOTPCREL(%rip), %rax
	movq	%rax, spanfunc(%rip)
	jmp	.L74
.L73:
	movq	R_DrawColumnLow@GOTPCREL(%rip), %rax
	movq	%rax, basecolfunc(%rip)
	movq	basecolfunc(%rip), %rax
	movq	%rax, colfunc(%rip)
	movq	R_DrawFuzzColumn@GOTPCREL(%rip), %rax
	movq	%rax, fuzzcolfunc(%rip)
	movq	R_DrawTranslatedColumn@GOTPCREL(%rip), %rax
	movq	%rax, transcolfunc(%rip)
	movq	R_DrawSpanLow@GOTPCREL(%rip), %rax
	movq	%rax, spanfunc(%rip)
.L74:
	movl	viewheight(%rip), %edx
	movl	scaledviewwidth(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_InitBuffer@PLT
	call	R_InitTextureMapping
	movl	viewwidth(%rip), %eax
	sall	$16, %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$7, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, pspritescale(%rip)
	movl	viewwidth(%rip), %edi
	movl	$20971520, %eax
	cltd
	idivl	%edi
	movl	%eax, pspriteiscale(%rip)
	movl	$0, -24(%rbp)
	jmp	.L75
.L76:
	movl	viewheight(%rip), %eax
	movl	%eax, %ecx
	movl	-24(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	screenheightarray(%rip), %rax
	movw	%cx, (%rdx,%rax)
	addl	$1, -24(%rbp)
.L75:
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L76
	movl	$0, -24(%rbp)
	jmp	.L77
.L78:
	movl	viewheight(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	sall	$16, %eax
	addl	$32768, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	viewwidth(%rip), %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	sall	$16, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	yslope(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -24(%rbp)
.L77:
	movl	viewheight(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L78
	movl	$0, -24(%rbp)
	jmp	.L79
.L80:
	movq	finecosine(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	xtoviewangle(%rip), %rdx
	movl	(%rcx,%rdx), %edx
	shrl	$19, %edx
	movl	%edx, %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	distscale(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -24(%rbp)
.L79:
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L80
	movl	$0, -24(%rbp)
	jmp	.L81
.L86:
	movl	$15, %eax
	subl	-24(%rbp), %eax
	sall	$2, %eax
	movl	%eax, -12(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L82
.L85:
	movl	-20(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movl	%eax, %esi
	movl	viewwidth(%rip), %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	movl	%edx, %edi
	sall	%cl, %edi
	movl	%esi, %eax
	cltd
	idivl	%edi
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	jns	.L83
	movl	$0, -16(%rbp)
.L83:
	cmpl	$31, -16(%rbp)
	jle	.L84
	movl	$31, -16(%rbp)
.L84:
	movq	colormaps(%rip), %rdx
	movl	-16(%rbp), %eax
	sall	$8, %eax
	cltq
	leaq	(%rdx,%rax), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rsi
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	addq	%rsi, %rax
	leaq	0(,%rax,8), %rdx
	leaq	scalelight(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -20(%rbp)
.L82:
	cmpl	$47, -20(%rbp)
	jle	.L85
	addl	$1, -24(%rbp)
.L81:
	cmpl	$15, -24(%rbp)
	jle	.L86
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	R_ExecuteSetViewSize, .-R_ExecuteSetViewSize
	.section	.rodata
.LC0:
	.string	"\nR_InitData"
.LC1:
	.string	"\nR_InitPointToAngle"
.LC2:
	.string	"\nR_InitTables"
.LC3:
	.string	"\nR_InitPlanes"
.LC4:
	.string	"\nR_InitLightTables"
.LC5:
	.string	"\nR_InitSkyMap"
.LC6:
	.string	"\nR_InitTranslationsTables"
	.text
	.globl	R_Init
	.type	R_Init, @function
R_Init:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	R_InitData@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitPointToAngle
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitTables
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	detailLevel(%rip), %edx
	movl	screenblocks(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_SetViewSize
	call	R_InitPlanes@PLT
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitLightTables
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitSkyMap@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitTranslationTables@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, framecount(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	R_Init, .-R_Init
	.globl	R_PointInSubsector
	.type	R_PointInSubsector, @function
R_PointInSubsector:
.LFB20:
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
	movl	numnodes(%rip), %eax
	testl	%eax, %eax
	jne	.L89
	movq	subsectors(%rip), %rax
	jmp	.L90
.L89:
	movl	numnodes(%rip), %eax
	subl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	.L91
.L92:
	movq	nodes(%rip), %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rdx
	movl	-24(%rbp), %ecx
	movl	-20(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_PointOnSide
	movl	%eax, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$24, %rdx
	movzwl	(%rax,%rdx,2), %eax
	movzwl	%ax, %eax
	movl	%eax, -16(%rbp)
.L91:
	movl	-16(%rbp), %eax
	andl	$32768, %eax
	testl	%eax, %eax
	je	.L92
	movq	subsectors(%rip), %rax
	movl	-16(%rbp), %edx
	andb	$127, %dh
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
.L90:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	R_PointInSubsector, .-R_PointInSubsector
	.globl	R_SetupFrame
	.type	R_SetupFrame, @function
R_SetupFrame:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, viewplayer(%rip)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, viewx(%rip)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %eax
	movl	%eax, viewy(%rip)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	viewangleoffset(%rip), %edx
	addl	%edx, %eax
	movl	%eax, viewangle(%rip)
	movq	-24(%rbp), %rax
	movl	248(%rax), %eax
	movl	%eax, extralight(%rip)
	movq	-24(%rbp), %rax
	movl	20(%rax), %eax
	movl	%eax, viewz(%rip)
	movl	viewangle(%rip), %eax
	shrl	$19, %eax
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, viewsin(%rip)
	movq	finecosine(%rip), %rax
	movl	viewangle(%rip), %edx
	shrl	$19, %edx
	movl	%edx, %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, viewcos(%rip)
	movl	$0, sscount(%rip)
	movq	-24(%rbp), %rax
	movl	252(%rax), %eax
	testl	%eax, %eax
	je	.L94
	movq	colormaps(%rip), %rdx
	movq	-24(%rbp), %rax
	movl	252(%rax), %eax
	sall	$8, %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, fixedcolormap(%rip)
	leaq	scalelightfixed(%rip), %rax
	movq	%rax, walllights(%rip)
	movl	$0, -4(%rbp)
	jmp	.L95
.L96:
	movq	fixedcolormap(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	scalelightfixed(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -4(%rbp)
.L95:
	cmpl	$47, -4(%rbp)
	jle	.L96
	jmp	.L97
.L94:
	movq	$0, fixedcolormap(%rip)
.L97:
	movl	framecount(%rip), %eax
	addl	$1, %eax
	movl	%eax, framecount(%rip)
	movl	validcount(%rip), %eax
	addl	$1, %eax
	movl	%eax, validcount(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	R_SetupFrame, .-R_SetupFrame
	.globl	R_RenderPlayerView
	.type	R_RenderPlayerView, @function
R_RenderPlayerView:
.LFB22:
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
	movq	%rax, %rdi
	call	R_SetupFrame
	call	R_ClearClipSegs@PLT
	call	R_ClearDrawSegs@PLT
	call	R_ClearPlanes@PLT
	call	R_ClearSprites@PLT
	call	NetUpdate@PLT
	movl	numnodes(%rip), %eax
	subl	$1, %eax
	movl	%eax, %edi
	call	R_RenderBSPNode@PLT
	call	NetUpdate@PLT
	call	R_DrawPlanes@PLT
	call	NetUpdate@PLT
	call	R_DrawMasked@PLT
	call	NetUpdate@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	R_RenderPlayerView, .-R_RenderPlayerView
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
