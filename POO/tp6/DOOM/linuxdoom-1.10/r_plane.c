	.file	"r_plane.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: r_plane.c,v 1.4 1997/02/03 16:47:55 b1 Exp $"
	.globl	floorfunc
	.bss
	.align 8
	.type	floorfunc, @object
	.size	floorfunc, 8
floorfunc:
	.zero	8
	.globl	ceilingfunc
	.align 8
	.type	ceilingfunc, @object
	.size	ceilingfunc, 8
ceilingfunc:
	.zero	8
	.globl	visplanes
	.align 32
	.type	visplanes, @object
	.size	visplanes, 84992
visplanes:
	.zero	84992
	.globl	lastvisplane
	.align 8
	.type	lastvisplane, @object
	.size	lastvisplane, 8
lastvisplane:
	.zero	8
	.globl	floorplane
	.align 8
	.type	floorplane, @object
	.size	floorplane, 8
floorplane:
	.zero	8
	.globl	ceilingplane
	.align 8
	.type	ceilingplane, @object
	.size	ceilingplane, 8
ceilingplane:
	.zero	8
	.globl	openings
	.align 32
	.type	openings, @object
	.size	openings, 40960
openings:
	.zero	40960
	.globl	lastopening
	.align 8
	.type	lastopening, @object
	.size	lastopening, 8
lastopening:
	.zero	8
	.globl	floorclip
	.align 32
	.type	floorclip, @object
	.size	floorclip, 640
floorclip:
	.zero	640
	.globl	ceilingclip
	.align 32
	.type	ceilingclip, @object
	.size	ceilingclip, 640
ceilingclip:
	.zero	640
	.globl	spanstart
	.align 32
	.type	spanstart, @object
	.size	spanstart, 800
spanstart:
	.zero	800
	.globl	spanstop
	.align 32
	.type	spanstop, @object
	.size	spanstop, 800
spanstop:
	.zero	800
	.globl	planezlight
	.align 8
	.type	planezlight, @object
	.size	planezlight, 8
planezlight:
	.zero	8
	.globl	planeheight
	.align 4
	.type	planeheight, @object
	.size	planeheight, 4
planeheight:
	.zero	4
	.globl	yslope
	.align 32
	.type	yslope, @object
	.size	yslope, 800
yslope:
	.zero	800
	.globl	distscale
	.align 32
	.type	distscale, @object
	.size	distscale, 1280
distscale:
	.zero	1280
	.globl	basexscale
	.align 4
	.type	basexscale, @object
	.size	basexscale, 4
basexscale:
	.zero	4
	.globl	baseyscale
	.align 4
	.type	baseyscale, @object
	.size	baseyscale, 4
baseyscale:
	.zero	4
	.globl	cachedheight
	.align 32
	.type	cachedheight, @object
	.size	cachedheight, 800
cachedheight:
	.zero	800
	.globl	cacheddistance
	.align 32
	.type	cacheddistance, @object
	.size	cacheddistance, 800
cacheddistance:
	.zero	800
	.globl	cachedxstep
	.align 32
	.type	cachedxstep, @object
	.size	cachedxstep, 800
cachedxstep:
	.zero	800
	.globl	cachedystep
	.align 32
	.type	cachedystep, @object
	.size	cachedystep, 800
cachedystep:
	.zero	800
	.text
	.globl	R_InitPlanes
	.type	R_InitPlanes, @function
R_InitPlanes:
.LFB6:
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
.LFE6:
	.size	R_InitPlanes, .-R_InitPlanes
	.section	.rodata
.LC0:
	.string	"R_MapPlane: %i, %i at %i"
	.text
	.globl	R_MapPlane
	.type	R_MapPlane, @function
R_MapPlane:
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
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jl	.L3
	cmpl	$0, -40(%rbp)
	js	.L3
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -44(%rbp)
	jge	.L3
	movl	-36(%rbp), %eax
	movl	viewheight(%rip), %edx
	cmpl	%eax, %edx
	jnb	.L4
.L3:
	movl	-36(%rbp), %ecx
	movl	-44(%rbp), %edx
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L4:
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cachedheight(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	planeheight(%rip), %eax
	cmpl	%eax, %edx
	je	.L5
	movl	planeheight(%rip), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cachedheight(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	yslope(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	planeheight(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cacheddistance(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cacheddistance(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -32(%rbp)
	movl	basexscale(%rip), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cachedxstep(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cachedxstep(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, ds_xstep(%rip)
	movl	baseyscale(%rip), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cachedystep(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cachedystep(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, ds_ystep(%rip)
	jmp	.L6
.L5:
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cacheddistance(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -32(%rbp)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cachedxstep(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, ds_xstep(%rip)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cachedystep(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, ds_ystep(%rip)
.L6:
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	distscale(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -24(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	xtoviewangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	viewangle(%rip), %eax
	addl	%edx, %eax
	shrl	$19, %eax
	movl	%eax, -20(%rbp)
	movq	finecosine(%rip), %rax
	movl	-20(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-24(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	viewx(%rip), %edx
	addl	%edx, %eax
	movl	%eax, ds_xfrac(%rip)
	movl	viewy(%rip), %eax
	negl	%eax
	movl	%eax, %ebx
	movl	-20(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-24(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, ds_yfrac(%rip)
	movq	fixedcolormap(%rip), %rax
	testq	%rax, %rax
	je	.L7
	movq	fixedcolormap(%rip), %rax
	movq	%rax, ds_colormap(%rip)
	jmp	.L8
.L7:
	movl	-32(%rbp), %eax
	sarl	$20, %eax
	movl	%eax, -28(%rbp)
	cmpl	$127, -28(%rbp)
	jbe	.L9
	movl	$127, -28(%rbp)
.L9:
	movq	planezlight(%rip), %rax
	movl	-28(%rbp), %edx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, ds_colormap(%rip)
.L8:
	movl	-36(%rbp), %eax
	movl	%eax, ds_y(%rip)
	movl	-40(%rbp), %eax
	movl	%eax, ds_x1(%rip)
	movl	-44(%rbp), %eax
	movl	%eax, ds_x2(%rip)
	movq	spanfunc(%rip), %rax
	call	*%rax
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_MapPlane, .-R_MapPlane
	.globl	R_ClearPlanes
	.type	R_ClearPlanes, @function
R_ClearPlanes:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -8(%rbp)
	jmp	.L11
.L12:
	movl	viewheight(%rip), %eax
	movl	%eax, %ecx
	movl	-8(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	floorclip(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movl	-8(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	ceilingclip(%rip), %rax
	movw	$-1, (%rdx,%rax)
	addl	$1, -8(%rbp)
.L11:
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L12
	leaq	visplanes(%rip), %rax
	movq	%rax, lastvisplane(%rip)
	leaq	openings(%rip), %rax
	movq	%rax, lastopening(%rip)
	movl	$800, %edx
	movl	$0, %esi
	leaq	cachedheight(%rip), %rax
	movq	%rax, %rdi
	call	memset@PLT
	movl	viewangle(%rip), %eax
	subl	$1073741824, %eax
	shrl	$19, %eax
	movl	%eax, -4(%rbp)
	movl	centerxfrac(%rip), %edx
	movq	finecosine(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, basexscale(%rip)
	movl	centerxfrac(%rip), %edx
	movl	-4(%rbp), %eax
	leaq	0(,%rax,4), %rcx
	leaq	finesine(%rip), %rax
	movl	(%rcx,%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	negl	%eax
	movl	%eax, baseyscale(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	R_ClearPlanes, .-R_ClearPlanes
	.section	.rodata
	.align 8
.LC1:
	.string	"R_FindPlane: no more visplanes"
	.text
	.globl	R_FindPlane
	.type	R_FindPlane, @function
R_FindPlane:
.LFB9:
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
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jne	.L14
	movl	$0, -20(%rbp)
	movl	$0, -28(%rbp)
.L14:
	leaq	visplanes(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L15
.L18:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jne	.L16
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jne	.L16
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, -28(%rbp)
	je	.L22
.L16:
	addq	$664, -8(%rbp)
.L15:
	movq	lastvisplane(%rip), %rax
	cmpq	%rax, -8(%rbp)
	jb	.L18
	jmp	.L17
.L22:
	nop
.L17:
	movq	lastvisplane(%rip), %rax
	cmpq	%rax, -8(%rbp)
	jnb	.L19
	movq	-8(%rbp), %rax
	jmp	.L20
.L19:
	movq	lastvisplane(%rip), %rdx
	leaq	visplanes(%rip), %rax
	subq	%rax, %rdx
	cmpq	$84992, %rdx
	jne	.L21
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L21:
	movq	lastvisplane(%rip), %rax
	addq	$664, %rax
	movq	%rax, lastvisplane(%rip)
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 8(%rax)
	movq	-8(%rbp), %rax
	movl	$320, 12(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 16(%rax)
	movq	-8(%rbp), %rax
	addq	$21, %rax
	movl	$320, %edx
	movl	$255, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-8(%rbp), %rax
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	R_FindPlane, .-R_FindPlane
	.globl	R_CheckPlane
	.type	R_CheckPlane, @function
R_CheckPlane:
.LFB10:
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
	movq	-40(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -44(%rbp)
	jge	.L24
	movq	-40(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -20(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L25
.L24:
	movq	-40(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -12(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
.L25:
	movq	-40(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -48(%rbp)
	jle	.L26
	movq	-40(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -16(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L27
.L26:
	movq	-40(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -8(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -16(%rbp)
.L27:
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L28
.L31:
	movq	-40(%rbp), %rdx
	movl	-4(%rbp), %eax
	cltq
	movzbl	21(%rdx,%rax), %eax
	cmpb	$-1, %al
	jne	.L34
	addl	$1, -4(%rbp)
.L28:
	movl	-4(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L31
	jmp	.L30
.L34:
	nop
.L30:
	movl	-4(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L32
	movq	-40(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, 12(%rax)
	movq	-40(%rbp), %rax
	movl	-8(%rbp), %edx
	movl	%edx, 16(%rax)
	movq	-40(%rbp), %rax
	jmp	.L33
.L32:
	movq	lastvisplane(%rip), %rax
	movq	-40(%rbp), %rdx
	movl	(%rdx), %edx
	movl	%edx, (%rax)
	movq	lastvisplane(%rip), %rax
	movq	-40(%rbp), %rdx
	movl	4(%rdx), %edx
	movl	%edx, 4(%rax)
	movq	lastvisplane(%rip), %rax
	movq	-40(%rbp), %rdx
	movl	8(%rdx), %edx
	movl	%edx, 8(%rax)
	movq	lastvisplane(%rip), %rax
	leaq	664(%rax), %rdx
	movq	%rdx, lastvisplane(%rip)
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, 12(%rax)
	movq	-40(%rbp), %rax
	movl	-48(%rbp), %edx
	movl	%edx, 16(%rax)
	movq	-40(%rbp), %rax
	addq	$21, %rax
	movl	$320, %edx
	movl	$255, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-40(%rbp), %rax
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	R_CheckPlane, .-R_CheckPlane
	.globl	R_MakeSpans
	.type	R_MakeSpans, @function
R_MakeSpans:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movl	%r8d, -20(%rbp)
	jmp	.L36
.L38:
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	spanstart(%rip), %rax
	movl	(%rcx,%rax), %ecx
	movl	-8(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_MapPlane
	addl	$1, -8(%rbp)
.L36:
	movl	-8(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jge	.L39
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L38
	jmp	.L39
.L41:
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	spanstart(%rip), %rax
	movl	(%rcx,%rax), %ecx
	movl	-12(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_MapPlane
	subl	$1, -12(%rbp)
.L39:
	movl	-12(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L42
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L41
	jmp	.L42
.L44:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	spanstart(%rip), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	addl	$1, -16(%rbp)
.L42:
	movl	-16(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L45
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L44
	jmp	.L45
.L47:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	spanstart(%rip), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	subl	$1, -20(%rbp)
.L45:
	movl	-20(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L48
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jge	.L47
.L48:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	R_MakeSpans, .-R_MakeSpans
	.section	.rodata
	.align 8
.LC2:
	.string	"R_DrawPlanes: drawsegs overflow (%i)"
	.align 8
.LC3:
	.string	"R_DrawPlanes: visplane overflow (%i)"
	.align 8
.LC4:
	.string	"R_DrawPlanes: opening overflow (%i)"
.LC5:
	.string	"Z_CT at r_plane.c:%i"
	.text
	.globl	R_DrawPlanes
	.type	R_DrawPlanes, @function
R_DrawPlanes:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	ds_p(%rip), %rdx
	leaq	drawsegs(%rip), %rax
	subq	%rax, %rdx
	cmpq	$16384, %rdx
	jle	.L50
	movq	ds_p(%rip), %rdx
	leaq	drawsegs(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$6, %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L50:
	movq	lastvisplane(%rip), %rdx
	leaq	visplanes(%rip), %rax
	subq	%rax, %rdx
	cmpq	$84992, %rdx
	jle	.L51
	movq	lastvisplane(%rip), %rdx
	leaq	visplanes(%rip), %rax
	subq	%rax, %rdx
	sarq	$3, %rdx
	movabsq	$-6667497857967307813, %rax
	imulq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L51:
	movq	lastopening(%rip), %rdx
	leaq	openings(%rip), %rax
	subq	%rax, %rdx
	cmpq	$40960, %rdx
	jle	.L52
	movq	lastopening(%rip), %rdx
	leaq	openings(%rip), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	%rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L52:
	leaq	visplanes(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L53
.L65:
	movq	-8(%rbp), %rax
	movl	12(%rax), %edx
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, %edx
	jg	.L66
	movq	-8(%rbp), %rax
	movl	4(%rax), %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L56
	movl	pspriteiscale(%rip), %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	movl	%eax, dc_iscale(%rip)
	movq	colormaps(%rip), %rax
	movq	%rax, dc_colormap(%rip)
	movl	skytexturemid(%rip), %eax
	movl	%eax, dc_texturemid(%rip)
	movq	-8(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L57
.L59:
	movq	-8(%rbp), %rdx
	movl	-20(%rbp), %eax
	cltq
	movzbl	21(%rdx,%rax), %eax
	movzbl	%al, %eax
	movl	%eax, dc_yl(%rip)
	movq	-8(%rbp), %rdx
	movl	-20(%rbp), %eax
	cltq
	movzbl	343(%rdx,%rax), %eax
	movzbl	%al, %eax
	movl	%eax, dc_yh(%rip)
	movl	dc_yl(%rip), %edx
	movl	dc_yh(%rip), %eax
	cmpl	%eax, %edx
	jg	.L58
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	xtoviewangle(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	viewangle(%rip), %eax
	addl	%edx, %eax
	shrl	$22, %eax
	movl	%eax, -12(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, dc_x(%rip)
	movl	skytexture(%rip), %eax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_GetColumn@PLT
	movq	%rax, dc_source(%rip)
	movq	colfunc(%rip), %rax
	call	*%rax
.L58:
	addl	$1, -20(%rbp)
.L57:
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L59
	jmp	.L55
.L56:
	movq	flattranslation(%rip), %rdx
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	firstflat(%rip), %eax
	addl	%edx, %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, ds_source(%rip)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	viewz(%rip), %edx
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, planeheight(%rip)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	sarl	$4, %eax
	movl	%eax, %edx
	movl	extralight(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	cmpl	$15, -24(%rbp)
	jle	.L60
	movl	$15, -24(%rbp)
.L60:
	cmpl	$0, -24(%rbp)
	jns	.L61
	movl	$0, -24(%rbp)
.L61:
	movl	-24(%rbp), %eax
	cltq
	salq	$10, %rax
	movq	%rax, %rdx
	leaq	zlight(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, planezlight(%rip)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	addl	$1, %eax
	movq	-8(%rbp), %rdx
	cltq
	movb	$-1, 21(%rdx,%rax)
	movq	-8(%rbp), %rax
	movl	12(%rax), %eax
	subl	$1, %eax
	movq	-8(%rbp), %rdx
	cltq
	movb	$-1, 21(%rdx,%rax)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L62
.L63:
	movq	-8(%rbp), %rdx
	movl	-20(%rbp), %eax
	cltq
	movzbl	343(%rdx,%rax), %eax
	movzbl	%al, %edi
	movq	-8(%rbp), %rdx
	movl	-20(%rbp), %eax
	cltq
	movzbl	21(%rdx,%rax), %eax
	movzbl	%al, %ecx
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movq	-8(%rbp), %rdx
	cltq
	movzbl	343(%rdx,%rax), %eax
	movzbl	%al, %edx
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movq	-8(%rbp), %rsi
	cltq
	movzbl	21(%rsi,%rax), %eax
	movzbl	%al, %esi
	movl	-20(%rbp), %eax
	movl	%edi, %r8d
	movl	%eax, %edi
	call	R_MakeSpans
	addl	$1, -20(%rbp)
.L62:
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L63
	movq	ds_source(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L64
	movl	$451, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L64:
	movq	ds_source(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	jmp	.L55
.L66:
	nop
.L55:
	addq	$664, -8(%rbp)
.L53:
	movq	lastvisplane(%rip), %rax
	cmpq	%rax, -8(%rbp)
	jb	.L65
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	R_DrawPlanes, .-R_DrawPlanes
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
