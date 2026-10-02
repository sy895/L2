	.file	"am_map.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: am_map.c,v 1.4 1997/02/03 21:24:33 b1 Exp $"
	.globl	player_arrow
	.data
	.align 32
	.type	player_arrow, @object
	.size	player_arrow, 112
player_arrow:
	.long	-1048576
	.long	0
	.long	1198372
	.long	0
	.long	1198372
	.long	0
	.long	599186
	.long	299593
	.long	1198372
	.long	0
	.long	599186
	.long	-299593
	.long	-1048576
	.long	0
	.long	-1348168
	.long	299593
	.long	-1048576
	.long	0
	.long	-1348168
	.long	-299593
	.long	-748983
	.long	0
	.long	-1048576
	.long	299593
	.long	-748983
	.long	0
	.long	-1048576
	.long	-299593
	.globl	cheat_player_arrow
	.align 32
	.type	cheat_player_arrow, @object
	.size	cheat_player_arrow, 256
cheat_player_arrow:
	.long	-1048576
	.long	0
	.long	1198372
	.long	0
	.long	1198372
	.long	0
	.long	599186
	.long	199728
	.long	1198372
	.long	0
	.long	599186
	.long	-199728
	.long	-1048576
	.long	0
	.long	-1348168
	.long	199728
	.long	-1048576
	.long	0
	.long	-1348168
	.long	-199728
	.long	-748983
	.long	0
	.long	-1048576
	.long	199728
	.long	-748983
	.long	0
	.long	-1048576
	.long	-199728
	.long	-599186
	.long	0
	.long	-599186
	.long	-199728
	.long	-599186
	.long	-199728
	.long	-399458
	.long	-199728
	.long	-399458
	.long	-199728
	.long	-399458
	.long	299593
	.long	-199728
	.long	0
	.long	-199728
	.long	-199728
	.long	-199728
	.long	-199728
	.long	0
	.long	-199728
	.long	0
	.long	-199728
	.long	0
	.long	299593
	.long	199728
	.long	299593
	.long	199728
	.long	-171196
	.long	199728
	.long	-171196
	.long	237177
	.long	-208645
	.long	237177
	.long	-208645
	.long	319565
	.long	-171196
	.globl	triangle_guy
	.align 32
	.type	triangle_guy, @object
	.size	triangle_guy, 48
triangle_guy:
	.long	-56819
	.long	-32768
	.long	56819
	.long	-32768
	.long	56819
	.long	-32768
	.long	0
	.long	65536
	.long	0
	.long	65536
	.long	-56819
	.long	-32768
	.globl	thintriangle_guy
	.align 32
	.type	thintriangle_guy, @object
	.size	thintriangle_guy, 48
thintriangle_guy:
	.long	-32768
	.long	-45875
	.long	65536
	.long	0
	.long	65536
	.long	0
	.long	-32768
	.long	45875
	.long	-32768
	.long	45875
	.long	-32768
	.long	-45875
	.local	cheating
	.comm	cheating,4,4
	.local	grid
	.comm	grid,4,4
	.align 4
	.type	leveljuststarted, @object
	.size	leveljuststarted, 4
leveljuststarted:
	.long	1
	.globl	automapactive
	.bss
	.align 4
	.type	automapactive, @object
	.size	automapactive, 4
automapactive:
	.zero	4
	.data
	.align 4
	.type	finit_width, @object
	.size	finit_width, 4
finit_width:
	.long	320
	.align 4
	.type	finit_height, @object
	.size	finit_height, 4
finit_height:
	.long	168
	.local	f_x
	.comm	f_x,4,4
	.local	f_y
	.comm	f_y,4,4
	.local	f_w
	.comm	f_w,4,4
	.local	f_h
	.comm	f_h,4,4
	.local	lightlev
	.comm	lightlev,4,4
	.local	fb
	.comm	fb,8,8
	.local	amclock
	.comm	amclock,4,4
	.local	m_paninc
	.comm	m_paninc,8,8
	.local	mtof_zoommul
	.comm	mtof_zoommul,4,4
	.local	ftom_zoommul
	.comm	ftom_zoommul,4,4
	.local	m_x
	.comm	m_x,4,4
	.local	m_y
	.comm	m_y,4,4
	.local	m_x2
	.comm	m_x2,4,4
	.local	m_y2
	.comm	m_y2,4,4
	.local	m_w
	.comm	m_w,4,4
	.local	m_h
	.comm	m_h,4,4
	.local	min_x
	.comm	min_x,4,4
	.local	min_y
	.comm	min_y,4,4
	.local	max_x
	.comm	max_x,4,4
	.local	max_y
	.comm	max_y,4,4
	.local	max_w
	.comm	max_w,4,4
	.local	max_h
	.comm	max_h,4,4
	.local	min_w
	.comm	min_w,4,4
	.local	min_h
	.comm	min_h,4,4
	.local	min_scale_mtof
	.comm	min_scale_mtof,4,4
	.local	max_scale_mtof
	.comm	max_scale_mtof,4,4
	.local	old_m_w
	.comm	old_m_w,4,4
	.local	old_m_h
	.comm	old_m_h,4,4
	.local	old_m_x
	.comm	old_m_x,4,4
	.local	old_m_y
	.comm	old_m_y,4,4
	.local	f_oldloc
	.comm	f_oldloc,8,8
	.align 4
	.type	scale_mtof, @object
	.size	scale_mtof, 4
scale_mtof:
	.long	13107
	.local	scale_ftom
	.comm	scale_ftom,4,4
	.local	plr
	.comm	plr,8,8
	.local	marknums
	.comm	marknums,80,32
	.local	markpoints
	.comm	markpoints,80,32
	.local	markpointnum
	.comm	markpointnum,4,4
	.align 4
	.type	followplayer, @object
	.size	followplayer, 4
followplayer:
	.long	1
	.type	cheat_amap_seq, @object
	.size	cheat_amap_seq, 5
cheat_amap_seq:
	.ascii	"\262&&.\377"
	.section	.data.rel.local,"aw"
	.align 16
	.type	cheat_amap, @object
	.size	cheat_amap, 16
cheat_amap:
	.quad	cheat_amap_seq
	.quad	0
	.data
	.align 4
	.type	stopped, @object
	.size	stopped, 4
stopped:
	.long	1
	.text
	.globl	AM_getIslope
	.type	AM_getIslope, @function
AM_getIslope:
.LFB0:
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
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	8(%rax), %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -4(%rbp)
	cmpl	$0, -8(%rbp)
	jne	.L2
	cmpl	$0, -4(%rbp)
	jns	.L3
	movl	$-2147483647, %edx
	jmp	.L4
.L3:
	movl	$2147483647, %edx
.L4:
	movq	-32(%rbp), %rax
	movl	%edx, 4(%rax)
	jmp	.L5
.L2:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movq	-32(%rbp), %rdx
	movl	%eax, 4(%rdx)
.L5:
	cmpl	$0, -4(%rbp)
	jne	.L6
	cmpl	$0, -8(%rbp)
	jns	.L7
	movl	$-2147483647, %edx
	jmp	.L8
.L7:
	movl	$2147483647, %edx
.L8:
	movq	-32(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L10
.L6:
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movq	-32(%rbp), %rdx
	movl	%eax, (%rdx)
.L10:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	AM_getIslope, .-AM_getIslope
	.globl	AM_activateNewScale
	.type	AM_activateNewScale, @function
AM_activateNewScale:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	m_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	m_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
	movl	scale_ftom(%rip), %eax
	movl	f_w(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, m_w(%rip)
	movl	scale_ftom(%rip), %eax
	movl	f_h(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, m_h(%rip)
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	m_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	m_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
	movl	m_x(%rip), %edx
	movl	m_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x2(%rip)
	movl	m_y(%rip), %edx
	movl	m_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y2(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	AM_activateNewScale, .-AM_activateNewScale
	.globl	AM_saveScaleAndLoc
	.type	AM_saveScaleAndLoc, @function
AM_saveScaleAndLoc:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	m_x(%rip), %eax
	movl	%eax, old_m_x(%rip)
	movl	m_y(%rip), %eax
	movl	%eax, old_m_y(%rip)
	movl	m_w(%rip), %eax
	movl	%eax, old_m_w(%rip)
	movl	m_h(%rip), %eax
	movl	%eax, old_m_h(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	AM_saveScaleAndLoc, .-AM_saveScaleAndLoc
	.globl	AM_restoreScaleAndLoc
	.type	AM_restoreScaleAndLoc, @function
AM_restoreScaleAndLoc:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	old_m_w(%rip), %eax
	movl	%eax, m_w(%rip)
	movl	old_m_h(%rip), %eax
	movl	%eax, m_h(%rip)
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L14
	movl	old_m_x(%rip), %eax
	movl	%eax, m_x(%rip)
	movl	old_m_y(%rip), %eax
	movl	%eax, m_y(%rip)
	jmp	.L15
.L14:
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %edx
	movl	m_w(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	negl	%eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %edx
	movl	m_h(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	negl	%eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
.L15:
	movl	m_x(%rip), %edx
	movl	m_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x2(%rip)
	movl	m_y(%rip), %edx
	movl	m_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y2(%rip)
	movl	m_w(%rip), %eax
	movl	f_w(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_mtof(%rip)
	movl	scale_mtof(%rip), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_ftom(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	AM_restoreScaleAndLoc, .-AM_restoreScaleAndLoc
	.globl	AM_addMark
	.type	AM_addMark, @function
AM_addMark:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %ecx
	movl	m_x(%rip), %edx
	movl	markpointnum(%rip), %eax
	addl	%edx, %ecx
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	markpoints(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %ecx
	movl	m_y(%rip), %edx
	movl	markpointnum(%rip), %eax
	addl	%edx, %ecx
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	4+markpoints(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	markpointnum(%rip), %eax
	leal	1(%rax), %ecx
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
	movl	%edx, markpointnum(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	AM_addMark, .-AM_addMark
	.globl	AM_findMinMaxBoundaries
	.type	AM_findMinMaxBoundaries, @function
AM_findMinMaxBoundaries:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$2147483647, min_y(%rip)
	movl	min_y(%rip), %eax
	movl	%eax, min_x(%rip)
	movl	$-2147483647, max_y(%rip)
	movl	max_y(%rip), %eax
	movl	%eax, max_x(%rip)
	movl	$0, -12(%rbp)
	jmp	.L18
.L23:
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	min_x(%rip), %eax
	cmpl	%eax, %edx
	jge	.L19
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, min_x(%rip)
	jmp	.L20
.L19:
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	max_x(%rip), %eax
	cmpl	%eax, %edx
	jle	.L20
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, max_x(%rip)
.L20:
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %edx
	movl	min_y(%rip), %eax
	cmpl	%eax, %edx
	jge	.L21
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %eax
	movl	%eax, min_y(%rip)
	jmp	.L22
.L21:
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %edx
	movl	max_y(%rip), %eax
	cmpl	%eax, %edx
	jle	.L22
	movq	vertexes(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %eax
	movl	%eax, max_y(%rip)
.L22:
	addl	$1, -12(%rbp)
.L18:
	movl	numvertexes(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L23
	movl	max_x(%rip), %edx
	movl	min_x(%rip), %eax
	subl	%eax, %edx
	movl	%edx, max_w(%rip)
	movl	max_y(%rip), %edx
	movl	min_y(%rip), %eax
	subl	%eax, %edx
	movl	%edx, max_h(%rip)
	movl	$2097152, min_w(%rip)
	movl	$2097152, min_h(%rip)
	movl	max_w(%rip), %eax
	movl	f_w(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -8(%rbp)
	movl	max_h(%rip), %eax
	movl	f_h(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedDiv@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, min_scale_mtof(%rip)
	movl	f_h(%rip), %eax
	sall	$16, %eax
	movl	$2097152, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, max_scale_mtof(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	AM_findMinMaxBoundaries, .-AM_findMinMaxBoundaries
	.globl	AM_changeWindowLoc
	.type	AM_changeWindowLoc, @function
AM_changeWindowLoc:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	m_paninc(%rip), %eax
	testl	%eax, %eax
	jne	.L25
	movl	4+m_paninc(%rip), %eax
	testl	%eax, %eax
	je	.L26
.L25:
	movl	$0, followplayer(%rip)
	movl	$2147483647, f_oldloc(%rip)
.L26:
	movl	m_paninc(%rip), %edx
	movl	m_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	movl	4+m_paninc(%rip), %edx
	movl	m_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	m_x(%rip), %eax
	addl	%eax, %edx
	movl	max_x(%rip), %eax
	cmpl	%eax, %edx
	jle	.L27
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	max_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	jmp	.L28
.L27:
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	m_x(%rip), %eax
	addl	%eax, %edx
	movl	min_x(%rip), %eax
	cmpl	%eax, %edx
	jge	.L28
	movl	m_w(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	min_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
.L28:
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	m_y(%rip), %eax
	addl	%eax, %edx
	movl	max_y(%rip), %eax
	cmpl	%eax, %edx
	jle	.L29
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	max_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
	jmp	.L30
.L29:
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	m_y(%rip), %eax
	addl	%eax, %edx
	movl	min_y(%rip), %eax
	cmpl	%eax, %edx
	jge	.L30
	movl	m_h(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	movl	%eax, %edx
	movl	min_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
.L30:
	movl	m_x(%rip), %edx
	movl	m_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x2(%rip)
	movl	m_y(%rip), %edx
	movl	m_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y2(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	AM_changeWindowLoc, .-AM_changeWindowLoc
	.globl	AM_initVariables
	.type	AM_initVariables, @function
AM_initVariables:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, automapactive(%rip)
	movq	screens(%rip), %rax
	movq	%rax, fb(%rip)
	movl	$2147483647, f_oldloc(%rip)
	movl	$0, amclock(%rip)
	movl	$0, lightlev(%rip)
	movl	$0, 4+m_paninc(%rip)
	movl	4+m_paninc(%rip), %eax
	movl	%eax, m_paninc(%rip)
	movl	$65536, ftom_zoommul(%rip)
	movl	$65536, mtof_zoommul(%rip)
	movl	scale_ftom(%rip), %eax
	movl	f_w(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, m_w(%rip)
	movl	scale_ftom(%rip), %eax
	movl	f_h(%rip), %edx
	sall	$16, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	movl	%eax, m_h(%rip)
	movl	consoleplayer(%rip), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L32
	movl	$0, -4(%rbp)
	jmp	.L33
.L35:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L36
	addl	$1, -4(%rbp)
.L33:
	cmpl	$3, -4(%rbp)
	jle	.L35
	jmp	.L32
.L36:
	nop
.L32:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, plr(%rip)
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %edx
	movl	m_w(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	negl	%eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %edx
	movl	m_h(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	negl	%eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
	call	AM_changeWindowLoc
	movl	m_x(%rip), %eax
	movl	%eax, old_m_x(%rip)
	movl	m_y(%rip), %eax
	movl	%eax, old_m_y(%rip)
	movl	m_w(%rip), %eax
	movl	%eax, old_m_w(%rip)
	movl	m_h(%rip), %eax
	movl	%eax, old_m_h(%rip)
	leaq	st_notify.13(%rip), %rax
	movq	%rax, %rdi
	call	ST_Responder@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	AM_initVariables, .-AM_initVariables
	.section	.rodata
.LC0:
	.string	"AMMNUM%d"
	.text
	.globl	AM_loadPics
	.type	AM_loadPics, @function
AM_loadPics:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -24(%rbp)
	jmp	.L38
.L39:
	movl	-24(%rbp), %edx
	leaq	-17(%rbp), %rax
	leaq	.LC0(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-17(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	marknums(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -24(%rbp)
.L38:
	cmpl	$9, -24(%rbp)
	jle	.L39
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L40
	call	__stack_chk_fail@PLT
.L40:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	AM_loadPics, .-AM_loadPics
	.section	.rodata
.LC1:
	.string	"Z_CT at am_map.c:%i"
	.text
	.globl	AM_unloadPics
	.type	AM_unloadPics, @function
AM_unloadPics:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L42
.L44:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	marknums(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L43
	movl	$520, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L43:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	marknums(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -4(%rbp)
.L42:
	cmpl	$9, -4(%rbp)
	jle	.L44
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	AM_unloadPics, .-AM_unloadPics
	.globl	AM_clearMarks
	.type	AM_clearMarks, @function
AM_clearMarks:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, -4(%rbp)
	jmp	.L46
.L47:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	markpoints(%rip), %rax
	movl	$-1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L46:
	cmpl	$9, -4(%rbp)
	jle	.L47
	movl	$0, markpointnum(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	AM_clearMarks, .-AM_clearMarks
	.globl	AM_LevelInit
	.type	AM_LevelInit, @function
AM_LevelInit:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, leveljuststarted(%rip)
	movl	$0, f_y(%rip)
	movl	f_y(%rip), %eax
	movl	%eax, f_x(%rip)
	movl	finit_width(%rip), %eax
	movl	%eax, f_w(%rip)
	movl	finit_height(%rip), %eax
	movl	%eax, f_h(%rip)
	call	AM_clearMarks
	call	AM_findMinMaxBoundaries
	movl	min_scale_mtof(%rip), %eax
	movl	$45875, %esi
	movl	%eax, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_mtof(%rip)
	movl	scale_mtof(%rip), %edx
	movl	max_scale_mtof(%rip), %eax
	cmpl	%eax, %edx
	jle	.L49
	movl	min_scale_mtof(%rip), %eax
	movl	%eax, scale_mtof(%rip)
.L49:
	movl	scale_mtof(%rip), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_ftom(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	AM_LevelInit, .-AM_LevelInit
	.globl	AM_Stop
	.type	AM_Stop, @function
AM_Stop:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	AM_unloadPics
	movl	$0, automapactive(%rip)
	leaq	st_notify.12(%rip), %rax
	movq	%rax, %rdi
	call	ST_Responder@PLT
	movl	$1, stopped(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	AM_Stop, .-AM_Stop
	.globl	AM_Start
	.type	AM_Start, @function
AM_Start:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	stopped(%rip), %eax
	testl	%eax, %eax
	jne	.L52
	call	AM_Stop
.L52:
	movl	$0, stopped(%rip)
	movl	lastlevel.11(%rip), %edx
	movl	gamemap(%rip), %eax
	cmpl	%eax, %edx
	jne	.L53
	movl	lastepisode.10(%rip), %edx
	movl	gameepisode(%rip), %eax
	cmpl	%eax, %edx
	je	.L54
.L53:
	call	AM_LevelInit
	movl	gamemap(%rip), %eax
	movl	%eax, lastlevel.11(%rip)
	movl	gameepisode(%rip), %eax
	movl	%eax, lastepisode.10(%rip)
.L54:
	call	AM_initVariables
	call	AM_loadPics
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	AM_Start, .-AM_Start
	.globl	AM_minOutWindowScale
	.type	AM_minOutWindowScale, @function
AM_minOutWindowScale:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	min_scale_mtof(%rip), %eax
	movl	%eax, scale_mtof(%rip)
	movl	scale_mtof(%rip), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_ftom(%rip)
	call	AM_activateNewScale
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	AM_minOutWindowScale, .-AM_minOutWindowScale
	.globl	AM_maxOutWindowScale
	.type	AM_maxOutWindowScale, @function
AM_maxOutWindowScale:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	max_scale_mtof(%rip), %eax
	movl	%eax, scale_mtof(%rip)
	movl	scale_mtof(%rip), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_ftom(%rip)
	call	AM_activateNewScale
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	AM_maxOutWindowScale, .-AM_maxOutWindowScale
	.section	.rodata
.LC2:
	.string	"Follow Mode ON"
.LC3:
	.string	"Follow Mode OFF"
.LC4:
	.string	"Grid ON"
.LC5:
	.string	"Grid OFF"
.LC6:
	.string	"Marked Spot"
.LC7:
	.string	"%s %d"
.LC8:
	.string	"All Marks Cleared"
	.text
	.globl	AM_Responder
	.type	AM_Responder, @function
AM_Responder:
.LFB16:
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
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	jne	.L58
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L59
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$9, %eax
	jne	.L59
	call	AM_Start
	movl	$0, viewactive(%rip)
	movl	$1, -4(%rbp)
	jmp	.L59
.L58:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L60
	movl	$1, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$175, %eax
	je	.L61
	cmpl	$175, %eax
	jg	.L62
	cmpl	$174, %eax
	je	.L63
	cmpl	$174, %eax
	jg	.L62
	cmpl	$173, %eax
	je	.L64
	cmpl	$173, %eax
	jg	.L62
	cmpl	$172, %eax
	je	.L65
	cmpl	$172, %eax
	jg	.L62
	cmpl	$109, %eax
	je	.L66
	cmpl	$109, %eax
	jg	.L62
	cmpl	$103, %eax
	je	.L67
	cmpl	$103, %eax
	jg	.L62
	cmpl	$102, %eax
	je	.L68
	cmpl	$102, %eax
	jg	.L62
	cmpl	$99, %eax
	je	.L69
	cmpl	$99, %eax
	jg	.L62
	cmpl	$61, %eax
	je	.L70
	cmpl	$61, %eax
	jg	.L62
	cmpl	$48, %eax
	je	.L71
	cmpl	$48, %eax
	jg	.L62
	cmpl	$9, %eax
	je	.L72
	cmpl	$45, %eax
	je	.L73
	jmp	.L62
.L63:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L74
	movl	scale_ftom(%rip), %eax
	movl	%eax, %esi
	movl	$262144, %edi
	call	FixedMul@PLT
	movl	%eax, m_paninc(%rip)
	jmp	.L76
.L74:
	movl	$0, -4(%rbp)
	jmp	.L76
.L65:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L77
	movl	scale_ftom(%rip), %eax
	movl	%eax, %esi
	movl	$262144, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, m_paninc(%rip)
	jmp	.L76
.L77:
	movl	$0, -4(%rbp)
	jmp	.L76
.L64:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L79
	movl	scale_ftom(%rip), %eax
	movl	%eax, %esi
	movl	$262144, %edi
	call	FixedMul@PLT
	movl	%eax, 4+m_paninc(%rip)
	jmp	.L76
.L79:
	movl	$0, -4(%rbp)
	jmp	.L76
.L61:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L81
	movl	scale_ftom(%rip), %eax
	movl	%eax, %esi
	movl	$262144, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, 4+m_paninc(%rip)
	jmp	.L76
.L81:
	movl	$0, -4(%rbp)
	jmp	.L76
.L73:
	movl	$64250, mtof_zoommul(%rip)
	movl	$66846, ftom_zoommul(%rip)
	jmp	.L76
.L70:
	movl	$66846, mtof_zoommul(%rip)
	movl	$64250, ftom_zoommul(%rip)
	jmp	.L76
.L72:
	movl	$0, bigstate.9(%rip)
	movl	$1, viewactive(%rip)
	call	AM_Stop
	jmp	.L76
.L71:
	movl	bigstate.9(%rip), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, bigstate.9(%rip)
	movl	bigstate.9(%rip), %eax
	testl	%eax, %eax
	je	.L83
	call	AM_saveScaleAndLoc
	call	AM_minOutWindowScale
	jmp	.L76
.L83:
	call	AM_restoreScaleAndLoc
	jmp	.L76
.L68:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, followplayer(%rip)
	movl	$2147483647, f_oldloc(%rip)
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	je	.L85
	leaq	.LC2(%rip), %rax
	jmp	.L86
.L85:
	leaq	.LC3(%rip), %rax
.L86:
	movq	plr(%rip), %rdx
	movq	%rax, 224(%rdx)
	jmp	.L76
.L67:
	movl	grid(%rip), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, grid(%rip)
	movl	grid(%rip), %eax
	testl	%eax, %eax
	je	.L87
	leaq	.LC4(%rip), %rax
	jmp	.L88
.L87:
	leaq	.LC5(%rip), %rax
.L88:
	movq	plr(%rip), %rdx
	movq	%rax, 224(%rdx)
	jmp	.L76
.L66:
	movl	markpointnum(%rip), %eax
	movl	%eax, %ecx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC7(%rip), %rax
	movq	%rax, %rsi
	leaq	buffer.8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	plr(%rip), %rax
	leaq	buffer.8(%rip), %rdx
	movq	%rdx, 224(%rax)
	call	AM_addMark
	jmp	.L76
.L69:
	call	AM_clearMarks
	movq	plr(%rip), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L76
.L62:
	movl	$0, cheatstate.7(%rip)
	movl	$0, -4(%rbp)
.L76:
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	jne	.L59
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_amap(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L59
	movl	$0, -4(%rbp)
	movl	cheating(%rip), %eax
	leal	1(%rax), %ecx
	movslq	%ecx, %rax
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movl	%edx, cheating(%rip)
	jmp	.L59
.L60:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L59
	movl	$0, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$175, %eax
	je	.L89
	cmpl	$175, %eax
	jg	.L59
	cmpl	$174, %eax
	je	.L90
	cmpl	$174, %eax
	jg	.L59
	cmpl	$173, %eax
	je	.L91
	cmpl	$173, %eax
	jg	.L59
	cmpl	$172, %eax
	je	.L92
	cmpl	$172, %eax
	jg	.L59
	cmpl	$45, %eax
	je	.L93
	cmpl	$61, %eax
	je	.L93
	jmp	.L59
.L90:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L99
	movl	$0, m_paninc(%rip)
	jmp	.L99
.L92:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L100
	movl	$0, m_paninc(%rip)
	jmp	.L100
.L91:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L101
	movl	$0, 4+m_paninc(%rip)
	jmp	.L101
.L89:
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	jne	.L102
	movl	$0, 4+m_paninc(%rip)
	jmp	.L102
.L93:
	movl	$65536, mtof_zoommul(%rip)
	movl	$65536, ftom_zoommul(%rip)
	jmp	.L59
.L99:
	nop
	jmp	.L59
.L100:
	nop
	jmp	.L59
.L101:
	nop
	jmp	.L59
.L102:
	nop
.L59:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	AM_Responder, .-AM_Responder
	.globl	AM_changeWindowScale
	.type	AM_changeWindowScale, @function
AM_changeWindowScale:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	mtof_zoommul(%rip), %edx
	movl	scale_mtof(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, scale_mtof(%rip)
	movl	scale_mtof(%rip), %eax
	movl	%eax, %esi
	movl	$65536, %edi
	call	FixedDiv@PLT
	movl	%eax, scale_ftom(%rip)
	movl	scale_mtof(%rip), %edx
	movl	min_scale_mtof(%rip), %eax
	cmpl	%eax, %edx
	jge	.L104
	call	AM_minOutWindowScale
	jmp	.L107
.L104:
	movl	scale_mtof(%rip), %edx
	movl	max_scale_mtof(%rip), %eax
	cmpl	%eax, %edx
	jle	.L106
	call	AM_maxOutWindowScale
	jmp	.L107
.L106:
	call	AM_activateNewScale
.L107:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	AM_changeWindowScale, .-AM_changeWindowScale
	.globl	AM_doFollowPlayer
	.type	AM_doFollowPlayer, @function
AM_doFollowPlayer:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$8, %rsp
	.cfi_offset 3, -24
	movl	f_oldloc(%rip), %edx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	cmpl	%eax, %edx
	jne	.L109
	movl	4+f_oldloc(%rip), %edx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %eax
	cmpl	%eax, %edx
	je	.L111
.L109:
	movl	scale_ftom(%rip), %ebx
	movl	scale_mtof(%rip), %edx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movw	$0, %ax
	movl	%ebx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movl	m_w(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	negl	%eax
	addl	%edx, %eax
	movl	%eax, m_x(%rip)
	movl	scale_ftom(%rip), %ebx
	movl	scale_mtof(%rip), %edx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movw	$0, %ax
	movl	%ebx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %edx
	movl	m_h(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	negl	%eax
	addl	%edx, %eax
	movl	%eax, m_y(%rip)
	movl	m_x(%rip), %edx
	movl	m_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_x2(%rip)
	movl	m_y(%rip), %edx
	movl	m_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, m_y2(%rip)
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, f_oldloc(%rip)
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %eax
	movl	%eax, 4+f_oldloc(%rip)
.L111:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	AM_doFollowPlayer, .-AM_doFollowPlayer
	.globl	AM_updateLightLev
	.type	AM_updateLightLev, @function
AM_updateLightLev:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	amclock(%rip), %edx
	movl	nexttic.6(%rip), %eax
	cmpl	%eax, %edx
	jle	.L115
	movl	litelevelscnt.5(%rip), %eax
	leal	1(%rax), %edx
	movl	%edx, litelevelscnt.5(%rip)
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	litelevels.4(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, lightlev(%rip)
	movl	litelevelscnt.5(%rip), %eax
	cmpl	$8, %eax
	jne	.L114
	movl	$0, litelevelscnt.5(%rip)
.L114:
	movl	amclock(%rip), %eax
	leal	6(%rax), %esi
	movl	amclock(%rip), %ecx
	movslq	%ecx, %rax
	imulq	$715827883, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rdx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movl	%esi, %eax
	subl	%edx, %eax
	movl	%eax, nexttic.6(%rip)
.L115:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	AM_updateLightLev, .-AM_updateLightLev
	.globl	AM_Ticker
	.type	AM_Ticker, @function
AM_Ticker:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L122
	movl	amclock(%rip), %eax
	addl	$1, %eax
	movl	%eax, amclock(%rip)
	movl	followplayer(%rip), %eax
	testl	%eax, %eax
	je	.L119
	call	AM_doFollowPlayer
.L119:
	movl	ftom_zoommul(%rip), %eax
	cmpl	$65536, %eax
	je	.L120
	call	AM_changeWindowScale
.L120:
	movl	m_paninc(%rip), %eax
	testl	%eax, %eax
	jne	.L121
	movl	4+m_paninc(%rip), %eax
	testl	%eax, %eax
	je	.L116
.L121:
	call	AM_changeWindowLoc
	jmp	.L116
.L122:
	nop
.L116:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	AM_Ticker, .-AM_Ticker
	.globl	AM_clearFB
	.type	AM_clearFB, @function
AM_clearFB:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	f_w(%rip), %edx
	movl	f_h(%rip), %eax
	imull	%edx, %eax
	movslq	%eax, %rdx
	movq	fb(%rip), %rax
	movl	-4(%rbp), %ecx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	memset@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	AM_clearFB, .-AM_clearFB
	.globl	AM_clipMline
	.type	AM_clipMline, @function
AM_clipMline:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movl	$0, %ebx
	movl	$0, %r12d
	movq	-56(%rbp), %rax
	movl	4(%rax), %edx
	movl	m_y2(%rip), %eax
	cmpl	%eax, %edx
	jle	.L125
	movl	$8, %ebx
	jmp	.L126
.L125:
	movq	-56(%rbp), %rax
	movl	4(%rax), %edx
	movl	m_y(%rip), %eax
	cmpl	%eax, %edx
	jge	.L126
	movl	$4, %ebx
.L126:
	movq	-56(%rbp), %rax
	movl	12(%rax), %edx
	movl	m_y2(%rip), %eax
	cmpl	%eax, %edx
	jle	.L127
	movl	$8, %r12d
	jmp	.L128
.L127:
	movq	-56(%rbp), %rax
	movl	12(%rax), %edx
	movl	m_y(%rip), %eax
	cmpl	%eax, %edx
	jge	.L128
	movl	$4, %r12d
.L128:
	movl	%ebx, %eax
	andl	%r12d, %eax
	testl	%eax, %eax
	je	.L129
	movl	$0, %eax
	jmp	.L161
.L129:
	movq	-56(%rbp), %rax
	movl	(%rax), %edx
	movl	m_x(%rip), %eax
	cmpl	%eax, %edx
	jge	.L131
	orl	$1, %ebx
	jmp	.L132
.L131:
	movq	-56(%rbp), %rax
	movl	(%rax), %edx
	movl	m_x2(%rip), %eax
	cmpl	%eax, %edx
	jle	.L132
	orl	$2, %ebx
.L132:
	movq	-56(%rbp), %rax
	movl	8(%rax), %edx
	movl	m_x(%rip), %eax
	cmpl	%eax, %edx
	jge	.L133
	orl	$1, %r12d
	jmp	.L134
.L133:
	movq	-56(%rbp), %rax
	movl	8(%rax), %edx
	movl	m_x2(%rip), %eax
	cmpl	%eax, %edx
	jle	.L134
	orl	$2, %r12d
.L134:
	movl	%ebx, %eax
	andl	%r12d, %eax
	testl	%eax, %eax
	je	.L135
	movl	$0, %eax
	jmp	.L161
.L135:
	movl	scale_mtof(%rip), %eax
	movq	-56(%rbp), %rdx
	movl	(%rdx), %edx
	movl	m_x(%rip), %ecx
	subl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	movl	%eax, %edx
	movl	f_x(%rip), %eax
	addl	%eax, %edx
	movq	-64(%rbp), %rax
	movl	%edx, (%rax)
	movl	f_h(%rip), %ebx
	movl	scale_mtof(%rip), %eax
	movq	-56(%rbp), %rdx
	movl	4(%rdx), %edx
	movl	m_y(%rip), %ecx
	subl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	f_y(%rip), %eax
	addl	%eax, %edx
	movq	-64(%rbp), %rax
	movl	%edx, 4(%rax)
	movl	scale_mtof(%rip), %eax
	movq	-56(%rbp), %rdx
	movl	8(%rdx), %edx
	movl	m_x(%rip), %ecx
	subl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	movl	%eax, %edx
	movl	f_x(%rip), %eax
	addl	%eax, %edx
	movq	-64(%rbp), %rax
	movl	%edx, 8(%rax)
	movl	f_h(%rip), %ebx
	movl	scale_mtof(%rip), %eax
	movq	-56(%rbp), %rdx
	movl	12(%rdx), %edx
	movl	m_y(%rip), %ecx
	subl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	f_y(%rip), %eax
	addl	%eax, %edx
	movq	-64(%rbp), %rax
	movl	%edx, 12(%rax)
	movl	$0, %ebx
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	jns	.L136
	orl	$8, %ebx
	jmp	.L137
.L136:
	movq	-64(%rbp), %rax
	movl	4(%rax), %edx
	movl	f_h(%rip), %eax
	cmpl	%eax, %edx
	jl	.L137
	orl	$4, %ebx
.L137:
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jns	.L138
	orl	$1, %ebx
	jmp	.L139
.L138:
	movq	-64(%rbp), %rax
	movl	(%rax), %edx
	movl	f_w(%rip), %eax
	cmpl	%eax, %edx
	jl	.L139
	orl	$2, %ebx
.L139:
	movl	$0, %r12d
	movq	-64(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	jns	.L140
	orl	$8, %r12d
	jmp	.L141
.L140:
	movq	-64(%rbp), %rax
	movl	12(%rax), %edx
	movl	f_h(%rip), %eax
	cmpl	%eax, %edx
	jl	.L141
	orl	$4, %r12d
.L141:
	movq	-64(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jns	.L142
	orl	$1, %r12d
	jmp	.L143
.L142:
	movq	-64(%rbp), %rax
	movl	8(%rax), %edx
	movl	f_w(%rip), %eax
	cmpl	%eax, %edx
	jl	.L143
	orl	$2, %r12d
.L143:
	movl	%ebx, %eax
	andl	%r12d, %eax
	testl	%eax, %eax
	je	.L145
	movl	$0, %eax
	jmp	.L161
.L160:
	testl	%ebx, %ebx
	je	.L146
	movl	%ebx, %r13d
	jmp	.L147
.L146:
	movl	%r12d, %r13d
.L147:
	movl	%r13d, %eax
	andl	$8, %eax
	testl	%eax, %eax
	je	.L148
	movq	-64(%rbp), %rax
	movl	4(%rax), %edx
	movq	-64(%rbp), %rax
	movl	12(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -48(%rbp)
	movq	-64(%rbp), %rax
	movl	8(%rax), %edx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -44(%rbp)
	movq	-64(%rbp), %rax
	movl	(%rax), %ecx
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	imull	-44(%rbp), %eax
	cltd
	idivl	-48(%rbp)
	addl	%ecx, %eax
	movl	%eax, -40(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L149
.L148:
	movl	%r13d, %eax
	andl	$4, %eax
	testl	%eax, %eax
	je	.L150
	movq	-64(%rbp), %rax
	movl	4(%rax), %edx
	movq	-64(%rbp), %rax
	movl	12(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -48(%rbp)
	movq	-64(%rbp), %rax
	movl	8(%rax), %edx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -44(%rbp)
	movq	-64(%rbp), %rax
	movl	(%rax), %ecx
	movq	-64(%rbp), %rax
	movl	4(%rax), %edx
	movl	f_h(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	-44(%rbp), %eax
	cltd
	idivl	-48(%rbp)
	addl	%ecx, %eax
	movl	%eax, -40(%rbp)
	movl	f_h(%rip), %eax
	subl	$1, %eax
	movl	%eax, -36(%rbp)
	jmp	.L149
.L150:
	movl	%r13d, %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L151
	movq	-64(%rbp), %rax
	movl	12(%rax), %edx
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -48(%rbp)
	movq	-64(%rbp), %rax
	movl	8(%rax), %edx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -44(%rbp)
	movq	-64(%rbp), %rax
	movl	4(%rax), %ecx
	movl	f_w(%rip), %eax
	leal	-1(%rax), %edx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	-48(%rbp), %eax
	cltd
	idivl	-44(%rbp)
	addl	%ecx, %eax
	movl	%eax, -36(%rbp)
	movl	f_w(%rip), %eax
	subl	$1, %eax
	movl	%eax, -40(%rbp)
	jmp	.L149
.L151:
	movl	%r13d, %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L149
	movq	-64(%rbp), %rax
	movl	12(%rax), %edx
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -48(%rbp)
	movq	-64(%rbp), %rax
	movl	8(%rax), %edx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -44(%rbp)
	movq	-64(%rbp), %rax
	movl	4(%rax), %ecx
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	negl	%eax
	imull	-48(%rbp), %eax
	cltd
	idivl	-44(%rbp)
	addl	%ecx, %eax
	movl	%eax, -36(%rbp)
	movl	$0, -40(%rbp)
.L149:
	cmpl	%ebx, %r13d
	jne	.L152
	movq	-64(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, (%rax)
	movl	$0, %ebx
	movq	-64(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	jns	.L153
	orl	$8, %ebx
	jmp	.L154
.L153:
	movq	-64(%rbp), %rax
	movl	4(%rax), %edx
	movl	f_h(%rip), %eax
	cmpl	%eax, %edx
	jl	.L154
	orl	$4, %ebx
.L154:
	movq	-64(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jns	.L155
	orl	$1, %ebx
	jmp	.L156
.L155:
	movq	-64(%rbp), %rax
	movl	(%rax), %edx
	movl	f_w(%rip), %eax
	cmpl	%eax, %edx
	jl	.L156
	orl	$2, %ebx
	jmp	.L156
.L152:
	movq	-64(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movl	$0, %r12d
	movq	-64(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	jns	.L157
	orl	$8, %r12d
	jmp	.L158
.L157:
	movq	-64(%rbp), %rax
	movl	12(%rax), %edx
	movl	f_h(%rip), %eax
	cmpl	%eax, %edx
	jl	.L158
	orl	$4, %r12d
.L158:
	movq	-64(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jns	.L159
	orl	$1, %r12d
	jmp	.L156
.L159:
	movq	-64(%rbp), %rax
	movl	8(%rax), %edx
	movl	f_w(%rip), %eax
	cmpl	%eax, %edx
	jl	.L156
	orl	$2, %r12d
.L156:
	movl	%ebx, %eax
	andl	%r12d, %eax
	testl	%eax, %eax
	je	.L145
	movl	$0, %eax
	jmp	.L161
.L145:
	movl	%ebx, %eax
	orl	%r12d, %eax
	testl	%eax, %eax
	jne	.L160
	movl	$1, %eax
.L161:
	addq	$40, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	AM_clipMline, .-AM_clipMline
	.section	.rodata
.LC9:
	.string	"fuck %d \r"
	.text
	.globl	AM_drawFline
	.type	AM_drawFline, @function
AM_drawFline:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	js	.L163
	movq	-56(%rbp), %rax
	movl	(%rax), %edx
	movl	f_w(%rip), %eax
	cmpl	%eax, %edx
	jge	.L163
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	js	.L163
	movq	-56(%rbp), %rax
	movl	4(%rax), %edx
	movl	f_h(%rip), %eax
	cmpl	%eax, %edx
	jge	.L163
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	js	.L163
	movq	-56(%rbp), %rax
	movl	8(%rax), %edx
	movl	f_w(%rip), %eax
	cmpl	%eax, %edx
	jge	.L163
	movq	-56(%rbp), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	js	.L163
	movq	-56(%rbp), %rax
	movl	12(%rax), %edx
	movl	f_h(%rip), %eax
	cmpl	%eax, %edx
	jl	.L164
.L163:
	movl	fuck.3(%rip), %eax
	leal	1(%rax), %edx
	movl	%edx, fuck.3(%rip)
	movq	stderr(%rip), %rcx
	movl	%eax, %edx
	leaq	.LC9(%rip), %rax
	movq	%rax, %rsi
	movq	%rcx, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	jmp	.L162
.L164:
	movq	-56(%rbp), %rax
	movl	8(%rax), %edx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	negl	%eax
	cmovs	%ebx, %eax
	leal	(%rax,%rax), %r15d
	testl	%ebx, %ebx
	jns	.L166
	movl	$-1, %eax
	jmp	.L167
.L166:
	movl	$1, %eax
.L167:
	movl	%eax, %ecx
	movq	-56(%rbp), %rax
	movl	12(%rax), %edx
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	negl	%eax
	cmovs	%ebx, %eax
	leal	(%rax,%rax), %r14d
	testl	%ebx, %ebx
	jns	.L168
	movl	$-1, %eax
	jmp	.L169
.L168:
	movl	$1, %eax
.L169:
	movl	%eax, %esi
	movq	-56(%rbp), %rax
	movl	(%rax), %r13d
	movq	-56(%rbp), %rax
	movl	4(%rax), %r12d
	cmpl	%r14d, %r15d
	jle	.L170
	movl	%r15d, %eax
	shrl	$31, %eax
	addl	%r15d, %eax
	sarl	%eax
	negl	%eax
	leal	(%r14,%rax), %ebx
.L173:
	movq	fb(%rip), %rdx
	movl	f_w(%rip), %eax
	imull	%r12d, %eax
	addl	%r13d, %eax
	cltq
	addq	%rdx, %rax
	movl	-60(%rbp), %edx
	movb	%dl, (%rax)
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %r13d
	je	.L177
	testl	%ebx, %ebx
	js	.L172
	movl	%esi, %eax
	addl	%eax, %r12d
	subl	%r15d, %ebx
.L172:
	movl	%ecx, %eax
	addl	%eax, %r13d
	addl	%r14d, %ebx
	jmp	.L173
.L170:
	movl	%r14d, %eax
	shrl	$31, %eax
	addl	%r14d, %eax
	sarl	%eax
	negl	%eax
	leal	(%r15,%rax), %ebx
.L176:
	movq	fb(%rip), %rdx
	movl	f_w(%rip), %eax
	imull	%r12d, %eax
	addl	%r13d, %eax
	cltq
	addq	%rdx, %rax
	movl	-60(%rbp), %edx
	movb	%dl, (%rax)
	movq	-56(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, %r12d
	je	.L178
	testl	%ebx, %ebx
	js	.L175
	movl	%ecx, %eax
	addl	%eax, %r13d
	subl	%r14d, %ebx
.L175:
	movl	%esi, %eax
	addl	%eax, %r12d
	addl	%r15d, %ebx
	jmp	.L176
.L177:
	nop
	jmp	.L162
.L178:
	nop
.L162:
	addq	$24, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	AM_drawFline, .-AM_drawFline
	.globl	AM_drawMline
	.type	AM_drawMline, @function
AM_drawMline:
.LFB24:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	leaq	fl.2(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	AM_clipMline
	testl	%eax, %eax
	je	.L181
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	fl.2(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawFline
.L181:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	AM_drawMline, .-AM_drawMline
	.globl	AM_drawGrid
	.type	AM_drawGrid, @function
AM_drawGrid:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	m_x(%rip), %eax
	movl	%eax, -40(%rbp)
	movl	bmaporgx(%rip), %eax
	movl	-40(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	andl	$8388607, %eax
	testl	%eax, %eax
	je	.L183
	movl	bmaporgx(%rip), %eax
	movl	-40(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$9, %eax
	addl	%eax, %edx
	andl	$8388607, %edx
	subl	%eax, %edx
	movl	$8388608, %eax
	subl	%edx, %eax
	addl	%eax, -40(%rbp)
.L183:
	movl	m_x(%rip), %edx
	movl	m_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
	movl	m_y(%rip), %eax
	movl	%eax, -28(%rbp)
	movl	m_y(%rip), %edx
	movl	m_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -48(%rbp)
	jmp	.L184
.L185:
	movl	-48(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-52(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	AM_drawMline
	addl	$8388608, -48(%rbp)
.L184:
	movl	-48(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L185
	movl	m_y(%rip), %eax
	movl	%eax, -40(%rbp)
	movl	bmaporgy(%rip), %eax
	movl	-40(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	andl	$8388607, %eax
	testl	%eax, %eax
	je	.L186
	movl	bmaporgy(%rip), %eax
	movl	-40(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$9, %eax
	addl	%eax, %edx
	andl	$8388607, %edx
	subl	%eax, %edx
	movl	$8388608, %eax
	subl	%edx, %eax
	addl	%eax, -40(%rbp)
.L186:
	movl	m_y(%rip), %edx
	movl	m_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
	movl	m_x(%rip), %eax
	movl	%eax, -32(%rbp)
	movl	m_x(%rip), %edx
	movl	m_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -44(%rbp)
	jmp	.L187
.L188:
	movl	-44(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-52(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	AM_drawMline
	addl	$8388608, -44(%rbp)
.L187:
	movl	-44(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L188
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L189
	call	__stack_chk_fail@PLT
.L189:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	AM_drawGrid, .-AM_drawGrid
	.globl	AM_drawWalls
	.type	AM_drawWalls, @function
AM_drawWalls:
.LFB26:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L191
.L203:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, l.1(%rip)
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, 4+l.1(%rip)
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, 8+l.1(%rip)
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	8(%rax), %rax
	movl	4(%rax), %eax
	movl	%eax, 12+l.1(%rip)
	movl	cheating(%rip), %eax
	testl	%eax, %eax
	jne	.L192
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$256, %eax
	testl	%eax, %eax
	je	.L193
.L192:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$128, %eax
	testl	%eax, %eax
	je	.L194
	movl	cheating(%rip), %eax
	testl	%eax, %eax
	je	.L204
.L194:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	64(%rax), %rax
	testq	%rax, %rax
	jne	.L196
	movl	lightlev(%rip), %eax
	addl	$176, %eax
	movl	%eax, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L196:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	26(%rax), %eax
	cmpw	$39, %ax
	jne	.L198
	movl	$184, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L198:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$32, %eax
	testl	%eax, %eax
	je	.L199
	movl	cheating(%rip), %eax
	testl	%eax, %eax
	je	.L200
	movl	lightlev(%rip), %eax
	addl	$176, %eax
	movl	%eax, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L200:
	movl	lightlev(%rip), %eax
	addl	$176, %eax
	movl	%eax, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L199:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	64(%rax), %rax
	movl	(%rax), %ecx
	movq	lines(%rip), %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movq	56(%rax), %rax
	movl	(%rax), %eax
	cmpl	%eax, %ecx
	je	.L201
	movl	lightlev(%rip), %eax
	addl	$64, %eax
	movl	%eax, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L201:
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	64(%rax), %rax
	movl	4(%rax), %ecx
	movq	lines(%rip), %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movq	56(%rax), %rax
	movl	4(%rax), %eax
	cmpl	%eax, %ecx
	je	.L202
	movl	lightlev(%rip), %eax
	addl	$231, %eax
	movl	%eax, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L202:
	movl	cheating(%rip), %eax
	testl	%eax, %eax
	je	.L205
	movl	lightlev(%rip), %eax
	addl	$96, %eax
	movl	%eax, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L205
.L193:
	movq	plr(%rip), %rax
	movl	64(%rax), %eax
	testl	%eax, %eax
	je	.L195
	movq	lines(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movzwl	24(%rax), %eax
	cwtl
	andl	$128, %eax
	testl	%eax, %eax
	jne	.L195
	movl	$99, %esi
	leaq	l.1(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawMline
	jmp	.L195
.L204:
	nop
	jmp	.L195
.L205:
	nop
.L195:
	addl	$1, -4(%rbp)
.L191:
	movl	numlines(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L203
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	AM_drawWalls, .-AM_drawWalls
	.globl	AM_rotate
	.type	AM_rotate, @function
AM_rotate:
.LFB27:
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
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movq	finecosine(%rip), %rax
	movl	-52(%rbp), %edx
	shrl	$19, %edx
	movl	%edx, %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %ebx
	movl	-52(%rbp), %eax
	shrl	$19, %eax
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-48(%rbp), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, -20(%rbp)
	movl	-52(%rbp), %eax
	shrl	$19, %eax
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, %ebx
	movq	finecosine(%rip), %rax
	movl	-52(%rbp), %edx
	shrl	$19, %edx
	movl	%edx, %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-48(%rbp), %rax
	movl	(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	leal	(%rbx,%rax), %edx
	movq	-48(%rbp), %rax
	movl	%edx, (%rax)
	movq	-40(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	AM_rotate, .-AM_rotate
	.globl	AM_drawLineCharacter
	.type	AM_drawLineCharacter, @function
AM_drawLineCharacter:
.LFB28:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movl	%edx, -64(%rbp)
	movl	%ecx, -68(%rbp)
	movl	%r8d, -72(%rbp)
	movl	%r9d, -76(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -36(%rbp)
	jmp	.L208
.L213:
	movl	-36(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	movl	-36(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movl	4(%rax), %eax
	movl	%eax, -28(%rbp)
	cmpl	$0, -64(%rbp)
	je	.L209
	movl	-32(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -32(%rbp)
	movl	-28(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -28(%rbp)
.L209:
	cmpl	$0, -68(%rbp)
	je	.L210
	movl	-68(%rbp), %edx
	leaq	-32(%rbp), %rax
	leaq	4(%rax), %rcx
	leaq	-32(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	AM_rotate
.L210:
	movl	-32(%rbp), %edx
	movl	-76(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -32(%rbp)
	movl	-28(%rbp), %edx
	movl	16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-36(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movl	8(%rax), %eax
	movl	%eax, -24(%rbp)
	movl	-36(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movl	12(%rax), %eax
	movl	%eax, -20(%rbp)
	cmpl	$0, -64(%rbp)
	je	.L211
	movl	-24(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -24(%rbp)
	movl	-20(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, -20(%rbp)
.L211:
	cmpl	$0, -68(%rbp)
	je	.L212
	movl	-68(%rbp), %eax
	leaq	-32(%rbp), %rdx
	leaq	12(%rdx), %rsi
	leaq	-32(%rbp), %rdx
	leaq	8(%rdx), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	call	AM_rotate
.L212:
	movl	-24(%rbp), %edx
	movl	-76(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-20(%rbp), %edx
	movl	16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-72(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	AM_drawMline
	addl	$1, -36(%rbp)
.L208:
	movl	-36(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jl	.L213
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L214
	call	__stack_chk_fail@PLT
.L214:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	AM_drawLineCharacter, .-AM_drawLineCharacter
	.globl	AM_drawPlayers
	.type	AM_drawPlayers, @function
AM_drawPlayers:
.LFB29:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$-1, -16(%rbp)
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L216
	movl	cheating(%rip), %eax
	testl	%eax, %eax
	je	.L217
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %edx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %ecx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	subq	$8, %rsp
	pushq	%rdx
	movl	%ecx, %r9d
	movl	$209, %r8d
	movl	%eax, %ecx
	movl	$0, %edx
	movl	$16, %esi
	leaq	cheat_player_arrow(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawLineCharacter
	addq	$16, %rsp
	jmp	.L215
.L217:
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %edx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %ecx
	movq	plr(%rip), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	subq	$8, %rsp
	pushq	%rdx
	movl	%ecx, %r9d
	movl	$209, %r8d
	movl	%eax, %ecx
	movl	$0, %edx
	movl	$7, %esi
	leaq	player_arrow(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawLineCharacter
	addq	$16, %rsp
	jmp	.L215
.L216:
	movl	$0, -20(%rbp)
	jmp	.L220
.L226:
	addl	$1, -16(%rbp)
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L221
	movl	singledemo(%rip), %eax
	testl	%eax, %eax
	jne	.L221
	movq	plr(%rip), %rax
	cmpq	%rax, -8(%rbp)
	jne	.L227
.L221:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L228
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	testl	%eax, %eax
	je	.L224
	movl	$246, -12(%rbp)
	jmp	.L225
.L224:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	their_colors.0(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -12(%rbp)
.L225:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %esi
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	-12(%rbp), %ecx
	subq	$8, %rsp
	pushq	%rdx
	movl	%esi, %r9d
	movl	%ecx, %r8d
	movl	%eax, %ecx
	movl	$0, %edx
	movl	$7, %esi
	leaq	player_arrow(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawLineCharacter
	addq	$16, %rsp
	jmp	.L222
.L227:
	nop
	jmp	.L222
.L228:
	nop
.L222:
	addl	$1, -20(%rbp)
.L220:
	cmpl	$3, -20(%rbp)
	jle	.L226
.L215:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	AM_drawPlayers, .-AM_drawPlayers
	.globl	AM_drawThings
	.type	AM_drawThings, @function
AM_drawThings:
.LFB30:
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
	movl	$0, -12(%rbp)
	jmp	.L230
.L233:
	movq	sectors(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	96(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L231
.L232:
	movq	-8(%rbp), %rax
	movl	28(%rax), %edx
	movq	-8(%rbp), %rax
	movl	24(%rax), %esi
	movl	lightlev(%rip), %ecx
	movl	-20(%rbp), %eax
	addl	%eax, %ecx
	movq	-8(%rbp), %rax
	movl	56(%rax), %eax
	subq	$8, %rsp
	pushq	%rdx
	movl	%esi, %r9d
	movl	%ecx, %r8d
	movl	%eax, %ecx
	movl	$1048576, %edx
	movl	$3, %esi
	leaq	thintriangle_guy(%rip), %rax
	movq	%rax, %rdi
	call	AM_drawLineCharacter
	addq	$16, %rsp
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rax, -8(%rbp)
.L231:
	cmpq	$0, -8(%rbp)
	jne	.L232
	addl	$1, -12(%rbp)
.L230:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L233
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE30:
	.size	AM_drawThings, .-AM_drawThings
	.globl	AM_drawMarks
	.type	AM_drawMarks, @function
AM_drawMarks:
.LFB31:
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
	movl	$0, -36(%rbp)
	jmp	.L235
.L237:
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	markpoints(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$-1, %eax
	je	.L236
	movl	$5, -32(%rbp)
	movl	$6, -28(%rbp)
	movl	scale_mtof(%rip), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	markpoints(%rip), %rdx
	movl	(%rcx,%rdx), %edx
	movl	m_x(%rip), %ecx
	subl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	movl	%eax, %edx
	movl	f_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	f_h(%rip), %ebx
	movl	scale_mtof(%rip), %eax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	4+markpoints(%rip), %rdx
	movl	(%rcx,%rdx), %edx
	movl	m_y(%rip), %ecx
	subl	%ecx, %edx
	movl	%eax, %esi
	movl	%edx, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	f_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	f_x(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L236
	movl	f_w(%rip), %eax
	subl	-32(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L236
	movl	f_y(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L236
	movl	f_h(%rip), %eax
	subl	-28(%rbp), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L236
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	marknums(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
.L236:
	addl	$1, -36(%rbp)
.L235:
	cmpl	$9, -36(%rbp)
	jle	.L237
	nop
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE31:
	.size	AM_drawMarks, .-AM_drawMarks
	.globl	AM_drawCrosshair
	.type	AM_drawCrosshair, @function
AM_drawCrosshair:
.LFB32:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movq	fb(%rip), %rdx
	movl	f_h(%rip), %eax
	leal	1(%rax), %ecx
	movl	f_w(%rip), %eax
	imull	%ecx, %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cltq
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movb	%dl, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE32:
	.size	AM_drawCrosshair, .-AM_drawCrosshair
	.globl	AM_Drawer
	.type	AM_Drawer, @function
AM_Drawer:
.LFB33:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L244
	movl	$0, %edi
	call	AM_clearFB
	movl	grid(%rip), %eax
	testl	%eax, %eax
	je	.L242
	movl	$104, %edi
	call	AM_drawGrid
.L242:
	call	AM_drawWalls
	call	AM_drawPlayers
	movl	cheating(%rip), %eax
	cmpl	$2, %eax
	jne	.L243
	movl	$16, %esi
	movl	$112, %edi
	call	AM_drawThings
.L243:
	movl	$96, %edi
	call	AM_drawCrosshair
	call	AM_drawMarks
	movl	f_h(%rip), %ecx
	movl	f_w(%rip), %edx
	movl	f_y(%rip), %esi
	movl	f_x(%rip), %eax
	movl	%eax, %edi
	call	V_MarkRect@PLT
	jmp	.L239
.L244:
	nop
.L239:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE33:
	.size	AM_Drawer, .-AM_Drawer
	.data
	.align 16
	.type	st_notify.13, @object
	.size	st_notify.13, 16
st_notify.13:
	.long	1
	.long	1634559232
	.zero	8
	.align 16
	.type	st_notify.12, @object
	.size	st_notify.12, 16
st_notify.12:
	.long	0
	.long	1
	.long	1634564096
	.zero	4
	.align 4
	.type	lastlevel.11, @object
	.size	lastlevel.11, 4
lastlevel.11:
	.long	-1
	.align 4
	.type	lastepisode.10, @object
	.size	lastepisode.10, 4
lastepisode.10:
	.long	-1
	.local	bigstate.9
	.comm	bigstate.9,4,4
	.local	buffer.8
	.comm	buffer.8,20,16
	.local	cheatstate.7
	.comm	cheatstate.7,4,4
	.local	nexttic.6
	.comm	nexttic.6,4,4
	.local	litelevelscnt.5
	.comm	litelevelscnt.5,4,4
	.align 32
	.type	litelevels.4, @object
	.size	litelevels.4, 32
litelevels.4:
	.long	0
	.long	4
	.long	7
	.long	10
	.long	12
	.long	14
	.long	15
	.long	15
	.local	fuck.3
	.comm	fuck.3,4,4
	.local	fl.2
	.comm	fl.2,16,16
	.local	l.1
	.comm	l.1,16,16
	.align 16
	.type	their_colors.0, @object
	.size	their_colors.0, 16
their_colors.0:
	.long	112
	.long	96
	.long	64
	.long	176
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
