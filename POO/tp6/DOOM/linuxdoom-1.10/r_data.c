	.file	"r_data.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: r_data.c,v 1.4 1997/02/03 16:47:55 b1 Exp $"
	.globl	firstflat
	.bss
	.align 4
	.type	firstflat, @object
	.size	firstflat, 4
firstflat:
	.zero	4
	.globl	lastflat
	.align 4
	.type	lastflat, @object
	.size	lastflat, 4
lastflat:
	.zero	4
	.globl	numflats
	.align 4
	.type	numflats, @object
	.size	numflats, 4
numflats:
	.zero	4
	.globl	firstpatch
	.align 4
	.type	firstpatch, @object
	.size	firstpatch, 4
firstpatch:
	.zero	4
	.globl	lastpatch
	.align 4
	.type	lastpatch, @object
	.size	lastpatch, 4
lastpatch:
	.zero	4
	.globl	numpatches
	.align 4
	.type	numpatches, @object
	.size	numpatches, 4
numpatches:
	.zero	4
	.globl	firstspritelump
	.align 4
	.type	firstspritelump, @object
	.size	firstspritelump, 4
firstspritelump:
	.zero	4
	.globl	lastspritelump
	.align 4
	.type	lastspritelump, @object
	.size	lastspritelump, 4
lastspritelump:
	.zero	4
	.globl	numspritelumps
	.align 4
	.type	numspritelumps, @object
	.size	numspritelumps, 4
numspritelumps:
	.zero	4
	.globl	numtextures
	.align 4
	.type	numtextures, @object
	.size	numtextures, 4
numtextures:
	.zero	4
	.globl	textures
	.align 8
	.type	textures, @object
	.size	textures, 8
textures:
	.zero	8
	.globl	texturewidthmask
	.align 8
	.type	texturewidthmask, @object
	.size	texturewidthmask, 8
texturewidthmask:
	.zero	8
	.globl	textureheight
	.align 8
	.type	textureheight, @object
	.size	textureheight, 8
textureheight:
	.zero	8
	.globl	texturecompositesize
	.align 8
	.type	texturecompositesize, @object
	.size	texturecompositesize, 8
texturecompositesize:
	.zero	8
	.globl	texturecolumnlump
	.align 8
	.type	texturecolumnlump, @object
	.size	texturecolumnlump, 8
texturecolumnlump:
	.zero	8
	.globl	texturecolumnofs
	.align 8
	.type	texturecolumnofs, @object
	.size	texturecolumnofs, 8
texturecolumnofs:
	.zero	8
	.globl	texturecomposite
	.align 8
	.type	texturecomposite, @object
	.size	texturecomposite, 8
texturecomposite:
	.zero	8
	.globl	flattranslation
	.align 8
	.type	flattranslation, @object
	.size	flattranslation, 8
flattranslation:
	.zero	8
	.globl	texturetranslation
	.align 8
	.type	texturetranslation, @object
	.size	texturetranslation, 8
texturetranslation:
	.zero	8
	.globl	spritewidth
	.align 8
	.type	spritewidth, @object
	.size	spritewidth, 8
spritewidth:
	.zero	8
	.globl	spriteoffset
	.align 8
	.type	spriteoffset, @object
	.size	spriteoffset, 8
spriteoffset:
	.zero	8
	.globl	spritetopoffset
	.align 8
	.type	spritetopoffset, @object
	.size	spritetopoffset, 8
spritetopoffset:
	.zero	8
	.globl	colormaps
	.align 8
	.type	colormaps, @object
	.size	colormaps, 8
colormaps:
	.zero	8
	.text
	.globl	R_DrawColumnInCache
	.type	R_DrawColumnInCache, @function
R_DrawColumnInCache:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	%ecx, -56(%rbp)
	movq	-48(%rbp), %rax
	addq	$3, %rax
	movq	%rax, -16(%rbp)
	jmp	.L2
.L6:
	movq	-40(%rbp), %rax
	addq	$3, %rax
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	cmpl	$0, -20(%rbp)
	jns	.L3
	movl	-20(%rbp), %eax
	addl	%eax, -24(%rbp)
	movl	$0, -20(%rbp)
.L3:
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -56(%rbp)
	jge	.L4
	movl	-56(%rbp), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
.L4:
	cmpl	$0, -24(%rbp)
	jle	.L5
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movl	-20(%rbp), %eax
	movslq	%eax, %rcx
	movq	-48(%rbp), %rax
	addq	%rax, %rcx
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movq	%rcx, %rdi
	call	memcpy@PLT
.L5:
	movq	-40(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	addq	$4, %rax
	addq	%rax, -40(%rbp)
.L2:
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L6
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	R_DrawColumnInCache, .-R_DrawColumnInCache
	.section	.rodata
.LC0:
	.string	"Z_CT at r_data.c:%i"
	.text
	.globl	R_GenerateComposite
	.type	R_GenerateComposite, @function
R_GenerateComposite:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movl	%edi, -84(%rbp)
	movq	textures(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	movq	texturecomposite(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rax, %rdx
	movq	texturecompositesize(%rip), %rax
	movl	-84(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, -40(%rbp)
	movq	texturecolumnlump(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	texturecolumnofs(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	%rax, -56(%rbp)
	movl	$0, -64(%rbp)
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	%rax, -56(%rbp)
	jmp	.L8
.L16:
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -16(%rbp)
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -60(%rbp)
	movq	-16(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-60(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -68(%rbp)
	cmpl	$0, -60(%rbp)
	jns	.L9
	movl	$0, -72(%rbp)
	jmp	.L10
.L9:
	movl	-60(%rbp), %eax
	movl	%eax, -72(%rbp)
.L10:
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	cmpl	%eax, -68(%rbp)
	jle	.L12
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -68(%rbp)
	jmp	.L12
.L15:
	movl	-72(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	testw	%ax, %ax
	jns	.L18
	movl	-72(%rbp), %eax
	subl	-60(%rbp), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movslq	%edx, %rdx
	movl	8(%rax,%rdx,4), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %ecx
	movq	-56(%rbp), %rax
	movl	4(%rax), %edx
	movl	-72(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rsi
	movq	-24(%rbp), %rax
	addq	%rsi, %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %esi
	movq	-40(%rbp), %rax
	addq	%rax, %rsi
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	R_DrawColumnInCache
	jmp	.L14
.L18:
	nop
.L14:
	addl	$1, -72(%rbp)
.L12:
	movl	-72(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L15
	addl	$1, -64(%rbp)
	addq	$12, -56(%rbp)
.L8:
	movq	-48(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -64(%rbp)
	jl	.L16
	movq	-40(%rbp), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L17
	movl	$290, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L17:
	movq	-40(%rbp), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	R_GenerateComposite, .-R_GenerateComposite
	.section	.rodata
	.align 8
.LC1:
	.string	"R_GenerateLookup: column without a patch (%s)\n"
	.align 8
.LC2:
	.string	"R_GenerateLookup: texture %i is >64k"
	.text
	.globl	R_GenerateLookup
	.type	R_GenerateLookup, @function
R_GenerateLookup:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movl	%edi, -84(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	textures(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	movq	texturecomposite(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	$0, (%rax)
	movq	texturecompositesize(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	movq	texturecolumnlump(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -40(%rbp)
	movq	texturecolumnofs(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax, %rax
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L20:
	cmpq	%rdx, %rsp
	je	.L21
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L20
.L21:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L22
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L22:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax, %rdx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	%rax, -56(%rbp)
	movl	$0, -64(%rbp)
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	%rax, -56(%rbp)
	jmp	.L23
.L29:
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -16(%rbp)
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -60(%rbp)
	movq	-16(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-60(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -68(%rbp)
	cmpl	$0, -60(%rbp)
	jns	.L24
	movl	$0, -72(%rbp)
	jmp	.L25
.L24:
	movl	-60(%rbp), %eax
	movl	%eax, -72(%rbp)
.L25:
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	cmpl	%eax, -68(%rbp)
	jle	.L27
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -68(%rbp)
	jmp	.L27
.L28:
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	addl	$1, %edx
	movb	%dl, (%rax)
	movq	-56(%rbp), %rax
	movl	8(%rax), %ecx
	movl	-72(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movl	-72(%rbp), %eax
	subl	-60(%rbp), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movslq	%edx, %rdx
	movl	8(%rax,%rdx,4), %eax
	movl	%eax, %ecx
	movl	-72(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	leal	3(%rcx), %edx
	movw	%dx, (%rax)
	addl	$1, -72(%rbp)
.L27:
	movl	-72(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L28
	addl	$1, -64(%rbp)
	addq	$12, -56(%rbp)
.L23:
	movq	-48(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -64(%rbp)
	jl	.L29
	movl	$0, -72(%rbp)
	jmp	.L30
.L35:
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L31
	movq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L19
.L31:
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$1, %al
	jbe	.L33
	movl	-72(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movw	$-1, (%rax)
	movq	texturecompositesize(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movl	-72(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movq	texturecompositesize(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	cwtl
	movl	$65536, %edx
	subl	%eax, %edx
	cmpl	%edx, %ecx
	jle	.L34
	movl	-84(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L34:
	movq	texturecompositesize(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movq	texturecompositesize(%rip), %rax
	movl	-84(%rbp), %esi
	movslq	%esi, %rsi
	salq	$2, %rsi
	addq	%rsi, %rax
	addl	%ecx, %edx
	movl	%edx, (%rax)
.L33:
	addl	$1, -72(%rbp)
.L30:
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	cmpl	%eax, -72(%rbp)
	jl	.L35
.L19:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L36
	call	__stack_chk_fail@PLT
.L36:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	R_GenerateLookup, .-R_GenerateLookup
	.globl	R_GetColumn
	.type	R_GetColumn, @function
R_GetColumn:
.LFB3:
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
	movq	texturewidthmask(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	andl	%eax, -24(%rbp)
	movq	texturecolumnlump(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	movq	texturecolumnofs(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -8(%rbp)
	jle	.L38
	movl	-8(%rbp), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rax
	jmp	.L39
.L38:
	movq	texturecomposite(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L40
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	R_GenerateComposite
.L40:
	movq	texturecomposite(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	addq	%rdx, %rax
.L39:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	R_GetColumn, .-R_GetColumn
	.section	.rodata
.LC3:
	.string	"PNAMES"
.LC4:
	.string	"TEXTURE1"
.LC5:
	.string	"TEXTURE2"
.LC6:
	.string	"S_START"
.LC7:
	.string	"S_END"
.LC8:
	.string	"         ]"
.LC9:
	.string	"\b\b\b\b\b\b\b\b\b\b"
	.align 8
.LC10:
	.string	"R_InitTextures: bad texture directory"
	.align 8
.LC11:
	.string	"R_InitTextures: Missing patch in texture %s"
	.text
	.globl	R_InitTextures
	.type	R_InitTextures, @function
R_InitTextures:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$168, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movb	$0, -25(%rbp)
	movl	$1, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -152(%rbp)
	movq	-88(%rbp), %rax
	addq	$4, %rax
	movq	%rax, -80(%rbp)
	movl	-152(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L42:
	cmpq	%rdx, %rsp
	je	.L43
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L42
.L43:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L44
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L44:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -72(%rbp)
	movl	$0, -176(%rbp)
	jmp	.L45
.L46:
	movl	-176(%rbp), %eax
	sall	$3, %eax
	movslq	%eax, %rdx
	movq	-80(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	leaq	-33(%rbp), %rax
	movl	$8, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncpy@PLT
	movl	-176(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rbx
	leaq	-33(%rbp), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	movl	%eax, (%rbx)
	addl	$1, -176(%rbp)
.L45:
	movl	-176(%rbp), %eax
	cmpl	-152(%rbp), %eax
	jl	.L46
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	movl	$1, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -148(%rbp)
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, %edi
	call	W_LumpLength@PLT
	movl	%eax, -164(%rbp)
	movq	-112(%rbp), %rax
	addq	$4, %rax
	movq	%rax, -96(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	cmpl	$-1, %eax
	je	.L47
	movl	$1, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -156(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, %edi
	call	W_LumpLength@PLT
	movl	%eax, -160(%rbp)
	jmp	.L48
.L47:
	movq	$0, -104(%rbp)
	movl	$0, -156(%rbp)
	movl	$0, -160(%rbp)
.L48:
	movl	-148(%rbp), %edx
	movl	-156(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, numtextures(%rip)
	movl	numtextures(%rip), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, textures(%rip)
	movl	numtextures(%rip), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, texturecolumnlump(%rip)
	movl	numtextures(%rip), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, texturecolumnofs(%rip)
	movl	numtextures(%rip), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, texturecomposite(%rip)
	movl	numtextures(%rip), %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, texturecompositesize(%rip)
	movl	numtextures(%rip), %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, texturewidthmask(%rip)
	movl	numtextures(%rip), %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, textureheight(%rip)
	movl	$0, -168(%rbp)
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, -144(%rbp)
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	subl	$1, %eax
	movl	%eax, -140(%rbp)
	movl	-140(%rbp), %eax
	subl	-144(%rbp), %eax
	addl	$63, %eax
	leal	63(%rax), %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	sarl	$6, %eax
	movl	%eax, %ecx
	movl	numtextures(%rip), %eax
	addl	$63, %eax
	leal	63(%rax), %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	sarl	$6, %eax
	addl	%ecx, %eax
	movl	%eax, -136(%rbp)
	movl	$91, %edi
	call	putchar@PLT
	movl	$0, -176(%rbp)
	jmp	.L49
.L50:
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -176(%rbp)
.L49:
	movl	-176(%rbp), %eax
	cmpl	-136(%rbp), %eax
	jl	.L50
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -176(%rbp)
	jmp	.L51
.L52:
	movl	$8, %edi
	call	putchar@PLT
	addl	$1, -176(%rbp)
.L51:
	movl	-176(%rbp), %eax
	cmpl	-136(%rbp), %eax
	jl	.L52
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -176(%rbp)
	jmp	.L53
.L62:
	movl	-176(%rbp), %eax
	andl	$63, %eax
	testl	%eax, %eax
	jne	.L54
	movl	$46, %edi
	call	putchar@PLT
.L54:
	movl	-176(%rbp), %eax
	cmpl	-148(%rbp), %eax
	jne	.L55
	movq	-104(%rbp), %rax
	movq	%rax, -112(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, -164(%rbp)
	movq	-112(%rbp), %rax
	addq	$4, %rax
	movq	%rax, -96(%rbp)
.L55:
	movq	-96(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jle	.L56
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L56:
	movl	-132(%rbp), %eax
	movslq	%eax, %rdx
	movq	-112(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movzwl	20(%rax), %eax
	cwtl
	subl	$1, %eax
	cltq
	movl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	$28, %eax
	movl	%eax, %ecx
	movq	textures(%rip), %rax
	movl	-176(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	leaq	(%rax,%rdx), %rbx
	movl	$0, %edx
	movl	$1, %esi
	movl	%ecx, %edi
	call	Z_Malloc@PLT
	movq	%rax, (%rbx)
	movq	(%rbx), %rax
	movq	%rax, -48(%rbp)
	movq	-56(%rbp), %rax
	movzwl	12(%rax), %edx
	movq	-48(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-56(%rbp), %rax
	movzwl	14(%rax), %edx
	movq	-48(%rbp), %rax
	movw	%dx, 10(%rax)
	movq	-56(%rbp), %rax
	movzwl	20(%rax), %edx
	movq	-48(%rbp), %rax
	movw	%dx, 12(%rax)
	movq	-56(%rbp), %rdx
	movq	-48(%rbp), %rax
	movq	(%rdx), %rdx
	movq	%rdx, (%rax)
	movq	-56(%rbp), %rax
	addq	$22, %rax
	movq	%rax, -128(%rbp)
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	%rax, -120(%rbp)
	movl	$0, -172(%rbp)
	jmp	.L57
.L59:
	movq	-128(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movq	-120(%rbp), %rax
	movl	%edx, (%rax)
	movq	-128(%rbp), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movq	-120(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-128(%rbp), %rax
	movzwl	4(%rax), %eax
	movswq	%ax, %rax
	leaq	0(,%rax,4), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-120(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-120(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$-1, %eax
	jne	.L58
	movq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L58:
	addl	$1, -172(%rbp)
	addq	$10, -128(%rbp)
	addq	$12, -120(%rbp)
.L57:
	movq	-48(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -172(%rbp)
	jl	.L59
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	addl	%eax, %eax
	movq	texturecolumnlump(%rip), %rdx
	movl	-176(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$3, %rcx
	leaq	(%rdx,%rcx), %rbx
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, (%rbx)
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	addl	%eax, %eax
	movq	texturecolumnofs(%rip), %rdx
	movl	-176(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$3, %rcx
	leaq	(%rdx,%rcx), %rbx
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, (%rbx)
	movl	$1, -172(%rbp)
	jmp	.L60
.L61:
	sall	-172(%rbp)
.L60:
	movl	-172(%rbp), %eax
	leal	(%rax,%rax), %edx
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	cmpl	%eax, %edx
	jle	.L61
	movq	texturewidthmask(%rip), %rax
	movl	-176(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-172(%rbp), %edx
	subl	$1, %edx
	movl	%edx, (%rax)
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movq	textureheight(%rip), %rax
	movl	-176(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	sall	$16, %edx
	movl	%edx, (%rax)
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	addl	%eax, -168(%rbp)
	addl	$1, -176(%rbp)
	addq	$4, -96(%rbp)
.L53:
	movl	numtextures(%rip), %eax
	cmpl	%eax, -176(%rbp)
	jl	.L62
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	cmpq	$0, -104(%rbp)
	je	.L63
	movq	-104(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
.L63:
	movl	$0, -176(%rbp)
	jmp	.L64
.L65:
	movl	-176(%rbp), %eax
	movl	%eax, %edi
	call	R_GenerateLookup
	addl	$1, -176(%rbp)
.L64:
	movl	numtextures(%rip), %eax
	cmpl	%eax, -176(%rbp)
	jl	.L65
	movl	numtextures(%rip), %eax
	addl	$1, %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, texturetranslation(%rip)
	movl	$0, -176(%rbp)
	jmp	.L66
.L67:
	movq	texturetranslation(%rip), %rax
	movl	-176(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-176(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -176(%rbp)
.L66:
	movl	numtextures(%rip), %eax
	cmpl	%eax, -176(%rbp)
	jl	.L67
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L68
	call	__stack_chk_fail@PLT
.L68:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	R_InitTextures, .-R_InitTextures
	.section	.rodata
.LC12:
	.string	"F_START"
.LC13:
	.string	"F_END"
	.text
	.globl	R_InitFlats
	.type	R_InitFlats, @function
R_InitFlats:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	addl	$1, %eax
	movl	%eax, firstflat(%rip)
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	subl	$1, %eax
	movl	%eax, lastflat(%rip)
	movl	lastflat(%rip), %edx
	movl	firstflat(%rip), %eax
	subl	%eax, %edx
	leal	1(%rdx), %eax
	movl	%eax, numflats(%rip)
	movl	numflats(%rip), %eax
	addl	$1, %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, flattranslation(%rip)
	movl	$0, -4(%rbp)
	jmp	.L70
.L71:
	movq	flattranslation(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L70:
	movl	numflats(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L71
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	R_InitFlats, .-R_InitFlats
	.globl	R_InitSpriteLumps
	.type	R_InitSpriteLumps, @function
R_InitSpriteLumps:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	addl	$1, %eax
	movl	%eax, firstspritelump(%rip)
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	subl	$1, %eax
	movl	%eax, lastspritelump(%rip)
	movl	lastspritelump(%rip), %edx
	movl	firstspritelump(%rip), %eax
	subl	%eax, %edx
	leal	1(%rdx), %eax
	movl	%eax, numspritelumps(%rip)
	movl	numspritelumps(%rip), %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, spritewidth(%rip)
	movl	numspritelumps(%rip), %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, spriteoffset(%rip)
	movl	numspritelumps(%rip), %eax
	sall	$2, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, spritetopoffset(%rip)
	movl	$0, -12(%rbp)
	jmp	.L73
.L75:
	movl	-12(%rbp), %eax
	andl	$63, %eax
	testl	%eax, %eax
	jne	.L74
	movl	$46, %edi
	call	putchar@PLT
.L74:
	movl	firstspritelump(%rip), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movq	spritewidth(%rip), %rax
	movl	-12(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	sall	$16, %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movzwl	4(%rax), %eax
	movswl	%ax, %edx
	movq	spriteoffset(%rip), %rax
	movl	-12(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	sall	$16, %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movzwl	6(%rax), %eax
	movswl	%ax, %edx
	movq	spritetopoffset(%rip), %rax
	movl	-12(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	sall	$16, %edx
	movl	%edx, (%rax)
	addl	$1, -12(%rbp)
.L73:
	movl	numspritelumps(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L75
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	R_InitSpriteLumps, .-R_InitSpriteLumps
	.section	.rodata
.LC14:
	.string	"COLORMAP"
	.text
	.globl	R_InitColormaps
	.type	R_InitColormaps, @function
R_InitColormaps:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	addl	$255, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, colormaps(%rip)
	movq	colormaps(%rip), %rax
	addq	$255, %rax
	movb	$0, %al
	movq	%rax, colormaps(%rip)
	movq	colormaps(%rip), %rdx
	movl	-8(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	W_ReadLump@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_InitColormaps, .-R_InitColormaps
	.section	.rodata
.LC15:
	.string	"\nInitTextures"
.LC16:
	.string	"\nInitFlats"
.LC17:
	.string	"\nInitSprites"
.LC18:
	.string	"\nInitColormaps"
	.text
	.globl	R_InitData
	.type	R_InitData, @function
R_InitData:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	R_InitTextures
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitFlats
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitSpriteLumps
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_InitColormaps
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	R_InitData, .-R_InitData
	.section	.rodata
	.align 8
.LC19:
	.string	"R_FlatNumForName: %s not found"
	.text
	.globl	R_FlatNumForName
	.type	R_FlatNumForName, @function
R_FlatNumForName:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	movl	%eax, -24(%rbp)
	cmpl	$-1, -24(%rbp)
	jne	.L79
	movb	$0, -9(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -17(%rbp)
	leaq	-17(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L79:
	movl	firstflat(%rip), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L81
	call	__stack_chk_fail@PLT
.L81:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	R_FlatNumForName, .-R_FlatNumForName
	.globl	R_CheckTextureNumForName
	.type	R_CheckTextureNumForName, @function
R_CheckTextureNumForName:
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
	movzbl	(%rax), %eax
	cmpb	$45, %al
	jne	.L83
	movl	$0, %eax
	jmp	.L84
.L83:
	movl	$0, -4(%rbp)
	jmp	.L85
.L87:
	movq	textures(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	movq	-24(%rbp), %rax
	movl	$8, %edx
	movq	%rax, %rsi
	movq	%rcx, %rdi
	call	strncasecmp@PLT
	testl	%eax, %eax
	jne	.L86
	movl	-4(%rbp), %eax
	jmp	.L84
.L86:
	addl	$1, -4(%rbp)
.L85:
	movl	numtextures(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L87
	movl	$-1, %eax
.L84:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	R_CheckTextureNumForName, .-R_CheckTextureNumForName
	.section	.rodata
	.align 8
.LC20:
	.string	"R_TextureNumForName: %s not found"
	.text
	.globl	R_TextureNumForName
	.type	R_TextureNumForName, @function
R_TextureNumForName:
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
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	R_CheckTextureNumForName
	movl	%eax, -4(%rbp)
	cmpl	$-1, -4(%rbp)
	jne	.L89
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L89:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	R_TextureNumForName, .-R_TextureNumForName
	.globl	flatmemory
	.bss
	.align 4
	.type	flatmemory, @object
	.size	flatmemory, 4
flatmemory:
	.zero	4
	.globl	texturememory
	.align 4
	.type	texturememory, @object
	.size	texturememory, 4
texturememory:
	.zero	4
	.globl	spritememory
	.align 4
	.type	spritememory, @object
	.size	spritememory, 4
spritememory:
	.zero	4
	.text
	.globl	R_PrecacheLevel
	.type	R_PrecacheLevel, @function
R_PrecacheLevel:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L128
	movl	numflats(%rip), %eax
	cltq
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L94:
	cmpq	%rdx, %rsp
	je	.L95
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L94
.L95:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L96
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L96:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -48(%rbp)
	movl	numflats(%rip), %eax
	movslq	%eax, %rdx
	movq	-48(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	$0, -72(%rbp)
	jmp	.L97
.L98:
	movq	sectors(%rip), %rax
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movzwl	8(%rax), %eax
	movswq	%ax, %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
	movq	sectors(%rip), %rax
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
	addl	$1, -72(%rbp)
.L97:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L98
	movl	$0, flatmemory(%rip)
	movl	$0, -72(%rbp)
	jmp	.L99
.L101:
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L100
	movl	firstflat(%rip), %edx
	movl	-72(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -60(%rbp)
	movq	lumpinfo(%rip), %rcx
	movl	-60(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	16(%rax), %edx
	movl	flatmemory(%rip), %eax
	addl	%edx, %eax
	movl	%eax, flatmemory(%rip)
	movl	-60(%rbp), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
.L100:
	addl	$1, -72(%rbp)
.L99:
	movl	numflats(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L101
	movl	numtextures(%rip), %eax
	cltq
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L102:
	cmpq	%rdx, %rsp
	je	.L103
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L102
.L103:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L104
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L104:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -40(%rbp)
	movl	numtextures(%rip), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	$0, -72(%rbp)
	jmp	.L105
.L106:
	movq	sides(%rip), %rcx
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	8(%rax), %eax
	movswq	%ax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
	movq	sides(%rip), %rcx
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	12(%rax), %eax
	movswq	%ax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
	movq	sides(%rip), %rcx
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
	addl	$1, -72(%rbp)
.L105:
	movl	numsides(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L106
	movl	skytexture(%rip), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
	movl	$0, texturememory(%rip)
	movl	$0, -72(%rbp)
	jmp	.L107
.L112:
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L129
	movq	textures(%rip), %rax
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L110
.L111:
	movq	-16(%rbp), %rcx
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	addq	$24, %rax
	movl	(%rax), %eax
	movl	%eax, -60(%rbp)
	movq	lumpinfo(%rip), %rcx
	movl	-60(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	16(%rax), %edx
	movl	texturememory(%rip), %eax
	addl	%edx, %eax
	movl	%eax, texturememory(%rip)
	movl	-60(%rbp), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	addl	$1, -68(%rbp)
.L110:
	movq	-16(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -68(%rbp)
	jl	.L111
	jmp	.L109
.L129:
	nop
.L109:
	addl	$1, -72(%rbp)
.L107:
	movl	numtextures(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L112
	movl	numsprites(%rip), %eax
	cltq
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L113:
	cmpq	%rdx, %rsp
	je	.L114
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L113
.L114:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L115
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L115:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -32(%rbp)
	movl	numsprites(%rip), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	8+thinkercap(%rip), %rax
	movq	%rax, -56(%rbp)
	jmp	.L116
.L118:
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	P_MobjThinker@GOTPCREL(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L117
	movq	-56(%rbp), %rax
	movl	60(%rax), %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movb	$1, (%rax)
.L117:
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -56(%rbp)
.L116:
	leaq	thinkercap(%rip), %rax
	cmpq	%rax, -56(%rbp)
	jne	.L118
	movl	$0, spritememory(%rip)
	movl	$0, -72(%rbp)
	jmp	.L119
.L126:
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L130
	movl	$0, -68(%rbp)
	jmp	.L122
.L125:
	movq	sprites(%rip), %rax
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	8(%rax), %rcx
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movl	$0, -64(%rbp)
	jmp	.L123
.L124:
	movq	-24(%rbp), %rax
	movl	-64(%rbp), %edx
	movslq	%edx, %rdx
	movzwl	4(%rax,%rdx,2), %eax
	movswl	%ax, %edx
	movl	firstspritelump(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -60(%rbp)
	movq	lumpinfo(%rip), %rcx
	movl	-60(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	16(%rax), %edx
	movl	spritememory(%rip), %eax
	addl	%edx, %eax
	movl	%eax, spritememory(%rip)
	movl	-60(%rbp), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	addl	$1, -64(%rbp)
.L123:
	cmpl	$7, -64(%rbp)
	jle	.L124
	addl	$1, -68(%rbp)
.L122:
	movq	sprites(%rip), %rax
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -68(%rbp)
	jl	.L125
	jmp	.L121
.L130:
	nop
.L121:
	addl	$1, -72(%rbp)
.L119:
	movl	numsprites(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L126
	jmp	.L91
.L128:
	nop
.L91:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L127
	call	__stack_chk_fail@PLT
.L127:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	R_PrecacheLevel, .-R_PrecacheLevel
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
