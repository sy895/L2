	.file	"r_things.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: r_things.c,v 1.5 1997/02/03 16:47:56 b1 Exp $"
	.globl	pspritescale
	.bss
	.align 4
	.type	pspritescale, @object
	.size	pspritescale, 4
pspritescale:
	.zero	4
	.globl	pspriteiscale
	.align 4
	.type	pspriteiscale, @object
	.size	pspriteiscale, 4
pspriteiscale:
	.zero	4
	.globl	spritelights
	.align 8
	.type	spritelights, @object
	.size	spritelights, 8
spritelights:
	.zero	8
	.globl	negonearray
	.align 32
	.type	negonearray, @object
	.size	negonearray, 640
negonearray:
	.zero	640
	.globl	screenheightarray
	.align 32
	.type	screenheightarray, @object
	.size	screenheightarray, 640
screenheightarray:
	.zero	640
	.globl	sprites
	.align 8
	.type	sprites, @object
	.size	sprites, 8
sprites:
	.zero	8
	.globl	numsprites
	.align 4
	.type	numsprites, @object
	.size	numsprites, 4
numsprites:
	.zero	4
	.globl	sprtemp
	.align 32
	.type	sprtemp, @object
	.size	sprtemp, 812
sprtemp:
	.zero	812
	.globl	maxframe
	.align 4
	.type	maxframe, @object
	.size	maxframe, 4
maxframe:
	.zero	4
	.globl	spritename
	.align 8
	.type	spritename, @object
	.size	spritename, 8
spritename:
	.zero	8
	.section	.rodata
	.align 8
.LC0:
	.string	"R_InstallSpriteLump: Bad frame characters in lump %i"
	.align 8
.LC1:
	.string	"R_InitSprites: Sprite %s frame %c has multip rot=0 lump"
	.align 8
.LC2:
	.string	"R_InitSprites: Sprite %s frame %c has rotations and a rot=0 lump"
	.align 8
.LC3:
	.string	"R_InitSprites: Sprite %s : %c : %c has two lumps mapped to it"
	.text
	.globl	R_InstallSpriteLump
	.type	R_InstallSpriteLump, @function
R_InstallSpriteLump:
.LFB6:
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
	cmpl	$28, -24(%rbp)
	ja	.L2
	cmpl	$8, -28(%rbp)
	jbe	.L3
.L2:
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L3:
	movl	-24(%rbp), %edx
	movl	maxframe(%rip), %eax
	cmpl	%eax, %edx
	jle	.L4
	movl	-24(%rbp), %eax
	movl	%eax, maxframe(%rip)
.L4:
	cmpl	$0, -28(%rbp)
	jne	.L5
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	sprtemp(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L6
	movl	-24(%rbp), %eax
	leal	65(%rax), %edx
	movq	spritename(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L6:
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	sprtemp(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L7
	movl	-24(%rbp), %eax
	leal	65(%rax), %edx
	movq	spritename(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L7:
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	sprtemp(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	$0, -4(%rbp)
	jmp	.L8
.L9:
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	firstspritelump(%rip), %eax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	movl	%eax, %esi
	movl	-4(%rbp), %eax
	movslq	%eax, %rcx
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	4+sprtemp(%rip), %rax
	movw	%si, (%rdx,%rax)
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	-4(%rbp), %eax
	movslq	%eax, %rcx
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	(%rax,%rcx), %rdx
	leaq	20+sprtemp(%rip), %rax
	addq	%rdx, %rax
	movb	%sil, (%rax)
	addl	$1, -4(%rbp)
.L8:
	cmpl	$7, -4(%rbp)
	jle	.L9
	jmp	.L1
.L5:
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	sprtemp(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L11
	movl	-24(%rbp), %eax
	leal	65(%rax), %edx
	movq	spritename(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L11:
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	sprtemp(%rip), %rax
	movl	$1, (%rdx,%rax)
	subl	$1, -28(%rbp)
	movl	-28(%rbp), %ecx
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	4+sprtemp(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cmpw	$-1, %ax
	je	.L12
	movl	-28(%rbp), %eax
	leal	49(%rax), %ecx
	movl	-24(%rbp), %eax
	leal	65(%rax), %edx
	movq	spritename(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L12:
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	firstspritelump(%rip), %eax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	movl	%eax, %esi
	movl	-28(%rbp), %ecx
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	4+sprtemp(%rip), %rax
	movw	%si, (%rdx,%rax)
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	-28(%rbp), %ecx
	movl	-24(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	(%rax,%rcx), %rdx
	leaq	20+sprtemp(%rip), %rax
	addq	%rdx, %rax
	movb	%sil, (%rax)
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	R_InstallSpriteLump, .-R_InstallSpriteLump
	.section	.rodata
	.align 8
.LC4:
	.string	"R_InitSprites: No patches found for %s frame %c"
	.align 8
.LC5:
	.string	"R_InitSprites: Sprite %s frame %c is missing rotations"
	.text
	.globl	R_InitSpriteDefs
	.type	R_InitSpriteDefs, @function
R_InitSpriteDefs:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp	.L14
.L15:
	addq	$8, -24(%rbp)
.L14:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L15
	movq	-24(%rbp), %rax
	subq	-72(%rbp), %rax
	sarq	$3, %rax
	movl	%eax, numsprites(%rip)
	movl	numsprites(%rip), %eax
	testl	%eax, %eax
	je	.L36
	movl	numsprites(%rip), %eax
	cltq
	sall	$4, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, sprites(%rip)
	movl	firstspritelump(%rip), %eax
	subl	$1, %eax
	movl	%eax, -36(%rbp)
	movl	lastspritelump(%rip), %eax
	addl	$1, %eax
	movl	%eax, -32(%rbp)
	movl	$0, -56(%rbp)
	jmp	.L18
.L35:
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, spritename(%rip)
	movl	$812, %edx
	movl	$-1, %esi
	leaq	sprtemp(%rip), %rax
	movq	%rax, %rdi
	call	memset@PLT
	movl	$-1, maxframe(%rip)
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	.L19
.L23:
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jne	.L20
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movzbl	4(%rax), %eax
	movsbl	%al, %eax
	subl	$65, %eax
	movl	%eax, -48(%rbp)
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movzbl	5(%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -44(%rbp)
	movl	modifiedgame(%rip), %eax
	testl	%eax, %eax
	je	.L21
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, -40(%rbp)
	jmp	.L22
.L21:
	movl	-52(%rbp), %eax
	movl	%eax, -40(%rbp)
.L22:
	movl	-44(%rbp), %edx
	movl	-48(%rbp), %esi
	movl	-40(%rbp), %eax
	movl	$0, %ecx
	movl	%eax, %edi
	call	R_InstallSpriteLump
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movzbl	6(%rax), %eax
	testb	%al, %al
	je	.L20
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movzbl	6(%rax), %eax
	movsbl	%al, %eax
	subl	$65, %eax
	movl	%eax, -48(%rbp)
	movq	lumpinfo(%rip), %rcx
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movzbl	7(%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %edx
	movl	-48(%rbp), %esi
	movl	-52(%rbp), %eax
	movl	$1, %ecx
	movl	%eax, %edi
	call	R_InstallSpriteLump
.L20:
	addl	$1, -52(%rbp)
.L19:
	movl	-52(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jl	.L23
	movl	maxframe(%rip), %eax
	cmpl	$-1, %eax
	jne	.L24
	movq	sprites(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	jmp	.L25
.L24:
	movl	maxframe(%rip), %eax
	addl	$1, %eax
	movl	%eax, maxframe(%rip)
	movl	$0, -48(%rbp)
	jmp	.L26
.L34:
	movl	-48(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	sprtemp(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$1, %eax
	je	.L27
	cmpl	$1, %eax
	jg	.L28
	cmpl	$-1, %eax
	je	.L29
	testl	%eax, %eax
	jmp	.L28
.L29:
	movl	-48(%rbp), %eax
	leal	65(%rax), %edx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-72(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L28
.L27:
	movl	$0, -44(%rbp)
	jmp	.L31
.L33:
	movl	-44(%rbp), %eax
	movslq	%eax, %rcx
	movl	-48(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	4+sprtemp(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cmpw	$-1, %ax
	jne	.L32
	movl	-48(%rbp), %eax
	leal	65(%rax), %edx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-72(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L32:
	addl	$1, -44(%rbp)
.L31:
	cmpl	$7, -44(%rbp)
	jle	.L33
	nop
.L28:
	addl	$1, -48(%rbp)
.L26:
	movl	maxframe(%rip), %eax
	cmpl	%eax, -48(%rbp)
	jl	.L34
	movq	sprites(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rax, %rdx
	movl	maxframe(%rip), %eax
	movl	%eax, (%rdx)
	movl	maxframe(%rip), %eax
	cltq
	imull	$28, %eax, %eax
	movl	%eax, %ecx
	movq	sprites(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	leaq	(%rax,%rdx), %rbx
	movl	$0, %edx
	movl	$1, %esi
	movl	%ecx, %edi
	call	Z_Malloc@PLT
	movq	%rax, 8(%rbx)
	movl	maxframe(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rcx
	movq	sprites(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	8(%rax), %rax
	movq	%rcx, %rdx
	leaq	sprtemp(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
.L25:
	addl	$1, -56(%rbp)
.L18:
	movl	numsprites(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L35
	jmp	.L13
.L36:
	nop
.L13:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_InitSpriteDefs, .-R_InitSpriteDefs
	.globl	vissprites
	.bss
	.align 32
	.type	vissprites, @object
	.size	vissprites, 10240
vissprites:
	.zero	10240
	.globl	vissprite_p
	.align 8
	.type	vissprite_p, @object
	.size	vissprite_p, 8
vissprite_p:
	.zero	8
	.globl	newvissprite
	.align 4
	.type	newvissprite, @object
	.size	newvissprite, 4
newvissprite:
	.zero	4
	.text
	.globl	R_InitSprites
	.type	R_InitSprites, @function
R_InitSprites:
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
	movl	$0, -4(%rbp)
	jmp	.L38
.L39:
	movl	-4(%rbp), %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	negonearray(%rip), %rax
	movw	$-1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L38:
	cmpl	$319, -4(%rbp)
	jle	.L39
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	R_InitSpriteDefs
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	R_InitSprites, .-R_InitSprites
	.globl	R_ClearSprites
	.type	R_ClearSprites, @function
R_ClearSprites:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	vissprites(%rip), %rax
	movq	%rax, vissprite_p(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	R_ClearSprites, .-R_ClearSprites
	.globl	overflowsprite
	.bss
	.align 32
	.type	overflowsprite, @object
	.size	overflowsprite, 80
overflowsprite:
	.zero	80
	.text
	.globl	R_NewVisSprite
	.type	R_NewVisSprite, @function
R_NewVisSprite:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	vissprite_p(%rip), %rdx
	leaq	10240+vissprites(%rip), %rax
	cmpq	%rax, %rdx
	jne	.L42
	leaq	overflowsprite(%rip), %rax
	jmp	.L43
.L42:
	movq	vissprite_p(%rip), %rax
	addq	$80, %rax
	movq	%rax, vissprite_p(%rip)
	movq	vissprite_p(%rip), %rax
	subq	$80, %rax
.L43:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	R_NewVisSprite, .-R_NewVisSprite
	.globl	mfloorclip
	.bss
	.align 8
	.type	mfloorclip, @object
	.size	mfloorclip, 8
mfloorclip:
	.zero	8
	.globl	mceilingclip
	.align 8
	.type	mceilingclip, @object
	.size	mceilingclip, 8
mceilingclip:
	.zero	8
	.globl	spryscale
	.align 4
	.type	spryscale, @object
	.size	spryscale, 4
spryscale:
	.zero	4
	.globl	sprtopscreen
	.align 4
	.type	sprtopscreen, @object
	.size	sprtopscreen, 4
sprtopscreen:
	.zero	4
	.text
	.globl	R_DrawMaskedColumn
	.type	R_DrawMaskedColumn, @function
R_DrawMaskedColumn:
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
	movl	dc_texturemid(%rip), %eax
	movl	%eax, -12(%rbp)
	jmp	.L45
.L49:
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	spryscale(%rip), %eax
	imull	%eax, %edx
	movl	sprtopscreen(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %edx
	movl	spryscale(%rip), %eax
	imull	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	addl	$65535, %eax
	sarl	$16, %eax
	movl	%eax, dc_yl(%rip)
	movl	-4(%rbp), %eax
	subl	$1, %eax
	sarl	$16, %eax
	movl	%eax, dc_yh(%rip)
	movq	mfloorclip(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	dc_yh(%rip), %eax
	cmpl	%eax, %edx
	jg	.L46
	movq	mfloorclip(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cwtl
	subl	$1, %eax
	movl	%eax, dc_yh(%rip)
.L46:
	movq	mceilingclip(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	dc_yl(%rip), %eax
	cmpl	%eax, %edx
	jl	.L47
	movq	mceilingclip(%rip), %rax
	movl	dc_x(%rip), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, dc_yl(%rip)
.L47:
	movl	dc_yl(%rip), %edx
	movl	dc_yh(%rip), %eax
	cmpl	%eax, %edx
	jg	.L48
	movq	-24(%rbp), %rax
	addq	$3, %rax
	movq	%rax, dc_source(%rip)
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	sall	$16, %eax
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, dc_texturemid(%rip)
	movq	colfunc(%rip), %rax
	call	*%rax
.L48:
	movq	-24(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	addq	$4, %rax
	addq	%rax, -24(%rbp)
.L45:
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L49
	movl	-12(%rbp), %eax
	movl	%eax, dc_texturemid(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	R_DrawMaskedColumn, .-R_DrawMaskedColumn
	.section	.rodata
	.align 8
.LC6:
	.string	"R_DrawSpriteRange: bad texturecolumn"
	.text
	.globl	R_DrawVisSprite
	.type	R_DrawVisSprite, @function
R_DrawVisSprite:
.LFB12:
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
	movl	56(%rax), %edx
	movl	firstspritelump(%rip), %eax
	addl	%edx, %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rax
	movq	64(%rax), %rax
	movq	%rax, dc_colormap(%rip)
	movq	dc_colormap(%rip), %rax
	testq	%rax, %rax
	jne	.L51
	movq	fuzzcolfunc(%rip), %rax
	movq	%rax, colfunc(%rip)
	jmp	.L52
.L51:
	movq	-56(%rbp), %rax
	movl	72(%rax), %eax
	andl	$201326592, %eax
	testl	%eax, %eax
	je	.L52
	movq	R_DrawTranslatedColumn@GOTPCREL(%rip), %rax
	movq	%rax, colfunc(%rip)
	movq	translationtables(%rip), %rdx
	movq	-56(%rbp), %rax
	movl	72(%rax), %eax
	sarl	$18, %eax
	cltq
	andl	$768, %eax
	subq	$256, %rax
	addq	%rdx, %rax
	movq	%rax, dc_translation(%rip)
.L52:
	movq	-56(%rbp), %rax
	movl	48(%rax), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	movl	%eax, dc_iscale(%rip)
	movq	-56(%rbp), %rax
	movl	52(%rax), %eax
	movl	%eax, dc_texturemid(%rip)
	movq	-56(%rbp), %rax
	movl	40(%rax), %eax
	movl	%eax, -40(%rbp)
	movq	-56(%rbp), %rax
	movl	44(%rax), %eax
	movl	%eax, spryscale(%rip)
	movl	centeryfrac(%rip), %ebx
	movl	spryscale(%rip), %edx
	movl	dc_texturemid(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, sprtopscreen(%rip)
	movq	-56(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, dc_x(%rip)
	jmp	.L53
.L56:
	movl	-40(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, -36(%rbp)
	cmpl	$0, -36(%rbp)
	js	.L54
	movq	-32(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	cmpl	%eax, -36(%rbp)
	jl	.L55
.L54:
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L55:
	movq	-32(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	movl	8(%rax,%rdx,4), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	R_DrawMaskedColumn
	movl	dc_x(%rip), %eax
	addl	$1, %eax
	movl	%eax, dc_x(%rip)
	movq	-56(%rbp), %rax
	movl	48(%rax), %eax
	addl	%eax, -40(%rbp)
.L53:
	movq	-56(%rbp), %rax
	movl	20(%rax), %edx
	movl	dc_x(%rip), %eax
	cmpl	%eax, %edx
	jge	.L56
	movq	basecolfunc(%rip), %rax
	movq	%rax, colfunc(%rip)
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	R_DrawVisSprite, .-R_DrawVisSprite
	.section	.rodata
	.align 8
.LC7:
	.string	"R_ProjectSprite: invalid sprite number %i "
	.align 8
.LC8:
	.string	"R_ProjectSprite: invalid sprite frame %i : %i "
	.text
	.globl	R_ProjectSprite
	.type	R_ProjectSprite, @function
R_ProjectSprite:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%rdi, -104(%rbp)
	movq	-104(%rbp), %rax
	movl	24(%rax), %edx
	movl	viewx(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -72(%rbp)
	movq	-104(%rbp), %rax
	movl	28(%rax), %edx
	movl	viewy(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -68(%rbp)
	movl	viewcos(%rip), %edx
	movl	-72(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -64(%rbp)
	movl	viewsin(%rip), %edx
	movl	-68(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, -60(%rbp)
	movl	-64(%rbp), %eax
	subl	-60(%rbp), %eax
	movl	%eax, -56(%rbp)
	cmpl	$262143, -56(%rbp)
	jle	.L76
	movl	projection(%rip), %eax
	movl	-56(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, -52(%rbp)
	movl	viewsin(%rip), %edx
	movl	-72(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, -64(%rbp)
	movl	viewcos(%rip), %edx
	movl	-68(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %edx
	movl	-64(%rbp), %eax
	addl	%edx, %eax
	negl	%eax
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, %edx
	negl	%edx
	cmovs	%eax, %edx
	movl	-56(%rbp), %eax
	sall	$2, %eax
	cmpl	%eax, %edx
	jg	.L77
	movq	-104(%rbp), %rax
	movl	60(%rax), %eax
	movl	numsprites(%rip), %edx
	cmpl	%edx, %eax
	jb	.L61
	movq	-104(%rbp), %rax
	movl	60(%rax), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L61:
	movq	sprites(%rip), %rdx
	movq	-104(%rbp), %rax
	movl	60(%rax), %eax
	movl	%eax, %eax
	salq	$4, %rax
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-104(%rbp), %rax
	movl	64(%rax), %eax
	andl	$32767, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jl	.L62
	movq	-104(%rbp), %rax
	movl	64(%rax), %edx
	movq	-104(%rbp), %rax
	movl	60(%rax), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L62:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-104(%rbp), %rax
	movl	64(%rax), %eax
	cltq
	andl	$32767, %eax
	movq	%rax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L63
	movq	-104(%rbp), %rax
	movl	28(%rax), %edx
	movq	-104(%rbp), %rax
	movl	24(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToAngle@PLT
	movl	%eax, -44(%rbp)
	movq	-104(%rbp), %rax
	movl	56(%rax), %eax
	movl	-44(%rbp), %edx
	subl	%eax, %edx
	leal	-1879048192(%rdx), %eax
	shrl	$29, %eax
	movl	%eax, -40(%rbp)
	movq	-16(%rbp), %rax
	movl	-40(%rbp), %edx
	movzwl	4(%rax,%rdx,2), %eax
	cwtl
	movl	%eax, -84(%rbp)
	movq	-16(%rbp), %rdx
	movl	-40(%rbp), %eax
	movzbl	20(%rdx,%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -80(%rbp)
	jmp	.L64
.L63:
	movq	-16(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	movl	%eax, -84(%rbp)
	movq	-16(%rbp), %rax
	movzbl	20(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -80(%rbp)
.L64:
	movq	spriteoffset(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	subl	%eax, -48(%rbp)
	movl	-52(%rbp), %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	centerxfrac(%rip), %edx
	addl	%edx, %eax
	sarl	$16, %eax
	movl	%eax, -36(%rbp)
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jg	.L78
	movq	spritewidth(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -48(%rbp)
	movl	-52(%rbp), %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	centerxfrac(%rip), %edx
	addl	%edx, %eax
	sarl	$16, %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
	cmpl	$0, -32(%rbp)
	js	.L79
	call	R_NewVisSprite
	movq	%rax, -8(%rbp)
	movq	-104(%rbp), %rax
	movl	160(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 72(%rax)
	movl	detailshift(%rip), %eax
	movl	-52(%rbp), %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 44(%rax)
	movq	-104(%rbp), %rax
	movl	24(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 24(%rax)
	movq	-104(%rbp), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 28(%rax)
	movq	-104(%rbp), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-104(%rbp), %rax
	movl	32(%rax), %edx
	movq	spritetopoffset(%rip), %rax
	movl	-84(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movl	viewz(%rip), %eax
	subl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 52(%rax)
	movl	-36(%rbp), %eax
	movl	$0, %edx
	testl	%eax, %eax
	cmovns	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -32(%rbp)
	jl	.L67
	movl	viewwidth(%rip), %eax
	subl	$1, %eax
	jmp	.L68
.L67:
	movl	-32(%rbp), %eax
.L68:
	movq	-8(%rbp), %rdx
	movl	%eax, 20(%rdx)
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	%eax, -28(%rbp)
	cmpl	$0, -80(%rbp)
	je	.L69
	movq	spritewidth(%rip), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movl	-28(%rbp), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 48(%rax)
	jmp	.L70
.L69:
	movq	-8(%rbp), %rax
	movl	$0, 40(%rax)
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 48(%rax)
.L70:
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jge	.L71
	movq	-8(%rbp), %rax
	movl	40(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	48(%rax), %edx
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	subl	-36(%rbp), %eax
	imull	%edx, %eax
	leal	(%rcx,%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
.L71:
	movq	-8(%rbp), %rax
	movl	-84(%rbp), %edx
	movl	%edx, 56(%rax)
	movq	-104(%rbp), %rax
	movl	160(%rax), %eax
	andl	$262144, %eax
	testl	%eax, %eax
	je	.L72
	movq	-8(%rbp), %rax
	movq	$0, 64(%rax)
	jmp	.L57
.L72:
	movq	fixedcolormap(%rip), %rax
	testq	%rax, %rax
	je	.L73
	movq	fixedcolormap(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 64(%rax)
	jmp	.L57
.L73:
	movq	-104(%rbp), %rax
	movl	64(%rax), %eax
	andl	$32768, %eax
	testl	%eax, %eax
	je	.L74
	movq	colormaps(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 64(%rax)
	jmp	.L57
.L74:
	movl	detailshift(%rip), %eax
	movl	$12, %edx
	subl	%eax, %edx
	movl	-52(%rbp), %eax
	movl	%edx, %ecx
	sarl	%cl, %eax
	movl	%eax, -76(%rbp)
	cmpl	$47, -76(%rbp)
	jle	.L75
	movl	$47, -76(%rbp)
.L75:
	movq	spritelights(%rip), %rax
	movl	-76(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 64(%rax)
	jmp	.L57
.L76:
	nop
	jmp	.L57
.L77:
	nop
	jmp	.L57
.L78:
	nop
	jmp	.L57
.L79:
	nop
.L57:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	R_ProjectSprite, .-R_ProjectSprite
	.globl	R_AddSprites
	.type	R_AddSprites, @function
R_AddSprites:
.LFB14:
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
	movl	88(%rax), %edx
	movl	validcount(%rip), %eax
	cmpl	%eax, %edx
	je	.L88
	movl	validcount(%rip), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 88(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	sarw	$4, %ax
	movswl	%ax, %edx
	movl	extralight(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L83
	leaq	scalelight(%rip), %rax
	movq	%rax, spritelights(%rip)
	jmp	.L84
.L83:
	cmpl	$15, -12(%rbp)
	jle	.L85
	leaq	5760+scalelight(%rip), %rax
	movq	%rax, spritelights(%rip)
	jmp	.L84
.L85:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$7, %rax
	leaq	scalelight(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, spritelights(%rip)
.L84:
	movq	-24(%rbp), %rax
	movq	96(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L86
.L87:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	R_ProjectSprite
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rax, -8(%rbp)
.L86:
	cmpq	$0, -8(%rbp)
	jne	.L87
	jmp	.L80
.L88:
	nop
.L80:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	R_AddSprites, .-R_AddSprites
	.globl	R_DrawPSprite
	.type	R_DrawPSprite, @function
R_DrawPSprite:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$160, %rsp
	movq	%rdi, -152(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	numsprites(%rip), %edx
	cmpl	%edx, %eax
	jb	.L90
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L90:
	movq	sprites(%rip), %rdx
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, %eax
	salq	$4, %rax
	addq	%rdx, %rax
	movq	%rax, -120(%rbp)
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movq	8(%rax), %rax
	andl	$32767, %eax
	movq	%rax, %rdx
	movq	-120(%rbp), %rax
	movl	(%rax), %eax
	cltq
	cmpq	%rax, %rdx
	jl	.L91
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movq	8(%rax), %rdx
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L91:
	movq	-120(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movq	8(%rax), %rax
	andl	$32767, %eax
	movq	%rax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	movl	%eax, -140(%rbp)
	movq	-112(%rbp), %rax
	movzbl	20(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -136(%rbp)
	movq	-152(%rbp), %rax
	movl	12(%rax), %eax
	subl	$10485760, %eax
	movl	%eax, -132(%rbp)
	movq	spriteoffset(%rip), %rax
	movl	-140(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	subl	%eax, -132(%rbp)
	movl	pspritescale(%rip), %edx
	movl	-132(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	centerxfrac(%rip), %edx
	addl	%edx, %eax
	sarl	$16, %eax
	movl	%eax, -128(%rbp)
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -128(%rbp)
	jg	.L107
	movq	spritewidth(%rip), %rax
	movl	-140(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -132(%rbp)
	movl	pspritescale(%rip), %edx
	movl	-132(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	centerxfrac(%rip), %edx
	addl	%edx, %eax
	sarl	$16, %eax
	subl	$1, %eax
	movl	%eax, -124(%rbp)
	cmpl	$0, -124(%rbp)
	js	.L108
	leaq	-96(%rbp), %rax
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	movl	$0, 72(%rax)
	movq	-152(%rbp), %rax
	movl	16(%rax), %edx
	movq	spritetopoffset(%rip), %rax
	movl	-140(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	$6586368, %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-104(%rbp), %rax
	movl	%edx, 52(%rax)
	movl	-128(%rbp), %eax
	movl	$0, %edx
	testl	%eax, %eax
	cmovns	%eax, %edx
	movq	-104(%rbp), %rax
	movl	%edx, 16(%rax)
	movl	viewwidth(%rip), %eax
	cmpl	%eax, -124(%rbp)
	jl	.L95
	movl	viewwidth(%rip), %eax
	subl	$1, %eax
	jmp	.L96
.L95:
	movl	-124(%rbp), %eax
.L96:
	movq	-104(%rbp), %rdx
	movl	%eax, 20(%rdx)
	movl	pspritescale(%rip), %edx
	movl	detailshift(%rip), %eax
	movl	%eax, %ecx
	sall	%cl, %edx
	movq	-104(%rbp), %rax
	movl	%edx, 44(%rax)
	cmpl	$0, -136(%rbp)
	je	.L97
	movl	pspriteiscale(%rip), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-104(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	spritewidth(%rip), %rax
	movl	-140(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movq	-104(%rbp), %rax
	movl	%edx, 40(%rax)
	jmp	.L98
.L97:
	movl	pspriteiscale(%rip), %edx
	movq	-104(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	-104(%rbp), %rax
	movl	$0, 40(%rax)
.L98:
	movq	-104(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -128(%rbp)
	jge	.L99
	movq	-104(%rbp), %rax
	movl	40(%rax), %ecx
	movq	-104(%rbp), %rax
	movl	48(%rax), %edx
	movq	-104(%rbp), %rax
	movl	16(%rax), %eax
	subl	-128(%rbp), %eax
	imull	%edx, %eax
	leal	(%rcx,%rax), %edx
	movq	-104(%rbp), %rax
	movl	%edx, 40(%rax)
.L99:
	movq	-104(%rbp), %rax
	movl	-140(%rbp), %edx
	movl	%edx, 56(%rax)
	movq	viewplayer(%rip), %rax
	movl	56(%rax), %eax
	cmpl	$128, %eax
	jg	.L100
	movq	viewplayer(%rip), %rax
	movl	56(%rax), %eax
	andl	$8, %eax
	testl	%eax, %eax
	je	.L101
.L100:
	movq	-104(%rbp), %rax
	movq	$0, 64(%rax)
	jmp	.L102
.L101:
	movq	fixedcolormap(%rip), %rax
	testq	%rax, %rax
	je	.L103
	movq	fixedcolormap(%rip), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, 64(%rax)
	jmp	.L102
.L103:
	movq	-152(%rbp), %rax
	movq	(%rax), %rax
	movq	8(%rax), %rax
	andl	$32768, %eax
	testq	%rax, %rax
	je	.L104
	movq	colormaps(%rip), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, 64(%rax)
	jmp	.L102
.L104:
	movq	spritelights(%rip), %rax
	movq	376(%rax), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, 64(%rax)
.L102:
	movq	-104(%rbp), %rax
	movl	20(%rax), %edx
	movq	-104(%rbp), %rax
	movl	16(%rax), %ecx
	movq	-104(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	R_DrawVisSprite
	jmp	.L89
.L107:
	nop
	jmp	.L89
.L108:
	nop
.L89:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L106
	call	__stack_chk_fail@PLT
.L106:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	R_DrawPSprite, .-R_DrawPSprite
	.globl	R_DrawPlayerSprites
	.type	R_DrawPlayerSprites, @function
R_DrawPlayerSprites:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	viewplayer(%rip), %rax
	movq	(%rax), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movzwl	12(%rax), %eax
	sarw	$4, %ax
	movswl	%ax, %edx
	movl	extralight(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L110
	leaq	scalelight(%rip), %rax
	movq	%rax, spritelights(%rip)
	jmp	.L111
.L110:
	cmpl	$15, -12(%rbp)
	jle	.L112
	leaq	5760+scalelight(%rip), %rax
	movq	%rax, spritelights(%rip)
	jmp	.L111
.L112:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$7, %rax
	leaq	scalelight(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, spritelights(%rip)
.L111:
	leaq	screenheightarray(%rip), %rax
	movq	%rax, mfloorclip(%rip)
	leaq	negonearray(%rip), %rax
	movq	%rax, mceilingclip(%rip)
	movl	$0, -16(%rbp)
	movq	viewplayer(%rip), %rax
	addq	$264, %rax
	movq	%rax, -8(%rbp)
	jmp	.L113
.L115:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L114
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	R_DrawPSprite
.L114:
	addl	$1, -16(%rbp)
	addq	$24, -8(%rbp)
.L113:
	cmpl	$1, -16(%rbp)
	jle	.L115
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	R_DrawPlayerSprites, .-R_DrawPlayerSprites
	.globl	vsprsortedhead
	.bss
	.align 32
	.type	vsprsortedhead, @object
	.size	vsprsortedhead, 80
vsprsortedhead:
	.zero	80
	.text
	.globl	R_SortVisSprites
	.type	R_SortVisSprites, @function
R_SortVisSprites:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	vissprite_p(%rip), %rdx
	leaq	vissprites(%rip), %rax
	subq	%rax, %rdx
	sarq	$4, %rdx
	movabsq	$-3689348814741910323, %rax
	imulq	%rdx, %rax
	movl	%eax, -116(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -88(%rbp)
	cmpl	$0, -116(%rbp)
	je	.L127
	leaq	vissprites(%rip), %rax
	movq	%rax, -112(%rbp)
	jmp	.L119
.L120:
	movq	-112(%rbp), %rax
	leaq	80(%rax), %rdx
	movq	-112(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-112(%rbp), %rax
	leaq	-80(%rax), %rdx
	movq	-112(%rbp), %rax
	movq	%rdx, (%rax)
	addq	$80, -112(%rbp)
.L119:
	movq	vissprite_p(%rip), %rax
	cmpq	%rax, -112(%rbp)
	jb	.L120
	leaq	-96(%rbp), %rax
	movq	%rax, vissprites(%rip)
	leaq	vissprites(%rip), %rax
	movq	%rax, -88(%rbp)
	movq	vissprite_p(%rip), %rax
	leaq	-80(%rax), %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, 8(%rdx)
	movq	vissprite_p(%rip), %rax
	subq	$80, %rax
	movq	%rax, -96(%rbp)
	leaq	vsprsortedhead(%rip), %rax
	movq	%rax, vsprsortedhead(%rip)
	movq	vsprsortedhead(%rip), %rax
	movq	%rax, 8+vsprsortedhead(%rip)
	movl	$0, -124(%rbp)
	jmp	.L121
.L125:
	movl	$2147483647, -120(%rbp)
	movq	-88(%rbp), %rax
	movq	%rax, -112(%rbp)
	jmp	.L122
.L124:
	movq	-112(%rbp), %rax
	movl	44(%rax), %eax
	cmpl	%eax, -120(%rbp)
	jle	.L123
	movq	-112(%rbp), %rax
	movl	44(%rax), %eax
	movl	%eax, -120(%rbp)
	movq	-112(%rbp), %rax
	movq	%rax, -104(%rbp)
.L123:
	movq	-112(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -112(%rbp)
.L122:
	leaq	-96(%rbp), %rax
	cmpq	%rax, -112(%rbp)
	jne	.L124
	movq	-104(%rbp), %rax
	movq	8(%rax), %rax
	movq	-104(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, (%rax)
	movq	-104(%rbp), %rax
	movq	(%rax), %rax
	movq	-104(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
	movq	-104(%rbp), %rax
	leaq	vsprsortedhead(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	vsprsortedhead(%rip), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, (%rax)
	movq	vsprsortedhead(%rip), %rax
	movq	-104(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-104(%rbp), %rax
	movq	%rax, vsprsortedhead(%rip)
	addl	$1, -124(%rbp)
.L121:
	movl	-124(%rbp), %eax
	cmpl	-116(%rbp), %eax
	jl	.L125
	jmp	.L116
.L127:
	nop
.L116:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L126
	call	__stack_chk_fail@PLT
.L126:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	R_SortVisSprites, .-R_SortVisSprites
	.globl	R_DrawSprite
	.type	R_DrawSprite, @function
R_DrawSprite:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$1344, %rsp
	movq	%rdi, -1336(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-1336(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -1328(%rbp)
	jmp	.L129
.L130:
	movl	-1328(%rbp), %eax
	cltq
	movw	$-2, -656(%rbp,%rax,2)
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-656(%rbp,%rax,2), %edx
	movl	-1328(%rbp), %eax
	cltq
	movw	%dx, -1296(%rbp,%rax,2)
	addl	$1, -1328(%rbp)
.L129:
	movq	-1336(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, -1328(%rbp)
	jle	.L130
	movq	ds_p(%rip), %rax
	subq	$64, %rax
	movq	%rax, -1304(%rbp)
	jmp	.L131
.L154:
	movq	-1304(%rbp), %rax
	movl	8(%rax), %edx
	movq	-1336(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jg	.L160
	movq	-1304(%rbp), %rax
	movl	12(%rax), %edx
	movq	-1336(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, %edx
	jl	.L160
	movq	-1304(%rbp), %rax
	movl	28(%rax), %eax
	testl	%eax, %eax
	jne	.L133
	movq	-1304(%rbp), %rax
	movq	56(%rax), %rax
	testq	%rax, %rax
	je	.L160
.L133:
	movq	-1304(%rbp), %rax
	movl	8(%rax), %edx
	movq	-1336(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, -1312(%rbp)
	movq	-1304(%rbp), %rax
	movl	12(%rax), %edx
	movq	-1336(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, -1308(%rbp)
	movq	-1304(%rbp), %rax
	movl	16(%rax), %edx
	movq	-1304(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jle	.L135
	movq	-1304(%rbp), %rax
	movl	20(%rax), %eax
	movl	%eax, -1320(%rbp)
	movq	-1304(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -1324(%rbp)
	jmp	.L136
.L135:
	movq	-1304(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -1320(%rbp)
	movq	-1304(%rbp), %rax
	movl	20(%rax), %eax
	movl	%eax, -1324(%rbp)
.L136:
	movq	-1336(%rbp), %rax
	movl	44(%rax), %eax
	cmpl	%eax, -1324(%rbp)
	jl	.L137
	movq	-1336(%rbp), %rax
	movl	44(%rax), %eax
	cmpl	%eax, -1320(%rbp)
	jge	.L138
	movq	-1304(%rbp), %rax
	movq	(%rax), %rdx
	movq	-1336(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-1336(%rbp), %rax
	movl	24(%rax), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_PointOnSegSide@PLT
	testl	%eax, %eax
	jne	.L138
.L137:
	movq	-1304(%rbp), %rax
	movq	56(%rax), %rax
	testq	%rax, %rax
	je	.L161
	movl	-1308(%rbp), %edx
	movl	-1312(%rbp), %ecx
	movq	-1304(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	R_RenderMaskedSegRange@PLT
	jmp	.L161
.L138:
	movq	-1304(%rbp), %rax
	movl	28(%rax), %eax
	movl	%eax, -1316(%rbp)
	movq	-1336(%rbp), %rax
	movl	32(%rax), %edx
	movq	-1304(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	%eax, %edx
	jl	.L140
	andl	$-2, -1316(%rbp)
.L140:
	movq	-1336(%rbp), %rax
	movl	36(%rax), %edx
	movq	-1304(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	%eax, %edx
	jg	.L141
	andl	$-3, -1316(%rbp)
.L141:
	cmpl	$1, -1316(%rbp)
	jne	.L142
	movl	-1312(%rbp), %eax
	movl	%eax, -1328(%rbp)
	jmp	.L143
.L145:
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-1296(%rbp,%rax,2), %eax
	cmpw	$-2, %ax
	jne	.L144
	movq	-1304(%rbp), %rax
	movq	48(%rax), %rax
	movl	-1328(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %edx
	movl	-1328(%rbp), %eax
	cltq
	movw	%dx, -1296(%rbp,%rax,2)
.L144:
	addl	$1, -1328(%rbp)
.L143:
	movl	-1328(%rbp), %eax
	cmpl	-1308(%rbp), %eax
	jle	.L145
	jmp	.L134
.L142:
	cmpl	$2, -1316(%rbp)
	jne	.L146
	movl	-1312(%rbp), %eax
	movl	%eax, -1328(%rbp)
	jmp	.L147
.L149:
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-656(%rbp,%rax,2), %eax
	cmpw	$-2, %ax
	jne	.L148
	movq	-1304(%rbp), %rax
	movq	40(%rax), %rax
	movl	-1328(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %edx
	movl	-1328(%rbp), %eax
	cltq
	movw	%dx, -656(%rbp,%rax,2)
.L148:
	addl	$1, -1328(%rbp)
.L147:
	movl	-1328(%rbp), %eax
	cmpl	-1308(%rbp), %eax
	jle	.L149
	jmp	.L134
.L146:
	cmpl	$3, -1316(%rbp)
	jne	.L134
	movl	-1312(%rbp), %eax
	movl	%eax, -1328(%rbp)
	jmp	.L150
.L153:
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-1296(%rbp,%rax,2), %eax
	cmpw	$-2, %ax
	jne	.L151
	movq	-1304(%rbp), %rax
	movq	48(%rax), %rax
	movl	-1328(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %edx
	movl	-1328(%rbp), %eax
	cltq
	movw	%dx, -1296(%rbp,%rax,2)
.L151:
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-656(%rbp,%rax,2), %eax
	cmpw	$-2, %ax
	jne	.L152
	movq	-1304(%rbp), %rax
	movq	40(%rax), %rax
	movl	-1328(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %edx
	movl	-1328(%rbp), %eax
	cltq
	movw	%dx, -656(%rbp,%rax,2)
.L152:
	addl	$1, -1328(%rbp)
.L150:
	movl	-1328(%rbp), %eax
	cmpl	-1308(%rbp), %eax
	jle	.L153
	jmp	.L134
.L160:
	nop
	jmp	.L134
.L161:
	nop
.L134:
	subq	$64, -1304(%rbp)
.L131:
	leaq	drawsegs(%rip), %rax
	cmpq	%rax, -1304(%rbp)
	jnb	.L154
	movq	-1336(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -1328(%rbp)
	jmp	.L155
.L158:
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-1296(%rbp,%rax,2), %eax
	cmpw	$-2, %ax
	jne	.L156
	movl	viewheight(%rip), %eax
	movl	%eax, %edx
	movl	-1328(%rbp), %eax
	cltq
	movw	%dx, -1296(%rbp,%rax,2)
.L156:
	movl	-1328(%rbp), %eax
	cltq
	movzwl	-656(%rbp,%rax,2), %eax
	cmpw	$-2, %ax
	jne	.L157
	movl	-1328(%rbp), %eax
	cltq
	movw	$-1, -656(%rbp,%rax,2)
.L157:
	addl	$1, -1328(%rbp)
.L155:
	movq	-1336(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, -1328(%rbp)
	jle	.L158
	leaq	-1296(%rbp), %rax
	movq	%rax, mfloorclip(%rip)
	leaq	-656(%rbp), %rax
	movq	%rax, mceilingclip(%rip)
	movq	-1336(%rbp), %rax
	movl	20(%rax), %edx
	movq	-1336(%rbp), %rax
	movl	16(%rax), %ecx
	movq	-1336(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	R_DrawVisSprite
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L159
	call	__stack_chk_fail@PLT
.L159:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	R_DrawSprite, .-R_DrawSprite
	.globl	R_DrawMasked
	.type	R_DrawMasked, @function
R_DrawMasked:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	call	R_SortVisSprites
	movq	vissprite_p(%rip), %rax
	leaq	vissprites(%rip), %rdx
	cmpq	%rax, %rdx
	jnb	.L163
	movq	8+vsprsortedhead(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L164
.L165:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	R_DrawSprite
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L164:
	leaq	vsprsortedhead(%rip), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L165
.L163:
	movq	ds_p(%rip), %rax
	subq	$64, %rax
	movq	%rax, -8(%rbp)
	jmp	.L166
.L168:
	movq	-8(%rbp), %rax
	movq	56(%rax), %rax
	testq	%rax, %rax
	je	.L167
	movq	-8(%rbp), %rax
	movl	12(%rax), %edx
	movq	-8(%rbp), %rax
	movl	8(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	R_RenderMaskedSegRange@PLT
.L167:
	subq	$64, -8(%rbp)
.L166:
	leaq	drawsegs(%rip), %rax
	cmpq	%rax, -8(%rbp)
	jnb	.L168
	movl	viewangleoffset(%rip), %eax
	testl	%eax, %eax
	jne	.L170
	call	R_DrawPlayerSprites
.L170:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	R_DrawMasked, .-R_DrawMasked
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
