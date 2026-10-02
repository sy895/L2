	.file	"i_system.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.globl	mb_used
	.data
	.align 4
	.type	mb_used, @object
	.size	mb_used, 4
mb_used:
	.long	6
	.text
	.globl	I_Tactile
	.type	I_Tactile, @function
I_Tactile:
.LFB6:
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
	movl	$0, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	I_Tactile, .-I_Tactile
	.globl	emptycmd
	.bss
	.align 8
	.type	emptycmd, @object
	.size	emptycmd, 8
emptycmd:
	.zero	8
	.text
	.globl	I_BaseTiccmd
	.type	I_BaseTiccmd, @function
I_BaseTiccmd:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	emptycmd(%rip), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	I_BaseTiccmd, .-I_BaseTiccmd
	.globl	I_GetHeapSize
	.type	I_GetHeapSize, @function
I_GetHeapSize:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	mb_used(%rip), %eax
	sall	$20, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	I_GetHeapSize, .-I_GetHeapSize
	.globl	I_ZoneBase
	.type	I_ZoneBase, @function
I_ZoneBase:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	mb_used(%rip), %eax
	sall	$20, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	I_ZoneBase, .-I_ZoneBase
	.globl	I_GetTime
	.type	I_GetTime, @function
I_GetTime:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-40(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	gettimeofday@PLT
	movl	basetime.0(%rip), %eax
	testl	%eax, %eax
	jne	.L9
	movq	-32(%rbp), %rax
	movl	%eax, basetime.0(%rip)
.L9:
	movq	-32(%rbp), %rdx
	movl	basetime.0(%rip), %eax
	cltq
	subq	%rax, %rdx
	movl	%edx, %eax
	imull	$35, %eax, %esi
	movq	-24(%rbp), %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	subq	%rdx, %rax
	movq	%rax, %rcx
	movabsq	$4835703278458516699, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$18, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movl	%edx, %eax
	addl	%esi, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	I_GetTime, .-I_GetTime
	.globl	I_Init
	.type	I_Init, @function
I_Init:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	call	I_InitSound@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	I_Init, .-I_Init
	.globl	I_Quit
	.type	I_Quit, @function
I_Quit:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	D_QuitNetGame@PLT
	call	I_ShutdownSound@PLT
	call	I_ShutdownMusic@PLT
	call	M_SaveDefaults@PLT
	call	I_ShutdownGraphics@PLT
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE12:
	.size	I_Quit, .-I_Quit
	.globl	I_WaitVBL
	.type	I_WaitVBL, @function
I_WaitVBL:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	imull	$14285, %eax, %eax
	movl	%eax, %edi
	call	usleep@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	I_WaitVBL, .-I_WaitVBL
	.globl	I_BeginRead
	.type	I_BeginRead, @function
I_BeginRead:
.LFB14:
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
.LFE14:
	.size	I_BeginRead, .-I_BeginRead
	.globl	I_EndRead
	.type	I_EndRead, @function
I_EndRead:
.LFB15:
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
.LFE15:
	.size	I_EndRead, .-I_EndRead
	.globl	I_AllocLow
	.type	I_AllocLow, @function
I_AllocLow:
.LFB16:
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
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	I_AllocLow, .-I_AllocLow
	.section	.rodata
.LC0:
	.string	"Error: "
	.text
	.globl	I_Error
	.type	I_Error, @function
I_Error:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$224, %rsp
	movq	%rdi, -216(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdx, -160(%rbp)
	movq	%rcx, -152(%rbp)
	movq	%r8, -144(%rbp)
	movq	%r9, -136(%rbp)
	testb	%al, %al
	je	.L20
	movaps	%xmm0, -128(%rbp)
	movaps	%xmm1, -112(%rbp)
	movaps	%xmm2, -96(%rbp)
	movaps	%xmm3, -80(%rbp)
	movaps	%xmm4, -64(%rbp)
	movaps	%xmm5, -48(%rbp)
	movaps	%xmm6, -32(%rbp)
	movaps	%xmm7, -16(%rbp)
.L20:
	movq	%fs:40, %rax
	movq	%rax, -184(%rbp)
	xorl	%eax, %eax
	movl	$8, -208(%rbp)
	movl	$48, -204(%rbp)
	leaq	16(%rbp), %rax
	movq	%rax, -200(%rbp)
	leaq	-176(%rbp), %rax
	movq	%rax, -192(%rbp)
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$7, %edx
	movl	$1, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	movq	stderr(%rip), %rax
	leaq	-208(%rbp), %rdx
	movq	-216(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	vfprintf@PLT
	movq	stderr(%rip), %rax
	movq	%rax, %rsi
	movl	$10, %edi
	call	fputc@PLT
	movq	stderr(%rip), %rax
	movq	%rax, %rdi
	call	fflush@PLT
	movl	demorecording(%rip), %eax
	testl	%eax, %eax
	je	.L21
	call	G_CheckDemoStatus@PLT
.L21:
	call	D_QuitNetGame@PLT
	call	I_ShutdownGraphics@PLT
	movl	$-1, %edi
	call	exit@PLT
	.cfi_endproc
.LFE17:
	.size	I_Error, .-I_Error
	.local	basetime.0
	.comm	basetime.0,4,4
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
