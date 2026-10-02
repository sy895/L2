	.file	"p_switch.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: p_switch.c,v 1.3 1997/01/28 22:08:29 b1 Exp $"
	.globl	alphSwitchList
	.data
	.align 32
	.type	alphSwitchList, @object
	.size	alphSwitchList, 820
alphSwitchList:
	.string	"SW1BRCOM"
	.string	"SW2BRCOM"
	.value	1
	.string	"SW1BRN1"
	.zero	1
	.string	"SW2BRN1"
	.zero	1
	.value	1
	.string	"SW1BRN2"
	.zero	1
	.string	"SW2BRN2"
	.zero	1
	.value	1
	.string	"SW1BRNGN"
	.string	"SW2BRNGN"
	.value	1
	.string	"SW1BROWN"
	.string	"SW2BROWN"
	.value	1
	.string	"SW1COMM"
	.zero	1
	.string	"SW2COMM"
	.zero	1
	.value	1
	.string	"SW1COMP"
	.zero	1
	.string	"SW2COMP"
	.zero	1
	.value	1
	.string	"SW1DIRT"
	.zero	1
	.string	"SW2DIRT"
	.zero	1
	.value	1
	.string	"SW1EXIT"
	.zero	1
	.string	"SW2EXIT"
	.zero	1
	.value	1
	.string	"SW1GRAY"
	.zero	1
	.string	"SW2GRAY"
	.zero	1
	.value	1
	.string	"SW1GRAY1"
	.string	"SW2GRAY1"
	.value	1
	.string	"SW1METAL"
	.string	"SW2METAL"
	.value	1
	.string	"SW1PIPE"
	.zero	1
	.string	"SW2PIPE"
	.zero	1
	.value	1
	.string	"SW1SLAD"
	.zero	1
	.string	"SW2SLAD"
	.zero	1
	.value	1
	.string	"SW1STARG"
	.string	"SW2STARG"
	.value	1
	.string	"SW1STON1"
	.string	"SW2STON1"
	.value	1
	.string	"SW1STON2"
	.string	"SW2STON2"
	.value	1
	.string	"SW1STONE"
	.string	"SW2STONE"
	.value	1
	.string	"SW1STRTN"
	.string	"SW2STRTN"
	.value	1
	.string	"SW1BLUE"
	.zero	1
	.string	"SW2BLUE"
	.zero	1
	.value	2
	.string	"SW1CMT"
	.zero	2
	.string	"SW2CMT"
	.zero	2
	.value	2
	.string	"SW1GARG"
	.zero	1
	.string	"SW2GARG"
	.zero	1
	.value	2
	.string	"SW1GSTON"
	.string	"SW2GSTON"
	.value	2
	.string	"SW1HOT"
	.zero	2
	.string	"SW2HOT"
	.zero	2
	.value	2
	.string	"SW1LION"
	.zero	1
	.string	"SW2LION"
	.zero	1
	.value	2
	.string	"SW1SATYR"
	.string	"SW2SATYR"
	.value	2
	.string	"SW1SKIN"
	.zero	1
	.string	"SW2SKIN"
	.zero	1
	.value	2
	.string	"SW1VINE"
	.zero	1
	.string	"SW2VINE"
	.zero	1
	.value	2
	.string	"SW1WOOD"
	.zero	1
	.string	"SW2WOOD"
	.zero	1
	.value	2
	.string	"SW1PANEL"
	.string	"SW2PANEL"
	.value	3
	.string	"SW1ROCK"
	.zero	1
	.string	"SW2ROCK"
	.zero	1
	.value	3
	.string	"SW1MET2"
	.zero	1
	.string	"SW2MET2"
	.zero	1
	.value	3
	.string	"SW1WDMET"
	.string	"SW2WDMET"
	.value	3
	.string	"SW1BRIK"
	.zero	1
	.string	"SW2BRIK"
	.zero	1
	.value	3
	.string	"SW1MOD1"
	.zero	1
	.string	"SW2MOD1"
	.zero	1
	.value	3
	.string	"SW1ZIM"
	.zero	2
	.string	"SW2ZIM"
	.zero	2
	.value	3
	.string	"SW1STON6"
	.string	"SW2STON6"
	.value	3
	.string	"SW1TEK"
	.zero	2
	.string	"SW2TEK"
	.zero	2
	.value	3
	.string	"SW1MARB"
	.zero	1
	.string	"SW2MARB"
	.zero	1
	.value	3
	.string	"SW1SKULL"
	.string	"SW2SKULL"
	.value	3
	.string	""
	.string	""
	.zero	7
	.string	""
	.string	""
	.zero	7
	.value	0
	.globl	switchlist
	.bss
	.align 32
	.type	switchlist, @object
	.size	switchlist, 400
switchlist:
	.zero	400
	.globl	numswitches
	.align 4
	.type	numswitches, @object
	.size	numswitches, 4
numswitches:
	.zero	4
	.globl	buttonlist
	.align 32
	.type	buttonlist, @object
	.size	buttonlist, 512
buttonlist:
	.zero	512
	.text
	.globl	P_InitSwitchList
	.type	P_InitSwitchList, @function
P_InitSwitchList:
.LFB0:
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
	movl	$1, -20(%rbp)
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jne	.L2
	movl	$2, -20(%rbp)
	jmp	.L3
.L2:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L3
	movl	$3, -20(%rbp)
.L3:
	movl	$0, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L4
.L8:
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	18+alphSwitchList(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	testw	%ax, %ax
	jne	.L5
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, numswitches(%rip)
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	$-1, (%rdx,%rax)
	jmp	.L6
.L5:
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	18+alphSwitchList(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	cwtl
	cmpl	%eax, -20(%rbp)
	jl	.L7
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	leaq	alphSwitchList(%rip), %rdx
	addq	%rdx, %rax
	movl	-24(%rbp), %ebx
	leal	1(%rbx), %edx
	movl	%edx, -24(%rbp)
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	switchlist(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	leaq	alphSwitchList(%rip), %rdx
	addq	%rdx, %rax
	addq	$9, %rax
	movl	-24(%rbp), %ebx
	leal	1(%rbx), %edx
	movl	%edx, -24(%rbp)
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	switchlist(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
.L7:
	addl	$1, -28(%rbp)
.L4:
	cmpl	$49, -28(%rbp)
	jle	.L8
	nop
.L6:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_InitSwitchList, .-P_InitSwitchList
	.section	.rodata
	.align 8
.LC0:
	.string	"P_StartButton: no button slots left!"
	.text
	.globl	P_StartButton
	.type	P_StartButton, @function
P_StartButton:
.LFB1:
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
	movl	$0, -4(%rbp)
	jmp	.L10
.L13:
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L11
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	buttonlist(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	%rax, -24(%rbp)
	je	.L17
.L11:
	addl	$1, -4(%rbp)
.L10:
	cmpl	$15, -4(%rbp)
	jle	.L13
	movl	$0, -4(%rbp)
	jmp	.L14
.L16:
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L15
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rcx
	leaq	buttonlist(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, (%rcx,%rdx)
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rcx
	leaq	8+buttonlist(%rip), %rdx
	movl	-28(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rcx
	leaq	12+buttonlist(%rip), %rdx
	movl	-32(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rcx
	leaq	16+buttonlist(%rip), %rdx
	movl	-36(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	leaq	48(%rax), %rcx
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	24+buttonlist(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	jmp	.L9
.L15:
	addl	$1, -4(%rbp)
.L14:
	cmpl	$15, -4(%rbp)
	jle	.L16
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L9
.L17:
	nop
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_StartButton, .-P_StartButton
	.globl	P_ChangeSwitchTexture
	.type	P_ChangeSwitchTexture, @function
P_ChangeSwitchTexture:
.LFB2:
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
	cmpl	$0, -44(%rbp)
	jne	.L19
	movq	-40(%rbp), %rax
	movw	$0, 26(%rax)
.L19:
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -12(%rbp)
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	12(%rax), %eax
	cwtl
	movl	%eax, -8(%rbp)
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	10(%rax), %eax
	cwtl
	movl	%eax, -4(%rbp)
	movl	$23, -16(%rbp)
	movq	-40(%rbp), %rax
	movzwl	26(%rax), %eax
	cmpw	$11, %ax
	jne	.L20
	movl	$24, -16(%rbp)
.L20:
	movl	$0, -20(%rbp)
	jmp	.L21
.L29:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -12(%rbp)
	jne	.L22
	movq	24+buttonlist(%rip), %rax
	movl	-16(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	-20(%rbp), %eax
	xorl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	%esi, %edx
	movw	%dx, 8(%rax)
	cmpl	$0, -44(%rbp)
	je	.L30
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	$35, %ecx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_StartButton
	jmp	.L30
.L22:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -8(%rbp)
	jne	.L25
	movq	24+buttonlist(%rip), %rax
	movl	-16(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	-20(%rbp), %eax
	xorl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	%esi, %edx
	movw	%dx, 12(%rax)
	cmpl	$0, -44(%rbp)
	je	.L31
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	$35, %ecx
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_StartButton
	jmp	.L31
.L25:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -4(%rbp)
	jne	.L27
	movq	24+buttonlist(%rip), %rax
	movl	-16(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	-20(%rbp), %eax
	xorl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	sides(%rip), %rcx
	movq	-40(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	%esi, %edx
	movw	%dx, 10(%rax)
	cmpl	$0, -44(%rbp)
	je	.L32
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	switchlist(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	$35, %ecx
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_StartButton
	jmp	.L32
.L27:
	addl	$1, -20(%rbp)
.L21:
	movl	numswitches(%rip), %eax
	addl	%eax, %eax
	cmpl	%eax, -20(%rbp)
	jl	.L29
	jmp	.L18
.L30:
	nop
	jmp	.L18
.L31:
	nop
	jmp	.L18
.L32:
	nop
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_ChangeSwitchTexture, .-P_ChangeSwitchTexture
	.globl	P_UseSpecialLine
	.type	P_UseSpecialLine, @function
P_UseSpecialLine:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	%edx, -20(%rbp)
	cmpl	$0, -20(%rbp)
	je	.L34
	movq	-16(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$124, %eax
	je	.L141
	movl	$0, %eax
	jmp	.L36
.L141:
	nop
.L34:
	movq	-8(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L37
	movq	-16(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$32, %eax
	testl	%eax, %eax
	je	.L38
	movl	$0, %eax
	jmp	.L36
.L38:
	movq	-16(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$1, %eax
	je	.L142
	testl	%eax, %eax
	jle	.L40
	subl	$32, %eax
	cmpl	$2, %eax
	jbe	.L142
.L40:
	movl	$0, %eax
	jmp	.L36
.L142:
	nop
.L37:
	movq	-16(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$140, %eax
	je	.L41
	cmpl	$140, %eax
	jg	.L42
	cmpl	$139, %eax
	je	.L43
	cmpl	$139, %eax
	jg	.L42
	cmpl	$138, %eax
	je	.L44
	cmpl	$138, %eax
	jg	.L42
	cmpl	$131, %eax
	jg	.L45
	testl	%eax, %eax
	jg	.L46
	jmp	.L42
.L95:
	subl	$132, %eax
	movl	$1, %edx
	movl	%eax, %ecx
	salq	%cl, %rdx
	movq	%rdx, %rax
	movq	%rax, %rdx
	andl	$42, %edx
	testq	%rdx, %rdx
	setne	%dl
	testb	%dl, %dl
	jne	.L47
	movq	%rax, %rdx
	andl	$20, %edx
	testq	%rdx, %rdx
	setne	%dl
	testb	%dl, %dl
	jne	.L48
	andl	$1, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	jne	.L49
	jmp	.L42
.L46:
	cmpl	$131, %eax
	ja	.L42
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L51(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L51(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L51:
	.long	.L42-.L51
	.long	.L55-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L94-.L51
	.long	.L42-.L51
	.long	.L93-.L51
	.long	.L42-.L51
	.long	.L92-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L91-.L51
	.long	.L90-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L89-.L51
	.long	.L42-.L51
	.long	.L88-.L51
	.long	.L87-.L51
	.long	.L42-.L51
	.long	.L86-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L55-.L51
	.long	.L55-.L51
	.long	.L55-.L51
	.long	.L85-.L51
	.long	.L42-.L51
	.long	.L55-.L51
	.long	.L55-.L51
	.long	.L55-.L51
	.long	.L55-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L84-.L51
	.long	.L83-.L51
	.long	.L82-.L51
	.long	.L42-.L51
	.long	.L81-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L80-.L51
	.long	.L79-.L51
	.long	.L78-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L77-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L76-.L51
	.long	.L75-.L51
	.long	.L74-.L51
	.long	.L73-.L51
	.long	.L72-.L51
	.long	.L71-.L51
	.long	.L70-.L51
	.long	.L69-.L51
	.long	.L68-.L51
	.long	.L67-.L51
	.long	.L66-.L51
	.long	.L65-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L48-.L51
	.long	.L42-.L51
	.long	.L64-.L51
	.long	.L63-.L51
	.long	.L62-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L61-.L51
	.long	.L60-.L51
	.long	.L59-.L51
	.long	.L58-.L51
	.long	.L57-.L51
	.long	.L56-.L51
	.long	.L55-.L51
	.long	.L55-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L54-.L51
	.long	.L53-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L52-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L42-.L51
	.long	.L50-.L51
	.text
.L45:
	cmpl	$137, %eax
	jg	.L42
	cmpl	$132, %eax
	jge	.L95
	jmp	.L42
.L55:
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	EV_VerticalDoor@PLT
	jmp	.L42
.L94:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_BuildStairs@PLT
	testl	%eax, %eax
	je	.L143
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L143
.L93:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	EV_DoDonut@PLT
	testl	%eax, %eax
	je	.L144
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L144
.L92:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	call	G_ExitLevel@PLT
	jmp	.L42
.L91:
	movq	-16(%rbp), %rax
	movl	$32, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L145
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L145
.L90:
	movq	-16(%rbp), %rax
	movl	$24, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L146
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L146
.L89:
	movq	-16(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L147
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L147
.L88:
	movq	-16(%rbp), %rax
	movl	$0, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L148
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L148
.L87:
	movq	-16(%rbp), %rax
	movl	$0, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L149
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L149
.L86:
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L150
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L150
.L85:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L151
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L151
.L84:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	testl	%eax, %eax
	je	.L152
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L152
.L65:
	movq	-16(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L153
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L153
.L80:
	movq	-16(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	testl	%eax, %eax
	je	.L154
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L154
.L79:
	movq	-16(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L155
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L155
.L78:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	call	G_SecretExitLevel@PLT
	jmp	.L42
.L77:
	movq	-16(%rbp), %rax
	movl	$9, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L156
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L156
.L64:
	movq	-16(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L157
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L157
.L63:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L158
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L158
.L62:
	movq	-16(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L159
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L159
.L61:
	movq	-16(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L160
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L160
.L60:
	movq	-16(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L161
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L161
.L59:
	movq	-16(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L162
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L162
.L54:
	movq	-16(%rbp), %rax
	movl	$0, %edx
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L163
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L163
.L52:
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_BuildStairs@PLT
	testl	%eax, %eax
	je	.L164
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L164
.L50:
	movq	-16(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L165
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L165
.L47:
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoLockedDoor@PLT
	testl	%eax, %eax
	je	.L166
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L166
.L41:
	movq	-16(%rbp), %rax
	movl	$12, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L167
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L167
.L83:
	movq	-16(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L168
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L168
.L82:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	testl	%eax, %eax
	je	.L169
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L169
.L81:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L170
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L170
.L76:
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L171
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L171
.L75:
	movq	-16(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L172
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L172
.L74:
	movq	-16(%rbp), %rax
	movl	$1, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L173
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L173
.L73:
	movq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L174
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L174
.L72:
	movq	-16(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L175
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L175
.L70:
	movq	-16(%rbp), %rax
	movl	$24, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L176
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L176
.L69:
	movq	-16(%rbp), %rax
	movl	$32, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L177
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L177
.L71:
	movq	-16(%rbp), %rax
	movl	$9, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L178
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L178
.L68:
	movq	-16(%rbp), %rax
	movl	$0, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L179
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L179
.L67:
	movq	-16(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L180
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L180
.L66:
	movq	-16(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L181
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L181
.L58:
	movq	-16(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L182
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L182
.L57:
	movq	-16(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L183
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L183
.L56:
	movq	-16(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	testl	%eax, %eax
	je	.L184
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L184
.L53:
	movq	-16(%rbp), %rax
	movl	$0, %edx
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	testl	%eax, %eax
	je	.L185
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L185
.L49:
	movq	-16(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	testl	%eax, %eax
	je	.L186
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L186
.L48:
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoLockedDoor@PLT
	testl	%eax, %eax
	je	.L187
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L187
.L44:
	movq	-16(%rbp), %rax
	movl	$255, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L42
.L43:
	movq	-16(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	movq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture
	jmp	.L42
.L143:
	nop
	jmp	.L42
.L144:
	nop
	jmp	.L42
.L145:
	nop
	jmp	.L42
.L146:
	nop
	jmp	.L42
.L147:
	nop
	jmp	.L42
.L148:
	nop
	jmp	.L42
.L149:
	nop
	jmp	.L42
.L150:
	nop
	jmp	.L42
.L151:
	nop
	jmp	.L42
.L152:
	nop
	jmp	.L42
.L153:
	nop
	jmp	.L42
.L154:
	nop
	jmp	.L42
.L155:
	nop
	jmp	.L42
.L156:
	nop
	jmp	.L42
.L157:
	nop
	jmp	.L42
.L158:
	nop
	jmp	.L42
.L159:
	nop
	jmp	.L42
.L160:
	nop
	jmp	.L42
.L161:
	nop
	jmp	.L42
.L162:
	nop
	jmp	.L42
.L163:
	nop
	jmp	.L42
.L164:
	nop
	jmp	.L42
.L165:
	nop
	jmp	.L42
.L166:
	nop
	jmp	.L42
.L167:
	nop
	jmp	.L42
.L168:
	nop
	jmp	.L42
.L169:
	nop
	jmp	.L42
.L170:
	nop
	jmp	.L42
.L171:
	nop
	jmp	.L42
.L172:
	nop
	jmp	.L42
.L173:
	nop
	jmp	.L42
.L174:
	nop
	jmp	.L42
.L175:
	nop
	jmp	.L42
.L176:
	nop
	jmp	.L42
.L177:
	nop
	jmp	.L42
.L178:
	nop
	jmp	.L42
.L179:
	nop
	jmp	.L42
.L180:
	nop
	jmp	.L42
.L181:
	nop
	jmp	.L42
.L182:
	nop
	jmp	.L42
.L183:
	nop
	jmp	.L42
.L184:
	nop
	jmp	.L42
.L185:
	nop
	jmp	.L42
.L186:
	nop
	jmp	.L42
.L187:
	nop
.L42:
	movl	$1, %eax
.L36:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_UseSpecialLine, .-P_UseSpecialLine
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
