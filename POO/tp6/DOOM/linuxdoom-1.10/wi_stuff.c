	.file	"wi_stuff.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: wi_stuff.c,v 1.7 1997/02/03 22:45:13 b1 Exp $"
	.data
	.align 32
	.type	lnodes, @object
	.size	lnodes, 288
lnodes:
	.long	185
	.long	164
	.long	148
	.long	143
	.long	69
	.long	122
	.long	209
	.long	102
	.long	116
	.long	89
	.long	166
	.long	55
	.long	71
	.long	56
	.long	135
	.long	29
	.long	71
	.long	24
	.long	254
	.long	25
	.long	97
	.long	50
	.long	188
	.long	64
	.long	128
	.long	78
	.long	214
	.long	92
	.long	133
	.long	130
	.long	208
	.long	136
	.long	148
	.long	140
	.long	235
	.long	158
	.long	156
	.long	168
	.long	48
	.long	154
	.long	174
	.long	95
	.long	265
	.long	75
	.long	130
	.long	48
	.long	279
	.long	23
	.long	198
	.long	48
	.long	140
	.long	25
	.long	281
	.long	136
	.zero	72
	.align 32
	.type	epsd0animinfo, @object
	.size	epsd0animinfo, 720
epsd0animinfo:
	.long	0
	.long	11
	.long	3
	.long	224
	.long	104
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	184
	.long	160
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	112
	.long	136
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	72
	.long	112
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	88
	.long	96
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	64
	.long	48
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	192
	.long	40
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	136
	.long	16
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	80
	.long	16
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	64
	.long	24
	.zero	52
	.align 32
	.type	epsd1animinfo, @object
	.size	epsd1animinfo, 648
epsd1animinfo:
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	1
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	2
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	3
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	4
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	5
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	6
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	7
	.zero	48
	.long	2
	.long	11
	.long	3
	.long	192
	.long	144
	.long	8
	.zero	48
	.long	2
	.long	11
	.long	1
	.long	128
	.long	136
	.long	8
	.zero	48
	.align 32
	.type	epsd2animinfo, @object
	.size	epsd2animinfo, 432
epsd2animinfo:
	.long	0
	.long	11
	.long	3
	.long	104
	.long	168
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	40
	.long	136
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	160
	.long	96
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	104
	.long	80
	.zero	52
	.long	0
	.long	11
	.long	3
	.long	120
	.long	32
	.zero	52
	.long	0
	.long	8
	.long	3
	.long	40
	.long	0
	.zero	52
	.align 16
	.type	NUMANIMS, @object
	.size	NUMANIMS, 16
NUMANIMS:
	.long	10
	.long	9
	.long	6
	.zero	4
	.section	.data.rel.local,"aw"
	.align 32
	.type	anims, @object
	.size	anims, 32
anims:
	.quad	epsd0animinfo
	.quad	epsd1animinfo
	.quad	epsd2animinfo
	.zero	8
	.local	acceleratestage
	.comm	acceleratestage,4,4
	.local	me
	.comm	me,4,4
	.local	state
	.comm	state,4,4
	.local	wbs
	.comm	wbs,8,8
	.local	plrs
	.comm	plrs,8,8
	.local	cnt
	.comm	cnt,4,4
	.local	bcnt
	.comm	bcnt,4,4
	.local	firstrefresh
	.comm	firstrefresh,4,4
	.local	cnt_kills
	.comm	cnt_kills,16,16
	.local	cnt_items
	.comm	cnt_items,16,16
	.local	cnt_secret
	.comm	cnt_secret,16,16
	.local	cnt_time
	.comm	cnt_time,4,4
	.local	cnt_par
	.comm	cnt_par,4,4
	.local	cnt_pause
	.comm	cnt_pause,4,4
	.local	NUMCMAPS
	.comm	NUMCMAPS,4,4
	.local	bg
	.comm	bg,8,8
	.local	yah
	.comm	yah,16,16
	.local	splat
	.comm	splat,8,8
	.local	percent
	.comm	percent,8,8
	.local	colon
	.comm	colon,8,8
	.local	num
	.comm	num,80,32
	.local	wiminus
	.comm	wiminus,8,8
	.local	finished
	.comm	finished,8,8
	.local	entering
	.comm	entering,8,8
	.local	sp_secret
	.comm	sp_secret,8,8
	.local	kills
	.comm	kills,8,8
	.local	secret
	.comm	secret,8,8
	.local	items
	.comm	items,8,8
	.local	frags
	.comm	frags,8,8
	.local	time
	.comm	time,8,8
	.local	par
	.comm	par,8,8
	.local	sucks
	.comm	sucks,8,8
	.local	killers
	.comm	killers,8,8
	.local	victims
	.comm	victims,8,8
	.local	total
	.comm	total,8,8
	.local	star
	.comm	star,8,8
	.local	bstar
	.comm	bstar,8,8
	.local	p
	.comm	p,32,32
	.local	bp
	.comm	bp,32,32
	.local	lnames
	.comm	lnames,8,8
	.text
	.globl	WI_slamBackground
	.type	WI_slamBackground, @function
WI_slamBackground:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	8+screens(%rip), %rcx
	movq	screens(%rip), %rax
	movl	$64000, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movl	$200, %ecx
	movl	$320, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_MarkRect@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	WI_slamBackground, .-WI_slamBackground
	.globl	WI_Responder
	.type	WI_Responder, @function
WI_Responder:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	WI_Responder, .-WI_Responder
	.globl	WI_drawLF
	.type	WI_drawLF, @function
WI_drawLF:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$2, -4(%rbp)
	movq	lnames(%rip), %rdx
	movq	wbs(%rip), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	lnames(%rip), %rcx
	movq	wbs(%rip), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %ecx
	movl	$320, %eax
	subl	%ecx, %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	movl	%eax, %edi
	movl	-4(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	movq	lnames(%rip), %rdx
	movq	wbs(%rip), %rax
	movl	8(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	3(%rax), %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	sarl	$2, %eax
	addl	%eax, -4(%rbp)
	movq	finished(%rip), %rdx
	movq	finished(%rip), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %ecx
	movl	$320, %eax
	subl	%ecx, %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	movl	%eax, %edi
	movl	-4(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	WI_drawLF, .-WI_drawLF
	.globl	WI_drawEL
	.type	WI_drawEL, @function
WI_drawEL:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$2, -4(%rbp)
	movq	entering(%rip), %rdx
	movq	entering(%rip), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %ecx
	movl	$320, %eax
	subl	%ecx, %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	movl	%eax, %edi
	movl	-4(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	movq	lnames(%rip), %rdx
	movq	wbs(%rip), %rax
	movl	12(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	3(%rax), %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	sarl	$2, %eax
	addl	%eax, -4(%rbp)
	movq	lnames(%rip), %rdx
	movq	wbs(%rip), %rax
	movl	12(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	lnames(%rip), %rcx
	movq	wbs(%rip), %rax
	movl	12(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %ecx
	movl	$320, %eax
	subl	%ecx, %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	movl	%eax, %edi
	movl	-4(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	WI_drawEL, .-WI_drawEL
	.section	.rodata
	.align 8
.LC0:
	.string	"Could not place patch on level %d"
	.text
	.globl	WI_drawOnLnode
	.type	WI_drawOnLnode, @function
WI_drawOnLnode:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -24(%rbp)
.L10:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	lnodes(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-48(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movzwl	4(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	4+lnodes(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-48(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -16(%rbp)
	js	.L7
	cmpl	$319, -8(%rbp)
	jg	.L7
	cmpl	$0, -12(%rbp)
	js	.L7
	cmpl	$199, -4(%rbp)
	jg	.L7
	movl	$1, -20(%rbp)
	jmp	.L8
.L7:
	addl	$1, -24(%rbp)
.L8:
	cmpl	$0, -20(%rbp)
	jne	.L9
	cmpl	$2, -24(%rbp)
	jne	.L10
.L9:
	cmpl	$0, -20(%rbp)
	je	.L11
	cmpl	$1, -24(%rbp)
	jg	.L11
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rcx
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rsi
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rsi, %rax
	leaq	0(,%rax,8), %rdx
	leaq	4+lnodes(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdi
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rdi, %rax
	leaq	0(,%rax,8), %rdx
	leaq	lnodes(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	jmp	.L12
.L11:
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
.L12:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	WI_drawOnLnode, .-WI_drawOnLnode
	.globl	WI_initAnimatedBack
	.type	WI_initAnimatedBack, @function
WI_initAnimatedBack:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L22
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jg	.L23
	movl	$0, -28(%rbp)
	jmp	.L17
.L21:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	anims(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$-1, 64(%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L18
	movl	bcnt(%rip), %eax
	leal	1(%rax), %ebx
	call	M_Random@PLT
	movq	-24(%rbp), %rdx
	movl	4(%rdx), %esi
	cltd
	idivl	%esi
	movl	%edx, %ecx
	movl	%ecx, %eax
	leal	(%rbx,%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L19
.L18:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L20
	movl	bcnt(%rip), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	leal	(%rdx,%rax), %ebx
	call	M_Random@PLT
	movq	-24(%rbp), %rdx
	movl	20(%rdx), %edi
	cltd
	idivl	%edi
	movl	%edx, %ecx
	movl	%ecx, %eax
	leal	(%rbx,%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L19
.L20:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jne	.L19
	movl	bcnt(%rip), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
.L19:
	addl	$1, -28(%rbp)
.L17:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	NUMANIMS(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L21
	jmp	.L13
.L22:
	nop
	jmp	.L13
.L23:
	nop
.L13:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	WI_initAnimatedBack, .-WI_initAnimatedBack
	.globl	WI_updateAnimatedBack
	.type	WI_updateAnimatedBack, @function
WI_updateAnimatedBack:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L40
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jg	.L41
	movl	$0, -28(%rbp)
	jmp	.L28
.L39:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	anims(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	56(%rax), %edx
	movl	bcnt(%rip), %eax
	cmpl	%eax, %edx
	jne	.L29
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	je	.L30
	cmpl	$2, %eax
	ja	.L29
	testl	%eax, %eax
	je	.L31
	cmpl	$1, %eax
	je	.L32
	jmp	.L29
.L31:
	movq	-24(%rbp), %rax
	movl	64(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 64(%rax)
	movq	-24(%rbp), %rax
	movl	64(%rax), %edx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %edx
	jl	.L33
	movq	-24(%rbp), %rax
	movl	$0, 64(%rax)
.L33:
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	bcnt(%rip), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L29
.L32:
	movq	-24(%rbp), %rax
	movl	64(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 64(%rax)
	movq	-24(%rbp), %rax
	movl	64(%rax), %edx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %edx
	jne	.L34
	movq	-24(%rbp), %rax
	movl	$-1, 64(%rax)
	movq	-24(%rbp), %rax
	movl	24(%rax), %edx
	movl	bcnt(%rip), %eax
	leal	(%rdx,%rax), %ebx
	call	M_Random@PLT
	movq	-24(%rbp), %rdx
	movl	20(%rdx), %esi
	cltd
	idivl	%esi
	movl	%edx, %ecx
	movl	%ecx, %eax
	leal	(%rbx,%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L29
.L34:
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	bcnt(%rip), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
	jmp	.L29
.L30:
	movl	state(%rip), %eax
	testl	%eax, %eax
	jne	.L36
	cmpl	$7, -28(%rbp)
	je	.L42
.L36:
	movq	wbs(%rip), %rax
	movl	12(%rax), %edx
	movq	-24(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jne	.L42
	movq	-24(%rbp), %rax
	movl	64(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 64(%rax)
	movq	-24(%rbp), %rax
	movl	64(%rax), %edx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %edx
	jne	.L38
	movq	-24(%rbp), %rax
	movl	64(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 64(%rax)
.L38:
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	bcnt(%rip), %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 56(%rax)
.L42:
	nop
.L29:
	addl	$1, -28(%rbp)
.L28:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	NUMANIMS(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L39
	jmp	.L24
.L40:
	nop
	jmp	.L24
.L41:
	nop
.L24:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	WI_updateAnimatedBack, .-WI_updateAnimatedBack
	.globl	WI_drawAnimatedBack
	.type	WI_drawAnimatedBack, @function
WI_drawAnimatedBack:
.LFB7:
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
.LFE7:
	.size	WI_drawAnimatedBack, .-WI_drawAnimatedBack
	.globl	WI_drawNum
	.type	WI_drawNum, @function
WI_drawNum:
.LFB8:
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
	movl	%ecx, -32(%rbp)
	movq	num(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	cmpl	$0, -32(%rbp)
	jns	.L46
	cmpl	$0, -28(%rbp)
	jne	.L47
	movl	$1, -32(%rbp)
	jmp	.L46
.L47:
	movl	$0, -32(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L48
.L49:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$2, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -12(%rbp)
	addl	$1, -32(%rbp)
.L48:
	cmpl	$0, -12(%rbp)
	jne	.L49
.L46:
	movl	-28(%rbp), %eax
	shrl	$31, %eax
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L50
	negl	-28(%rbp)
.L50:
	cmpl	$1994, -28(%rbp)
	jne	.L53
	movl	$0, %eax
	jmp	.L52
.L54:
	movl	-8(%rbp), %eax
	subl	%eax, -20(%rbp)
	movl	-28(%rbp), %ecx
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
	leaq	0(,%rax,8), %rdx
	leaq	num(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$2, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -28(%rbp)
.L53:
	movl	-32(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -32(%rbp)
	testl	%eax, %eax
	jne	.L54
	cmpl	$0, -4(%rbp)
	je	.L55
	movq	wiminus(%rip), %rdx
	subl	$8, -20(%rbp)
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
.L55:
	movl	-20(%rbp), %eax
.L52:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	WI_drawNum, .-WI_drawNum
	.globl	WI_drawPercent
	.type	WI_drawPercent, @function
WI_drawPercent:
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
	movl	%edx, -12(%rbp)
	cmpl	$0, -12(%rbp)
	js	.L59
	movq	percent(%rip), %rdx
	movl	-8(%rbp), %esi
	movl	-4(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %esi
	movl	-4(%rbp), %eax
	movl	$-1, %ecx
	movl	%eax, %edi
	call	WI_drawNum
	jmp	.L56
.L59:
	nop
.L56:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	WI_drawPercent, .-WI_drawPercent
	.globl	WI_drawTime
	.type	WI_drawTime, @function
WI_drawTime:
.LFB10:
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
	cmpl	$0, -28(%rbp)
	js	.L67
	cmpl	$3599, -28(%rbp)
	jg	.L63
	movl	$1, -8(%rbp)
.L66:
	movl	-28(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movslq	%eax, %rdx
	imulq	$-2004318071, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	sarl	$5, %edx
	movl	%eax, %ecx
	sarl	$31, %ecx
	subl	%ecx, %edx
	movl	%edx, -4(%rbp)
	movl	-4(%rbp), %edx
	imull	$60, %edx, %edx
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movl	$2, %ecx
	movl	%eax, %edi
	call	WI_drawNum
	movl	%eax, %edx
	movq	colon(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	movl	-8(%rbp), %eax
	imull	$60, %eax, %eax
	movl	%eax, -8(%rbp)
	cmpl	$60, -8(%rbp)
	je	.L64
	movl	-28(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	testl	%eax, %eax
	je	.L65
.L64:
	movq	colon(%rip), %rdx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
.L65:
	movl	-28(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	testl	%eax, %eax
	jne	.L66
	jmp	.L60
.L63:
	movq	sucks(%rip), %rdx
	movq	sucks(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	-20(%rbp), %ecx
	movl	%ecx, %edi
	subl	%eax, %edi
	movl	-24(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	jmp	.L60
.L67:
	nop
.L60:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	WI_drawTime, .-WI_drawTime
	.globl	WI_End
	.type	WI_End, @function
WI_End:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	WI_unloadData
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	WI_End, .-WI_End
	.globl	WI_initNoState
	.type	WI_initNoState, @function
WI_initNoState:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$-1, state(%rip)
	movl	$0, acceleratestage(%rip)
	movl	$10, cnt(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	WI_initNoState, .-WI_initNoState
	.globl	WI_updateNoState
	.type	WI_updateNoState, @function
WI_updateNoState:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	WI_updateAnimatedBack
	movl	cnt(%rip), %eax
	subl	$1, %eax
	movl	%eax, cnt(%rip)
	movl	cnt(%rip), %eax
	testl	%eax, %eax
	jne	.L72
	call	WI_End
	call	G_WorldDone@PLT
.L72:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	WI_updateNoState, .-WI_updateNoState
	.local	snl_pointeron
	.comm	snl_pointeron,4,4
	.globl	WI_initShowNextLoc
	.type	WI_initShowNextLoc, @function
WI_initShowNextLoc:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, state(%rip)
	movl	$0, acceleratestage(%rip)
	movl	$140, cnt(%rip)
	call	WI_initAnimatedBack
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	WI_initShowNextLoc, .-WI_initShowNextLoc
	.globl	WI_updateShowNextLoc
	.type	WI_updateShowNextLoc, @function
WI_updateShowNextLoc:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	WI_updateAnimatedBack
	movl	cnt(%rip), %eax
	subl	$1, %eax
	movl	%eax, cnt(%rip)
	movl	cnt(%rip), %eax
	testl	%eax, %eax
	je	.L75
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L76
.L75:
	call	WI_initNoState
	jmp	.L77
.L76:
	movl	cnt(%rip), %eax
	andl	$31, %eax
	cmpl	$19, %eax
	setle	%al
	movzbl	%al, %eax
	movl	%eax, snl_pointeron(%rip)
	nop
.L77:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	WI_updateShowNextLoc, .-WI_updateShowNextLoc
	.globl	WI_drawShowNextLoc
	.type	WI_drawShowNextLoc, @function
WI_drawShowNextLoc:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	call	WI_slamBackground
	call	WI_drawAnimatedBack
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L79
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jle	.L80
	call	WI_drawEL
	jmp	.L78
.L80:
	movq	wbs(%rip), %rax
	movl	8(%rax), %eax
	cmpl	$8, %eax
	jne	.L82
	movq	wbs(%rip), %rax
	movl	12(%rax), %eax
	subl	$1, %eax
	jmp	.L83
.L82:
	movq	wbs(%rip), %rax
	movl	8(%rax), %eax
.L83:
	movl	%eax, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L84
.L85:
	movl	-8(%rbp), %eax
	leaq	splat(%rip), %rdx
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	WI_drawOnLnode
	addl	$1, -8(%rbp)
.L84:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L85
	movq	wbs(%rip), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	je	.L86
	leaq	splat(%rip), %rax
	movq	%rax, %rsi
	movl	$8, %edi
	call	WI_drawOnLnode
.L86:
	movl	snl_pointeron(%rip), %eax
	testl	%eax, %eax
	je	.L79
	movq	wbs(%rip), %rax
	movl	12(%rax), %eax
	leaq	yah(%rip), %rdx
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	WI_drawOnLnode
.L79:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L87
	movq	wbs(%rip), %rax
	movl	12(%rax), %eax
	cmpl	$30, %eax
	je	.L78
.L87:
	call	WI_drawEL
.L78:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	WI_drawShowNextLoc, .-WI_drawShowNextLoc
	.globl	WI_drawNoState
	.type	WI_drawNoState, @function
WI_drawNoState:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, snl_pointeron(%rip)
	call	WI_drawShowNextLoc
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	WI_drawNoState, .-WI_drawNoState
	.globl	WI_fragSum
	.type	WI_fragSum, @function
WI_fragSum:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L90
.L92:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L91
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	je	.L91
	movq	plrs(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	4(%rax,%rdx,4), %eax
	addl	%eax, -4(%rbp)
.L91:
	addl	$1, -8(%rbp)
.L90:
	cmpl	$3, -8(%rbp)
	jle	.L92
	movq	plrs(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	4(%rax,%rdx,4), %eax
	subl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	WI_fragSum, .-WI_fragSum
	.local	dm_state
	.comm	dm_state,4,4
	.local	dm_frags
	.comm	dm_frags,64,32
	.local	dm_totals
	.comm	dm_totals,16,16
	.globl	WI_initDeathmatchStats
	.type	WI_initDeathmatchStats, @function
WI_initDeathmatchStats:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, state(%rip)
	movl	$0, acceleratestage(%rip)
	movl	$1, dm_state(%rip)
	movl	$35, cnt_pause(%rip)
	movl	$0, -8(%rbp)
	jmp	.L95
.L100:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L96
	movl	$0, -4(%rbp)
	jmp	.L97
.L99:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L98
	movl	-4(%rbp), %eax
	cltq
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	$0, (%rdx,%rax)
.L98:
	addl	$1, -4(%rbp)
.L97:
	cmpl	$3, -4(%rbp)
	jle	.L99
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	dm_totals(%rip), %rax
	movl	$0, (%rdx,%rax)
.L96:
	addl	$1, -8(%rbp)
.L95:
	cmpl	$3, -8(%rbp)
	jle	.L100
	call	WI_initAnimatedBack
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	WI_initDeathmatchStats, .-WI_initDeathmatchStats
	.globl	WI_updateDeathmatchStats
	.type	WI_updateDeathmatchStats, @function
WI_updateDeathmatchStats:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	call	WI_updateAnimatedBack
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L102
	movl	dm_state(%rip), %eax
	cmpl	$4, %eax
	je	.L102
	movl	$0, acceleratestage(%rip)
	movl	$0, -12(%rbp)
	jmp	.L103
.L108:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L104
	movl	$0, -8(%rbp)
	jmp	.L105
.L107:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L106
	movq	plrs(%rip), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	4(%rax,%rdx,4), %eax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	movl	-12(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	dm_frags(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
.L106:
	addl	$1, -8(%rbp)
.L105:
	cmpl	$3, -8(%rbp)
	jle	.L107
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	WI_fragSum
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	dm_totals(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
.L104:
	addl	$1, -12(%rbp)
.L103:
	cmpl	$3, -12(%rbp)
	jle	.L108
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$4, dm_state(%rip)
.L102:
	movl	dm_state(%rip), %eax
	cmpl	$2, %eax
	jne	.L109
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L110
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L110:
	movl	$0, -4(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L111
.L121:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L112
	movl	$0, -8(%rbp)
	jmp	.L113
.L119:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L114
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	plrs(%rip), %rsi
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	4(%rax,%rdx,4), %eax
	cmpl	%eax, %ecx
	je	.L114
	movq	plrs(%rip), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	4(%rax,%rdx,4), %eax
	testl	%eax, %eax
	jns	.L115
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	-1(%rax), %ecx
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	jmp	.L116
.L115:
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	1(%rax), %ecx
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	%ecx, (%rdx,%rax)
.L116:
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$99, %eax
	jle	.L117
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	$99, (%rdx,%rax)
.L117:
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$-99, %eax
	jge	.L118
	movl	-8(%rbp), %eax
	cltq
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	$-99, (%rdx,%rax)
.L118:
	movl	$1, -4(%rbp)
.L114:
	addl	$1, -8(%rbp)
.L113:
	cmpl	$3, -8(%rbp)
	jle	.L119
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	WI_fragSum
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	dm_totals(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	dm_totals(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$99, %eax
	jle	.L120
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	dm_totals(%rip), %rax
	movl	$99, (%rdx,%rax)
.L120:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	dm_totals(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$-99, %eax
	jge	.L112
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	dm_totals(%rip), %rax
	movl	$-99, (%rdx,%rax)
.L112:
	addl	$1, -12(%rbp)
.L111:
	cmpl	$3, -12(%rbp)
	jle	.L121
	cmpl	$0, -4(%rbp)
	jne	.L125
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	dm_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, dm_state(%rip)
	jmp	.L125
.L109:
	movl	dm_state(%rip), %eax
	cmpl	$4, %eax
	jne	.L123
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L125
	movl	$31, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L124
	call	WI_initNoState
	jmp	.L125
.L124:
	call	WI_initShowNextLoc
	jmp	.L125
.L123:
	movl	dm_state(%rip), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L125
	movl	cnt_pause(%rip), %eax
	subl	$1, %eax
	movl	%eax, cnt_pause(%rip)
	movl	cnt_pause(%rip), %eax
	testl	%eax, %eax
	jne	.L125
	movl	dm_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, dm_state(%rip)
	movl	$35, cnt_pause(%rip)
.L125:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	WI_updateDeathmatchStats, .-WI_updateDeathmatchStats
	.globl	WI_drawDeathmatchStats
	.type	WI_drawDeathmatchStats, @function
WI_drawDeathmatchStats:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$33, -8(%rbp)
	call	WI_slamBackground
	call	WI_drawAnimatedBack
	call	WI_drawLF
	movq	total(%rip), %rax
	movq	total(%rip), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	movl	$269, %ecx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$45, %esi
	call	V_DrawPatch@PLT
	movq	killers(%rip), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$100, %esi
	movl	$10, %edi
	call	V_DrawPatch@PLT
	movq	victims(%rip), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %esi
	movl	$5, %edi
	call	V_DrawPatch@PLT
	movl	$82, -16(%rbp)
	movl	$68, -12(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L127
.L129:
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L128
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	p(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	p(%rip), %rdx
	movq	(%rcx,%rdx), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	movl	-16(%rbp), %ecx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$35, %esi
	call	V_DrawPatch@PLT
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	p(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	p(%rip), %rax
	movq	(%rcx,%rax), %rax
	movzwl	(%rax), %eax
	movl	%eax, %ecx
	shrw	$15, %cx
	addl	%ecx, %eax
	sarw	%ax
	cwtl
	movl	$42, %ecx
	movl	%ecx, %edi
	subl	%eax, %edi
	movl	-12(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	movl	me(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jne	.L128
	movq	bstar(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	p(%rip), %rdx
	movq	(%rcx,%rdx), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	movl	-16(%rbp), %ecx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$35, %esi
	call	V_DrawPatch@PLT
	movq	star(%rip), %rdx
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	p(%rip), %rax
	movq	(%rcx,%rax), %rax
	movzwl	(%rax), %eax
	movl	%eax, %ecx
	shrw	$15, %cx
	addl	%ecx, %eax
	sarw	%ax
	cwtl
	movl	$42, %ecx
	movl	%ecx, %edi
	subl	%eax, %edi
	movl	-12(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
.L128:
	addl	$40, -16(%rbp)
	addl	$33, -12(%rbp)
	addl	$1, -24(%rbp)
.L127:
	cmpl	$3, -24(%rbp)
	jle	.L129
	movl	$78, -12(%rbp)
	movq	num(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -4(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L130
.L135:
	movl	$82, -16(%rbp)
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L131
	movl	$0, -20(%rbp)
	jmp	.L132
.L134:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L133
	movl	-20(%rbp), %eax
	cltq
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	dm_frags(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-16(%rbp), %ecx
	movl	-4(%rbp), %eax
	leal	(%rcx,%rax), %edi
	movl	-12(%rbp), %eax
	movl	$2, %ecx
	movl	%eax, %esi
	call	WI_drawNum
.L133:
	addl	$40, -16(%rbp)
	addl	$1, -20(%rbp)
.L132:
	cmpl	$3, -20(%rbp)
	jle	.L134
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	dm_totals(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-4(%rbp), %eax
	leal	269(%rax), %edi
	movl	-12(%rbp), %eax
	movl	$2, %ecx
	movl	%eax, %esi
	call	WI_drawNum
.L131:
	addl	$33, -12(%rbp)
	addl	$1, -24(%rbp)
.L130:
	cmpl	$3, -24(%rbp)
	jle	.L135
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	WI_drawDeathmatchStats, .-WI_drawDeathmatchStats
	.local	cnt_frags
	.comm	cnt_frags,16,16
	.local	dofrags
	.comm	dofrags,4,4
	.local	ng_state
	.comm	ng_state,4,4
	.globl	WI_initNetgameStats
	.type	WI_initNetgameStats, @function
WI_initNetgameStats:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, state(%rip)
	movl	$0, acceleratestage(%rip)
	movl	$1, ng_state(%rip)
	movl	$35, cnt_pause(%rip)
	movl	$0, -4(%rbp)
	jmp	.L137
.L140:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L141
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_frags(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_frags(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cnt_secret(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cnt_items(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cnt_kills(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	WI_fragSum
	movl	dofrags(%rip), %edx
	addl	%edx, %eax
	movl	%eax, dofrags(%rip)
	jmp	.L139
.L141:
	nop
.L139:
	addl	$1, -4(%rbp)
.L137:
	cmpl	$3, -4(%rbp)
	jle	.L140
	movl	dofrags(%rip), %eax
	testl	%eax, %eax
	setne	%al
	movzbl	%al, %eax
	movl	%eax, dofrags(%rip)
	call	WI_initAnimatedBack
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	WI_initNetgameStats, .-WI_initNetgameStats
	.globl	WI_updateNetgameStats
	.type	WI_updateNetgameStats, @function
WI_updateNetgameStats:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	call	WI_updateAnimatedBack
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L143
	movl	ng_state(%rip), %eax
	cmpl	$10, %eax
	je	.L143
	movl	$0, acceleratestage(%rip)
	movl	$0, -28(%rbp)
	jmp	.L144
.L147:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L181
	movq	plrs(%rip), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	4(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	16(%rdx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_kills(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movq	plrs(%rip), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	8(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	20(%rdx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movq	plrs(%rip), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	12(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	24(%rdx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	dofrags(%rip), %eax
	testl	%eax, %eax
	je	.L146
	movl	-28(%rbp), %eax
	movl	%eax, %edi
	call	WI_fragSum
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	cnt_frags(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	jmp	.L146
.L181:
	nop
.L146:
	addl	$1, -28(%rbp)
.L144:
	cmpl	$3, -28(%rbp)
	jle	.L147
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$10, ng_state(%rip)
.L143:
	movl	ng_state(%rip), %eax
	cmpl	$2, %eax
	jne	.L148
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L149
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L149:
	movl	$0, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L150
.L154:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L182
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_kills(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	2(%rax), %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_kills(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_kills(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	plrs(%rip), %rsi
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	4(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	16(%rdx), %ebx
	cltd
	idivl	%ebx
	cmpl	%eax, %ecx
	jl	.L153
	movq	plrs(%rip), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	4(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	16(%rdx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_kills(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	jmp	.L152
.L153:
	movl	$1, -24(%rbp)
	jmp	.L152
.L182:
	nop
.L152:
	addl	$1, -28(%rbp)
.L150:
	cmpl	$3, -28(%rbp)
	jle	.L154
	cmpl	$0, -24(%rbp)
	jne	.L183
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	ng_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, ng_state(%rip)
	jmp	.L183
.L148:
	movl	ng_state(%rip), %eax
	cmpl	$4, %eax
	jne	.L156
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L157
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L157:
	movl	$0, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L158
.L162:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L184
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	2(%rax), %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	plrs(%rip), %rsi
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	8(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	20(%rdx), %edi
	cltd
	idivl	%edi
	cmpl	%eax, %ecx
	jl	.L161
	movq	plrs(%rip), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	8(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	20(%rdx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	jmp	.L160
.L161:
	movl	$1, -24(%rbp)
	jmp	.L160
.L184:
	nop
.L160:
	addl	$1, -28(%rbp)
.L158:
	cmpl	$3, -28(%rbp)
	jle	.L162
	cmpl	$0, -24(%rbp)
	jne	.L183
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	ng_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, ng_state(%rip)
	jmp	.L183
.L156:
	movl	ng_state(%rip), %eax
	cmpl	$6, %eax
	jne	.L163
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L164
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L164:
	movl	$0, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L165
.L169:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L185
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	2(%rax), %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	plrs(%rip), %rsi
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	12(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	24(%rdx), %edi
	cltd
	idivl	%edi
	cmpl	%eax, %ecx
	jl	.L168
	movq	plrs(%rip), %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	12(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	24(%rdx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	jmp	.L167
.L168:
	movl	$1, -24(%rbp)
	jmp	.L167
.L185:
	nop
.L167:
	addl	$1, -28(%rbp)
.L165:
	cmpl	$3, -28(%rbp)
	jle	.L169
	cmpl	$0, -24(%rbp)
	jne	.L183
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	dofrags(%rip), %eax
	testl	%eax, %eax
	jne	.L170
	movl	$3, %edx
	jmp	.L171
.L170:
	movl	$1, %edx
.L171:
	movl	ng_state(%rip), %eax
	addl	%edx, %eax
	movl	%eax, ng_state(%rip)
	jmp	.L183
.L163:
	movl	ng_state(%rip), %eax
	cmpl	$8, %eax
	jne	.L172
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L173
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L173:
	movl	$0, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L174
.L178:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L186
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_frags(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	1(%rax), %ecx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_frags(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_frags(%rip), %rax
	movl	(%rdx,%rax), %ebx
	movl	-28(%rbp), %eax
	movl	%eax, %edi
	call	WI_fragSum
	movl	%eax, -20(%rbp)
	cmpl	%ebx, -20(%rbp)
	jg	.L177
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	cnt_frags(%rip), %rdx
	movl	-20(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	jmp	.L176
.L177:
	movl	$1, -24(%rbp)
	jmp	.L176
.L186:
	nop
.L176:
	addl	$1, -28(%rbp)
.L174:
	cmpl	$3, -28(%rbp)
	jle	.L178
	cmpl	$0, -24(%rbp)
	jne	.L183
	movl	$57, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	ng_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, ng_state(%rip)
	jmp	.L183
.L172:
	movl	ng_state(%rip), %eax
	cmpl	$10, %eax
	jne	.L179
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L183
	movl	$3, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L180
	call	WI_initNoState
	jmp	.L183
.L180:
	call	WI_initShowNextLoc
	jmp	.L183
.L179:
	movl	ng_state(%rip), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L183
	movl	cnt_pause(%rip), %eax
	subl	$1, %eax
	movl	%eax, cnt_pause(%rip)
	movl	cnt_pause(%rip), %eax
	testl	%eax, %eax
	jne	.L183
	movl	ng_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, ng_state(%rip)
	movl	$35, cnt_pause(%rip)
.L183:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	WI_updateNetgameStats, .-WI_updateNetgameStats
	.globl	WI_drawNetgameStats
	.type	WI_drawNetgameStats, @function
WI_drawNetgameStats:
.LFB24:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	percent(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	call	WI_slamBackground
	call	WI_drawAnimatedBack
	call	WI_drawLF
	movq	kills(%rip), %rax
	movq	star(%rip), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	leal	32(%rdx), %ecx
	movl	dofrags(%rip), %edx
	testl	%edx, %edx
	jne	.L188
	movl	$32, %edx
	jmp	.L189
.L188:
	movl	$0, %edx
.L189:
	addl	%ecx, %edx
	leal	64(%rdx), %ecx
	movq	kills(%rip), %rdx
	movzwl	(%rdx), %edx
	movswl	%dx, %edx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %esi
	call	V_DrawPatch@PLT
	movq	items(%rip), %rax
	movq	star(%rip), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	leal	32(%rdx), %ecx
	movl	dofrags(%rip), %edx
	testl	%edx, %edx
	jne	.L190
	movl	$32, %edx
	jmp	.L191
.L190:
	movl	$0, %edx
.L191:
	addl	%ecx, %edx
	leal	128(%rdx), %ecx
	movq	items(%rip), %rdx
	movzwl	(%rdx), %edx
	movswl	%dx, %edx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %esi
	call	V_DrawPatch@PLT
	movq	secret(%rip), %rax
	movq	star(%rip), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	leal	32(%rdx), %ecx
	movl	dofrags(%rip), %edx
	testl	%edx, %edx
	jne	.L192
	movl	$32, %edx
	jmp	.L193
.L192:
	movl	$0, %edx
.L193:
	addl	%ecx, %edx
	leal	192(%rdx), %ecx
	movq	secret(%rip), %rdx
	movzwl	(%rdx), %edx
	movswl	%dx, %edx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %esi
	call	V_DrawPatch@PLT
	movl	dofrags(%rip), %eax
	testl	%eax, %eax
	je	.L194
	movq	frags(%rip), %rax
	movq	star(%rip), %rdx
	movzwl	(%rdx), %edx
	movl	%edx, %ecx
	shrw	$15, %cx
	addl	%ecx, %edx
	sarw	%dx
	movswl	%dx, %edx
	leal	32(%rdx), %ecx
	movl	dofrags(%rip), %edx
	testl	%edx, %edx
	jne	.L195
	movl	$32, %edx
	jmp	.L196
.L195:
	movl	$0, %edx
.L196:
	addl	%ecx, %edx
	leal	256(%rdx), %ecx
	movq	frags(%rip), %rdx
	movzwl	(%rdx), %edx
	movswl	%dx, %edx
	movl	%ecx, %edi
	subl	%edx, %edi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %esi
	call	V_DrawPatch@PLT
.L194:
	movq	kills(%rip), %rax
	movzwl	2(%rax), %eax
	cwtl
	addl	$50, %eax
	movl	%eax, -12(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L197
.L204:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L205
	movq	star(%rip), %rax
	movzwl	(%rax), %eax
	movl	%eax, %edx
	shrw	$15, %dx
	addl	%edx, %eax
	sarw	%ax
	cwtl
	leal	32(%rax), %edx
	movl	dofrags(%rip), %eax
	testl	%eax, %eax
	jne	.L200
	movl	$32, %eax
	jmp	.L201
.L200:
	movl	$0, %eax
.L201:
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	p(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	p(%rip), %rax
	movq	(%rcx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	-4(%rbp), %ecx
	movl	%ecx, %edi
	subl	%eax, %edi
	movl	-12(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
	movl	me(%rip), %eax
	cmpl	%eax, -16(%rbp)
	jne	.L202
	movq	star(%rip), %rdx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	p(%rip), %rax
	movq	(%rcx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	-4(%rbp), %ecx
	movl	%ecx, %edi
	subl	%eax, %edi
	movl	-12(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatch@PLT
.L202:
	addl	$64, -4(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_kills(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-12(%rbp), %eax
	leal	10(%rax), %ecx
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	WI_drawPercent
	addl	$64, -4(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_items(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-12(%rbp), %eax
	leal	10(%rax), %ecx
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	WI_drawPercent
	addl	$64, -4(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_secret(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-12(%rbp), %eax
	leal	10(%rax), %ecx
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	WI_drawPercent
	addl	$64, -4(%rbp)
	movl	dofrags(%rip), %eax
	testl	%eax, %eax
	je	.L203
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cnt_frags(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-12(%rbp), %eax
	leal	10(%rax), %esi
	movl	-4(%rbp), %eax
	movl	$-1, %ecx
	movl	%eax, %edi
	call	WI_drawNum
.L203:
	addl	$33, -12(%rbp)
	jmp	.L199
.L205:
	nop
.L199:
	addl	$1, -16(%rbp)
.L197:
	cmpl	$3, -16(%rbp)
	jle	.L204
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	WI_drawNetgameStats, .-WI_drawNetgameStats
	.local	sp_state
	.comm	sp_state,4,4
	.globl	WI_initStats
	.type	WI_initStats, @function
WI_initStats:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, state(%rip)
	movl	$0, acceleratestage(%rip)
	movl	$1, sp_state(%rip)
	movl	$-1, cnt_secret(%rip)
	movl	cnt_secret(%rip), %eax
	movl	%eax, cnt_items(%rip)
	movl	cnt_items(%rip), %eax
	movl	%eax, cnt_kills(%rip)
	movl	$-1, cnt_par(%rip)
	movl	cnt_par(%rip), %eax
	movl	%eax, cnt_time(%rip)
	movl	$35, cnt_pause(%rip)
	call	WI_initAnimatedBack
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	WI_initStats, .-WI_initStats
	.globl	WI_updateStats
	.type	WI_updateStats, @function
WI_updateStats:
.LFB26:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	WI_updateAnimatedBack
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L208
	movl	sp_state(%rip), %eax
	cmpl	$10, %eax
	je	.L208
	movl	$0, acceleratestage(%rip)
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	4(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	16(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, cnt_kills(%rip)
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	8(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	20(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, cnt_items(%rip)
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	12(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	24(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, cnt_secret(%rip)
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	16(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, cnt_time(%rip)
	movq	wbs(%rip), %rax
	movl	32(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, cnt_par(%rip)
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$10, sp_state(%rip)
.L208:
	movl	sp_state(%rip), %eax
	cmpl	$2, %eax
	jne	.L209
	movl	cnt_kills(%rip), %eax
	addl	$2, %eax
	movl	%eax, cnt_kills(%rip)
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L210
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L210:
	movl	cnt_kills(%rip), %ecx
	movq	plrs(%rip), %rsi
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	4(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	16(%rdx), %esi
	cltd
	idivl	%esi
	cmpl	%eax, %ecx
	jl	.L221
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	4(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	16(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, cnt_kills(%rip)
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	sp_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, sp_state(%rip)
	jmp	.L221
.L209:
	movl	sp_state(%rip), %eax
	cmpl	$4, %eax
	jne	.L212
	movl	cnt_items(%rip), %eax
	addl	$2, %eax
	movl	%eax, cnt_items(%rip)
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L213
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L213:
	movl	cnt_items(%rip), %ecx
	movq	plrs(%rip), %rsi
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	8(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	20(%rdx), %esi
	cltd
	idivl	%esi
	cmpl	%eax, %ecx
	jl	.L221
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	8(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	20(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, cnt_items(%rip)
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	sp_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, sp_state(%rip)
	jmp	.L221
.L212:
	movl	sp_state(%rip), %eax
	cmpl	$6, %eax
	jne	.L214
	movl	cnt_secret(%rip), %eax
	addl	$2, %eax
	movl	%eax, cnt_secret(%rip)
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L215
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L215:
	movl	cnt_secret(%rip), %ecx
	movq	plrs(%rip), %rsi
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movl	12(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	24(%rdx), %esi
	cltd
	idivl	%esi
	cmpl	%eax, %ecx
	jl	.L221
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	12(%rax), %eax
	imull	$100, %eax, %eax
	movq	wbs(%rip), %rdx
	movl	24(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, cnt_secret(%rip)
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	sp_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, sp_state(%rip)
	jmp	.L221
.L214:
	movl	sp_state(%rip), %eax
	cmpl	$8, %eax
	jne	.L216
	movl	bcnt(%rip), %eax
	andl	$3, %eax
	testl	%eax, %eax
	jne	.L217
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L217:
	movl	cnt_time(%rip), %eax
	addl	$3, %eax
	movl	%eax, cnt_time(%rip)
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	16(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	sarl	$5, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	cnt_time(%rip), %eax
	cmpl	%eax, %edx
	jg	.L218
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	16(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, cnt_time(%rip)
.L218:
	movl	cnt_par(%rip), %eax
	addl	$3, %eax
	movl	%eax, cnt_par(%rip)
	movq	wbs(%rip), %rax
	movl	32(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	sarl	$5, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	cnt_par(%rip), %eax
	cmpl	%eax, %edx
	jg	.L221
	movq	wbs(%rip), %rax
	movl	32(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, cnt_par(%rip)
	movq	plrs(%rip), %rcx
	movl	me(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	16(%rax), %eax
	movslq	%eax, %rdx
	imulq	$-368140053, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	sarl	$5, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	cnt_time(%rip), %eax
	cmpl	%eax, %edx
	jg	.L221
	movl	$82, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	sp_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, sp_state(%rip)
	jmp	.L221
.L216:
	movl	sp_state(%rip), %eax
	cmpl	$10, %eax
	jne	.L219
	movl	acceleratestage(%rip), %eax
	testl	%eax, %eax
	je	.L221
	movl	$3, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L220
	call	WI_initNoState
	jmp	.L221
.L220:
	call	WI_initShowNextLoc
	jmp	.L221
.L219:
	movl	sp_state(%rip), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L221
	movl	cnt_pause(%rip), %eax
	subl	$1, %eax
	movl	%eax, cnt_pause(%rip)
	movl	cnt_pause(%rip), %eax
	testl	%eax, %eax
	jne	.L221
	movl	sp_state(%rip), %eax
	addl	$1, %eax
	movl	%eax, sp_state(%rip)
	movl	$35, cnt_pause(%rip)
.L221:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	WI_updateStats, .-WI_updateStats
	.globl	WI_drawStats
	.type	WI_drawStats, @function
WI_drawStats:
.LFB27:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	num(%rip), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	call	WI_slamBackground
	call	WI_drawAnimatedBack
	call	WI_drawLF
	movq	kills(%rip), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %esi
	movl	$50, %edi
	call	V_DrawPatch@PLT
	movl	cnt_kills(%rip), %eax
	movl	%eax, %edx
	movl	$50, %esi
	movl	$270, %edi
	call	WI_drawPercent
	movq	items(%rip), %rax
	movl	-4(%rbp), %edx
	leal	50(%rdx), %esi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %edi
	call	V_DrawPatch@PLT
	movl	cnt_items(%rip), %eax
	movl	-4(%rbp), %edx
	leal	50(%rdx), %ecx
	movl	%eax, %edx
	movl	%ecx, %esi
	movl	$270, %edi
	call	WI_drawPercent
	movq	sp_secret(%rip), %rax
	movl	-4(%rbp), %edx
	addl	$25, %edx
	leal	(%rdx,%rdx), %esi
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$50, %edi
	call	V_DrawPatch@PLT
	movl	cnt_secret(%rip), %eax
	movl	-4(%rbp), %edx
	addl	$25, %edx
	leal	(%rdx,%rdx), %ecx
	movl	%eax, %edx
	movl	%ecx, %esi
	movl	$270, %edi
	call	WI_drawPercent
	movq	time(%rip), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$168, %esi
	movl	$16, %edi
	call	V_DrawPatch@PLT
	movl	cnt_time(%rip), %eax
	movl	%eax, %edx
	movl	$168, %esi
	movl	$144, %edi
	call	WI_drawTime
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jg	.L224
	movq	par(%rip), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$168, %esi
	movl	$176, %edi
	call	V_DrawPatch@PLT
	movl	cnt_par(%rip), %eax
	movl	%eax, %edx
	movl	$168, %esi
	movl	$304, %edi
	call	WI_drawTime
.L224:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	WI_drawStats, .-WI_drawStats
	.globl	WI_checkForAccelerate
	.type	WI_checkForAccelerate, @function
WI_checkForAccelerate:
.LFB28:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, -12(%rbp)
	leaq	players(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L226
.L233:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L227
	movq	-8(%rbp), %rax
	movzbl	19(%rax), %eax
	movzbl	%al, %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L228
	movq	-8(%rbp), %rax
	movl	192(%rax), %eax
	testl	%eax, %eax
	jne	.L229
	movl	$1, acceleratestage(%rip)
.L229:
	movq	-8(%rbp), %rax
	movl	$1, 192(%rax)
	jmp	.L230
.L228:
	movq	-8(%rbp), %rax
	movl	$0, 192(%rax)
.L230:
	movq	-8(%rbp), %rax
	movzbl	19(%rax), %eax
	movzbl	%al, %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L231
	movq	-8(%rbp), %rax
	movl	196(%rax), %eax
	testl	%eax, %eax
	jne	.L232
	movl	$1, acceleratestage(%rip)
.L232:
	movq	-8(%rbp), %rax
	movl	$1, 196(%rax)
	jmp	.L227
.L231:
	movq	-8(%rbp), %rax
	movl	$0, 196(%rax)
.L227:
	addl	$1, -12(%rbp)
	addq	$320, -8(%rbp)
.L226:
	cmpl	$3, -12(%rbp)
	jle	.L233
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	WI_checkForAccelerate, .-WI_checkForAccelerate
	.globl	WI_Ticker
	.type	WI_Ticker, @function
WI_Ticker:
.LFB29:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	bcnt(%rip), %eax
	addl	$1, %eax
	movl	%eax, bcnt(%rip)
	movl	bcnt(%rip), %eax
	cmpl	$1, %eax
	jne	.L235
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L236
	movl	$1, %esi
	movl	$67, %edi
	call	S_ChangeMusic@PLT
	jmp	.L235
.L236:
	movl	$1, %esi
	movl	$28, %edi
	call	S_ChangeMusic@PLT
.L235:
	call	WI_checkForAccelerate
	movl	state(%rip), %eax
	cmpl	$1, %eax
	je	.L237
	cmpl	$1, %eax
	jg	.L243
	cmpl	$-1, %eax
	je	.L239
	testl	%eax, %eax
	jne	.L243
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L240
	call	WI_updateDeathmatchStats
	jmp	.L238
.L240:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L242
	call	WI_updateNetgameStats
	jmp	.L238
.L242:
	call	WI_updateStats
	jmp	.L238
.L237:
	call	WI_updateShowNextLoc
	jmp	.L238
.L239:
	call	WI_updateNoState
	nop
.L238:
.L243:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	WI_Ticker, .-WI_Ticker
	.section	.rodata
.LC1:
	.string	"WIMAP%d"
.LC2:
	.string	"CWILV%2.2d"
.LC3:
	.string	"WILV%d%d"
.LC4:
	.string	"WIURH0"
.LC5:
	.string	"WIURH1"
.LC6:
	.string	"WISPLAT"
.LC7:
	.string	"WIA%d%.2d%.2d"
.LC8:
	.string	"WIMINUS"
.LC9:
	.string	"WINUM%d"
.LC10:
	.string	"WIPCNT"
.LC11:
	.string	"WIF"
.LC12:
	.string	"WIENTER"
.LC13:
	.string	"WIOSTK"
.LC14:
	.string	"WIOSTS"
.LC15:
	.string	"WISCRT2"
.LC16:
	.string	"WIOBJ"
.LC17:
	.string	"WIOSTI"
.LC18:
	.string	"WIFRGS"
.LC19:
	.string	"WICOLON"
.LC20:
	.string	"WITIME"
.LC21:
	.string	"WISUCKS"
.LC22:
	.string	"WIPAR"
.LC23:
	.string	"WIKILRS"
.LC24:
	.string	"WIVCTMS"
.LC25:
	.string	"WIMSTT"
.LC26:
	.string	"STFST01"
.LC27:
	.string	"STFDEAD0"
.LC28:
	.string	"STPB%d"
.LC29:
	.string	"WIBP%d"
	.text
	.globl	WI_loadData
	.type	WI_loadData, @function
WI_loadData:
.LFB30:
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
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L245
	movabsq	$4848494788121742921, %rax
	movq	%rax, -33(%rbp)
	movb	$0, -25(%rbp)
	jmp	.L246
.L245:
	movq	wbs(%rip), %rax
	movl	(%rax), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L246:
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L247
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$3, %eax
	jne	.L247
	movabsq	$4848494788121742921, %rax
	movq	%rax, -33(%rbp)
	movb	$0, -25(%rbp)
.L247:
	leaq	-33(%rbp), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, bg(%rip)
	movq	bg(%rip), %rax
	movq	%rax, %rcx
	movl	$1, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L248
	movl	$32, NUMCMAPS(%rip)
	movl	NUMCMAPS(%rip), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, lnames(%rip)
	movl	$0, -56(%rbp)
	jmp	.L249
.L250:
	movl	-56(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	lnames(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	leaq	(%rax,%rdx), %rbx
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, (%rbx)
	addl	$1, -56(%rbp)
.L249:
	movl	NUMCMAPS(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L250
	jmp	.L251
.L248:
	movl	$0, %edx
	movl	$1, %esi
	movl	$72, %edi
	call	Z_Malloc@PLT
	movq	%rax, lnames(%rip)
	movl	$0, -56(%rbp)
	jmp	.L252
.L253:
	movq	wbs(%rip), %rax
	movl	(%rax), %edx
	movl	-56(%rbp), %ecx
	leaq	-33(%rbp), %rax
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	lnames(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	leaq	(%rax,%rdx), %rbx
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, (%rbx)
	addl	$1, -56(%rbp)
.L252:
	cmpl	$8, -56(%rbp)
	jle	.L253
	movl	$1, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, yah(%rip)
	movl	$1, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, 8+yah(%rip)
	movl	$1, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, splat(%rip)
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jg	.L251
	movl	$0, -52(%rbp)
	jmp	.L254
.L260:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	anims(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -48(%rbp)
	movl	$0, -56(%rbp)
	jmp	.L255
.L259:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L256
	cmpl	$8, -52(%rbp)
	je	.L257
.L256:
	movq	wbs(%rip), %rax
	movl	(%rax), %edx
	movl	-56(%rbp), %esi
	movl	-52(%rbp), %ecx
	leaq	-33(%rbp), %rax
	movl	%esi, %r8d
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	-48(%rbp), %rdx
	movl	-56(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$4, %rcx
	movq	%rax, (%rdx,%rcx,8)
	jmp	.L258
.L257:
	movq	8+anims(%rip), %rax
	addq	$288, %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movq	(%rax,%rdx,8), %rdx
	movq	-48(%rbp), %rax
	movl	-56(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$4, %rcx
	movq	%rdx, (%rax,%rcx,8)
.L258:
	addl	$1, -56(%rbp)
.L255:
	movq	-48(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L259
	addl	$1, -52(%rbp)
.L254:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	NUMANIMS(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -52(%rbp)
	jl	.L260
.L251:
	movl	$1, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, wiminus(%rip)
	movl	$0, -56(%rbp)
	jmp	.L261
.L262:
	movl	-56(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC9(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	num(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -56(%rbp)
.L261:
	cmpl	$9, -56(%rbp)
	jle	.L262
	movl	$1, %esi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, percent(%rip)
	movl	$1, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, finished(%rip)
	movl	$1, %esi
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, entering(%rip)
	movl	$1, %esi
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, kills(%rip)
	movl	$1, %esi
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, secret(%rip)
	movl	$1, %esi
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, sp_secret(%rip)
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L263
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	jne	.L263
	movl	$1, %esi
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, items(%rip)
	jmp	.L268
.L263:
	movl	$1, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, items(%rip)
.L268:
	movl	$1, %esi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, frags(%rip)
	movl	$1, %esi
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, colon(%rip)
	movl	$1, %esi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, time(%rip)
	movl	$1, %esi
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, sucks(%rip)
	movl	$1, %esi
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, par(%rip)
	movl	$1, %esi
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, killers(%rip)
	movl	$1, %esi
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, victims(%rip)
	movl	$1, %esi
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, total(%rip)
	movl	$1, %esi
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, star(%rip)
	movl	$1, %esi
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, bstar(%rip)
	movl	$0, -56(%rbp)
	jmp	.L265
.L266:
	movl	-56(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC28(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	p(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-56(%rbp), %eax
	leal	1(%rax), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC29(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	bp(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -56(%rbp)
.L265:
	cmpl	$3, -56(%rbp)
	jle	.L266
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L267
	call	__stack_chk_fail@PLT
.L267:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE30:
	.size	WI_loadData, .-WI_loadData
	.section	.rodata
.LC30:
	.string	"Z_CT at wi_stuff.c:%i"
	.text
	.globl	WI_unloadData
	.type	WI_unloadData, @function
WI_unloadData:
.LFB31:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	wiminus(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L270
	movl	$1713, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L270:
	movq	wiminus(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	$0, -8(%rbp)
	jmp	.L271
.L273:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	num(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L272
	movl	$1716, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L272:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	num(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -8(%rbp)
.L271:
	cmpl	$9, -8(%rbp)
	jle	.L273
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L274
	movl	$0, -8(%rbp)
	jmp	.L275
.L277:
	movq	lnames(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L276
	movl	$1721, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L276:
	movq	lnames(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -8(%rbp)
.L275:
	movl	NUMCMAPS(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L277
	jmp	.L278
.L274:
	movq	yah(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L279
	movl	$1725, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L279:
	movq	yah(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	8+yah(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L280
	movl	$1726, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L280:
	movq	8+yah(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	splat(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L281
	movl	$1728, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L281:
	movq	splat(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	$0, -8(%rbp)
	jmp	.L282
.L284:
	movq	lnames(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L283
	movl	$1731, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L283:
	movq	lnames(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -8(%rbp)
.L282:
	cmpl	$8, -8(%rbp)
	jle	.L284
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jg	.L278
	movl	$0, -4(%rbp)
	jmp	.L285
.L291:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L286
	cmpl	$8, -4(%rbp)
	je	.L287
.L286:
	movl	$0, -8(%rbp)
	jmp	.L288
.L290:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	anims(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movq	(%rax,%rdx,8), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L289
	movl	$1739, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L289:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	anims(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movq	(%rax,%rdx,8), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -8(%rbp)
.L288:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	anims(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	8(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L290
.L287:
	addl	$1, -4(%rbp)
.L285:
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	NUMANIMS(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L291
.L278:
	movq	lnames(%rip), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	movq	percent(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L292
	movl	$1746, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L292:
	movq	percent(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	colon(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L293
	movl	$1747, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L293:
	movq	colon(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	finished(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L294
	movl	$1748, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L294:
	movq	finished(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	entering(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L295
	movl	$1749, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L295:
	movq	entering(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	kills(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L296
	movl	$1750, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L296:
	movq	kills(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	secret(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L297
	movl	$1751, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L297:
	movq	secret(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	sp_secret(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L298
	movl	$1752, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L298:
	movq	sp_secret(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	items(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L299
	movl	$1753, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L299:
	movq	items(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	frags(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L300
	movl	$1754, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L300:
	movq	frags(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	time(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L301
	movl	$1755, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L301:
	movq	time(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	sucks(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L302
	movl	$1756, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L302:
	movq	sucks(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	par(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L303
	movl	$1757, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L303:
	movq	par(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	victims(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L304
	movl	$1759, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L304:
	movq	victims(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	killers(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L305
	movl	$1760, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L305:
	movq	killers(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	total(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L306
	movl	$1761, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L306:
	movq	total(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	$0, -8(%rbp)
	jmp	.L307
.L309:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	p(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L308
	movl	$1766, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L308:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	p(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -8(%rbp)
.L307:
	cmpl	$3, -8(%rbp)
	jle	.L309
	movl	$0, -8(%rbp)
	jmp	.L310
.L312:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	bp(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L311
	movl	$1769, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L311:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	bp(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -8(%rbp)
.L310:
	cmpl	$3, -8(%rbp)
	jle	.L312
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE31:
	.size	WI_unloadData, .-WI_unloadData
	.globl	WI_Drawer
	.type	WI_Drawer, @function
WI_Drawer:
.LFB32:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	state(%rip), %eax
	cmpl	$1, %eax
	je	.L314
	cmpl	$1, %eax
	jg	.L320
	cmpl	$-1, %eax
	je	.L316
	testl	%eax, %eax
	jne	.L320
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L317
	call	WI_drawDeathmatchStats
	jmp	.L315
.L317:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L319
	call	WI_drawNetgameStats
	jmp	.L315
.L319:
	call	WI_drawStats
	jmp	.L315
.L314:
	call	WI_drawShowNextLoc
	jmp	.L315
.L316:
	call	WI_drawNoState
	nop
.L315:
.L320:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE32:
	.size	WI_Drawer, .-WI_Drawer
	.globl	WI_initVariables
	.type	WI_initVariables, @function
WI_initVariables:
.LFB33:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, wbs(%rip)
	movl	$0, acceleratestage(%rip)
	movl	$0, bcnt(%rip)
	movl	bcnt(%rip), %eax
	movl	%eax, cnt(%rip)
	movl	$1, firstrefresh(%rip)
	movq	wbs(%rip), %rax
	movl	36(%rax), %eax
	movl	%eax, me(%rip)
	movq	wbs(%rip), %rax
	addq	$40, %rax
	movq	%rax, plrs(%rip)
	movq	wbs(%rip), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	jne	.L322
	movq	wbs(%rip), %rax
	movl	$1, 16(%rax)
.L322:
	movq	wbs(%rip), %rax
	movl	20(%rax), %eax
	testl	%eax, %eax
	jne	.L323
	movq	wbs(%rip), %rax
	movl	$1, 20(%rax)
.L323:
	movq	wbs(%rip), %rax
	movl	24(%rax), %eax
	testl	%eax, %eax
	jne	.L324
	movq	wbs(%rip), %rax
	movl	$1, 24(%rax)
.L324:
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	je	.L326
	movq	wbs(%rip), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jle	.L326
	movq	wbs(%rip), %rax
	movl	(%rax), %edx
	movq	wbs(%rip), %rax
	subl	$3, %edx
	movl	%edx, (%rax)
.L326:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE33:
	.size	WI_initVariables, .-WI_initVariables
	.globl	WI_Start
	.type	WI_Start, @function
WI_Start:
.LFB34:
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
	call	WI_initVariables
	call	WI_loadData
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L328
	call	WI_initDeathmatchStats
	jmp	.L331
.L328:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L330
	call	WI_initNetgameStats
	jmp	.L331
.L330:
	call	WI_initStats
.L331:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE34:
	.size	WI_Start, .-WI_Start
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
