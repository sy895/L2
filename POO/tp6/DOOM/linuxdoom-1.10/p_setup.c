	.file	"p_setup.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_setup.c,v 1.5 1997/02/03 22:45:12 b1 Exp $"
	.globl	numvertexes
	.bss
	.align 4
	.type	numvertexes, @object
	.size	numvertexes, 4
numvertexes:
	.zero	4
	.globl	vertexes
	.align 8
	.type	vertexes, @object
	.size	vertexes, 8
vertexes:
	.zero	8
	.globl	numsegs
	.align 4
	.type	numsegs, @object
	.size	numsegs, 4
numsegs:
	.zero	4
	.globl	segs
	.align 8
	.type	segs, @object
	.size	segs, 8
segs:
	.zero	8
	.globl	numsectors
	.align 4
	.type	numsectors, @object
	.size	numsectors, 4
numsectors:
	.zero	4
	.globl	sectors
	.align 8
	.type	sectors, @object
	.size	sectors, 8
sectors:
	.zero	8
	.globl	numsubsectors
	.align 4
	.type	numsubsectors, @object
	.size	numsubsectors, 4
numsubsectors:
	.zero	4
	.globl	subsectors
	.align 8
	.type	subsectors, @object
	.size	subsectors, 8
subsectors:
	.zero	8
	.globl	numnodes
	.align 4
	.type	numnodes, @object
	.size	numnodes, 4
numnodes:
	.zero	4
	.globl	nodes
	.align 8
	.type	nodes, @object
	.size	nodes, 8
nodes:
	.zero	8
	.globl	numlines
	.align 4
	.type	numlines, @object
	.size	numlines, 4
numlines:
	.zero	4
	.globl	lines
	.align 8
	.type	lines, @object
	.size	lines, 8
lines:
	.zero	8
	.globl	numsides
	.align 4
	.type	numsides, @object
	.size	numsides, 4
numsides:
	.zero	4
	.globl	sides
	.align 8
	.type	sides, @object
	.size	sides, 8
sides:
	.zero	8
	.globl	bmapwidth
	.align 4
	.type	bmapwidth, @object
	.size	bmapwidth, 4
bmapwidth:
	.zero	4
	.globl	bmapheight
	.align 4
	.type	bmapheight, @object
	.size	bmapheight, 4
bmapheight:
	.zero	4
	.globl	blockmap
	.align 8
	.type	blockmap, @object
	.size	blockmap, 8
blockmap:
	.zero	8
	.globl	blockmaplump
	.align 8
	.type	blockmaplump, @object
	.size	blockmaplump, 8
blockmaplump:
	.zero	8
	.globl	bmaporgx
	.align 4
	.type	bmaporgx, @object
	.size	bmaporgx, 4
bmaporgx:
	.zero	4
	.globl	bmaporgy
	.align 4
	.type	bmaporgy, @object
	.size	bmaporgy, 4
bmaporgy:
	.zero	4
	.globl	blocklinks
	.align 8
	.type	blocklinks, @object
	.size	blocklinks, 8
blocklinks:
	.zero	8
	.globl	rejectmatrix
	.align 8
	.type	rejectmatrix, @object
	.size	rejectmatrix, 8
rejectmatrix:
	.zero	8
	.globl	deathmatchstarts
	.align 32
	.type	deathmatchstarts, @object
	.size	deathmatchstarts, 100
deathmatchstarts:
	.zero	100
	.globl	deathmatch_p
	.align 8
	.type	deathmatch_p, @object
	.size	deathmatch_p, 8
deathmatch_p:
	.zero	8
	.globl	playerstarts
	.align 32
	.type	playerstarts, @object
	.size	playerstarts, 40
playerstarts:
	.zero	40
	.text
	.globl	P_LoadVertexes
	.type	P_LoadVertexes, @function
P_LoadVertexes:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	shrq	$2, %rax
	movl	%eax, numvertexes(%rip)
	movl	numvertexes(%rip), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, vertexes(%rip)
	movl	-36(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	vertexes(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L2
.L3:
	movq	-24(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 4(%rax)
	addl	$1, -28(%rbp)
	addq	$8, -16(%rbp)
	addq	$4, -24(%rbp)
.L2:
	movl	numvertexes(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L3
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_LoadVertexes, .-P_LoadVertexes
	.globl	P_LoadSegs
	.type	P_LoadSegs, @function
P_LoadSegs:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	movabsq	$-6148914691236517205, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	$3, %rax
	movl	%eax, numsegs(%rip)
	movl	numsegs(%rip), %eax
	cltq
	imull	$56, %eax, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, segs(%rip)
	movl	numsegs(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	segs(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-52(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	segs(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L5
.L8:
	movq	vertexes(%rip), %rdx
	movq	-32(%rbp), %rax
	movzwl	(%rax), %eax
	movswq	%ax, %rax
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	movq	vertexes(%rip), %rdx
	movq	-32(%rbp), %rax
	movzwl	2(%rax), %eax
	movswq	%ax, %rax
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 20(%rax)
	movq	-32(%rbp), %rax
	movzwl	10(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-32(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	movl	%eax, -40(%rbp)
	movq	lines(%rip), %rcx
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-32(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -36(%rbp)
	movq	sides(%rip), %rcx
	movq	-8(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rcx,%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	sides(%rip), %rcx
	movq	-8(%rbp), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 40(%rax)
	movq	-8(%rbp), %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$4, %eax
	testl	%eax, %eax
	je	.L6
	movq	sides(%rip), %rcx
	movl	-36(%rbp), %eax
	xorl	$1, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	14(%rax,%rdx,2), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 48(%rax)
	jmp	.L7
.L6:
	movq	-24(%rbp), %rax
	movq	$0, 48(%rax)
.L7:
	addl	$1, -44(%rbp)
	addq	$56, -24(%rbp)
	addq	$12, -32(%rbp)
.L5:
	movl	numsegs(%rip), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L8
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_LoadSegs, .-P_LoadSegs
	.globl	P_LoadSubsectors
	.type	P_LoadSubsectors, @function
P_LoadSubsectors:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	shrq	$2, %rax
	movl	%eax, numsubsectors(%rip)
	movl	numsubsectors(%rip), %eax
	cltq
	sall	$4, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, subsectors(%rip)
	movl	-36(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movl	numsubsectors(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	subsectors(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	subsectors(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L10
.L11:
	movq	-24(%rbp), %rax
	movzwl	(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 10(%rax)
	addl	$1, -28(%rbp)
	addq	$16, -16(%rbp)
	addq	$4, -24(%rbp)
.L10:
	movl	numsubsectors(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L11
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_LoadSubsectors, .-P_LoadSubsectors
	.globl	P_LoadSectors
	.type	P_LoadSectors, @function
P_LoadSectors:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	movabsq	$5675921253449092805, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	$3, %rax
	movl	%eax, numsectors(%rip)
	movl	numsectors(%rip), %eax
	cltq
	sall	$7, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, sectors(%rip)
	movl	numsectors(%rip), %eax
	cltq
	salq	$7, %rax
	movq	%rax, %rdx
	movq	sectors(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-36(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	sectors(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L13
.L14:
	movq	-24(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-24(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rdi
	call	R_FlatNumForName@PLT
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-24(%rbp), %rax
	addq	$12, %rax
	movq	%rax, %rdi
	call	R_FlatNumForName@PLT
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movw	%dx, 10(%rax)
	movq	-24(%rbp), %rax
	movzwl	20(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 12(%rax)
	movq	-24(%rbp), %rax
	movzwl	22(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 14(%rax)
	movq	-24(%rbp), %rax
	movzwl	24(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 16(%rax)
	movq	-16(%rbp), %rax
	movq	$0, 96(%rax)
	addl	$1, -28(%rbp)
	subq	$-128, -16(%rbp)
	addq	$26, -24(%rbp)
.L13:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L14
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_LoadSectors, .-P_LoadSectors
	.globl	P_LoadNodes
	.type	P_LoadNodes, @function
P_LoadNodes:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	shrq	$2, %rax
	movabsq	$5270498306774157605, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	%rax
	movl	%eax, numnodes(%rip)
	movl	numnodes(%rip), %eax
	cltq
	imull	$52, %eax, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, nodes(%rip)
	movl	-52(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	nodes(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L16
.L21:
	movq	-24(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-24(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-24(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 12(%rax)
	movl	$0, -32(%rbp)
	jmp	.L17
.L20:
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movzwl	8(%rax,%rdx,2), %edx
	movq	-16(%rbp), %rax
	movl	-32(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$24, %rcx
	movw	%dx, (%rax,%rcx,2)
	movl	$0, -28(%rbp)
	jmp	.L18
.L19:
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	movl	-32(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rdx
	movzwl	8(%rax,%rdx,2), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	movl	-32(%rbp), %esi
	movslq	%esi, %rsi
	salq	$2, %rsi
	addq	%rsi, %rdx
	addq	$4, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -28(%rbp)
.L18:
	cmpl	$3, -28(%rbp)
	jle	.L19
	addl	$1, -32(%rbp)
.L17:
	cmpl	$1, -32(%rbp)
	jle	.L20
	addl	$1, -36(%rbp)
	addq	$52, -16(%rbp)
	addq	$28, -24(%rbp)
.L16:
	movl	numnodes(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L21
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_LoadNodes, .-P_LoadNodes
	.globl	P_LoadThings
	.type	P_LoadThings, @function
P_LoadThings:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	movabsq	$-3689348814741910323, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	$3, %rax
	movl	%eax, -20(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L23
.L27:
	movl	$1, -24(%rbp)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L24
	movq	-16(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	$64, %eax
	cmpl	$25, %eax
	seta	%dl
	testb	%dl, %dl
	jne	.L24
	movl	$51380415, %edx
	movl	%eax, %ecx
	shrq	%cl, %rdx
	movq	%rdx, %rax
	andl	$1, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L24
	movl	$0, -24(%rbp)
	nop
.L24:
	cmpl	$0, -24(%rbp)
	je	.L28
	movq	-16(%rbp), %rax
	movzwl	(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, (%rax)
	movq	-16(%rbp), %rax
	movzwl	2(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 2(%rax)
	movq	-16(%rbp), %rax
	movzwl	4(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 4(%rax)
	movq	-16(%rbp), %rax
	movzwl	6(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 6(%rax)
	movq	-16(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-16(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	P_SpawnMapThing@PLT
	addl	$1, -28(%rbp)
	addq	$10, -16(%rbp)
.L23:
	movl	-28(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L27
	jmp	.L26
.L28:
	nop
.L26:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_LoadThings, .-P_LoadThings
	.globl	P_LoadLineDefs
	.type	P_LoadLineDefs, @function
P_LoadLineDefs:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	shrq	%rax
	movabsq	$5270498306774157605, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	%rax
	movl	%eax, numlines(%rip)
	movl	numlines(%rip), %eax
	cltq
	imull	$88, %eax, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, lines(%rip)
	movl	numlines(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	lines(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-52(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	lines(%rip), %rax
	movq	%rax, -32(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L30
.L43:
	movq	-40(%rbp), %rax
	movzwl	4(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 24(%rax)
	movq	-40(%rbp), %rax
	movzwl	6(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 26(%rax)
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 28(%rax)
	movq	vertexes(%rip), %rdx
	movq	-40(%rbp), %rax
	movzwl	(%rax), %eax
	movswq	%ax, %rax
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	vertexes(%rip), %rdx
	movq	-40(%rbp), %rax
	movzwl	2(%rax), %eax
	movswq	%ax, %rax
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %edx
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	subl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 20(%rax)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	jne	.L31
	movq	-32(%rbp), %rax
	movl	$1, 52(%rax)
	jmp	.L32
.L31:
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	testl	%eax, %eax
	jne	.L33
	movq	-32(%rbp), %rax
	movl	$0, 52(%rax)
	jmp	.L32
.L33:
	movq	-32(%rbp), %rax
	movl	16(%rax), %edx
	movq	-32(%rbp), %rax
	movl	20(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	testl	%eax, %eax
	jle	.L34
	movq	-32(%rbp), %rax
	movl	$2, 52(%rax)
	jmp	.L32
.L34:
	movq	-32(%rbp), %rax
	movl	$3, 52(%rax)
.L32:
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L35
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 44(%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 48(%rax)
	jmp	.L36
.L35:
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 44(%rax)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 48(%rax)
.L36:
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jge	.L37
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 36(%rax)
	jmp	.L38
.L37:
	movq	-8(%rbp), %rax
	movl	4(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 36(%rax)
.L38:
	movq	-40(%rbp), %rax
	movzwl	10(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 30(%rax)
	movq	-40(%rbp), %rax
	movzwl	12(%rax), %edx
	movq	-32(%rbp), %rax
	movw	%dx, 32(%rax)
	movq	-32(%rbp), %rax
	movzwl	30(%rax), %eax
	cmpw	$-1, %ax
	je	.L39
	movq	sides(%rip), %rcx
	movq	-32(%rbp), %rax
	movzwl	30(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 56(%rax)
	jmp	.L40
.L39:
	movq	-32(%rbp), %rax
	movq	$0, 56(%rax)
.L40:
	movq	-32(%rbp), %rax
	movzwl	32(%rax), %eax
	cmpw	$-1, %ax
	je	.L41
	movq	sides(%rip), %rcx
	movq	-32(%rbp), %rax
	movzwl	32(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	16(%rax), %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 64(%rax)
	jmp	.L42
.L41:
	movq	-32(%rbp), %rax
	movq	$0, 64(%rax)
.L42:
	addl	$1, -44(%rbp)
	addq	$14, -40(%rbp)
	addq	$88, -32(%rbp)
.L30:
	movl	numlines(%rip), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L43
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_LoadLineDefs, .-P_LoadLineDefs
	.globl	P_LoadSideDefs
	.type	P_LoadSideDefs, @function
P_LoadSideDefs:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	cltq
	movabsq	$-8608480567731124087, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	$4, %rax
	movl	%eax, numsides(%rip)
	movl	numsides(%rip), %eax
	cltq
	movl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$3, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, sides(%rip)
	movl	numsides(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	sides(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-36(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	sides(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L45
.L46:
	movq	-24(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-24(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-24(%rbp), %rax
	addq	$12, %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movw	%dx, 10(%rax)
	movq	-24(%rbp), %rax
	addq	$20, %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movw	%dx, 12(%rax)
	movq	sectors(%rip), %rdx
	movq	-24(%rbp), %rax
	movzwl	28(%rax), %eax
	movswq	%ax, %rax
	salq	$7, %rax
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 16(%rax)
	addl	$1, -28(%rbp)
	addq	$30, -24(%rbp)
	addq	$24, -16(%rbp)
.L45:
	movl	numsides(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L46
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_LoadSideDefs, .-P_LoadSideDefs
	.globl	P_LoadBlockMap
	.type	P_LoadBlockMap, @function
P_LoadBlockMap:
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
	movl	-20(%rbp), %eax
	movl	$50, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, blockmaplump(%rip)
	movq	blockmaplump(%rip), %rax
	addq	$8, %rax
	movq	%rax, blockmap(%rip)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L48
.L49:
	movq	blockmaplump(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movq	blockmaplump(%rip), %rdx
	movl	-8(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	%rcx, %rcx
	addq	%rcx, %rdx
	movzwl	(%rax), %eax
	movw	%ax, (%rdx)
	addl	$1, -8(%rbp)
.L48:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jl	.L49
	movq	blockmaplump(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, bmaporgx(%rip)
	movq	blockmaplump(%rip), %rax
	addq	$2, %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, bmaporgy(%rip)
	movq	blockmaplump(%rip), %rax
	addq	$4, %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, bmapwidth(%rip)
	movq	blockmaplump(%rip), %rax
	addq	$6, %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, bmapheight(%rip)
	movl	bmapwidth(%rip), %eax
	cltq
	movl	%eax, %edx
	movl	bmapheight(%rip), %eax
	cltq
	imull	%edx, %eax
	sall	$3, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, blocklinks(%rip)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	blocklinks(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	P_LoadBlockMap, .-P_LoadBlockMap
	.section	.rodata
.LC0:
	.string	"P_GroupLines: miscounted"
	.text
	.globl	P_GroupLines
	.type	P_GroupLines, @function
P_GroupLines:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	subsectors(%rip), %rax
	movq	%rax, -48(%rbp)
	movl	$0, -88(%rbp)
	jmp	.L51
.L52:
	movq	segs(%rip), %rcx
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	24(%rax), %rax
	movq	16(%rax), %rdx
	movq	-48(%rbp), %rax
	movq	%rdx, (%rax)
	addl	$1, -88(%rbp)
	addq	$16, -48(%rbp)
.L51:
	movl	numsubsectors(%rip), %eax
	cmpl	%eax, -88(%rbp)
	jl	.L52
	movq	lines(%rip), %rax
	movq	%rax, -64(%rbp)
	movl	$0, -80(%rbp)
	movl	$0, -88(%rbp)
	jmp	.L53
.L55:
	addl	$1, -80(%rbp)
	movq	-64(%rbp), %rax
	movq	56(%rax), %rax
	movl	112(%rax), %edx
	addl	$1, %edx
	movl	%edx, 112(%rax)
	movq	-64(%rbp), %rax
	movq	64(%rax), %rax
	testq	%rax, %rax
	je	.L54
	movq	-64(%rbp), %rax
	movq	64(%rax), %rdx
	movq	-64(%rbp), %rax
	movq	56(%rax), %rax
	cmpq	%rax, %rdx
	je	.L54
	movq	-64(%rbp), %rax
	movq	64(%rax), %rax
	movl	112(%rax), %edx
	addl	$1, %edx
	movl	%edx, 112(%rax)
	addl	$1, -80(%rbp)
.L54:
	addl	$1, -88(%rbp)
	addq	$88, -64(%rbp)
.L53:
	movl	numlines(%rip), %eax
	cmpl	%eax, -88(%rbp)
	jl	.L55
	movl	-80(%rbp), %eax
	cltq
	sall	$3, %eax
	movl	$0, %edx
	movl	$50, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, -72(%rbp)
	movq	sectors(%rip), %rax
	movq	%rax, -56(%rbp)
	movl	$0, -88(%rbp)
	jmp	.L56
.L66:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	M_ClearBox@PLT
	movq	-56(%rbp), %rax
	movq	-72(%rbp), %rdx
	movq	%rdx, 120(%rax)
	movq	lines(%rip), %rax
	movq	%rax, -64(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L57
.L60:
	movq	-64(%rbp), %rax
	movq	56(%rax), %rax
	cmpq	%rax, -56(%rbp)
	je	.L58
	movq	-64(%rbp), %rax
	movq	64(%rax), %rax
	cmpq	%rax, -56(%rbp)
	jne	.L59
.L58:
	movq	-72(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -72(%rbp)
	movq	-64(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-64(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	-64(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %ecx
	leaq	-32(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	M_AddToBox@PLT
	movq	-64(%rbp), %rax
	movq	8(%rax), %rax
	movl	4(%rax), %edx
	movq	-64(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %ecx
	leaq	-32(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	M_AddToBox@PLT
.L59:
	addl	$1, -84(%rbp)
	addq	$88, -64(%rbp)
.L57:
	movl	numlines(%rip), %eax
	cmpl	%eax, -84(%rbp)
	jl	.L60
	movq	-56(%rbp), %rax
	movq	120(%rax), %rax
	movq	-72(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	112(%rax), %eax
	cltq
	cmpq	%rax, %rdx
	je	.L61
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L61:
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, 72(%rax)
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, 76(%rax)
	movl	-32(%rbp), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -76(%rbp)
	movl	bmapheight(%rip), %eax
	cmpl	%eax, -76(%rbp)
	jl	.L62
	movl	bmapheight(%rip), %eax
	subl	$1, %eax
	jmp	.L63
.L62:
	movl	-76(%rbp), %eax
.L63:
	movl	%eax, -76(%rbp)
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movl	%edx, 32(%rax)
	movl	-28(%rbp), %edx
	movl	bmaporgy(%rip), %eax
	subl	%eax, %edx
	leal	-2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	$0, %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	movl	%eax, -76(%rbp)
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movl	%edx, 36(%rax)
	movl	-20(%rbp), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -76(%rbp)
	movl	bmapwidth(%rip), %eax
	cmpl	%eax, -76(%rbp)
	jl	.L64
	movl	bmapwidth(%rip), %eax
	subl	$1, %eax
	jmp	.L65
.L64:
	movl	-76(%rbp), %eax
.L65:
	movl	%eax, -76(%rbp)
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movl	%edx, 44(%rax)
	movl	-24(%rbp), %edx
	movl	bmaporgx(%rip), %eax
	subl	%eax, %edx
	leal	-2097152(%rdx), %eax
	sarl	$23, %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	$0, %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	movl	%eax, -76(%rbp)
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movl	%edx, 40(%rax)
	addl	$1, -88(%rbp)
	subq	$-128, -56(%rbp)
.L56:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -88(%rbp)
	jl	.L66
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L67
	call	__stack_chk_fail@PLT
.L67:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	P_GroupLines, .-P_GroupLines
	.section	.rodata
.LC1:
	.string	"map0%i"
.LC2:
	.string	"map%i"
	.text
	.globl	P_SetupLevel
	.type	P_SetupLevel, @function
P_SetupLevel:
.LFB10:
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
	movl	%edx, -44(%rbp)
	movl	%ecx, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, 28+wminfo(%rip)
	movl	28+wminfo(%rip), %eax
	movl	%eax, totalsecret(%rip)
	movl	totalsecret(%rip), %eax
	movl	%eax, totalitems(%rip)
	movl	totalitems(%rip), %eax
	movl	%eax, totalkills(%rip)
	movl	$180, 32+wminfo(%rip)
	movl	$0, -28(%rbp)
	jmp	.L69
.L70:
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	212+players(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	212+players(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	216+players(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	216+players(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	208+players(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -28(%rbp)
.L69:
	cmpl	$3, -28(%rbp)
	jle	.L70
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	20+players(%rip), %rax
	movl	$1, (%rdx,%rax)
	call	S_Start@PLT
	movl	$99, %esi
	movl	$50, %edi
	call	Z_FreeTags@PLT
	call	P_InitThinkers@PLT
	call	W_Reload@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L71
	cmpl	$9, -40(%rbp)
	jg	.L72
	movl	-40(%rbp), %edx
	leaq	-17(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L73
.L72:
	movl	-40(%rbp), %edx
	leaq	-17(%rbp), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L73
.L71:
	movb	$69, -17(%rbp)
	movl	-36(%rbp), %eax
	addl	$48, %eax
	movb	%al, -16(%rbp)
	movb	$77, -15(%rbp)
	movl	-40(%rbp), %eax
	addl	$48, %eax
	movb	%al, -14(%rbp)
	movb	$0, -13(%rbp)
.L73:
	leaq	-17(%rbp), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, -24(%rbp)
	movl	$0, leveltime(%rip)
	movl	-24(%rbp), %eax
	addl	$10, %eax
	movl	%eax, %edi
	call	P_LoadBlockMap
	movl	-24(%rbp), %eax
	addl	$4, %eax
	movl	%eax, %edi
	call	P_LoadVertexes
	movl	-24(%rbp), %eax
	addl	$8, %eax
	movl	%eax, %edi
	call	P_LoadSectors
	movl	-24(%rbp), %eax
	addl	$3, %eax
	movl	%eax, %edi
	call	P_LoadSideDefs
	movl	-24(%rbp), %eax
	addl	$2, %eax
	movl	%eax, %edi
	call	P_LoadLineDefs
	movl	-24(%rbp), %eax
	addl	$6, %eax
	movl	%eax, %edi
	call	P_LoadSubsectors
	movl	-24(%rbp), %eax
	addl	$7, %eax
	movl	%eax, %edi
	call	P_LoadNodes
	movl	-24(%rbp), %eax
	addl	$5, %eax
	movl	%eax, %edi
	call	P_LoadSegs
	movl	-24(%rbp), %eax
	addl	$9, %eax
	movl	$50, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, rejectmatrix(%rip)
	call	P_GroupLines
	movl	$0, bodyqueslot(%rip)
	leaq	deathmatchstarts(%rip), %rax
	movq	%rax, deathmatch_p(%rip)
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edi
	call	P_LoadThings
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L74
	movl	$0, -28(%rbp)
	jmp	.L75
.L77:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L76
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	$0, (%rdx,%rax)
	movl	-28(%rbp), %eax
	movl	%eax, %edi
	call	G_DeathMatchSpawnPlayer@PLT
.L76:
	addl	$1, -28(%rbp)
.L75:
	cmpl	$3, -28(%rbp)
	jle	.L77
.L74:
	movl	$0, iquetail(%rip)
	movl	iquetail(%rip), %eax
	movl	%eax, iquehead(%rip)
	call	P_SpawnSpecials@PLT
	movl	precache(%rip), %eax
	testl	%eax, %eax
	je	.L80
	call	R_PrecacheLevel@PLT
.L80:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L79
	call	__stack_chk_fail@PLT
.L79:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	P_SetupLevel, .-P_SetupLevel
	.globl	P_Init
	.type	P_Init, @function
P_Init:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	P_InitSwitchList@PLT
	call	P_InitPicAnims@PLT
	leaq	sprnames(%rip), %rax
	movq	%rax, %rdi
	call	R_InitSprites@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	P_Init, .-P_Init
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
