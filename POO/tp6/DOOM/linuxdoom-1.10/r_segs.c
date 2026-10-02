	.file	"r_segs.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: r_segs.c,v 1.3 1997/01/29 20:10:19 b1 Exp $"
	.globl	segtextured
	.bss
	.align 4
	.type	segtextured, @object
	.size	segtextured, 4
segtextured:
	.zero	4
	.globl	markfloor
	.align 4
	.type	markfloor, @object
	.size	markfloor, 4
markfloor:
	.zero	4
	.globl	markceiling
	.align 4
	.type	markceiling, @object
	.size	markceiling, 4
markceiling:
	.zero	4
	.globl	maskedtexture
	.align 4
	.type	maskedtexture, @object
	.size	maskedtexture, 4
maskedtexture:
	.zero	4
	.globl	toptexture
	.align 4
	.type	toptexture, @object
	.size	toptexture, 4
toptexture:
	.zero	4
	.globl	bottomtexture
	.align 4
	.type	bottomtexture, @object
	.size	bottomtexture, 4
bottomtexture:
	.zero	4
	.globl	midtexture
	.align 4
	.type	midtexture, @object
	.size	midtexture, 4
midtexture:
	.zero	4
	.globl	rw_normalangle
	.align 4
	.type	rw_normalangle, @object
	.size	rw_normalangle, 4
rw_normalangle:
	.zero	4
	.globl	rw_angle1
	.align 4
	.type	rw_angle1, @object
	.size	rw_angle1, 4
rw_angle1:
	.zero	4
	.globl	rw_x
	.align 4
	.type	rw_x, @object
	.size	rw_x, 4
rw_x:
	.zero	4
	.globl	rw_stopx
	.align 4
	.type	rw_stopx, @object
	.size	rw_stopx, 4
rw_stopx:
	.zero	4
	.globl	rw_centerangle
	.align 4
	.type	rw_centerangle, @object
	.size	rw_centerangle, 4
rw_centerangle:
	.zero	4
	.globl	rw_offset
	.align 4
	.type	rw_offset, @object
	.size	rw_offset, 4
rw_offset:
	.zero	4
	.globl	rw_distance
	.align 4
	.type	rw_distance, @object
	.size	rw_distance, 4
rw_distance:
	.zero	4
	.globl	rw_scale
	.align 4
	.type	rw_scale, @object
	.size	rw_scale, 4
rw_scale:
	.zero	4
	.globl	rw_scalestep
	.align 4
	.type	rw_scalestep, @object
	.size	rw_scalestep, 4
rw_scalestep:
	.zero	4
	.globl	rw_midtexturemid
	.align 4
	.type	rw_midtexturemid, @object
	.size	rw_midtexturemid, 4
rw_midtexturemid:
	.zero	4
	.globl	rw_toptexturemid
	.align 4
	.type	rw_toptexturemid, @object
	.size	rw_toptexturemid, 4
rw_toptexturemid:
	.zero	4
	.globl	rw_bottomtexturemid
	.align 4
	.type	rw_bottomtexturemid, @object
	.size	rw_bottomtexturemid, 4
rw_bottomtexturemid:
	.zero	4
	.globl	worldtop
	.align 4
	.type	worldtop, @object
	.size	worldtop, 4
worldtop:
	.zero	4
	.globl	worldbottom
	.align 4
	.type	worldbottom, @object
	.size	worldbottom, 4
worldbottom:
	.zero	4
	.globl	worldhigh
	.align 4
	.type	worldhigh, @object
	.size	worldhigh, 4
worldhigh:
	.zero	4
	.globl	worldlow
	.align 4
	.type	worldlow, @object
	.size	worldlow, 4
worldlow:
	.zero	4
	.globl	pixhigh
	.align 4
	.type	pixhigh, @object
	.size	pixhigh, 4
pixhigh:
	.zero	4
	.globl	pixlow
	.align 4
	.type	pixlow, @object
	.size	pixlow, 4
pixlow:
	.zero	4
	.globl	pixhighstep
	.align 4
	.type	pixhighstep, @object
	.size	pixhighstep, 4
pixhighstep:
	.zero	4
	.globl	pixlowstep
	.align 4
	.type	pixlowstep, @object
	.size	pixlowstep, 4
pixlowstep:
	.zero	4
	.globl	topfrac
	.align 4
	.type	topfrac, @object
	.size	topfrac, 4
topfrac:
	.zero	4
	.globl	topstep
	.align 4
	.type	topstep, @object
	.size	topstep, 4
topstep:
	.zero	4
	.globl	bottomfrac
	.align 4
	.type	bottomfrac, @object
	.size	bottomfrac, 4
bottomfrac:
	.zero	4
	.globl	bottomstep
	.align 4
	.type	bottomstep, @object
	.size	bottomstep, 4
bottomstep:
	.zero	4
	.globl	walllights
	.align 8
	.type	walllights, @object
	.size	walllights, 8
walllights:
	.zero	8
	.globl	maskedtexturecol
	.align 8
	.type	maskedtexturecol, @object
	.size	maskedtexturecol, 8
maskedtexturecol:
	.zero	8
	.text
	.globl	R_RenderMaskedSegRange
	.type	R_RenderMaskedSegRange, @function
R_RenderMaskedSegRange:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movl	%edx, -64(%rbp)
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, curline(%rip)
	movq	curline(%rip), %rax
	movq	40(%rax), %rax
	movq	%rax, frontsector(%rip)
	movq	curline(%rip), %rax
	movq	48(%rax), %rax
	movq	%rax, backsector(%rip)
	movq	texturetranslation(%rip), %rdx
	movq	curline(%rip), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	sarw	$4, %ax
	movswl	%ax, %edx
	movl	extralight(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -32(%rbp)
	movq	curline(%rip), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	curline(%rip), %rax
	movq	8(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jne	.L2
	subl	$1, -32(%rbp)
	jmp	.L3
.L2:
	movq	curline(%rip), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	curline(%rip), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L3
	addl	$1, -32(%rbp)
.L3:
	cmpl	$0, -32(%rbp)
	jns	.L4
	leaq	scalelight(%rip), %rax
	movq	%rax, walllights(%rip)
	jmp	.L5
.L4:
	cmpl	$15, -32(%rbp)
	jle	.L6
	leaq	5760+scalelight(%rip), %rax
	movq	%rax, walllights(%rip)
	jmp	.L5
.L6:
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$7, %rax
	leaq	scalelight(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, walllights(%rip)
.L5:
	movq	-56(%rbp), %rax
	movq	56(%rax), %rax
	movq	%rax, maskedtexturecol(%rip)
	movq	-56(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, rw_scalestep(%rip)
	movq	-56(%rbp), %rax
	movl	16(%rax), %edx
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	movl	-60(%rbp), %ecx
	subl	%eax, %ecx
	movl	rw_scalestep(%rip), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, spryscale(%rip)
	movq	-56(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, mfloorclip(%rip)
	movq	-56(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rax, mceilingclip(%rip)
	movq	curline(%rip), %rax
	movq	32(%rax), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$16, %eax
	testl	%eax, %eax
	je	.L7
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, dc_texturemid(%rip)
	movq	textureheight(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	dc_texturemid(%rip), %eax
	addl	%eax, %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movl	%edx, dc_texturemid(%rip)
	jmp	.L8
.L7:
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, dc_texturemid(%rip)
	movl	dc_texturemid(%rip), %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movl	%edx, dc_texturemid(%rip)
.L8:
	movq	curline(%rip), %rax
	movq	24(%rax), %rax
	movl	4(%rax), %edx
	movl	dc_texturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, dc_texturemid(%rip)
	movq	fixedcolormap(%rip), %rax
	testq	%rax, %rax
	je	.L9
	movq	fixedcolormap(%rip), %rax
	movq	%rax, dc_colormap(%rip)
.L9:
	movl	-60(%rbp), %eax
	movl	%eax, dc_x(%rip)
	jmp	.L10
.L14:
	movq	maskedtexturecol(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cmpw	$32767, %ax
	je	.L11
	movq	fixedcolormap(%rip), %rax
	testq	%rax, %rax
	jne	.L12
	movl	spryscale(%rip), %eax
	sarl	$12, %eax
	movl	%eax, -36(%rbp)
	cmpl	$47, -36(%rbp)
	jbe	.L13
	movl	$47, -36(%rbp)
.L13:
	movq	walllights(%rip), %rax
	movl	-36(%rbp), %edx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, dc_colormap(%rip)
.L12:
	movl	centeryfrac(%rip), %ebx
	movl	spryscale(%rip), %edx
	movl	dc_texturemid(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, sprtopscreen(%rip)
	movl	spryscale(%rip), %eax
	movl	%eax, %esi
	movl	$-1, %eax
	movl	$0, %edx
	divl	%esi
	movl	%eax, dc_iscale(%rip)
	movq	maskedtexturecol(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-28(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_GetColumn@PLT
	subq	$3, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	R_DrawMaskedColumn@PLT
	movq	maskedtexturecol(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movw	$32767, (%rax)
.L11:
	movl	spryscale(%rip), %edx
	movl	rw_scalestep(%rip), %eax
	addl	%edx, %eax
	movl	%eax, spryscale(%rip)
	movl	dc_x(%rip), %eax
	addl	$1, %eax
	movl	%eax, dc_x(%rip)
.L10:
	movl	dc_x(%rip), %eax
	cmpl	%eax, -64(%rbp)
	jge	.L14
	nop
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	R_RenderMaskedSegRange, .-R_RenderMaskedSegRange
	.globl	R_RenderSegLoop
	.type	R_RenderSegLoop, @function
R_RenderSegLoop:
.LFB7:
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
	jmp	.L16
.L35:
	movl	topfrac(%rip), %eax
	addl	$4095, %eax
	sarl	$12, %eax
	movl	%eax, -44(%rbp)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -44(%rbp)
	jg	.L17
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, -44(%rbp)
.L17:
	movl	markceiling(%rip), %eax
	testl	%eax, %eax
	je	.L18
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-44(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -24(%rbp)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -24(%rbp)
	jl	.L19
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	subl	$1, %eax
	movl	%eax, -24(%rbp)
.L19:
	movl	-28(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jg	.L18
	movq	ceilingplane(%rip), %rdx
	movl	rw_x(%rip), %eax
	movl	-28(%rbp), %ecx
	cltq
	movb	%cl, 21(%rdx,%rax)
	movq	ceilingplane(%rip), %rdx
	movl	rw_x(%rip), %eax
	movl	-24(%rbp), %ecx
	cltq
	movb	%cl, 343(%rdx,%rax)
.L18:
	movl	bottomfrac(%rip), %eax
	sarl	$12, %eax
	movl	%eax, -40(%rbp)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -40(%rbp)
	jl	.L20
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	subl	$1, %eax
	movl	%eax, -40(%rbp)
.L20:
	movl	markfloor(%rip), %eax
	testl	%eax, %eax
	je	.L21
	movl	-40(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	subl	$1, %eax
	movl	%eax, -24(%rbp)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -28(%rbp)
	jg	.L22
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, -28(%rbp)
.L22:
	movl	-28(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jg	.L21
	movq	floorplane(%rip), %rdx
	movl	rw_x(%rip), %eax
	movl	-28(%rbp), %ecx
	cltq
	movb	%cl, 21(%rdx,%rax)
	movq	floorplane(%rip), %rdx
	movl	rw_x(%rip), %eax
	movl	-24(%rbp), %ecx
	cltq
	movb	%cl, 343(%rdx,%rax)
.L21:
	movl	segtextured(%rip), %eax
	testl	%eax, %eax
	je	.L23
	movl	rw_x(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	xtoviewangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	rw_centerangle(%rip), %eax
	addl	%edx, %eax
	shrl	$19, %eax
	movl	%eax, -20(%rbp)
	movl	rw_offset(%rip), %ebx
	movl	rw_distance(%rip), %edx
	movl	-20(%rbp), %eax
	leaq	0(,%rax,4), %rcx
	leaq	finetangent(%rip), %rax
	movl	(%rcx,%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, -32(%rbp)
	sarl	$16, -32(%rbp)
	movl	rw_scale(%rip), %eax
	sarl	$12, %eax
	movl	%eax, -48(%rbp)
	cmpl	$47, -48(%rbp)
	jbe	.L24
	movl	$47, -48(%rbp)
.L24:
	movq	walllights(%rip), %rax
	movl	-48(%rbp), %edx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, dc_colormap(%rip)
	movl	rw_x(%rip), %eax
	movl	%eax, dc_x(%rip)
	movl	rw_scale(%rip), %eax
	movl	%eax, %esi
	movl	$-1, %eax
	movl	$0, %edx
	divl	%esi
	movl	%eax, dc_iscale(%rip)
.L23:
	movl	midtexture(%rip), %eax
	testl	%eax, %eax
	je	.L25
	movl	-44(%rbp), %eax
	movl	%eax, dc_yl(%rip)
	movl	-40(%rbp), %eax
	movl	%eax, dc_yh(%rip)
	movl	rw_midtexturemid(%rip), %eax
	movl	%eax, dc_texturemid(%rip)
	movl	midtexture(%rip), %eax
	movl	-32(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_GetColumn@PLT
	movq	%rax, dc_source(%rip)
	movq	colfunc(%rip), %rax
	call	*%rax
	movl	viewheight(%rip), %edx
	movl	rw_x(%rip), %eax
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movw	$-1, (%rdx,%rax)
	jmp	.L26
.L25:
	movl	toptexture(%rip), %eax
	testl	%eax, %eax
	je	.L27
	movl	pixhigh(%rip), %eax
	sarl	$12, %eax
	movl	%eax, -36(%rbp)
	movl	pixhigh(%rip), %edx
	movl	pixhighstep(%rip), %eax
	addl	%edx, %eax
	movl	%eax, pixhigh(%rip)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -36(%rbp)
	jl	.L28
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	subl	$1, %eax
	movl	%eax, -36(%rbp)
.L28:
	movl	-36(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jl	.L29
	movl	-44(%rbp), %eax
	movl	%eax, dc_yl(%rip)
	movl	-36(%rbp), %eax
	movl	%eax, dc_yh(%rip)
	movl	rw_toptexturemid(%rip), %eax
	movl	%eax, dc_texturemid(%rip)
	movl	toptexture(%rip), %eax
	movl	-32(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_GetColumn@PLT
	movq	%rax, dc_source(%rip)
	movq	colfunc(%rip), %rax
	call	*%rax
	movl	rw_x(%rip), %eax
	movl	-36(%rbp), %edx
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
	jmp	.L30
.L29:
	movl	-44(%rbp), %eax
	leal	-1(%rax), %edx
	movl	rw_x(%rip), %eax
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
	jmp	.L30
.L27:
	movl	markceiling(%rip), %eax
	testl	%eax, %eax
	je	.L30
	movl	-44(%rbp), %eax
	leal	-1(%rax), %edx
	movl	rw_x(%rip), %eax
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
.L30:
	movl	bottomtexture(%rip), %eax
	testl	%eax, %eax
	je	.L31
	movl	pixlow(%rip), %eax
	addl	$4095, %eax
	sarl	$12, %eax
	movl	%eax, -36(%rbp)
	movl	pixlow(%rip), %edx
	movl	pixlowstep(%rip), %eax
	addl	%edx, %eax
	movl	%eax, pixlow(%rip)
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -36(%rbp)
	jg	.L32
	movl	rw_x(%rip), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, -36(%rbp)
.L32:
	movl	-36(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jg	.L33
	movl	-36(%rbp), %eax
	movl	%eax, dc_yl(%rip)
	movl	-40(%rbp), %eax
	movl	%eax, dc_yh(%rip)
	movl	rw_bottomtexturemid(%rip), %eax
	movl	%eax, dc_texturemid(%rip)
	movl	bottomtexture(%rip), %eax
	movl	-32(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_GetColumn@PLT
	movq	%rax, dc_source(%rip)
	movq	colfunc(%rip), %rax
	call	*%rax
	movl	rw_x(%rip), %eax
	movl	-36(%rbp), %edx
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
	jmp	.L34
.L33:
	movl	-40(%rbp), %eax
	leal	1(%rax), %edx
	movl	rw_x(%rip), %eax
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
	jmp	.L34
.L31:
	movl	markfloor(%rip), %eax
	testl	%eax, %eax
	je	.L34
	movl	-40(%rbp), %eax
	leal	1(%rax), %edx
	movl	rw_x(%rip), %eax
	movl	%edx, %ecx
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
.L34:
	movl	maskedtexture(%rip), %eax
	testl	%eax, %eax
	je	.L26
	movq	maskedtexturecol(%rip), %rax
	movl	rw_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movl	-32(%rbp), %edx
	movw	%dx, (%rax)
.L26:
	movl	rw_scale(%rip), %edx
	movl	rw_scalestep(%rip), %eax
	addl	%edx, %eax
	movl	%eax, rw_scale(%rip)
	movl	topfrac(%rip), %edx
	movl	topstep(%rip), %eax
	addl	%edx, %eax
	movl	%eax, topfrac(%rip)
	movl	bottomfrac(%rip), %edx
	movl	bottomstep(%rip), %eax
	addl	%edx, %eax
	movl	%eax, bottomfrac(%rip)
	movl	rw_x(%rip), %eax
	addl	$1, %eax
	movl	%eax, rw_x(%rip)
.L16:
	movl	rw_x(%rip), %edx
	movl	rw_stopx(%rip), %eax
	cmpl	%eax, %edx
	jl	.L35
	nop
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_RenderSegLoop, .-R_RenderSegLoop
	.section	.rodata
	.align 8
.LC0:
	.string	"Bad R_RenderWallRange: %i to %i"
	.text
	.globl	R_StoreWallRange
	.type	R_StoreWallRange, @function
R_StoreWallRange:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movl	%edi, -52(%rbp)
	movl	%esi, -56(%rbp)
	movq	ds_p(%rip), %rdx
	leaq	16384+drawsegs(%rip), %rax
	cmpq	%rax, %rdx
	je	.L87
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -52(%rbp)
	jge	.L39
	movl	-52(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jle	.L40
.L39:
	movl	-56(%rbp), %edx
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L40:
	movq	curline(%rip), %rax
	movq	24(%rax), %rax
	movq	%rax, sidedef(%rip)
	movq	curline(%rip), %rax
	movq	32(%rax), %rax
	movq	%rax, linedef(%rip)
	movq	linedef(%rip), %rax
	movzwl	24(%rax), %edx
	movq	linedef(%rip), %rax
	orb	$1, %dh
	movw	%dx, 24(%rax)
	movq	curline(%rip), %rax
	movl	20(%rax), %eax
	addl	$1073741824, %eax
	movl	%eax, rw_normalangle(%rip)
	movl	rw_normalangle(%rip), %eax
	movl	rw_angle1(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -40(%rbp)
	cmpl	$1073741824, -40(%rbp)
	jbe	.L41
	movl	$1073741824, -40(%rbp)
.L41:
	movl	$1073741824, %eax
	subl	-40(%rbp), %eax
	movl	%eax, -32(%rbp)
	movq	curline(%rip), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	curline(%rip), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToDist@PLT
	movl	%eax, -28(%rbp)
	movl	-32(%rbp), %eax
	shrl	$19, %eax
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, rw_distance(%rip)
	movl	-52(%rbp), %eax
	movl	%eax, rw_x(%rip)
	movq	ds_p(%rip), %rax
	movl	rw_x(%rip), %edx
	movl	%edx, 8(%rax)
	movq	ds_p(%rip), %rax
	movl	-56(%rbp), %edx
	movl	%edx, 12(%rax)
	movq	ds_p(%rip), %rax
	movq	curline(%rip), %rdx
	movq	%rdx, (%rax)
	movl	-56(%rbp), %eax
	addl	$1, %eax
	movl	%eax, rw_stopx(%rip)
	movl	-52(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	xtoviewangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	viewangle(%rip), %eax
	addl	%edx, %eax
	movl	%eax, %edi
	call	R_ScaleFromGlobalAngle@PLT
	movl	%eax, rw_scale(%rip)
	movq	ds_p(%rip), %rax
	movl	rw_scale(%rip), %edx
	movl	%edx, 16(%rax)
	movl	-56(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jle	.L42
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	xtoviewangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	viewangle(%rip), %eax
	addl	%edx, %eax
	movq	ds_p(%rip), %rbx
	movl	%eax, %edi
	call	R_ScaleFromGlobalAngle@PLT
	movl	%eax, 20(%rbx)
	movq	ds_p(%rip), %rax
	movl	20(%rax), %edx
	movl	rw_scale(%rip), %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	-56(%rbp), %eax
	subl	-52(%rbp), %eax
	movl	%eax, %esi
	movl	%ecx, %eax
	cltd
	idivl	%esi
	movl	%eax, rw_scalestep(%rip)
	movq	ds_p(%rip), %rax
	movl	rw_scalestep(%rip), %edx
	movl	%edx, 24(%rax)
	jmp	.L43
.L42:
	movq	ds_p(%rip), %rdx
	movq	ds_p(%rip), %rax
	movl	16(%rdx), %edx
	movl	%edx, 20(%rax)
.L43:
	movq	frontsector(%rip), %rax
	movl	4(%rax), %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movl	%edx, worldtop(%rip)
	movq	frontsector(%rip), %rax
	movl	(%rax), %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movl	%edx, worldbottom(%rip)
	movl	$0, maskedtexture(%rip)
	movl	$0, bottomtexture(%rip)
	movl	bottomtexture(%rip), %eax
	movl	%eax, toptexture(%rip)
	movl	toptexture(%rip), %eax
	movl	%eax, midtexture(%rip)
	movq	ds_p(%rip), %rax
	movq	$0, 56(%rax)
	movq	backsector(%rip), %rax
	testq	%rax, %rax
	jne	.L44
	movq	texturetranslation(%rip), %rdx
	movq	sidedef(%rip), %rax
	movzwl	12(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, midtexture(%rip)
	movl	$1, markceiling(%rip)
	movl	markceiling(%rip), %eax
	movl	%eax, markfloor(%rip)
	movq	linedef(%rip), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$16, %eax
	testl	%eax, %eax
	je	.L45
	movq	frontsector(%rip), %rax
	movl	(%rax), %edx
	movq	textureheight(%rip), %rcx
	movq	sidedef(%rip), %rax
	movzwl	12(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	viewz(%rip), %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, rw_midtexturemid(%rip)
	jmp	.L46
.L45:
	movl	worldtop(%rip), %eax
	movl	%eax, rw_midtexturemid(%rip)
.L46:
	movq	sidedef(%rip), %rax
	movl	4(%rax), %edx
	movl	rw_midtexturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, rw_midtexturemid(%rip)
	movq	ds_p(%rip), %rax
	movl	$3, 28(%rax)
	movq	ds_p(%rip), %rax
	leaq	screenheightarray(%rip), %rdx
	movq	%rdx, 40(%rax)
	movq	ds_p(%rip), %rax
	leaq	negonearray(%rip), %rdx
	movq	%rdx, 48(%rax)
	movq	ds_p(%rip), %rax
	movl	$2147483647, 32(%rax)
	movq	ds_p(%rip), %rax
	movl	$-2147483648, 36(%rax)
	jmp	.L47
.L44:
	movq	ds_p(%rip), %rax
	movq	$0, 48(%rax)
	movq	ds_p(%rip), %rdx
	movq	48(%rax), %rax
	movq	%rax, 40(%rdx)
	movq	ds_p(%rip), %rax
	movl	$0, 28(%rax)
	movq	frontsector(%rip), %rax
	movl	(%rax), %edx
	movq	backsector(%rip), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L48
	movq	ds_p(%rip), %rax
	movl	$1, 28(%rax)
	movq	frontsector(%rip), %rdx
	movq	ds_p(%rip), %rax
	movl	(%rdx), %edx
	movl	%edx, 32(%rax)
	jmp	.L49
.L48:
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movl	viewz(%rip), %eax
	cmpl	%eax, %edx
	jle	.L49
	movq	ds_p(%rip), %rax
	movl	$1, 28(%rax)
	movq	ds_p(%rip), %rax
	movl	$2147483647, 32(%rax)
.L49:
	movq	frontsector(%rip), %rax
	movl	4(%rax), %edx
	movq	backsector(%rip), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jge	.L50
	movq	ds_p(%rip), %rax
	movl	28(%rax), %edx
	movq	ds_p(%rip), %rax
	orl	$2, %edx
	movl	%edx, 28(%rax)
	movq	frontsector(%rip), %rdx
	movq	ds_p(%rip), %rax
	movl	4(%rdx), %edx
	movl	%edx, 36(%rax)
	jmp	.L51
.L50:
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movl	viewz(%rip), %eax
	cmpl	%eax, %edx
	jge	.L51
	movq	ds_p(%rip), %rax
	movl	28(%rax), %edx
	movq	ds_p(%rip), %rax
	orl	$2, %edx
	movl	%edx, 28(%rax)
	movq	ds_p(%rip), %rax
	movl	$-2147483648, 36(%rax)
.L51:
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jg	.L52
	movq	ds_p(%rip), %rax
	leaq	negonearray(%rip), %rdx
	movq	%rdx, 48(%rax)
	movq	ds_p(%rip), %rax
	movl	$2147483647, 32(%rax)
	movq	ds_p(%rip), %rax
	movl	28(%rax), %edx
	movq	ds_p(%rip), %rax
	orl	$1, %edx
	movl	%edx, 28(%rax)
.L52:
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jl	.L53
	movq	ds_p(%rip), %rax
	leaq	screenheightarray(%rip), %rdx
	movq	%rdx, 40(%rax)
	movq	ds_p(%rip), %rax
	movl	$-2147483648, 36(%rax)
	movq	ds_p(%rip), %rax
	movl	28(%rax), %edx
	movq	ds_p(%rip), %rax
	orl	$2, %edx
	movl	%edx, 28(%rax)
.L53:
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movl	%edx, worldhigh(%rip)
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movl	%edx, worldlow(%rip)
	movq	frontsector(%rip), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L54
	movq	backsector(%rip), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L54
	movl	worldhigh(%rip), %eax
	movl	%eax, worldtop(%rip)
.L54:
	movl	worldlow(%rip), %edx
	movl	worldbottom(%rip), %eax
	cmpl	%eax, %edx
	jne	.L55
	movq	backsector(%rip), %rax
	movzwl	8(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	8(%rax), %eax
	cmpw	%ax, %dx
	jne	.L55
	movq	backsector(%rip), %rax
	movzwl	12(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	cmpw	%ax, %dx
	je	.L56
.L55:
	movl	$1, markfloor(%rip)
	jmp	.L57
.L56:
	movl	$0, markfloor(%rip)
.L57:
	movl	worldhigh(%rip), %edx
	movl	worldtop(%rip), %eax
	cmpl	%eax, %edx
	jne	.L58
	movq	backsector(%rip), %rax
	movzwl	10(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	10(%rax), %eax
	cmpw	%ax, %dx
	jne	.L58
	movq	backsector(%rip), %rax
	movzwl	12(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	cmpw	%ax, %dx
	je	.L59
.L58:
	movl	$1, markceiling(%rip)
	jmp	.L60
.L59:
	movl	$0, markceiling(%rip)
.L60:
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L61
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jl	.L62
.L61:
	movl	$1, markfloor(%rip)
	movl	markfloor(%rip), %eax
	movl	%eax, markceiling(%rip)
.L62:
	movl	worldhigh(%rip), %edx
	movl	worldtop(%rip), %eax
	cmpl	%eax, %edx
	jge	.L63
	movq	texturetranslation(%rip), %rdx
	movq	sidedef(%rip), %rax
	movzwl	8(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, toptexture(%rip)
	movq	linedef(%rip), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$8, %eax
	testl	%eax, %eax
	je	.L64
	movl	worldtop(%rip), %eax
	movl	%eax, rw_toptexturemid(%rip)
	jmp	.L63
.L64:
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movq	textureheight(%rip), %rcx
	movq	sidedef(%rip), %rax
	movzwl	8(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	viewz(%rip), %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, rw_toptexturemid(%rip)
.L63:
	movl	worldlow(%rip), %edx
	movl	worldbottom(%rip), %eax
	cmpl	%eax, %edx
	jle	.L65
	movq	texturetranslation(%rip), %rdx
	movq	sidedef(%rip), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, bottomtexture(%rip)
	movq	linedef(%rip), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$16, %eax
	testl	%eax, %eax
	je	.L66
	movl	worldtop(%rip), %eax
	movl	%eax, rw_bottomtexturemid(%rip)
	jmp	.L65
.L66:
	movl	worldlow(%rip), %eax
	movl	%eax, rw_bottomtexturemid(%rip)
.L65:
	movq	sidedef(%rip), %rax
	movl	4(%rax), %edx
	movl	rw_toptexturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, rw_toptexturemid(%rip)
	movq	sidedef(%rip), %rax
	movl	4(%rax), %edx
	movl	rw_bottomtexturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, rw_bottomtexturemid(%rip)
	movq	sidedef(%rip), %rax
	movzwl	12(%rax), %eax
	testw	%ax, %ax
	je	.L47
	movl	$1, maskedtexture(%rip)
	movq	lastopening(%rip), %rax
	movl	rw_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	negq	%rdx
	addq	%rdx, %rax
	movq	%rax, maskedtexturecol(%rip)
	movq	ds_p(%rip), %rax
	movq	maskedtexturecol(%rip), %rdx
	movq	%rdx, 56(%rax)
	movq	lastopening(%rip), %rdx
	movl	rw_stopx(%rip), %ecx
	movl	rw_x(%rip), %eax
	subl	%eax, %ecx
	movslq	%ecx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, lastopening(%rip)
.L47:
	movl	midtexture(%rip), %edx
	movl	toptexture(%rip), %eax
	orl	%eax, %edx
	movl	bottomtexture(%rip), %eax
	orl	%edx, %eax
	movl	%eax, %edx
	movl	maskedtexture(%rip), %eax
	orl	%edx, %eax
	movl	%eax, segtextured(%rip)
	movl	segtextured(%rip), %eax
	testl	%eax, %eax
	je	.L67
	movl	rw_normalangle(%rip), %eax
	movl	rw_angle1(%rip), %edx
	subl	%edx, %eax
	movl	%eax, -40(%rbp)
	cmpl	$-2147483648, -40(%rbp)
	jbe	.L68
	negl	-40(%rbp)
.L68:
	cmpl	$1073741824, -40(%rbp)
	jbe	.L69
	movl	$1073741824, -40(%rbp)
.L69:
	movl	-40(%rbp), %eax
	shrl	$19, %eax
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, rw_offset(%rip)
	movl	rw_normalangle(%rip), %eax
	movl	rw_angle1(%rip), %edx
	subl	%edx, %eax
	testl	%eax, %eax
	js	.L70
	movl	rw_offset(%rip), %eax
	negl	%eax
	movl	%eax, rw_offset(%rip)
.L70:
	movq	sidedef(%rip), %rax
	movl	(%rax), %edx
	movq	curline(%rip), %rax
	movl	16(%rax), %eax
	addl	%eax, %edx
	movl	rw_offset(%rip), %eax
	addl	%edx, %eax
	movl	%eax, rw_offset(%rip)
	movl	viewangle(%rip), %edx
	movl	rw_normalangle(%rip), %eax
	subl	%eax, %edx
	leal	1073741824(%rdx), %eax
	movl	%eax, rw_centerangle(%rip)
	movq	fixedcolormap(%rip), %rax
	testq	%rax, %rax
	jne	.L67
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	sarw	$4, %ax
	movswl	%ax, %edx
	movl	extralight(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
	movq	curline(%rip), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	curline(%rip), %rax
	movq	8(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jne	.L71
	subl	$1, -36(%rbp)
	jmp	.L72
.L71:
	movq	curline(%rip), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	curline(%rip), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L72
	addl	$1, -36(%rbp)
.L72:
	cmpl	$0, -36(%rbp)
	jns	.L73
	leaq	scalelight(%rip), %rax
	movq	%rax, walllights(%rip)
	jmp	.L67
.L73:
	cmpl	$15, -36(%rbp)
	jle	.L74
	leaq	5760+scalelight(%rip), %rax
	movq	%rax, walllights(%rip)
	jmp	.L67
.L74:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$7, %rax
	leaq	scalelight(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, walllights(%rip)
.L67:
	movq	frontsector(%rip), %rax
	movl	(%rax), %edx
	movl	viewz(%rip), %eax
	cmpl	%eax, %edx
	jl	.L75
	movl	$0, markfloor(%rip)
.L75:
	movq	frontsector(%rip), %rax
	movl	4(%rax), %edx
	movl	viewz(%rip), %eax
	cmpl	%eax, %edx
	jg	.L76
	movq	frontsector(%rip), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	je	.L76
	movl	$0, markceiling(%rip)
.L76:
	movl	worldtop(%rip), %eax
	sarl	$4, %eax
	movl	%eax, worldtop(%rip)
	movl	worldbottom(%rip), %eax
	sarl	$4, %eax
	movl	%eax, worldbottom(%rip)
	movl	worldtop(%rip), %edx
	movl	rw_scalestep(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, topstep(%rip)
	movl	centeryfrac(%rip), %eax
	sarl	$4, %eax
	movl	%eax, %ebx
	movl	rw_scale(%rip), %edx
	movl	worldtop(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, topfrac(%rip)
	movl	worldbottom(%rip), %edx
	movl	rw_scalestep(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, bottomstep(%rip)
	movl	centeryfrac(%rip), %eax
	sarl	$4, %eax
	movl	%eax, %ebx
	movl	rw_scale(%rip), %edx
	movl	worldbottom(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, bottomfrac(%rip)
	movq	backsector(%rip), %rax
	testq	%rax, %rax
	je	.L77
	movl	worldhigh(%rip), %eax
	sarl	$4, %eax
	movl	%eax, worldhigh(%rip)
	movl	worldlow(%rip), %eax
	sarl	$4, %eax
	movl	%eax, worldlow(%rip)
	movl	worldhigh(%rip), %edx
	movl	worldtop(%rip), %eax
	cmpl	%eax, %edx
	jge	.L78
	movl	centeryfrac(%rip), %eax
	sarl	$4, %eax
	movl	%eax, %ebx
	movl	rw_scale(%rip), %edx
	movl	worldhigh(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, pixhigh(%rip)
	movl	worldhigh(%rip), %edx
	movl	rw_scalestep(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, pixhighstep(%rip)
.L78:
	movl	worldlow(%rip), %edx
	movl	worldbottom(%rip), %eax
	cmpl	%eax, %edx
	jle	.L77
	movl	centeryfrac(%rip), %eax
	sarl	$4, %eax
	movl	%eax, %ebx
	movl	rw_scale(%rip), %edx
	movl	worldlow(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, pixlow(%rip)
	movl	worldlow(%rip), %edx
	movl	rw_scalestep(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, pixlowstep(%rip)
.L77:
	movl	markceiling(%rip), %eax
	testl	%eax, %eax
	je	.L79
	movl	rw_stopx(%rip), %eax
	leal	-1(%rax), %edx
	movl	rw_x(%rip), %ecx
	movq	ceilingplane(%rip), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	R_CheckPlane@PLT
	movq	%rax, ceilingplane(%rip)
.L79:
	movl	markfloor(%rip), %eax
	testl	%eax, %eax
	je	.L80
	movl	rw_stopx(%rip), %eax
	leal	-1(%rax), %edx
	movl	rw_x(%rip), %ecx
	movq	floorplane(%rip), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	R_CheckPlane@PLT
	movq	%rax, floorplane(%rip)
.L80:
	call	R_RenderSegLoop
	movq	ds_p(%rip), %rax
	movl	28(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	jne	.L81
	movl	maskedtexture(%rip), %eax
	testl	%eax, %eax
	je	.L82
.L81:
	movq	ds_p(%rip), %rax
	movq	40(%rax), %rax
	testq	%rax, %rax
	jne	.L82
	movl	rw_stopx(%rip), %eax
	subl	-52(%rbp), %eax
	addl	%eax, %eax
	movslq	%eax, %rdx
	movl	-52(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rcx
	leaq	ceilingclip(%rip), %rax
	addq	%rax, %rcx
	movq	lastopening(%rip), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	lastopening(%rip), %rdx
	movl	-52(%rbp), %eax
	cltq
	addq	%rax, %rax
	negq	%rax
	movq	%rax, %rcx
	movq	ds_p(%rip), %rax
	addq	%rcx, %rdx
	movq	%rdx, 40(%rax)
	movq	lastopening(%rip), %rdx
	movl	rw_stopx(%rip), %eax
	subl	-52(%rbp), %eax
	cltq
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, lastopening(%rip)
.L82:
	movq	ds_p(%rip), %rax
	movl	28(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L83
	movl	maskedtexture(%rip), %eax
	testl	%eax, %eax
	je	.L84
.L83:
	movq	ds_p(%rip), %rax
	movq	48(%rax), %rax
	testq	%rax, %rax
	jne	.L84
	movl	rw_stopx(%rip), %eax
	subl	-52(%rbp), %eax
	addl	%eax, %eax
	movslq	%eax, %rdx
	movl	-52(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rcx
	leaq	floorclip(%rip), %rax
	addq	%rax, %rcx
	movq	lastopening(%rip), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	lastopening(%rip), %rdx
	movl	-52(%rbp), %eax
	cltq
	addq	%rax, %rax
	negq	%rax
	movq	%rax, %rcx
	movq	ds_p(%rip), %rax
	addq	%rcx, %rdx
	movq	%rdx, 48(%rax)
	movq	lastopening(%rip), %rdx
	movl	rw_stopx(%rip), %eax
	subl	-52(%rbp), %eax
	cltq
	addq	%rax, %rax
	addq	%rdx, %rax
	movq	%rax, lastopening(%rip)
.L84:
	movl	maskedtexture(%rip), %eax
	testl	%eax, %eax
	je	.L85
	movq	ds_p(%rip), %rax
	movl	28(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	jne	.L85
	movq	ds_p(%rip), %rax
	movl	28(%rax), %edx
	movq	ds_p(%rip), %rax
	orl	$2, %edx
	movl	%edx, 28(%rax)
	movq	ds_p(%rip), %rax
	movl	$-2147483648, 36(%rax)
.L85:
	movl	maskedtexture(%rip), %eax
	testl	%eax, %eax
	je	.L86
	movq	ds_p(%rip), %rax
	movl	28(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L86
	movq	ds_p(%rip), %rax
	movl	28(%rax), %edx
	movq	ds_p(%rip), %rax
	orl	$1, %edx
	movl	%edx, 28(%rax)
	movq	ds_p(%rip), %rax
	movl	$2147483647, 32(%rax)
.L86:
	movq	ds_p(%rip), %rax
	addq	$64, %rax
	movq	%rax, ds_p(%rip)
	jmp	.L36
.L87:
	nop
.L36:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	R_StoreWallRange, .-R_StoreWallRange
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
