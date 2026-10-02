	.file	"p_spec.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: p_spec.c,v 1.6 1997/02/03 22:45:12 b1 Exp $"
	.globl	animdefs
	.data
	.align 32
	.type	animdefs, @object
	.size	animdefs, 644
animdefs:
	.long	0
	.string	"NUKAGE3"
	.zero	1
	.string	"NUKAGE1"
	.zero	1
	.zero	2
	.long	8
	.long	0
	.string	"FWATER4"
	.zero	1
	.string	"FWATER1"
	.zero	1
	.zero	2
	.long	8
	.long	0
	.string	"SWATER4"
	.zero	1
	.string	"SWATER1"
	.zero	1
	.zero	2
	.long	8
	.long	0
	.string	"LAVA4"
	.zero	3
	.string	"LAVA1"
	.zero	3
	.zero	2
	.long	8
	.long	0
	.string	"BLOOD3"
	.zero	2
	.string	"BLOOD1"
	.zero	2
	.zero	2
	.long	8
	.long	0
	.string	"RROCK08"
	.zero	1
	.string	"RROCK05"
	.zero	1
	.zero	2
	.long	8
	.long	0
	.string	"SLIME04"
	.zero	1
	.string	"SLIME01"
	.zero	1
	.zero	2
	.long	8
	.long	0
	.string	"SLIME08"
	.zero	1
	.string	"SLIME05"
	.zero	1
	.zero	2
	.long	8
	.long	0
	.string	"SLIME12"
	.zero	1
	.string	"SLIME09"
	.zero	1
	.zero	2
	.long	8
	.long	1
	.string	"BLODGR4"
	.zero	1
	.string	"BLODGR1"
	.zero	1
	.zero	2
	.long	8
	.long	1
	.string	"SLADRIP3"
	.string	"SLADRIP1"
	.zero	2
	.long	8
	.long	1
	.string	"BLODRIP4"
	.string	"BLODRIP1"
	.zero	2
	.long	8
	.long	1
	.string	"FIREWALL"
	.string	"FIREWALA"
	.zero	2
	.long	8
	.long	1
	.string	"GSTFONT3"
	.string	"GSTFONT1"
	.zero	2
	.long	8
	.long	1
	.string	"FIRELAVA"
	.string	"FIRELAV3"
	.zero	2
	.long	8
	.long	1
	.string	"FIREMAG3"
	.string	"FIREMAG1"
	.zero	2
	.long	8
	.long	1
	.string	"FIREBLU2"
	.string	"FIREBLU1"
	.zero	2
	.long	8
	.long	1
	.string	"ROCKRED3"
	.string	"ROCKRED1"
	.zero	2
	.long	8
	.long	1
	.string	"BFALL4"
	.zero	2
	.string	"BFALL1"
	.zero	2
	.zero	2
	.long	8
	.long	1
	.string	"SFALL4"
	.zero	2
	.string	"SFALL1"
	.zero	2
	.zero	2
	.long	8
	.long	1
	.string	"WFALL4"
	.zero	2
	.string	"WFALL1"
	.zero	2
	.zero	2
	.long	8
	.long	1
	.string	"DBRAIN4"
	.zero	1
	.string	"DBRAIN1"
	.zero	1
	.zero	2
	.long	8
	.long	-1
	.zero	24
	.globl	anims
	.bss
	.align 32
	.type	anims, @object
	.size	anims, 640
anims:
	.zero	640
	.globl	lastanim
	.align 8
	.type	lastanim, @object
	.size	lastanim, 8
lastanim:
	.zero	8
	.section	.rodata
	.align 8
.LC0:
	.string	"P_InitPicAnims: bad cycle from %s to %s"
	.text
	.globl	P_InitPicAnims
	.type	P_InitPicAnims, @function
P_InitPicAnims:
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
	leaq	anims(%rip), %rax
	movq	%rax, lastanim(%rip)
	movl	$0, -20(%rbp)
	jmp	.L2
.L9:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	animdefs(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L3
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$13, %rax
	movq	%rax, %rdi
	call	R_CheckTextureNumForName@PLT
	cmpl	$-1, %eax
	je	.L10
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movq	lastanim(%rip), %rbx
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, 4(%rbx)
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$13, %rax
	movq	lastanim(%rip), %rbx
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, 8(%rbx)
	jmp	.L6
.L3:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$13, %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	cmpl	$-1, %eax
	je	.L11
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movq	lastanim(%rip), %rbx
	movq	%rax, %rdi
	call	R_FlatNumForName@PLT
	movl	%eax, 4(%rbx)
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$13, %rax
	movq	lastanim(%rip), %rbx
	movq	%rax, %rdi
	call	R_FlatNumForName@PLT
	movl	%eax, 8(%rbx)
.L6:
	movq	lastanim(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	animdefs(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, (%rcx)
	movq	lastanim(%rip), %rax
	movl	4(%rax), %edx
	movq	lastanim(%rip), %rax
	movl	8(%rax), %eax
	subl	%eax, %edx
	movq	lastanim(%rip), %rax
	addl	$1, %edx
	movl	%edx, 12(%rax)
	movq	lastanim(%rip), %rax
	movl	12(%rax), %eax
	cmpl	$1, %eax
	jg	.L8
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	leaq	4(%rax), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	leaq	animdefs(%rip), %rdx
	addq	%rdx, %rax
	addq	$13, %rax
	movq	%rcx, %rdx
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L8:
	movq	lastanim(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	24+animdefs(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, 16(%rcx)
	movq	lastanim(%rip), %rax
	addq	$20, %rax
	movq	%rax, lastanim(%rip)
	jmp	.L5
.L10:
	nop
	jmp	.L5
.L11:
	nop
.L5:
	addl	$1, -20(%rbp)
.L2:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	leaq	animdefs(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$-1, %eax
	jne	.L9
	nop
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_InitPicAnims, .-P_InitPicAnims
	.globl	getSide
	.type	getSide, @function
getSide:
.LFB7:
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
	movq	sides(%rip), %rcx
	movq	sectors(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	120(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	getSide, .-getSide
	.globl	getSector
	.type	getSector, @function
getSector:
.LFB8:
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
	movq	sides(%rip), %rcx
	movq	sectors(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	120(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	getSector, .-getSector
	.globl	twoSided
	.type	twoSided, @function
twoSided:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movq	sectors(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	120(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	twoSided, .-twoSided
	.globl	getNextSector
	.type	getNextSector, @function
getNextSector:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	jne	.L19
	movl	$0, %eax
	jmp	.L20
.L19:
	movq	-8(%rbp), %rax
	movq	56(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L21
	movq	-8(%rbp), %rax
	movq	64(%rax), %rax
	jmp	.L20
.L21:
	movq	-8(%rbp), %rax
	movq	56(%rax), %rax
.L20:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	getNextSector, .-getNextSector
	.globl	P_FindLowestFloorSurrounding
	.type	P_FindLowestFloorSurrounding, @function
P_FindLowestFloorSurrounding:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L23
.L26:
	movq	-40(%rbp), %rax
	movq	120(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L28
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L25
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L25
.L28:
	nop
.L25:
	addl	$1, -24(%rbp)
.L23:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L26
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	P_FindLowestFloorSurrounding, .-P_FindLowestFloorSurrounding
	.globl	P_FindHighestFloorSurrounding
	.type	P_FindHighestFloorSurrounding, @function
P_FindHighestFloorSurrounding:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40, %rsp
	movq	%rdi, -40(%rbp)
	movl	$-32768000, -20(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L30
.L33:
	movq	-40(%rbp), %rax
	movq	120(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L35
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L32
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L32
.L35:
	nop
.L32:
	addl	$1, -24(%rbp)
.L30:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L33
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	P_FindHighestFloorSurrounding, .-P_FindHighestFloorSurrounding
	.section	.rodata
	.align 8
.LC1:
	.string	"Sector with more than 20 adjoining sectors\n"
	.text
	.globl	P_FindNextHighestFloor
	.type	P_FindNextHighestFloor, @function
P_FindNextHighestFloor:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%rdi, -136(%rbp)
	movl	%esi, -140(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	-140(%rbp), %eax
	movl	%eax, -116(%rbp)
	movl	$0, -128(%rbp)
	movl	$0, -124(%rbp)
	jmp	.L37
.L42:
	movq	-136(%rbp), %rax
	movq	120(%rax), %rax
	movl	-128(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -112(%rbp)
	movq	-136(%rbp), %rdx
	movq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -104(%rbp)
	cmpq	$0, -104(%rbp)
	je	.L50
	movq	-104(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -116(%rbp)
	jge	.L40
	movl	-124(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -124(%rbp)
	movq	-104(%rbp), %rdx
	movl	(%rdx), %edx
	cltq
	movl	%edx, -96(%rbp,%rax,4)
.L40:
	cmpl	$19, -124(%rbp)
	jle	.L39
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$43, %edx
	movl	$1, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	jmp	.L41
.L50:
	nop
.L39:
	addl	$1, -128(%rbp)
.L37:
	movq	-136(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -128(%rbp)
	jl	.L42
.L41:
	cmpl	$0, -124(%rbp)
	jne	.L43
	movl	-140(%rbp), %eax
	jmp	.L48
.L43:
	movl	-96(%rbp), %eax
	movl	%eax, -120(%rbp)
	movl	$1, -128(%rbp)
	jmp	.L45
.L47:
	movl	-128(%rbp), %eax
	cltq
	movl	-96(%rbp,%rax,4), %eax
	cmpl	%eax, -120(%rbp)
	jle	.L46
	movl	-128(%rbp), %eax
	cltq
	movl	-96(%rbp,%rax,4), %eax
	movl	%eax, -120(%rbp)
.L46:
	addl	$1, -128(%rbp)
.L45:
	movl	-128(%rbp), %eax
	cmpl	-124(%rbp), %eax
	jl	.L47
	movl	-120(%rbp), %eax
.L48:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L49
	call	__stack_chk_fail@PLT
.L49:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	P_FindNextHighestFloor, .-P_FindNextHighestFloor
	.globl	P_FindLowestCeilingSurrounding
	.type	P_FindLowestCeilingSurrounding, @function
P_FindLowestCeilingSurrounding:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40, %rsp
	movq	%rdi, -40(%rbp)
	movl	$2147483647, -20(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L52
.L55:
	movq	-40(%rbp), %rax
	movq	120(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L57
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L54
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L54
.L57:
	nop
.L54:
	addl	$1, -24(%rbp)
.L52:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L55
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	P_FindLowestCeilingSurrounding, .-P_FindLowestCeilingSurrounding
	.globl	P_FindHighestCeilingSurrounding
	.type	P_FindHighestCeilingSurrounding, @function
P_FindHighestCeilingSurrounding:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40, %rsp
	movq	%rdi, -40(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L59
.L62:
	movq	-40(%rbp), %rax
	movq	120(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L64
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L61
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L61
.L64:
	nop
.L61:
	addl	$1, -24(%rbp)
.L59:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L62
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	P_FindHighestCeilingSurrounding, .-P_FindHighestCeilingSurrounding
	.globl	P_FindSectorFromLineTag
	.type	P_FindSectorFromLineTag, @function
P_FindSectorFromLineTag:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.L66
.L69:
	movq	sectors(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movzwl	16(%rax), %edx
	movq	-24(%rbp), %rax
	movzwl	28(%rax), %eax
	cmpw	%ax, %dx
	jne	.L67
	movl	-4(%rbp), %eax
	jmp	.L68
.L67:
	addl	$1, -4(%rbp)
.L66:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L69
	movl	$-1, %eax
.L68:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	P_FindSectorFromLineTag, .-P_FindSectorFromLineTag
	.globl	P_FindMinSurroundingLight
	.type	P_FindMinSurroundingLight, @function
P_FindMinSurroundingLight:
.LFB17:
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
	movl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L71
.L74:
	movq	-40(%rbp), %rax
	movq	120(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L76
	movq	-8(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -20(%rbp)
	jle	.L73
	movq	-8(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	movl	%eax, -20(%rbp)
	jmp	.L73
.L76:
	nop
.L73:
	addl	$1, -24(%rbp)
.L71:
	movq	-40(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L74
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	P_FindMinSurroundingLight, .-P_FindMinSurroundingLight
	.globl	P_CrossSpecialLine
	.type	P_CrossSpecialLine, @function
P_CrossSpecialLine:
.LFB18:
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
	movq	lines(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L78
	movq	-32(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$16, %eax
	je	.L163
	cmpl	$16, %eax
	jb	.L164
	subl	$31, %eax
	cmpl	$4, %eax
	jbe	.L163
.L164:
	nop
	movl	$0, -12(%rbp)
	movq	-8(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$39, %eax
	jg	.L82
	cmpl	$4, %eax
	jge	.L83
	jmp	.L84
.L86:
	subl	$88, %eax
	movabsq	$412316860929, %rdx
	movl	%eax, %ecx
	shrq	%cl, %rdx
	movq	%rdx, %rax
	andl	$1, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	jne	.L85
	jmp	.L84
.L83:
	movl	%eax, %edx
	movabsq	$549755814928, %rax
	movl	%edx, %ecx
	shrq	%cl, %rax
	andl	$1, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	jne	.L85
	jmp	.L84
.L82:
	cmpl	$126, %eax
	jg	.L84
	cmpl	$88, %eax
	jge	.L86
	jmp	.L84
.L85:
	movl	$1, -12(%rbp)
	nop
.L84:
	cmpl	$0, -12(%rbp)
	je	.L165
.L78:
	movq	-8(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$141, %eax
	ja	.L77
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L88(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L88(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L88:
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L159-.L88
	.long	.L158-.L88
	.long	.L157-.L88
	.long	.L156-.L88
	.long	.L155-.L88
	.long	.L77-.L88
	.long	.L154-.L88
	.long	.L77-.L88
	.long	.L153-.L88
	.long	.L77-.L88
	.long	.L152-.L88
	.long	.L151-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L150-.L88
	.long	.L149-.L88
	.long	.L77-.L88
	.long	.L148-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L147-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L146-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L145-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L144-.L88
	.long	.L143-.L88
	.long	.L142-.L88
	.long	.L141-.L88
	.long	.L140-.L88
	.long	.L139-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L138-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L137-.L88
	.long	.L136-.L88
	.long	.L135-.L88
	.long	.L77-.L88
	.long	.L134-.L88
	.long	.L133-.L88
	.long	.L132-.L88
	.long	.L131-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L130-.L88
	.long	.L129-.L88
	.long	.L128-.L88
	.long	.L127-.L88
	.long	.L126-.L88
	.long	.L125-.L88
	.long	.L77-.L88
	.long	.L124-.L88
	.long	.L123-.L88
	.long	.L122-.L88
	.long	.L121-.L88
	.long	.L120-.L88
	.long	.L119-.L88
	.long	.L77-.L88
	.long	.L118-.L88
	.long	.L117-.L88
	.long	.L116-.L88
	.long	.L115-.L88
	.long	.L114-.L88
	.long	.L113-.L88
	.long	.L112-.L88
	.long	.L111-.L88
	.long	.L110-.L88
	.long	.L109-.L88
	.long	.L108-.L88
	.long	.L107-.L88
	.long	.L106-.L88
	.long	.L77-.L88
	.long	.L105-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L104-.L88
	.long	.L103-.L88
	.long	.L102-.L88
	.long	.L101-.L88
	.long	.L100-.L88
	.long	.L99-.L88
	.long	.L98-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L97-.L88
	.long	.L96-.L88
	.long	.L95-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L94-.L88
	.long	.L93-.L88
	.long	.L92-.L88
	.long	.L77-.L88
	.long	.L91-.L88
	.long	.L90-.L88
	.long	.L89-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L77-.L88
	.long	.L87-.L88
	.text
.L159:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L158:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L157:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L156:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L155:
	movq	-8(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L154:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_BuildStairs@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L153:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L152:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L151:
	movq	-8(%rbp), %rax
	movl	$255, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L150:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L149:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	EV_StartLightStrobing@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L148:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L147:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L146:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L145:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L144:
	movq	-8(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L143:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L142:
	movq	-8(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L141:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L140:
	movq	-32(%rbp), %rdx
	movl	-24(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	EV_Teleport@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L139:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L138:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L137:
	call	G_ExitLevel@PLT
	jmp	.L77
.L136:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L135:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	EV_StopPlat@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L134:
	movq	-8(%rbp), %rax
	movl	$9, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L133:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	EV_CeilingCrushStop@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L132:
	movq	-8(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L131:
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L104:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	EV_TurnTagLightsOff@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L100:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L99:
	movq	-8(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L105:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_BuildStairs@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L98:
	movq	-8(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L97:
	movq	-8(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L95:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L94:
	call	G_SecretExitLevel@PLT
	jmp	.L77
.L93:
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L166
	movq	-32(%rbp), %rdx
	movl	-24(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	EV_Teleport@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L166
.L89:
	movq	-8(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L87:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	movq	-8(%rbp), %rax
	movw	$0, 26(%rax)
	jmp	.L77
.L130:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	jmp	.L77
.L129:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	jmp	.L77
.L128:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	EV_CeilingCrushStop@PLT
	jmp	.L77
.L127:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L126:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L125:
	movq	-8(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoCeiling@PLT
	jmp	.L77
.L124:
	movq	-8(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	jmp	.L77
.L123:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	jmp	.L77
.L122:
	movq	-8(%rbp), %rax
	movl	$255, %esi
	movq	%rax, %rdi
	call	EV_LightTurnOn@PLT
	jmp	.L77
.L121:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L120:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L119:
	movq	-8(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L118:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L117:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	jmp	.L77
.L116:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	jmp	.L77
.L115:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	EV_StopPlat@PLT
	jmp	.L77
.L114:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L113:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L112:
	movq	-8(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L111:
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L110:
	movq	-8(%rbp), %rax
	movl	$9, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L109:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	jmp	.L77
.L108:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L107:
	movq	-32(%rbp), %rdx
	movl	-24(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	EV_Teleport@PLT
	jmp	.L77
.L106:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L103:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L102:
	movq	-8(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L101:
	movq	-8(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	jmp	.L77
.L96:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	jmp	.L77
.L92:
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L167
	movq	-32(%rbp), %rdx
	movl	-24(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	EV_Teleport@PLT
	jmp	.L167
.L91:
	movq	-8(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L90:
	movq	-8(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	jmp	.L77
.L163:
	nop
	jmp	.L77
.L165:
	nop
	jmp	.L77
.L166:
	nop
	jmp	.L77
.L167:
	nop
.L77:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	P_CrossSpecialLine, .-P_CrossSpecialLine
	.globl	P_ShootSpecialLine
	.type	P_ShootSpecialLine, @function
P_ShootSpecialLine:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	jne	.L169
	movl	$0, -4(%rbp)
	movq	-32(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$46, %eax
	jne	.L170
	movl	$1, -4(%rbp)
	nop
.L170:
	cmpl	$0, -4(%rbp)
	je	.L175
.L169:
	movq	-32(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$47, %eax
	je	.L172
	cmpl	$47, %eax
	jg	.L168
	cmpl	$24, %eax
	je	.L173
	cmpl	$46, %eax
	je	.L174
	jmp	.L168
.L173:
	movq	-32(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoFloor@PLT
	movq	-32(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture@PLT
	jmp	.L168
.L174:
	movq	-32(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoDoor@PLT
	movq	-32(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture@PLT
	jmp	.L168
.L172:
	movq	-32(%rbp), %rax
	movl	$0, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	EV_DoPlat@PLT
	movq	-32(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_ChangeSwitchTexture@PLT
	jmp	.L168
.L175:
	nop
.L168:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	P_ShootSpecialLine, .-P_ShootSpecialLine
	.section	.rodata
	.align 8
.LC2:
	.string	"P_PlayerInSpecialSector: unknown special %i"
	.text
	.globl	P_PlayerInSpecialSector
	.type	P_PlayerInSpecialSector, @function
P_PlayerInSpecialSector:
.LFB20:
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
	movq	(%rax), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L192
	movq	-8(%rbp), %rax
	movzwl	14(%rax), %eax
	cwtl
	subl	$4, %eax
	cmpl	$12, %eax
	ja	.L179
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L181(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L181(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L181:
	.long	.L180-.L181
	.long	.L185-.L181
	.long	.L179-.L181
	.long	.L184-.L181
	.long	.L179-.L181
	.long	.L183-.L181
	.long	.L179-.L181
	.long	.L182-.L181
	.long	.L179-.L181
	.long	.L179-.L181
	.long	.L179-.L181
	.long	.L179-.L181
	.long	.L180-.L181
	.text
.L185:
	movq	-24(%rbp), %rax
	movl	60(%rax), %eax
	testl	%eax, %eax
	jne	.L193
	movl	leveltime(%rip), %eax
	andl	$31, %eax
	testl	%eax, %eax
	jne	.L193
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$10, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L193
.L184:
	movq	-24(%rbp), %rax
	movl	60(%rax), %eax
	testl	%eax, %eax
	jne	.L194
	movl	leveltime(%rip), %eax
	andl	$31, %eax
	testl	%eax, %eax
	jne	.L194
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$5, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L194
.L180:
	movq	-24(%rbp), %rax
	movl	60(%rax), %eax
	testl	%eax, %eax
	je	.L188
	call	P_Random@PLT
	cmpl	$4, %eax
	jg	.L195
.L188:
	movl	leveltime(%rip), %eax
	andl	$31, %eax
	testl	%eax, %eax
	jne	.L195
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$20, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L195
.L183:
	movq	-24(%rbp), %rax
	movl	216(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 216(%rax)
	movq	-8(%rbp), %rax
	movw	$0, 14(%rax)
	jmp	.L176
.L182:
	movq	-24(%rbp), %rax
	movl	200(%rax), %eax
	andl	$-3, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 200(%rax)
	movl	leveltime(%rip), %eax
	andl	$31, %eax
	testl	%eax, %eax
	jne	.L190
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$20, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
.L190:
	movq	-24(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	$10, %eax
	jg	.L196
	call	G_ExitLevel@PLT
	jmp	.L196
.L179:
	movq	-8(%rbp), %rax
	movzwl	14(%rax), %eax
	cwtl
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L176
.L192:
	nop
	jmp	.L176
.L193:
	nop
	jmp	.L176
.L194:
	nop
	jmp	.L176
.L195:
	nop
	jmp	.L176
.L196:
	nop
.L176:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	P_PlayerInSpecialSector, .-P_PlayerInSpecialSector
	.globl	levelTimer
	.bss
	.align 4
	.type	levelTimer, @object
	.size	levelTimer, 4
levelTimer:
	.zero	4
	.globl	levelTimeCount
	.align 4
	.type	levelTimeCount, @object
	.size	levelTimeCount, 4
levelTimeCount:
	.zero	4
	.text
	.globl	P_UpdateSpecials
	.type	P_UpdateSpecials, @function
P_UpdateSpecials:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	levelTimer(%rip), %eax
	cmpl	$1, %eax
	jne	.L198
	movl	levelTimeCount(%rip), %eax
	subl	$1, %eax
	movl	%eax, levelTimeCount(%rip)
	movl	levelTimeCount(%rip), %eax
	testl	%eax, %eax
	jne	.L198
	call	G_ExitLevel@PLT
.L198:
	leaq	anims(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L199
.L204:
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, -24(%rbp)
	jmp	.L200
.L203:
	movq	-16(%rbp), %rax
	movl	8(%rax), %ecx
	movl	leveltime(%rip), %eax
	movq	-16(%rbp), %rdx
	movl	16(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, %edx
	movl	-24(%rbp), %eax
	leal	(%rdx,%rax), %esi
	movq	-16(%rbp), %rax
	movl	12(%rax), %edi
	movl	%esi, %eax
	cltd
	idivl	%edi
	movl	%edx, %esi
	movl	%esi, %eax
	addl	%ecx, %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L201
	movq	texturetranslation(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, (%rdx)
	jmp	.L202
.L201:
	movq	flattranslation(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, (%rdx)
.L202:
	addl	$1, -24(%rbp)
.L200:
	movq	-16(%rbp), %rax
	movl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movl	12(%rax), %eax
	addl	%edx, %eax
	cmpl	%eax, -24(%rbp)
	jl	.L203
	addq	$20, -16(%rbp)
.L199:
	movq	lastanim(%rip), %rax
	cmpq	%rax, -16(%rbp)
	jb	.L204
	movl	$0, -24(%rbp)
	jmp	.L205
.L207:
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	linespeciallist(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$48, %eax
	jne	.L206
	movq	sides(%rip), %rcx
	movq	-8(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	(%rax), %ecx
	movq	sides(%rip), %rsi
	movq	-8(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	leal	65536(%rcx), %edx
	movl	%edx, (%rax)
	nop
.L206:
	addl	$1, -24(%rbp)
.L205:
	movzwl	numlinespecials(%rip), %eax
	cwtl
	cmpl	%eax, -24(%rbp)
	jl	.L207
	movl	$0, -24(%rbp)
	jmp	.L208
.L214:
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L209
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	-1(%rax), %ecx
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+buttonlist(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L209
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	8+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$2, %eax
	je	.L210
	cmpl	$2, %eax
	ja	.L211
	testl	%eax, %eax
	je	.L212
	cmpl	$1, %eax
	je	.L213
	jmp	.L211
.L212:
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	12+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	sides(%rip), %rcx
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	buttonlist(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	%esi, %edx
	movw	%dx, 8(%rax)
	jmp	.L211
.L213:
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	12+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	sides(%rip), %rcx
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	buttonlist(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	%esi, %edx
	movw	%dx, 12(%rax)
	jmp	.L211
.L210:
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	12+buttonlist(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	sides(%rip), %rcx
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	buttonlist(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movl	%esi, %edx
	movw	%dx, 10(%rax)
	nop
.L211:
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	leaq	16(%rax), %rdx
	leaq	buttonlist(%rip), %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movl	$23, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movl	-24(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	buttonlist(%rip), %rax
	addq	%rdx, %rax
	movl	$32, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
.L209:
	addl	$1, -24(%rbp)
.L208:
	cmpl	$15, -24(%rbp)
	jle	.L214
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	P_UpdateSpecials, .-P_UpdateSpecials
	.globl	EV_DoDonut
	.type	EV_DoDonut, @function
EV_DoDonut:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movl	$-1, -44(%rbp)
	movl	$0, -40(%rbp)
	jmp	.L216
.L223:
	movq	sectors(%rip), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L226
	movl	$1, -40(%rbp)
	movq	-32(%rbp), %rax
	movq	120(%rax), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector
	movq	%rax, -24(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L219
.L222:
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	64(%rax), %rax
	cmpq	%rax, -32(%rbp)
	je	.L227
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	64(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	movq	T_MoveFloor@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movl	$11, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 28(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 40(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	$32768, 56(%rax)
	movq	-16(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 48(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 44(%rax)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 52(%rax)
	movl	$0, %edx
	movl	$51, %esi
	movl	$64, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-32(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	movq	T_MoveFloor@GOTPCREL(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 28(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 40(%rax)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	$32768, 56(%rax)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 52(%rax)
	jmp	.L216
.L227:
	nop
	addl	$1, -36(%rbp)
.L219:
	movq	-24(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L222
	jmp	.L216
.L226:
	nop
.L216:
	movl	-44(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag
	movl	%eax, -44(%rbp)
	cmpl	$0, -44(%rbp)
	jns	.L223
	movl	-40(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	EV_DoDonut, .-EV_DoDonut
	.globl	numlinespecials
	.bss
	.align 2
	.type	numlinespecials, @object
	.size	numlinespecials, 2
numlinespecials:
	.zero	2
	.globl	linespeciallist
	.align 32
	.type	linespeciallist, @object
	.size	linespeciallist, 512
linespeciallist:
	.zero	512
	.section	.rodata
.LC3:
	.string	"texture2"
.LC4:
	.string	"-avg"
.LC5:
	.string	"-timer"
	.text
	.globl	P_SpawnSpecials
	.type	P_SpawnSpecials, @function
P_SpawnSpecials:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$1, -16(%rbp)
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	testl	%eax, %eax
	js	.L229
	movl	$2, -16(%rbp)
.L229:
	movl	$0, levelTimer(%rip)
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -20(%rbp)
	cmpl	$0, -20(%rbp)
	je	.L230
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L230
	movl	$1, levelTimer(%rip)
	movl	$42000, levelTimeCount(%rip)
.L230:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -20(%rbp)
	cmpl	$0, -20(%rbp)
	je	.L231
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L231
	movq	myargv(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	imull	$2100, %eax, %eax
	movl	%eax, -12(%rbp)
	movl	$1, levelTimer(%rip)
	movl	-12(%rbp), %eax
	movl	%eax, levelTimeCount(%rip)
.L231:
	movq	sectors(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L232
.L247:
	movq	-8(%rbp), %rax
	movzwl	14(%rax), %eax
	testw	%ax, %ax
	je	.L257
	movq	-8(%rbp), %rax
	movzwl	14(%rax), %eax
	cwtl
	cmpl	$17, %eax
	ja	.L234
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L236(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L236(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L236:
	.long	.L234-.L236
	.long	.L246-.L236
	.long	.L245-.L236
	.long	.L244-.L236
	.long	.L243-.L236
	.long	.L234-.L236
	.long	.L234-.L236
	.long	.L234-.L236
	.long	.L242-.L236
	.long	.L241-.L236
	.long	.L240-.L236
	.long	.L234-.L236
	.long	.L239-.L236
	.long	.L238-.L236
	.long	.L237-.L236
	.long	.L234-.L236
	.long	.L234-.L236
	.long	.L235-.L236
	.text
.L246:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_SpawnLightFlash@PLT
	jmp	.L234
.L245:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$15, %esi
	movq	%rax, %rdi
	call	P_SpawnStrobeFlash@PLT
	jmp	.L234
.L244:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$35, %esi
	movq	%rax, %rdi
	call	P_SpawnStrobeFlash@PLT
	jmp	.L234
.L243:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$15, %esi
	movq	%rax, %rdi
	call	P_SpawnStrobeFlash@PLT
	movq	-8(%rbp), %rax
	movw	$4, 14(%rax)
	jmp	.L234
.L242:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_SpawnGlowingLight@PLT
	jmp	.L234
.L241:
	movl	totalsecret(%rip), %eax
	addl	$1, %eax
	movl	%eax, totalsecret(%rip)
	jmp	.L234
.L240:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_SpawnDoorCloseIn30@PLT
	jmp	.L234
.L239:
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	$35, %esi
	movq	%rax, %rdi
	call	P_SpawnStrobeFlash@PLT
	jmp	.L234
.L238:
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	$15, %esi
	movq	%rax, %rdi
	call	P_SpawnStrobeFlash@PLT
	jmp	.L234
.L237:
	movl	-20(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SpawnDoorRaiseIn5Mins@PLT
	jmp	.L234
.L235:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_SpawnFireFlicker@PLT
	jmp	.L234
.L257:
	nop
.L234:
	addl	$1, -20(%rbp)
	subq	$-128, -8(%rbp)
.L232:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L247
	movw	$0, numlinespecials(%rip)
	movl	$0, -20(%rbp)
	jmp	.L248
.L250:
	movq	lines(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	26(%rax), %eax
	cwtl
	cmpl	$48, %eax
	jne	.L249
	movq	lines(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movzwl	numlinespecials(%rip), %eax
	cwtl
	addq	%rdx, %rcx
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	linespeciallist(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	movzwl	numlinespecials(%rip), %eax
	addl	$1, %eax
	movw	%ax, numlinespecials(%rip)
	nop
.L249:
	addl	$1, -20(%rbp)
.L248:
	movl	numlines(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L250
	movl	$0, -20(%rbp)
	jmp	.L251
.L252:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeceilings(%rip), %rax
	movq	$0, (%rdx,%rax)
	addl	$1, -20(%rbp)
.L251:
	cmpl	$29, -20(%rbp)
	jle	.L252
	movl	$0, -20(%rbp)
	jmp	.L253
.L254:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	activeplats(%rip), %rax
	movq	$0, (%rdx,%rax)
	addl	$1, -20(%rbp)
.L253:
	cmpl	$29, -20(%rbp)
	jle	.L254
	movl	$0, -20(%rbp)
	jmp	.L255
.L256:
	movl	-20(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	buttonlist(%rip), %rax
	addq	%rdx, %rax
	movl	$32, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	addl	$1, -20(%rbp)
.L255:
	cmpl	$15, -20(%rbp)
	jle	.L256
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	P_SpawnSpecials, .-P_SpawnSpecials
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
