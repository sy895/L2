	.file	"r_draw.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: r_draw.c,v 1.4 1997/02/03 16:47:55 b1 Exp $"
	.globl	viewimage
	.bss
	.align 8
	.type	viewimage, @object
	.size	viewimage, 8
viewimage:
	.zero	8
	.globl	viewwidth
	.align 4
	.type	viewwidth, @object
	.size	viewwidth, 4
viewwidth:
	.zero	4
	.globl	scaledviewwidth
	.align 4
	.type	scaledviewwidth, @object
	.size	scaledviewwidth, 4
scaledviewwidth:
	.zero	4
	.globl	viewheight
	.align 4
	.type	viewheight, @object
	.size	viewheight, 4
viewheight:
	.zero	4
	.globl	viewwindowx
	.align 4
	.type	viewwindowx, @object
	.size	viewwindowx, 4
viewwindowx:
	.zero	4
	.globl	viewwindowy
	.align 4
	.type	viewwindowy, @object
	.size	viewwindowy, 4
viewwindowy:
	.zero	4
	.globl	ylookup
	.align 32
	.type	ylookup, @object
	.size	ylookup, 6656
ylookup:
	.zero	6656
	.globl	columnofs
	.align 32
	.type	columnofs, @object
	.size	columnofs, 4480
columnofs:
	.zero	4480
	.globl	translations
	.align 32
	.type	translations, @object
	.size	translations, 768
translations:
	.zero	768
	.globl	dc_colormap
	.align 8
	.type	dc_colormap, @object
	.size	dc_colormap, 8
dc_colormap:
	.zero	8
	.globl	dc_x
	.align 4
	.type	dc_x, @object
	.size	dc_x, 4
dc_x:
	.zero	4
	.globl	dc_yl
	.align 4
	.type	dc_yl, @object
	.size	dc_yl, 4
dc_yl:
	.zero	4
	.globl	dc_yh
	.align 4
	.type	dc_yh, @object
	.size	dc_yh, 4
dc_yh:
	.zero	4
	.globl	dc_iscale
	.align 4
	.type	dc_iscale, @object
	.size	dc_iscale, 4
dc_iscale:
	.zero	4
	.globl	dc_texturemid
	.align 4
	.type	dc_texturemid, @object
	.size	dc_texturemid, 4
dc_texturemid:
	.zero	4
	.globl	dc_source
	.align 8
	.type	dc_source, @object
	.size	dc_source, 8
dc_source:
	.zero	8
	.globl	dccount
	.align 4
	.type	dccount, @object
	.size	dccount, 4
dccount:
	.zero	4
	.section	.rodata
.LC0:
	.string	"R_DrawColumn: %i to %i at %i"
	.text
	.globl	R_DrawColumn
	.type	R_DrawColumn, @function
R_DrawColumn:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L7
	movl	dc_x(%rip), %eax
	cmpl	$319, %eax
	ja	.L4
	movl	dc_yl(%rip), %eax
	testl	%eax, %eax
	js	.L4
	movl	dc_yh(%rip), %eax
	cmpl	$199, %eax
	jle	.L5
.L4:
	movl	dc_x(%rip), %ecx
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L5:
	movl	dc_yl(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	dc_x(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	dc_iscale(%rip), %eax
	movl	%eax, -12(%rbp)
	movl	dc_yl(%rip), %edx
	movl	centery(%rip), %eax
	subl	%eax, %edx
	imull	-12(%rbp), %edx
	movl	dc_texturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
.L6:
	movq	dc_colormap(%rip), %rdx
	movq	dc_source(%rip), %rax
	movl	-16(%rbp), %ecx
	sarl	$16, %ecx
	movslq	%ecx, %rcx
	andl	$127, %ecx
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	addq	$320, -8(%rbp)
	movl	-12(%rbp), %eax
	addl	%eax, -16(%rbp)
	movl	-20(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -20(%rbp)
	testl	%eax, %eax
	jne	.L6
	jmp	.L1
.L7:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	R_DrawColumn, .-R_DrawColumn
	.globl	R_DrawColumnLow
	.type	R_DrawColumnLow, @function
R_DrawColumnLow:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -28(%rbp)
	cmpl	$0, -28(%rbp)
	js	.L14
	movl	dc_x(%rip), %eax
	cmpl	$319, %eax
	ja	.L11
	movl	dc_yl(%rip), %eax
	testl	%eax, %eax
	js	.L11
	movl	dc_yh(%rip), %eax
	cmpl	$199, %eax
	jle	.L12
.L11:
	movl	dc_x(%rip), %ecx
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L12:
	movl	dc_x(%rip), %eax
	addl	%eax, %eax
	movl	%eax, dc_x(%rip)
	movl	dc_yl(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	dc_x(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movl	dc_yl(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	dc_x(%rip), %eax
	addl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	dc_iscale(%rip), %eax
	movl	%eax, -20(%rbp)
	movl	dc_yl(%rip), %edx
	movl	centery(%rip), %eax
	subl	%eax, %edx
	imull	-20(%rbp), %edx
	movl	dc_texturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
.L13:
	movq	dc_colormap(%rip), %rdx
	movq	dc_source(%rip), %rax
	movl	-24(%rbp), %ecx
	sarl	$16, %ecx
	movslq	%ecx, %rcx
	andl	$127, %ecx
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	movq	-16(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	addq	$320, -16(%rbp)
	addq	$320, -8(%rbp)
	movl	-20(%rbp), %eax
	addl	%eax, -24(%rbp)
	movl	-28(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -28(%rbp)
	testl	%eax, %eax
	jne	.L13
	jmp	.L8
.L14:
	nop
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	R_DrawColumnLow, .-R_DrawColumnLow
	.globl	fuzzoffset
	.data
	.align 32
	.type	fuzzoffset, @object
	.size	fuzzoffset, 200
fuzzoffset:
	.long	320
	.long	-320
	.long	320
	.long	-320
	.long	320
	.long	320
	.long	-320
	.long	320
	.long	320
	.long	-320
	.long	320
	.long	320
	.long	320
	.long	-320
	.long	320
	.long	320
	.long	320
	.long	-320
	.long	-320
	.long	-320
	.long	-320
	.long	320
	.long	-320
	.long	-320
	.long	320
	.long	320
	.long	320
	.long	320
	.long	-320
	.long	320
	.long	-320
	.long	320
	.long	320
	.long	-320
	.long	-320
	.long	320
	.long	320
	.long	-320
	.long	-320
	.long	-320
	.long	-320
	.long	320
	.long	320
	.long	320
	.long	320
	.long	-320
	.long	320
	.long	320
	.long	-320
	.long	320
	.globl	fuzzpos
	.bss
	.align 4
	.type	fuzzpos, @object
	.size	fuzzpos, 4
fuzzpos:
	.zero	4
	.section	.rodata
	.align 8
.LC1:
	.string	"R_DrawFuzzColumn: %i to %i at %i"
	.text
	.globl	R_DrawFuzzColumn
	.type	R_DrawFuzzColumn, @function
R_DrawFuzzColumn:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	dc_yl(%rip), %eax
	testl	%eax, %eax
	jne	.L16
	movl	$1, dc_yl(%rip)
.L16:
	movl	viewheight(%rip), %eax
	leal	-1(%rax), %edx
	movl	dc_yh(%rip), %eax
	cmpl	%eax, %edx
	jne	.L17
	movl	viewheight(%rip), %eax
	subl	$2, %eax
	movl	%eax, dc_yh(%rip)
.L17:
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L24
	movl	dc_x(%rip), %eax
	cmpl	$319, %eax
	ja	.L20
	movl	dc_yl(%rip), %eax
	testl	%eax, %eax
	js	.L20
	movl	dc_yh(%rip), %eax
	cmpl	$199, %eax
	jle	.L21
.L20:
	movl	dc_x(%rip), %ecx
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L21:
	movl	dc_yl(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	dc_x(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	dc_iscale(%rip), %eax
	movl	%eax, -12(%rbp)
	movl	dc_yl(%rip), %edx
	movl	centery(%rip), %eax
	subl	%eax, %edx
	imull	-12(%rbp), %edx
	movl	dc_texturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
.L23:
	movq	colormaps(%rip), %rdx
	movl	fuzzpos(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	fuzzoffset(%rip), %rax
	movl	(%rcx,%rax), %eax
	movslq	%eax, %rcx
	movq	-8(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	addl	$1536, %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	movl	fuzzpos(%rip), %eax
	addl	$1, %eax
	movl	%eax, fuzzpos(%rip)
	movl	fuzzpos(%rip), %eax
	cmpl	$50, %eax
	jne	.L22
	movl	$0, fuzzpos(%rip)
.L22:
	addq	$320, -8(%rbp)
	movl	-12(%rbp), %eax
	addl	%eax, -16(%rbp)
	movl	-20(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -20(%rbp)
	testl	%eax, %eax
	jne	.L23
	jmp	.L15
.L24:
	nop
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	R_DrawFuzzColumn, .-R_DrawFuzzColumn
	.globl	dc_translation
	.bss
	.align 8
	.type	dc_translation, @object
	.size	dc_translation, 8
dc_translation:
	.zero	8
	.globl	translationtables
	.align 8
	.type	translationtables, @object
	.size	translationtables, 8
translationtables:
	.zero	8
	.text
	.globl	R_DrawTranslatedColumn
	.type	R_DrawTranslatedColumn, @function
R_DrawTranslatedColumn:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L31
	movl	dc_x(%rip), %eax
	cmpl	$319, %eax
	ja	.L28
	movl	dc_yl(%rip), %eax
	testl	%eax, %eax
	js	.L28
	movl	dc_yh(%rip), %eax
	cmpl	$199, %eax
	jle	.L29
.L28:
	movl	dc_x(%rip), %ecx
	movl	dc_yh(%rip), %edx
	movl	dc_yl(%rip), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L29:
	movl	dc_yl(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	dc_x(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	dc_iscale(%rip), %eax
	movl	%eax, -12(%rbp)
	movl	dc_yl(%rip), %edx
	movl	centery(%rip), %eax
	subl	%eax, %edx
	imull	-12(%rbp), %edx
	movl	dc_texturemid(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
.L30:
	movq	dc_colormap(%rip), %rdx
	movq	dc_translation(%rip), %rcx
	movq	dc_source(%rip), %rsi
	movl	-16(%rbp), %eax
	sarl	$16, %eax
	cltq
	addq	%rsi, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	addq	$320, -8(%rbp)
	movl	-12(%rbp), %eax
	addl	%eax, -16(%rbp)
	movl	-20(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -20(%rbp)
	testl	%eax, %eax
	jne	.L30
	jmp	.L25
.L31:
	nop
.L25:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	R_DrawTranslatedColumn, .-R_DrawTranslatedColumn
	.globl	R_InitTranslationTables
	.type	R_InitTranslationTables, @function
R_InitTranslationTables:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, %edx
	movl	$1, %esi
	movl	$1023, %edi
	call	Z_Malloc@PLT
	movq	%rax, translationtables(%rip)
	movq	translationtables(%rip), %rax
	addq	$255, %rax
	movb	$0, %al
	movq	%rax, translationtables(%rip)
	movl	$0, -4(%rbp)
	jmp	.L33
.L36:
	cmpl	$111, -4(%rbp)
	jle	.L34
	cmpl	$127, -4(%rbp)
	jg	.L34
	movl	-4(%rbp), %eax
	andl	$15, %eax
	movl	%eax, %ecx
	movq	translationtables(%rip), %rdx
	movl	-4(%rbp), %eax
	cltq
	addq	%rdx, %rax
	leal	96(%rcx), %edx
	movb	%dl, (%rax)
	movl	-4(%rbp), %eax
	andl	$15, %eax
	movl	%eax, %ecx
	movq	translationtables(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$256, %rdx
	addq	%rdx, %rax
	leal	64(%rcx), %edx
	movb	%dl, (%rax)
	movl	-4(%rbp), %eax
	andl	$15, %eax
	movl	%eax, %ecx
	movq	translationtables(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$512, %rdx
	addq	%rdx, %rax
	leal	32(%rcx), %edx
	movb	%dl, (%rax)
	jmp	.L35
.L34:
	movq	translationtables(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$512, %rdx
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movb	%al, (%rdx)
	movq	translationtables(%rip), %rax
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$256, %rcx
	addq	%rcx, %rax
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	movq	translationtables(%rip), %rcx
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
.L35:
	addl	$1, -4(%rbp)
.L33:
	cmpl	$255, -4(%rbp)
	jle	.L36
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	R_InitTranslationTables, .-R_InitTranslationTables
	.globl	ds_y
	.bss
	.align 4
	.type	ds_y, @object
	.size	ds_y, 4
ds_y:
	.zero	4
	.globl	ds_x1
	.align 4
	.type	ds_x1, @object
	.size	ds_x1, 4
ds_x1:
	.zero	4
	.globl	ds_x2
	.align 4
	.type	ds_x2, @object
	.size	ds_x2, 4
ds_x2:
	.zero	4
	.globl	ds_colormap
	.align 8
	.type	ds_colormap, @object
	.size	ds_colormap, 8
ds_colormap:
	.zero	8
	.globl	ds_xfrac
	.align 4
	.type	ds_xfrac, @object
	.size	ds_xfrac, 4
ds_xfrac:
	.zero	4
	.globl	ds_yfrac
	.align 4
	.type	ds_yfrac, @object
	.size	ds_yfrac, 4
ds_yfrac:
	.zero	4
	.globl	ds_xstep
	.align 4
	.type	ds_xstep, @object
	.size	ds_xstep, 4
ds_xstep:
	.zero	4
	.globl	ds_ystep
	.align 4
	.type	ds_ystep, @object
	.size	ds_ystep, 4
ds_ystep:
	.zero	4
	.globl	ds_source
	.align 8
	.type	ds_source, @object
	.size	ds_source, 8
ds_source:
	.zero	8
	.globl	dscount
	.align 4
	.type	dscount, @object
	.size	dscount, 4
dscount:
	.zero	4
	.section	.rodata
.LC2:
	.string	"R_DrawSpan: %i to %i at %i"
	.text
	.globl	R_DrawSpan
	.type	R_DrawSpan, @function
R_DrawSpan:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	ds_x2(%rip), %edx
	movl	ds_x1(%rip), %eax
	cmpl	%eax, %edx
	jl	.L38
	movl	ds_x1(%rip), %eax
	testl	%eax, %eax
	js	.L38
	movl	ds_x2(%rip), %eax
	cmpl	$319, %eax
	jg	.L38
	movl	ds_y(%rip), %eax
	cmpl	$200, %eax
	jbe	.L39
.L38:
	movl	ds_y(%rip), %ecx
	movl	ds_x2(%rip), %edx
	movl	ds_x1(%rip), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L39:
	movl	ds_xfrac(%rip), %eax
	movl	%eax, -24(%rbp)
	movl	ds_yfrac(%rip), %eax
	movl	%eax, -20(%rbp)
	movl	ds_y(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	ds_x1(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	ds_x2(%rip), %edx
	movl	ds_x1(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
.L40:
	movl	-20(%rbp), %eax
	sarl	$10, %eax
	andl	$4032, %eax
	movl	%eax, %edx
	movl	-24(%rbp), %eax
	sarl	$16, %eax
	andl	$63, %eax
	orl	%edx, %eax
	movl	%eax, -12(%rbp)
	movq	ds_colormap(%rip), %rdx
	movq	ds_source(%rip), %rcx
	movl	-12(%rbp), %eax
	cltq
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	leaq	(%rdx,%rax), %rcx
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rcx), %edx
	movb	%dl, (%rax)
	movl	ds_xstep(%rip), %eax
	addl	%eax, -24(%rbp)
	movl	ds_ystep(%rip), %eax
	addl	%eax, -20(%rbp)
	movl	-16(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -16(%rbp)
	testl	%eax, %eax
	jne	.L40
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	R_DrawSpan, .-R_DrawSpan
	.globl	R_DrawSpanLow
	.type	R_DrawSpanLow, @function
R_DrawSpanLow:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	ds_x2(%rip), %edx
	movl	ds_x1(%rip), %eax
	cmpl	%eax, %edx
	jl	.L42
	movl	ds_x1(%rip), %eax
	testl	%eax, %eax
	js	.L42
	movl	ds_x2(%rip), %eax
	cmpl	$319, %eax
	jg	.L42
	movl	ds_y(%rip), %eax
	cmpl	$200, %eax
	jbe	.L43
.L42:
	movl	ds_y(%rip), %ecx
	movl	ds_x2(%rip), %edx
	movl	ds_x1(%rip), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L43:
	movl	ds_xfrac(%rip), %eax
	movl	%eax, -24(%rbp)
	movl	ds_yfrac(%rip), %eax
	movl	%eax, -20(%rbp)
	movl	ds_x1(%rip), %eax
	addl	%eax, %eax
	movl	%eax, ds_x1(%rip)
	movl	ds_x2(%rip), %eax
	addl	%eax, %eax
	movl	%eax, ds_x2(%rip)
	movl	ds_y(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	ds_x1(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	columnofs(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	ds_x2(%rip), %edx
	movl	ds_x1(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
.L44:
	movl	-20(%rbp), %eax
	sarl	$10, %eax
	andl	$4032, %eax
	movl	%eax, %edx
	movl	-24(%rbp), %eax
	sarl	$16, %eax
	andl	$63, %eax
	orl	%edx, %eax
	movl	%eax, -12(%rbp)
	movq	ds_colormap(%rip), %rdx
	movq	ds_source(%rip), %rcx
	movl	-12(%rbp), %eax
	cltq
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	leaq	(%rdx,%rax), %rcx
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rcx), %edx
	movb	%dl, (%rax)
	movq	ds_colormap(%rip), %rdx
	movq	ds_source(%rip), %rcx
	movl	-12(%rbp), %eax
	cltq
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	leaq	(%rdx,%rax), %rcx
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rcx), %edx
	movb	%dl, (%rax)
	movl	ds_xstep(%rip), %eax
	addl	%eax, -24(%rbp)
	movl	ds_ystep(%rip), %eax
	addl	%eax, -20(%rbp)
	movl	-16(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -16(%rbp)
	testl	%eax, %eax
	jne	.L44
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	R_DrawSpanLow, .-R_DrawSpanLow
	.globl	R_InitBuffer
	.type	R_InitBuffer, @function
R_InitBuffer:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	$320, %eax
	subl	-20(%rbp), %eax
	sarl	%eax
	movl	%eax, viewwindowx(%rip)
	movl	$0, -4(%rbp)
	jmp	.L46
.L47:
	movl	viewwindowx(%rip), %edx
	movl	-4(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	columnofs(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L46:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L47
	cmpl	$320, -20(%rbp)
	jne	.L48
	movl	$0, viewwindowy(%rip)
	jmp	.L49
.L48:
	movl	$168, %eax
	subl	-24(%rbp), %eax
	sarl	%eax
	movl	%eax, viewwindowy(%rip)
.L49:
	movl	$0, -4(%rbp)
	jmp	.L50
.L51:
	movq	screens(%rip), %rcx
	movl	viewwindowy(%rip), %edx
	movl	-4(%rbp), %eax
	addl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	cltq
	addq	%rax, %rcx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ylookup(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L50:
	movl	-4(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L51
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_InitBuffer, .-R_InitBuffer
	.section	.rodata
.LC3:
	.string	"brdr_t"
.LC4:
	.string	"brdr_b"
.LC5:
	.string	"brdr_l"
.LC6:
	.string	"brdr_r"
.LC7:
	.string	"brdr_tl"
.LC8:
	.string	"brdr_tr"
.LC9:
	.string	"brdr_bl"
.LC10:
	.string	"brdr_br"
	.text
	.globl	R_FillBackScreen
	.type	R_FillBackScreen, @function
R_FillBackScreen:
.LFB8:
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
	movabsq	$3629680651341352006, %rax
	movq	%rax, -17(%rbp)
	movb	$0, -9(%rbp)
	movabsq	$21184631215641159, %rax
	movq	%rax, -25(%rbp)
	movl	scaledviewwidth(%rip), %eax
	cmpl	$320, %eax
	je	.L70
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L55
	leaq	-25(%rbp), %rax
	movq	%rax, -56(%rbp)
	jmp	.L56
.L55:
	leaq	-17(%rbp), %rax
	movq	%rax, -56(%rbp)
.L56:
	movq	-56(%rbp), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -48(%rbp)
	movq	8+screens(%rip), %rax
	movq	%rax, -64(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L57
.L60:
	movl	$0, -72(%rbp)
	jmp	.L58
.L59:
	movl	-68(%rbp), %eax
	sall	$6, %eax
	cltq
	andl	$4032, %eax
	movq	%rax, %rdx
	movq	-48(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-64(%rbp), %rax
	movl	$64, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	addq	$64, -64(%rbp)
	addl	$1, -72(%rbp)
.L58:
	cmpl	$4, -72(%rbp)
	jle	.L59
	addl	$1, -68(%rbp)
.L57:
	cmpl	$167, -68(%rbp)
	jle	.L60
	movl	$101, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -40(%rbp)
	movl	$0, -72(%rbp)
	jmp	.L61
.L62:
	movl	viewwindowy(%rip), %eax
	leal	-8(%rax), %esi
	movl	viewwindowx(%rip), %edx
	movl	-72(%rbp), %eax
	leal	(%rdx,%rax), %edi
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	movl	$1, %edx
	call	V_DrawPatch@PLT
	addl	$8, -72(%rbp)
.L61:
	movl	scaledviewwidth(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L62
	movl	$101, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -40(%rbp)
	movl	$0, -72(%rbp)
	jmp	.L63
.L64:
	movl	viewwindowy(%rip), %edx
	movl	viewheight(%rip), %eax
	leal	(%rdx,%rax), %esi
	movl	viewwindowx(%rip), %edx
	movl	-72(%rbp), %eax
	leal	(%rdx,%rax), %edi
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	movl	$1, %edx
	call	V_DrawPatch@PLT
	addl	$8, -72(%rbp)
.L63:
	movl	scaledviewwidth(%rip), %eax
	cmpl	%eax, -72(%rbp)
	jl	.L64
	movl	$101, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -40(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L65
.L66:
	movl	viewwindowy(%rip), %edx
	movl	-68(%rbp), %eax
	leal	(%rdx,%rax), %esi
	movl	viewwindowx(%rip), %eax
	leal	-8(%rax), %edi
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	movl	$1, %edx
	call	V_DrawPatch@PLT
	addl	$8, -68(%rbp)
.L65:
	movl	viewheight(%rip), %eax
	cmpl	%eax, -68(%rbp)
	jl	.L66
	movl	$101, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -40(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L67
.L68:
	movl	viewwindowy(%rip), %edx
	movl	-68(%rbp), %eax
	leal	(%rdx,%rax), %esi
	movl	viewwindowx(%rip), %edx
	movl	scaledviewwidth(%rip), %eax
	leal	(%rdx,%rax), %edi
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	movl	$1, %edx
	call	V_DrawPatch@PLT
	addl	$8, -68(%rbp)
.L67:
	movl	viewheight(%rip), %eax
	cmpl	%eax, -68(%rbp)
	jl	.L68
	movl	$101, %esi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	viewwindowy(%rip), %eax
	leal	-8(%rax), %esi
	movl	viewwindowx(%rip), %eax
	subl	$8, %eax
	movq	%rdx, %rcx
	movl	$1, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	$101, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	viewwindowy(%rip), %eax
	leal	-8(%rax), %esi
	movl	viewwindowx(%rip), %ecx
	movl	scaledviewwidth(%rip), %eax
	addl	%ecx, %eax
	movq	%rdx, %rcx
	movl	$1, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	$101, %esi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	viewwindowy(%rip), %ecx
	movl	viewheight(%rip), %eax
	leal	(%rcx,%rax), %esi
	movl	viewwindowx(%rip), %eax
	subl	$8, %eax
	movq	%rdx, %rcx
	movl	$1, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	$101, %esi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	viewwindowy(%rip), %ecx
	movl	viewheight(%rip), %eax
	leal	(%rcx,%rax), %esi
	movl	viewwindowx(%rip), %ecx
	movl	scaledviewwidth(%rip), %eax
	addl	%ecx, %eax
	movq	%rdx, %rcx
	movl	$1, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	jmp	.L52
.L70:
	nop
.L52:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L69
	call	__stack_chk_fail@PLT
.L69:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	R_FillBackScreen, .-R_FillBackScreen
	.globl	R_VideoErase
	.type	R_VideoErase, @function
R_VideoErase:
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
	movl	-8(%rbp), %eax
	cltq
	movq	8+screens(%rip), %rcx
	movl	-4(%rbp), %edx
	leaq	(%rcx,%rdx), %rsi
	movq	screens(%rip), %rcx
	movl	-4(%rbp), %edx
	addq	%rdx, %rcx
	movq	%rax, %rdx
	movq	%rcx, %rdi
	call	memcpy@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	R_VideoErase, .-R_VideoErase
	.globl	R_DrawViewBorder
	.type	R_DrawViewBorder, @function
R_DrawViewBorder:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	scaledviewwidth(%rip), %eax
	cmpl	$320, %eax
	je	.L77
	movl	viewheight(%rip), %edx
	movl	$168, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -8(%rbp)
	movl	scaledviewwidth(%rip), %edx
	movl	$320, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	R_VideoErase
	movl	viewheight(%rip), %edx
	movl	-8(%rbp), %eax
	addl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	subl	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-8(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%eax, %edx
	movl	-16(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_VideoErase
	movl	-8(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	subl	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
	sall	-4(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L75
.L76:
	movl	-16(%rbp), %eax
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_VideoErase
	addl	$320, -16(%rbp)
	addl	$1, -12(%rbp)
.L75:
	movl	viewheight(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L76
	movl	$168, %ecx
	movl	$320, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_MarkRect@PLT
	jmp	.L72
.L77:
	nop
.L72:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	R_DrawViewBorder, .-R_DrawViewBorder
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
