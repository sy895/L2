	.file	"r_bsp.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 48
rcsid:
	.string	"$Id: r_bsp.c,v 1.4 1997/02/03 22:45:12 b1 Exp $"
	.globl	curline
	.bss
	.align 8
	.type	curline, @object
	.size	curline, 8
curline:
	.zero	8
	.globl	sidedef
	.align 8
	.type	sidedef, @object
	.size	sidedef, 8
sidedef:
	.zero	8
	.globl	linedef
	.align 8
	.type	linedef, @object
	.size	linedef, 8
linedef:
	.zero	8
	.globl	frontsector
	.align 8
	.type	frontsector, @object
	.size	frontsector, 8
frontsector:
	.zero	8
	.globl	backsector
	.align 8
	.type	backsector, @object
	.size	backsector, 8
backsector:
	.zero	8
	.globl	drawsegs
	.align 32
	.type	drawsegs, @object
	.size	drawsegs, 16384
drawsegs:
	.zero	16384
	.globl	ds_p
	.align 8
	.type	ds_p, @object
	.size	ds_p, 8
ds_p:
	.zero	8
	.text
	.globl	R_ClearDrawSegs
	.type	R_ClearDrawSegs, @function
R_ClearDrawSegs:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	drawsegs(%rip), %rax
	movq	%rax, ds_p(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	R_ClearDrawSegs, .-R_ClearDrawSegs
	.globl	newend
	.bss
	.align 8
	.type	newend, @object
	.size	newend, 8
newend:
	.zero	8
	.globl	solidsegs
	.align 32
	.type	solidsegs, @object
	.size	solidsegs, 256
solidsegs:
	.zero	256
	.text
	.globl	R_ClipSolidWallSegment
	.type	R_ClipSolidWallSegment, @function
R_ClipSolidWallSegment:
.LFB1:
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
	leaq	solidsegs(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L3
.L4:
	addq	$8, -8(%rbp)
.L3:
	movq	-8(%rbp), %rax
	movl	4(%rax), %edx
	movl	-20(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, %edx
	jl	.L4
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L5
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -24(%rbp)
	jge	.L6
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_StoreWallRange@PLT
	movq	newend(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	newend(%rip), %rax
	addq	$8, %rax
	movq	%rax, newend(%rip)
	jmp	.L7
.L8:
	movq	-16(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	-8(%rdx), %rdx
	movq	%rdx, (%rax)
	subq	$8, -16(%rbp)
.L7:
	movq	-16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	jne	.L8
	movq	-16(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, 4(%rax)
	jmp	.L2
.L6:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_StoreWallRange@PLT
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
.L5:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jle	.L17
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.L11
.L13:
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	addl	$1, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_StoreWallRange@PLT
	addq	$8, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L11
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	jmp	.L12
.L11:
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -24(%rbp)
	jge	.L13
	movq	-16(%rbp), %rax
	movl	4(%rax), %eax
	leal	1(%rax), %edx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	R_StoreWallRange@PLT
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, 4(%rax)
.L12:
	movq	-16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	je	.L18
	jmp	.L15
.L16:
	addq	$8, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, (%rax)
.L15:
	movq	-16(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	newend(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L16
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rax, newend(%rip)
	jmp	.L2
.L17:
	nop
	jmp	.L2
.L18:
	nop
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	R_ClipSolidWallSegment, .-R_ClipSolidWallSegment
	.globl	R_ClipPassWallSegment
	.type	R_ClipPassWallSegment, @function
R_ClipPassWallSegment:
.LFB2:
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
	leaq	solidsegs(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L20
.L21:
	addq	$8, -8(%rbp)
.L20:
	movq	-8(%rbp), %rax
	movl	4(%rax), %edx
	movl	-20(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, %edx
	jl	.L21
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jge	.L22
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -24(%rbp)
	jge	.L23
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_StoreWallRange@PLT
	jmp	.L19
.L23:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_StoreWallRange@PLT
.L22:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jle	.L28
	jmp	.L26
.L27:
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	addl	$1, %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_StoreWallRange@PLT
	addq	$8, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jle	.L29
.L26:
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -24(%rbp)
	jge	.L27
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	leal	1(%rax), %edx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	R_StoreWallRange@PLT
	jmp	.L19
.L28:
	nop
	jmp	.L19
.L29:
	nop
.L19:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	R_ClipPassWallSegment, .-R_ClipPassWallSegment
	.globl	R_ClearClipSegs
	.type	R_ClearClipSegs, @function
R_ClearClipSegs:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$-2147483647, solidsegs(%rip)
	movl	$-1, 4+solidsegs(%rip)
	movl	viewwidth(%rip), %eax
	movl	%eax, 8+solidsegs(%rip)
	movl	$2147483647, 12+solidsegs(%rip)
	leaq	16+solidsegs(%rip), %rax
	movq	%rax, newend(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	R_ClearClipSegs, .-R_ClearClipSegs
	.globl	R_AddLine
	.type	R_AddLine, @function
R_AddLine:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, curline(%rip)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToAngle@PLT
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToAngle@PLT
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	testl	%eax, %eax
	js	.L46
	movl	-24(%rbp), %eax
	movl	%eax, rw_angle1(%rip)
	movl	viewangle(%rip), %eax
	subl	%eax, -24(%rbp)
	movl	viewangle(%rip), %eax
	subl	%eax, -20(%rbp)
	movl	clipangle(%rip), %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	cmpl	-12(%rbp), %eax
	jnb	.L34
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	subl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jnb	.L47
	movl	clipangle(%rip), %eax
	movl	%eax, -24(%rbp)
.L34:
	movl	clipangle(%rip), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	cmpl	-12(%rbp), %eax
	jnb	.L36
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	subl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jnb	.L48
	movl	clipangle(%rip), %eax
	negl	%eax
	movl	%eax, -20(%rbp)
.L36:
	movl	-24(%rbp), %eax
	addl	$1073741824, %eax
	shrl	$19, %eax
	movl	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	addl	$1073741824, %eax
	shrl	$19, %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -8(%rbp)
	movl	-20(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L49
	movq	-40(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, backsector(%rip)
	movq	backsector(%rip), %rax
	testq	%rax, %rax
	je	.L50
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L51
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jge	.L51
	movq	backsector(%rip), %rax
	movl	4(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %edx
	jne	.L52
	movq	backsector(%rip), %rax
	movl	(%rax), %edx
	movq	frontsector(%rip), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jne	.L52
	movq	backsector(%rip), %rax
	movzwl	10(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	10(%rax), %eax
	cmpw	%ax, %dx
	jne	.L53
	movq	backsector(%rip), %rax
	movzwl	8(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	8(%rax), %eax
	cmpw	%ax, %dx
	jne	.L53
	movq	backsector(%rip), %rax
	movzwl	12(%rax), %edx
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	cmpw	%ax, %dx
	jne	.L53
	movq	curline(%rip), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	testw	%ax, %ax
	je	.L54
	jmp	.L53
.L52:
	nop
	jmp	.L45
.L53:
	nop
.L45:
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_ClipPassWallSegment
	jmp	.L31
.L50:
	nop
	jmp	.L40
.L51:
	nop
.L40:
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_ClipSolidWallSegment
	jmp	.L31
.L46:
	nop
	jmp	.L31
.L47:
	nop
	jmp	.L31
.L48:
	nop
	jmp	.L31
.L49:
	nop
	jmp	.L31
.L54:
	nop
.L31:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	R_AddLine, .-R_AddLine
	.globl	checkcoord
	.data
	.align 32
	.type	checkcoord, @object
	.size	checkcoord, 192
checkcoord:
	.long	3
	.long	0
	.long	2
	.long	1
	.long	3
	.long	0
	.long	2
	.long	0
	.long	3
	.long	1
	.long	2
	.long	0
	.long	0
	.zero	12
	.long	2
	.long	0
	.long	2
	.long	1
	.long	0
	.long	0
	.long	0
	.long	0
	.long	3
	.long	1
	.long	3
	.long	0
	.long	0
	.zero	12
	.long	2
	.long	0
	.long	3
	.long	1
	.long	2
	.long	1
	.long	3
	.long	1
	.long	2
	.long	1
	.long	3
	.long	0
	.zero	16
	.text
	.globl	R_CheckBBox
	.type	R_CheckBBox, @function
R_CheckBBox:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	movq	-72(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %edx
	movl	viewx(%rip), %eax
	cmpl	%eax, %edx
	jl	.L56
	movl	$0, -60(%rbp)
	jmp	.L57
.L56:
	movq	-72(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %edx
	movl	viewx(%rip), %eax
	cmpl	%eax, %edx
	jle	.L58
	movl	$1, -60(%rbp)
	jmp	.L57
.L58:
	movl	$2, -60(%rbp)
.L57:
	movq	-72(%rbp), %rax
	movl	(%rax), %edx
	movl	viewy(%rip), %eax
	cmpl	%eax, %edx
	jg	.L59
	movl	$0, -56(%rbp)
	jmp	.L60
.L59:
	movq	-72(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %edx
	movl	viewy(%rip), %eax
	cmpl	%eax, %edx
	jge	.L61
	movl	$1, -56(%rbp)
	jmp	.L60
.L61:
	movl	$2, -56(%rbp)
.L60:
	movl	-56(%rbp), %eax
	leal	0(,%rax,4), %edx
	movl	-60(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -44(%rbp)
	cmpl	$5, -44(%rbp)
	jne	.L62
	movl	$1, %eax
	jmp	.L63
.L62:
	movl	-44(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	checkcoord(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -40(%rbp)
	movl	-44(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	4+checkcoord(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+checkcoord(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	movl	-44(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	12+checkcoord(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movl	-36(%rbp), %edx
	movl	-40(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToAngle@PLT
	movl	%eax, %edx
	movl	viewangle(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -52(%rbp)
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointToAngle@PLT
	movl	%eax, %edx
	movl	viewangle(%rip), %eax
	subl	%eax, %edx
	movl	%edx, -48(%rbp)
	movl	-52(%rbp), %eax
	subl	-48(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jns	.L64
	movl	$1, %eax
	jmp	.L63
.L64:
	movl	clipangle(%rip), %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	cmpl	-20(%rbp), %eax
	jnb	.L65
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	subl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jb	.L66
	movl	$0, %eax
	jmp	.L63
.L66:
	movl	clipangle(%rip), %eax
	movl	%eax, -52(%rbp)
.L65:
	movl	clipangle(%rip), %eax
	subl	-48(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	cmpl	-20(%rbp), %eax
	jnb	.L67
	movl	clipangle(%rip), %eax
	addl	%eax, %eax
	subl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jb	.L68
	movl	$0, %eax
	jmp	.L63
.L68:
	movl	clipangle(%rip), %eax
	negl	%eax
	movl	%eax, -48(%rbp)
.L67:
	movl	-52(%rbp), %eax
	addl	$1073741824, %eax
	shrl	$19, %eax
	movl	%eax, -52(%rbp)
	movl	-48(%rbp), %eax
	addl	$1073741824, %eax
	shrl	$19, %eax
	movl	%eax, -48(%rbp)
	movl	-52(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -16(%rbp)
	movl	-48(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	viewangletox(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -12(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jne	.L69
	movl	$0, %eax
	jmp	.L63
.L69:
	subl	$1, -12(%rbp)
	leaq	solidsegs(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L70
.L71:
	addq	$8, -8(%rbp)
.L70:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jg	.L71
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L72
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jg	.L72
	movl	$0, %eax
	jmp	.L63
.L72:
	movl	$1, %eax
.L63:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	R_CheckBBox, .-R_CheckBBox
	.section	.rodata
	.align 8
.LC0:
	.string	"R_Subsector: ss %i with numss = %i"
	.text
	.globl	R_Subsector
	.type	R_Subsector, @function
R_Subsector:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	numsubsectors(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L74
	movl	numsubsectors(%rip), %edx
	movl	-36(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L74:
	movl	sscount(%rip), %eax
	addl	$1, %eax
	movl	%eax, sscount(%rip)
	movq	subsectors(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, frontsector(%rip)
	movq	-8(%rbp), %rax
	movzwl	8(%rax), %eax
	cwtl
	movl	%eax, -20(%rbp)
	movq	segs(%rip), %rcx
	movq	-8(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -16(%rbp)
	movq	frontsector(%rip), %rax
	movl	(%rax), %edx
	movl	viewz(%rip), %eax
	cmpl	%eax, %edx
	jge	.L75
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	frontsector(%rip), %rax
	movzwl	8(%rax), %eax
	movswl	%ax, %ecx
	movq	frontsector(%rip), %rax
	movl	(%rax), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_FindPlane@PLT
	movq	%rax, floorplane(%rip)
	jmp	.L76
.L75:
	movq	$0, floorplane(%rip)
.L76:
	movq	frontsector(%rip), %rax
	movl	4(%rax), %edx
	movl	viewz(%rip), %eax
	cmpl	%eax, %edx
	jg	.L77
	movq	frontsector(%rip), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %edx
	movl	skyflatnum(%rip), %eax
	cmpl	%eax, %edx
	jne	.L78
.L77:
	movq	frontsector(%rip), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	frontsector(%rip), %rax
	movzwl	10(%rax), %eax
	movswl	%ax, %ecx
	movq	frontsector(%rip), %rax
	movl	4(%rax), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_FindPlane@PLT
	movq	%rax, ceilingplane(%rip)
	jmp	.L79
.L78:
	movq	$0, ceilingplane(%rip)
.L79:
	movq	frontsector(%rip), %rax
	movq	%rax, %rdi
	call	R_AddSprites@PLT
	jmp	.L80
.L81:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	R_AddLine
	addq	$56, -16(%rbp)
.L80:
	movl	-20(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -20(%rbp)
	testl	%eax, %eax
	jne	.L81
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	R_Subsector, .-R_Subsector
	.globl	R_RenderBSPNode
	.type	R_RenderBSPNode, @function
R_RenderBSPNode:
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
	movl	-20(%rbp), %eax
	andl	$32768, %eax
	testl	%eax, %eax
	je	.L83
	cmpl	$-1, -20(%rbp)
	jne	.L84
	movl	$0, %edi
	call	R_Subsector
	jmp	.L82
.L84:
	movl	-20(%rbp), %eax
	andb	$127, %ah
	movl	%eax, %edi
	call	R_Subsector
	jmp	.L82
.L83:
	movq	nodes(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movl	viewy(%rip), %ecx
	movl	viewx(%rip), %eax
	movq	-8(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	R_PointOnSide@PLT
	movl	%eax, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$24, %rdx
	movzwl	(%rax,%rdx,2), %eax
	movzwl	%ax, %eax
	movl	%eax, %edi
	call	R_RenderBSPNode
	movl	-12(%rbp), %eax
	xorl	$1, %eax
	cltq
	addq	$1, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	R_CheckBBox
	testl	%eax, %eax
	je	.L82
	movl	-12(%rbp), %eax
	xorl	$1, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movslq	%edx, %rdx
	addq	$24, %rdx
	movzwl	(%rax,%rdx,2), %eax
	movzwl	%ax, %eax
	movl	%eax, %edi
	call	R_RenderBSPNode
.L82:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	R_RenderBSPNode, .-R_RenderBSPNode
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
