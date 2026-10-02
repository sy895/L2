	.file	"i_video.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 46
rcsid:
	.string	"$Id: i_x.c,v 1.6 1997/02/03 22:45:10 b1 Exp $"
	.globl	X_display
	.bss
	.align 8
	.type	X_display, @object
	.size	X_display, 8
X_display:
	.zero	8
	.globl	X_mainWindow
	.align 8
	.type	X_mainWindow, @object
	.size	X_mainWindow, 8
X_mainWindow:
	.zero	8
	.globl	X_cmap
	.align 8
	.type	X_cmap, @object
	.size	X_cmap, 8
X_cmap:
	.zero	8
	.globl	X_visual
	.align 8
	.type	X_visual, @object
	.size	X_visual, 8
X_visual:
	.zero	8
	.globl	X_gc
	.align 8
	.type	X_gc, @object
	.size	X_gc, 8
X_gc:
	.zero	8
	.globl	X_event
	.align 32
	.type	X_event, @object
	.size	X_event, 192
X_event:
	.zero	192
	.globl	X_screen
	.align 4
	.type	X_screen, @object
	.size	X_screen, 4
X_screen:
	.zero	4
	.globl	X_visualinfo
	.align 32
	.type	X_visualinfo, @object
	.size	X_visualinfo, 64
X_visualinfo:
	.zero	64
	.globl	image
	.align 8
	.type	image, @object
	.size	image, 8
image:
	.zero	8
	.globl	X_width
	.align 4
	.type	X_width, @object
	.size	X_width, 4
X_width:
	.zero	4
	.globl	X_height
	.align 4
	.type	X_height, @object
	.size	X_height, 4
X_height:
	.zero	4
	.globl	doShm
	.align 4
	.type	doShm, @object
	.size	doShm, 4
doShm:
	.zero	4
	.globl	X_shminfo
	.align 32
	.type	X_shminfo, @object
	.size	X_shminfo, 32
X_shminfo:
	.zero	32
	.globl	X_shmeventtype
	.align 4
	.type	X_shmeventtype, @object
	.size	X_shmeventtype, 4
X_shmeventtype:
	.zero	4
	.globl	grabMouse
	.align 4
	.type	grabMouse, @object
	.size	grabMouse, 4
grabMouse:
	.zero	4
	.globl	doPointerWarp
	.data
	.align 4
	.type	doPointerWarp, @object
	.size	doPointerWarp, 4
doPointerWarp:
	.long	1
	.align 4
	.type	multiply, @object
	.size	multiply, 4
multiply:
	.long	1
	.text
	.globl	xlatekey
	.type	xlatekey, @function
xlatekey:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	84+X_event(%rip), %eax
	movzbl	%al, %ecx
	movq	X_display(%rip), %rax
	movl	$0, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	XKeycodeToKeysym@PLT
	movl	%eax, -4(%rbp)
	cmpl	$65535, -4(%rbp)
	jg	.L2
	cmpl	$65361, -4(%rbp)
	jge	.L3
	cmpl	$65307, -4(%rbp)
	jg	.L2
	cmpl	$65288, -4(%rbp)
	jge	.L4
	cmpl	$45, -4(%rbp)
	je	.L5
	cmpl	$61, -4(%rbp)
	je	.L6
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	subl	$65361, %eax
	cmpl	$174, %eax
	ja	.L2
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L8(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L8(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L8:
	.long	.L27-.L8
	.long	.L26-.L8
	.long	.L25-.L8
	.long	.L24-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L5-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L6-.L8
	.long	.L23-.L8
	.long	.L22-.L8
	.long	.L21-.L8
	.long	.L20-.L8
	.long	.L19-.L8
	.long	.L18-.L8
	.long	.L17-.L8
	.long	.L16-.L8
	.long	.L15-.L8
	.long	.L14-.L8
	.long	.L13-.L8
	.long	.L12-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L11-.L8
	.long	.L11-.L8
	.long	.L10-.L8
	.long	.L10-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L9-.L8
	.long	.L9-.L8
	.long	.L9-.L8
	.long	.L9-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L2-.L8
	.long	.L7-.L8
	.text
.L4:
	movl	-4(%rbp), %eax
	subl	$65288, %eax
	cmpl	$19, %eax
	ja	.L2
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L29(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L29(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L29:
	.long	.L7-.L29
	.long	.L32-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L31-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L30-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L2-.L29
	.long	.L28-.L29
	.text
.L27:
	movl	$172, -4(%rbp)
	jmp	.L33
.L25:
	movl	$174, -4(%rbp)
	jmp	.L33
.L24:
	movl	$175, -4(%rbp)
	jmp	.L33
.L26:
	movl	$173, -4(%rbp)
	jmp	.L33
.L28:
	movl	$27, -4(%rbp)
	jmp	.L33
.L31:
	movl	$13, -4(%rbp)
	jmp	.L33
.L32:
	movl	$9, -4(%rbp)
	jmp	.L33
.L23:
	movl	$187, -4(%rbp)
	jmp	.L33
.L22:
	movl	$188, -4(%rbp)
	jmp	.L33
.L21:
	movl	$189, -4(%rbp)
	jmp	.L33
.L20:
	movl	$190, -4(%rbp)
	jmp	.L33
.L19:
	movl	$191, -4(%rbp)
	jmp	.L33
.L18:
	movl	$192, -4(%rbp)
	jmp	.L33
.L17:
	movl	$193, -4(%rbp)
	jmp	.L33
.L16:
	movl	$194, -4(%rbp)
	jmp	.L33
.L15:
	movl	$195, -4(%rbp)
	jmp	.L33
.L14:
	movl	$196, -4(%rbp)
	jmp	.L33
.L13:
	movl	$215, -4(%rbp)
	jmp	.L33
.L12:
	movl	$216, -4(%rbp)
	jmp	.L33
.L7:
	movl	$127, -4(%rbp)
	jmp	.L33
.L30:
	movl	$255, -4(%rbp)
	jmp	.L33
.L6:
	movl	$61, -4(%rbp)
	jmp	.L33
.L5:
	movl	$45, -4(%rbp)
	jmp	.L33
.L11:
	movl	$182, -4(%rbp)
	jmp	.L33
.L10:
	movl	$157, -4(%rbp)
	jmp	.L33
.L9:
	movl	$184, -4(%rbp)
	jmp	.L33
.L2:
	cmpl	$31, -4(%rbp)
	jle	.L34
	cmpl	$126, -4(%rbp)
.L34:
	cmpl	$64, -4(%rbp)
	jle	.L37
	cmpl	$90, -4(%rbp)
	jg	.L37
	addl	$32, -4(%rbp)
.L37:
	nop
.L33:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	xlatekey, .-xlatekey
	.section	.rodata
	.align 8
.LC0:
	.string	"XShmDetach() failed in I_ShutdownGraphics()"
	.text
	.globl	I_ShutdownGraphics
	.type	I_ShutdownGraphics, @function
I_ShutdownGraphics:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	X_display(%rip), %rax
	leaq	X_shminfo(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XShmDetach@PLT
	testl	%eax, %eax
	jne	.L39
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L39:
	movq	16+X_shminfo(%rip), %rax
	movq	%rax, %rdi
	call	shmdt@PLT
	movl	8+X_shminfo(%rip), %eax
	movl	$0, %edx
	movl	$0, %esi
	movl	%eax, %edi
	call	shmctl@PLT
	movq	image(%rip), %rax
	movq	$0, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	I_ShutdownGraphics, .-I_ShutdownGraphics
	.globl	I_StartFrame
	.type	I_StartFrame, @function
I_StartFrame:
.LFB8:
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
.LFE8:
	.size	I_StartFrame, .-I_StartFrame
	.local	lastmousex
	.comm	lastmousex,4,4
	.local	lastmousey
	.comm	lastmousey,4,4
	.globl	mousemoved
	.bss
	.align 4
	.type	mousemoved, @object
	.size	mousemoved, 4
mousemoved:
	.zero	4
	.globl	shmFinished
	.align 4
	.type	shmFinished, @object
	.size	shmFinished, 4
shmFinished:
	.zero	4
	.text
	.globl	I_GetEvent
	.type	I_GetEvent, @function
I_GetEvent:
.LFB9:
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
	movq	X_display(%rip), %rax
	leaq	X_event(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XNextEvent@PLT
	movl	X_event(%rip), %eax
	cmpl	$22, %eax
	ja	.L42
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L44(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L44(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L44:
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L49-.L44
	.long	.L48-.L44
	.long	.L47-.L44
	.long	.L46-.L44
	.long	.L45-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L64-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L42-.L44
	.long	.L64-.L44
	.text
.L49:
	movl	$0, -32(%rbp)
	call	xlatekey
	movl	%eax, -28(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	D_PostEvent@PLT
	jmp	.L50
.L48:
	movl	$1, -32(%rbp)
	call	xlatekey
	movl	%eax, -28(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	D_PostEvent@PLT
	jmp	.L50
.L47:
	movl	$2, -32(%rbp)
	movl	80+X_event(%rip), %eax
	andl	$256, %eax
	movl	%eax, %edx
	movl	80+X_event(%rip), %eax
	shrl	$8, %eax
	andl	$2, %eax
	orl	%eax, %edx
	movl	80+X_event(%rip), %eax
	shrl	$8, %eax
	andl	$4, %eax
	orl	%eax, %edx
	movl	84+X_event(%rip), %eax
	cmpl	$1, %eax
	sete	%al
	movzbl	%al, %eax
	orl	%eax, %edx
	movl	84+X_event(%rip), %eax
	cmpl	$2, %eax
	jne	.L51
	movl	$2, %eax
	jmp	.L52
.L51:
	movl	$0, %eax
.L52:
	orl	%eax, %edx
	movl	84+X_event(%rip), %eax
	cmpl	$3, %eax
	jne	.L53
	movl	$4, %eax
	jmp	.L54
.L53:
	movl	$0, %eax
.L54:
	orl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	$0, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	D_PostEvent@PLT
	jmp	.L50
.L46:
	movl	$2, -32(%rbp)
	movl	80+X_event(%rip), %eax
	andl	$256, %eax
	movl	%eax, %edx
	movl	80+X_event(%rip), %eax
	shrl	$8, %eax
	andl	$2, %eax
	orl	%eax, %edx
	movl	80+X_event(%rip), %eax
	shrl	$8, %eax
	andl	$4, %eax
	orl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %edx
	movl	84+X_event(%rip), %eax
	cmpl	$1, %eax
	sete	%al
	movzbl	%al, %eax
	xorl	%eax, %edx
	movl	84+X_event(%rip), %eax
	cmpl	$2, %eax
	jne	.L55
	movl	$2, %eax
	jmp	.L56
.L55:
	movl	$0, %eax
.L56:
	xorl	%eax, %edx
	movl	84+X_event(%rip), %eax
	cmpl	$3, %eax
	jne	.L57
	movl	$4, %eax
	jmp	.L58
.L57:
	movl	$0, %eax
.L58:
	xorl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	$0, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	D_PostEvent@PLT
	jmp	.L50
.L45:
	movl	$2, -32(%rbp)
	movl	80+X_event(%rip), %eax
	andl	$256, %eax
	movl	%eax, %edx
	movl	80+X_event(%rip), %eax
	shrl	$8, %eax
	andl	$2, %eax
	orl	%eax, %edx
	movl	80+X_event(%rip), %eax
	shrl	$8, %eax
	andl	$4, %eax
	orl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	64+X_event(%rip), %edx
	movl	lastmousex(%rip), %eax
	subl	%eax, %edx
	leal	0(,%rdx,4), %eax
	movl	%eax, -24(%rbp)
	movl	lastmousey(%rip), %edx
	movl	68+X_event(%rip), %eax
	subl	%eax, %edx
	leal	0(,%rdx,4), %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jne	.L59
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	je	.L65
.L59:
	movl	64+X_event(%rip), %eax
	movl	%eax, lastmousex(%rip)
	movl	68+X_event(%rip), %eax
	movl	%eax, lastmousey(%rip)
	movl	64+X_event(%rip), %edx
	movl	X_width(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cmpl	%eax, %edx
	je	.L61
	movl	68+X_event(%rip), %edx
	movl	X_height(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cmpl	%eax, %edx
	je	.L61
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	D_PostEvent@PLT
	movl	$0, mousemoved(%rip)
	jmp	.L65
.L61:
	movl	$1, mousemoved(%rip)
	jmp	.L65
.L42:
	movl	doShm(%rip), %eax
	testl	%eax, %eax
	je	.L66
	movl	X_event(%rip), %edx
	movl	X_shmeventtype(%rip), %eax
	cmpl	%eax, %edx
	jne	.L66
	movl	$1, shmFinished(%rip)
	jmp	.L66
.L64:
	nop
	jmp	.L50
.L65:
	nop
	jmp	.L50
.L66:
	nop
.L50:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L63
	call	__stack_chk_fail@PLT
.L63:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	I_GetEvent, .-I_GetEvent
	.globl	createnullcursor
	.type	createnullcursor, @function
createnullcursor:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$208, %rsp
	movq	%rdi, -200(%rbp)
	movq	%rsi, -208(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-208(%rbp), %rsi
	movq	-200(%rbp), %rax
	movl	$1, %r8d
	movl	$1, %ecx
	movl	$1, %edx
	movq	%rax, %rdi
	call	XCreatePixmap@PLT
	movq	%rax, -184(%rbp)
	movl	$0, -144(%rbp)
	leaq	-144(%rbp), %rdx
	movq	-184(%rbp), %rsi
	movq	-200(%rbp), %rax
	movq	%rdx, %rcx
	movl	$1, %edx
	movq	%rax, %rdi
	call	XCreateGC@PLT
	movq	%rax, -176(%rbp)
	movq	-176(%rbp), %rdx
	movq	-184(%rbp), %rsi
	movq	-200(%rbp), %rax
	subq	$8, %rsp
	pushq	$1
	movl	$1, %r9d
	movl	$0, %r8d
	movl	$0, %ecx
	movq	%rax, %rdi
	call	XFillRectangle@PLT
	addq	$16, %rsp
	movq	$0, -160(%rbp)
	movw	$0, -152(%rbp)
	movb	$4, -146(%rbp)
	leaq	-160(%rbp), %rdi
	leaq	-160(%rbp), %rcx
	movq	-184(%rbp), %rdx
	movq	-184(%rbp), %rsi
	movq	-200(%rbp), %rax
	subq	$8, %rsp
	pushq	$0
	movl	$0, %r9d
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	XCreatePixmapCursor@PLT
	addq	$16, %rsp
	movq	%rax, -168(%rbp)
	movq	-184(%rbp), %rdx
	movq	-200(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XFreePixmap@PLT
	movq	-176(%rbp), %rdx
	movq	-200(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XFreeGC@PLT
	movq	-168(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L69
	call	__stack_chk_fail@PLT
.L69:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	createnullcursor, .-createnullcursor
	.globl	I_StartTic
	.type	I_StartTic, @function
I_StartTic:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	X_display(%rip), %rax
	testq	%rax, %rax
	je	.L76
	jmp	.L73
.L74:
	call	I_GetEvent
.L73:
	movq	X_display(%rip), %rax
	movq	%rax, %rdi
	call	XPending@PLT
	testl	%eax, %eax
	jne	.L74
	movl	grabMouse(%rip), %eax
	testl	%eax, %eax
	je	.L75
	movl	doPointerWarp(%rip), %eax
	subl	$1, %eax
	movl	%eax, doPointerWarp(%rip)
	movl	doPointerWarp(%rip), %eax
	testl	%eax, %eax
	jne	.L75
	movl	X_height(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %esi
	movl	X_width(%rip), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %ecx
	movq	X_mainWindow(%rip), %rdx
	movq	X_display(%rip), %rax
	subq	$8, %rsp
	pushq	%rsi
	pushq	%rcx
	pushq	$0
	movl	$0, %r9d
	movl	$0, %r8d
	movl	$0, %ecx
	movl	$0, %esi
	movq	%rax, %rdi
	call	XWarpPointer@PLT
	addq	$32, %rsp
	movl	$1, doPointerWarp(%rip)
.L75:
	movl	$0, mousemoved(%rip)
	jmp	.L70
.L76:
	nop
.L70:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	I_StartTic, .-I_StartTic
	.globl	I_UpdateNoBlit
	.type	I_UpdateNoBlit, @function
I_UpdateNoBlit:
.LFB12:
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
.LFE12:
	.size	I_UpdateNoBlit, .-I_UpdateNoBlit
	.section	.rodata
.LC1:
	.string	"XShmPutImage() failed\n"
	.text
	.globl	I_FinishUpdate
	.type	I_FinishUpdate, @function
I_FinishUpdate:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	devparm(%rip), %eax
	testl	%eax, %eax
	je	.L79
	call	I_GetTime@PLT
	movl	%eax, -108(%rbp)
	movl	lasttic.2(%rip), %eax
	movl	-108(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -112(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, lasttic.2(%rip)
	cmpl	$20, -112(%rbp)
	jle	.L80
	movl	$20, -112(%rbp)
.L80:
	movl	$0, -108(%rbp)
	jmp	.L81
.L82:
	movq	screens(%rip), %rdx
	movl	-108(%rbp), %eax
	addl	$63680, %eax
	cltq
	addq	%rdx, %rax
	movb	$-1, (%rax)
	addl	$2, -108(%rbp)
.L81:
	movl	-112(%rbp), %eax
	addl	%eax, %eax
	cmpl	%eax, -108(%rbp)
	jl	.L82
	jmp	.L83
.L84:
	movq	screens(%rip), %rdx
	movl	-108(%rbp), %eax
	addl	$63680, %eax
	cltq
	addq	%rdx, %rax
	movb	$0, (%rax)
	addl	$2, -108(%rbp)
.L83:
	cmpl	$39, -108(%rbp)
	jle	.L84
.L79:
	movl	multiply(%rip), %eax
	cmpl	$2, %eax
	jne	.L85
	movq	screens(%rip), %rax
	movq	%rax, -64(%rbp)
	movl	$0, -96(%rbp)
	jmp	.L86
.L87:
	movq	image(%rip), %rax
	movq	16(%rax), %rdx
	movl	X_width(%rip), %eax
	imull	-96(%rbp), %eax
	cltq
	addq	%rax, %rdx
	movl	-96(%rbp), %eax
	cltq
	movq	%rdx, -32(%rbp,%rax,8)
	addl	$1, -96(%rbp)
.L86:
	cmpl	$1, -96(%rbp)
	jle	.L87
	movl	$200, -100(%rbp)
	jmp	.L88
.L90:
	movl	$320, -104(%rbp)
.L89:
	movq	-64(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -64(%rbp)
	movl	(%rax), %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	andl	$-16777216, %eax
	movl	%eax, %edx
	movl	-76(%rbp), %eax
	shrl	$8, %eax
	andl	$16776960, %eax
	orl	%eax, %edx
	movl	-76(%rbp), %eax
	shrl	$16, %eax
	movzbl	%al, %eax
	orl	%edx, %eax
	movl	%eax, -72(%rbp)
	movl	-76(%rbp), %eax
	sall	$16, %eax
	andl	$-16777216, %eax
	movl	%eax, %edx
	movl	-76(%rbp), %eax
	sall	$8, %eax
	andl	$16776960, %eax
	orl	%eax, %edx
	movl	-76(%rbp), %eax
	movzbl	%al, %eax
	orl	%edx, %eax
	movl	%eax, -68(%rbp)
	movq	-32(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movl	-68(%rbp), %edx
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movl	-68(%rbp), %edx
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movl	-72(%rbp), %edx
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movl	-72(%rbp), %edx
	movl	%edx, (%rax)
	subl	$4, -104(%rbp)
	cmpl	$0, -104(%rbp)
	jne	.L89
	movq	-32(%rbp), %rdx
	movl	X_width(%rip), %eax
	leal	3(%rax), %ecx
	testl	%eax, %eax
	cmovs	%ecx, %eax
	sarl	$2, %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rdx
	movl	X_width(%rip), %eax
	leal	3(%rax), %ecx
	testl	%eax, %eax
	cmovs	%ecx, %eax
	sarl	$2, %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
.L88:
	movl	-100(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -100(%rbp)
	testl	%eax, %eax
	jne	.L90
	jmp	.L91
.L85:
	movl	multiply(%rip), %eax
	cmpl	$3, %eax
	jne	.L92
	movq	screens(%rip), %rax
	movq	%rax, -56(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L93
.L94:
	movq	image(%rip), %rax
	movq	16(%rax), %rdx
	movl	X_width(%rip), %eax
	imull	-84(%rbp), %eax
	cltq
	addq	%rax, %rdx
	movl	-84(%rbp), %eax
	cltq
	movq	%rdx, -32(%rbp,%rax,8)
	addl	$1, -84(%rbp)
.L93:
	cmpl	$2, -84(%rbp)
	jle	.L94
	movl	$200, -88(%rbp)
	jmp	.L95
.L97:
	movl	$320, -92(%rbp)
.L96:
	movq	-56(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -56(%rbp)
	movl	(%rax), %eax
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	andl	$-16777216, %eax
	movl	%eax, %edx
	movl	-80(%rbp), %eax
	shrl	$8, %eax
	andl	$16711680, %eax
	orl	%eax, %edx
	movl	-80(%rbp), %eax
	shrl	$16, %eax
	orl	%edx, %eax
	movl	%eax, -44(%rbp)
	movl	-80(%rbp), %eax
	sall	$8, %eax
	andl	$-16777216, %eax
	movl	%eax, %edx
	movl	-80(%rbp), %eax
	andl	$16776960, %eax
	orl	%eax, %edx
	movl	-80(%rbp), %eax
	shrl	$8, %eax
	movzbl	%al, %eax
	orl	%edx, %eax
	movl	%eax, -40(%rbp)
	movl	-80(%rbp), %eax
	sall	$16, %eax
	movl	%eax, %edx
	movl	-80(%rbp), %eax
	sall	$8, %eax
	movzwl	%ax, %eax
	orl	%eax, %edx
	movl	-80(%rbp), %eax
	movzbl	%al, %eax
	orl	%edx, %eax
	movl	%eax, -36(%rbp)
	movq	-32(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movl	-40(%rbp), %edx
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movl	-40(%rbp), %edx
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	-40(%rbp), %edx
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movl	-44(%rbp), %edx
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movl	-44(%rbp), %edx
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	leaq	4(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movl	-44(%rbp), %edx
	movl	%edx, (%rax)
	subl	$4, -92(%rbp)
	cmpl	$0, -92(%rbp)
	jne	.L96
	movq	-32(%rbp), %rdx
	movl	X_width(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rdx
	movl	X_width(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rdx
	movl	X_width(%rip), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
.L95:
	movl	-88(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -88(%rbp)
	testl	%eax, %eax
	jne	.L97
	jmp	.L91
.L92:
	movl	multiply(%rip), %eax
	cmpl	$4, %eax
	jne	.L91
	movq	image(%rip), %rax
	movq	16(%rax), %rdx
	movq	screens(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	Expand4
.L91:
	movl	doShm(%rip), %eax
	testl	%eax, %eax
	je	.L98
	movl	X_height(%rip), %eax
	movl	%eax, %r8d
	movl	X_width(%rip), %eax
	movl	%eax, %edi
	movq	image(%rip), %rcx
	movq	X_gc(%rip), %rdx
	movq	X_mainWindow(%rip), %rsi
	movq	X_display(%rip), %rax
	subq	$8, %rsp
	pushq	$1
	pushq	%r8
	pushq	%rdi
	pushq	$0
	pushq	$0
	movl	$0, %r9d
	movl	$0, %r8d
	movq	%rax, %rdi
	call	XShmPutImage@PLT
	addq	$48, %rsp
	testl	%eax, %eax
	jne	.L99
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L99:
	movl	$0, shmFinished(%rip)
.L100:
	call	I_GetEvent
	movl	shmFinished(%rip), %eax
	testl	%eax, %eax
	je	.L100
	jmp	.L103
.L98:
	movl	X_height(%rip), %eax
	movl	%eax, %r8d
	movl	X_width(%rip), %eax
	movl	%eax, %edi
	movq	image(%rip), %rcx
	movq	X_gc(%rip), %rdx
	movq	X_mainWindow(%rip), %rsi
	movq	X_display(%rip), %rax
	pushq	%r8
	pushq	%rdi
	pushq	$0
	pushq	$0
	movl	$0, %r9d
	movl	$0, %r8d
	movq	%rax, %rdi
	call	XPutImage@PLT
	addq	$32, %rsp
	movq	X_display(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	XSync@PLT
.L103:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L102
	call	__stack_chk_fail@PLT
.L102:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	I_FinishUpdate, .-I_FinishUpdate
	.globl	I_ReadScreen
	.type	I_ReadScreen, @function
I_ReadScreen:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	screens(%rip), %rcx
	movq	-8(%rbp), %rax
	movl	$64000, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	I_ReadScreen, .-I_ReadScreen
	.local	colors
	.comm	colors,4096,32
	.globl	UploadNewPalette
	.type	UploadNewPalette, @function
UploadNewPalette:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	24+X_visualinfo(%rip), %eax
	cmpl	$3, %eax
	jne	.L112
	movl	20+X_visualinfo(%rip), %eax
	cmpl	$8, %eax
	jne	.L112
	movl	firstcall.1(%rip), %eax
	testl	%eax, %eax
	je	.L107
	movl	$0, firstcall.1(%rip)
	movl	$0, %ebx
	jmp	.L108
.L109:
	movslq	%ebx, %rax
	movslq	%ebx, %rdx
	movq	%rdx, %rcx
	salq	$4, %rcx
	leaq	colors(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movslq	%ebx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	14+colors(%rip), %rax
	movb	$7, (%rdx,%rax)
	addl	$1, %ebx
.L108:
	cmpl	$255, %ebx
	jle	.L109
.L107:
	movl	$0, %ebx
	jmp	.L110
.L111:
	movl	usegamma(%rip), %ecx
	movq	-32(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movslq	%ecx, %rdx
	salq	$8, %rdx
	addq	%rax, %rdx
	leaq	gammatable(%rip), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %r12d
	movl	%r12d, %eax
	sall	$8, %eax
	movl	%r12d, %edx
	leal	(%rax,%rdx), %ecx
	movslq	%ebx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+colors(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movl	usegamma(%rip), %ecx
	movq	-32(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movslq	%ecx, %rdx
	salq	$8, %rdx
	addq	%rax, %rdx
	leaq	gammatable(%rip), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %r12d
	movl	%r12d, %eax
	sall	$8, %eax
	movl	%r12d, %edx
	leal	(%rax,%rdx), %ecx
	movslq	%ebx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	10+colors(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movl	usegamma(%rip), %ecx
	movq	-32(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movslq	%ecx, %rdx
	salq	$8, %rdx
	addq	%rax, %rdx
	leaq	gammatable(%rip), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %r12d
	movl	%r12d, %eax
	sall	$8, %eax
	movl	%r12d, %edx
	leal	(%rax,%rdx), %ecx
	movslq	%ebx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	12+colors(%rip), %rax
	movw	%cx, (%rdx,%rax)
	addl	$1, %ebx
.L110:
	cmpl	$255, %ebx
	jle	.L111
	movq	X_display(%rip), %rax
	movq	-24(%rbp), %rsi
	movl	$256, %ecx
	leaq	colors(%rip), %rdx
	movq	%rax, %rdi
	call	XStoreColors@PLT
.L112:
	nop
	addq	$16, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	UploadNewPalette, .-UploadNewPalette
	.globl	I_SetPalette
	.type	I_SetPalette, @function
I_SetPalette:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	X_cmap(%rip), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	UploadNewPalette
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	I_SetPalette, .-I_SetPalette
	.section	.rodata
	.align 8
.LC2:
	.string	"User %d appears to be running DOOM.  Is that wise?\n"
	.align 8
.LC3:
	.string	"Was able to kill my old shared memory\n"
	.align 8
.LC4:
	.string	"Was NOT able to kill my old shared memory"
.LC5:
	.string	"Could not get shared memory"
	.align 8
.LC6:
	.string	"will use %d's stale shared memory\n"
	.align 8
.LC7:
	.string	"warning: can't use stale shared memory belonging to id %d, key=0x%x\n"
.LC8:
	.string	"could not get stats on key=%d"
.LC9:
	.string	"errno=%d\n"
	.align 8
.LC10:
	.string	"Could not get any shared memory"
	.align 8
.LC11:
	.string	"Sorry, system too polluted with stale shared memory segments.\n"
	.align 8
.LC12:
	.string	"shared memory id=%d, addr=0x%x\n"
	.text
	.globl	grabsharedmemory
	.type	grabsharedmemory, @function
grabsharedmemory:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$176, %rsp
	movl	%edi, -164(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1685024621, -148(%rbp)
	movl	$64000, -136(%rbp)
	movl	$5, -140(%rbp)
.L126:
	movl	-136(%rbp), %eax
	movslq	%eax, %rcx
	movl	-148(%rbp), %eax
	movl	$511, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	shmget@PLT
	movl	%eax, -144(%rbp)
	cmpl	$-1, -144(%rbp)
	je	.L115
	leaq	-128(%rbp), %rdx
	movl	-144(%rbp), %eax
	movl	$2, %esi
	movl	%eax, %edi
	call	shmctl@PLT
	movl	%eax, -132(%rbp)
	cmpl	$0, -132(%rbp)
	jne	.L116
	movq	-40(%rbp), %rax
	testq	%rax, %rax
	je	.L117
	movl	-48(%rbp), %edx
	movq	stderr(%rip), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addl	$1, -148(%rbp)
	jmp	.L118
.L117:
	call	getuid@PLT
	movl	%eax, %edx
	movl	-116(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L119
	movl	-144(%rbp), %eax
	movl	$0, %edx
	movl	$0, %esi
	movl	%eax, %edi
	call	shmctl@PLT
	movl	%eax, -132(%rbp)
	cmpl	$0, -132(%rbp)
	jne	.L120
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$38, %edx
	movl	$1, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	jmp	.L121
.L120:
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L121:
	movl	-164(%rbp), %eax
	movslq	%eax, %rcx
	movl	-148(%rbp), %eax
	movl	$1023, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	shmget@PLT
	movl	%eax, -144(%rbp)
	cmpl	$-1, -144(%rbp)
	jne	.L122
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L122:
	leaq	-128(%rbp), %rdx
	movl	-144(%rbp), %eax
	movl	$2, %esi
	movl	%eax, %edi
	call	shmctl@PLT
	movl	%eax, -132(%rbp)
	jmp	.L123
.L119:
	movl	-164(%rbp), %eax
	movslq	%eax, %rdx
	movq	-80(%rbp), %rax
	cmpq	%rax, %rdx
	jb	.L124
	movl	-48(%rbp), %edx
	movq	stderr(%rip), %rax
	leaq	.LC6(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	jmp	.L123
.L124:
	movl	-48(%rbp), %edx
	movq	stderr(%rip), %rax
	movl	-148(%rbp), %ecx
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addl	$1, -148(%rbp)
	jmp	.L118
.L116:
	movl	-148(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L118
.L115:
	movl	-164(%rbp), %eax
	movslq	%eax, %rcx
	movl	-148(%rbp), %eax
	movl	$1023, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	shmget@PLT
	movl	%eax, -144(%rbp)
	cmpl	$-1, -144(%rbp)
	jne	.L129
	call	__errno_location@PLT
	movl	(%rax), %edx
	movq	stderr(%rip), %rax
	leaq	.LC9(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L129
.L118:
	subl	$1, -140(%rbp)
	cmpl	$0, -140(%rbp)
	jne	.L126
	jmp	.L123
.L129:
	nop
.L123:
	cmpl	$0, -140(%rbp)
	jne	.L127
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L127:
	movl	-144(%rbp), %eax
	movl	%eax, 8+X_shminfo(%rip)
	movl	-144(%rbp), %eax
	movl	$0, %edx
	movl	$0, %esi
	movl	%eax, %edi
	call	shmat@PLT
	movq	%rax, 16+X_shminfo(%rip)
	movq	image(%rip), %rax
	movq	16+X_shminfo(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	image(%rip), %rax
	movq	16(%rax), %rax
	movl	%eax, %ecx
	movq	stderr(%rip), %rax
	movl	-144(%rbp), %edx
	leaq	.LC12(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L128
	call	__stack_chk_fail@PLT
.L128:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	grabsharedmemory, .-grabsharedmemory
	.section	.rodata
.LC13:
	.string	"-2"
.LC14:
	.string	"-3"
.LC15:
	.string	"-4"
.LC16:
	.string	"-disp"
.LC17:
	.string	"-grabmouse"
.LC18:
	.string	"-geom"
.LC19:
	.string	"%c%d%c%d"
.LC20:
	.string	"bad -geom parameter"
.LC21:
	.string	"Could not open display [%s]"
.LC22:
	.string	"DISPLAY"
	.align 8
.LC23:
	.string	"Could not open display (DISPLAY=[%s])"
	.align 8
.LC24:
	.string	"xdoom currently only supports 256-color PseudoColor screens"
.LC25:
	.string	"unix"
.LC26:
	.string	"Using MITSHM extension\n"
.LC27:
	.string	""
	.align 8
.LC28:
	.string	"shmat() failed in InitGraphics()"
	.align 8
.LC29:
	.string	"XShmAttach() failed in InitGraphics()"
	.text
	.globl	I_InitGraphics
	.type	I_InitGraphics, @function
I_InitGraphics:
.LFB18:
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
	subq	$328, %rsp
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	movq	%fs:40, %rax
	movq	%rax, -40(%rbp)
	xorl	%eax, %eax
	movl	$0, -336(%rbp)
	movl	$0, -332(%rbp)
	movb	$32, -338(%rbp)
	movb	$32, -337(%rbp)
	movl	firsttime.0(%rip), %eax
	testl	%eax, %eax
	je	.L161
	movl	$0, firsttime.0(%rip)
	movq	I_Quit@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movl	$2, %edi
	call	signal@PLT
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L133
	movl	$2, multiply(%rip)
.L133:
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L134
	movl	$3, multiply(%rip)
.L134:
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L135
	movl	$4, multiply(%rip)
.L135:
	movl	multiply(%rip), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movl	%eax, X_width(%rip)
	movl	multiply(%rip), %eax
	imull	$200, %eax, %eax
	movl	%eax, X_height(%rip)
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -324(%rbp)
	cmpl	$0, -324(%rbp)
	je	.L136
	movq	myargv(%rip), %rax
	movl	-324(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -312(%rbp)
	jmp	.L137
.L136:
	movq	$0, -312(%rbp)
.L137:
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	setne	%al
	movzbl	%al, %eax
	movl	%eax, grabMouse(%rip)
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -324(%rbp)
	cmpl	$0, -324(%rbp)
	je	.L138
	movq	myargv(%rip), %rax
	movl	-324(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	leaq	-332(%rbp), %rdi
	leaq	-337(%rbp), %rsi
	leaq	-336(%rbp), %rcx
	leaq	-338(%rbp), %rdx
	movq	%rdi, %r9
	movq	%rsi, %r8
	leaq	.LC19(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_sscanf@PLT
	movl	%eax, -320(%rbp)
	cmpl	$2, -320(%rbp)
	jne	.L139
	movl	$0, -332(%rbp)
	movl	-332(%rbp), %eax
	movl	%eax, -336(%rbp)
	jmp	.L138
.L139:
	cmpl	$6, -320(%rbp)
	jne	.L140
	movzbl	-338(%rbp), %eax
	cmpb	$45, %al
	jne	.L141
	movl	-336(%rbp), %eax
	negl	%eax
	movl	%eax, -336(%rbp)
.L141:
	movzbl	-337(%rbp), %eax
	cmpb	$45, %al
	jne	.L138
	movl	-332(%rbp), %eax
	negl	%eax
	movl	%eax, -332(%rbp)
	jmp	.L138
.L140:
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L138:
	movq	-312(%rbp), %rax
	movq	%rax, %rdi
	call	XOpenDisplay@PLT
	movq	%rax, X_display(%rip)
	movq	X_display(%rip), %rax
	testq	%rax, %rax
	jne	.L142
	cmpq	$0, -312(%rbp)
	je	.L143
	movq	-312(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L142
.L143:
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	getenv@PLT
	movq	%rax, %rsi
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L142:
	movq	X_display(%rip), %rax
	movl	224(%rax), %eax
	movl	%eax, X_screen(%rip)
	movl	X_screen(%rip), %esi
	movq	X_display(%rip), %rax
	leaq	X_visualinfo(%rip), %r8
	movl	$3, %ecx
	movl	$8, %edx
	movq	%rax, %rdi
	call	XMatchVisualInfo@PLT
	testl	%eax, %eax
	jne	.L144
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L144:
	movq	X_visualinfo(%rip), %rax
	movq	%rax, X_visual(%rip)
	movq	X_display(%rip), %rax
	movq	%rax, %rdi
	call	XShmQueryExtension@PLT
	movl	%eax, doShm(%rip)
	movl	doShm(%rip), %eax
	testl	%eax, %eax
	je	.L145
	cmpq	$0, -312(%rbp)
	jne	.L146
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	getenv@PLT
	movq	%rax, -312(%rbp)
.L146:
	cmpq	$0, -312(%rbp)
	je	.L145
	movq	-312(%rbp), %rax
	movq	%rax, -304(%rbp)
	jmp	.L147
.L149:
	addq	$1, -304(%rbp)
.L147:
	movq	-304(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L148
	movq	-304(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$58, %al
	jne	.L149
.L148:
	movq	-304(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L150
	movq	-304(%rbp), %rax
	movb	$0, (%rax)
.L150:
	movq	-312(%rbp), %rax
	leaq	.LC25(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcasecmp@PLT
	testl	%eax, %eax
	je	.L145
	movq	-312(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L145
	movl	$0, doShm(%rip)
.L145:
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$23, %edx
	movl	$1, %esi
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	movq	X_visual(%rip), %rdx
	movq	X_display(%rip), %rax
	movq	232(%rax), %rax
	movl	X_screen(%rip), %ecx
	movslq	%ecx, %rcx
	salq	$7, %rcx
	addq	%rcx, %rax
	movq	16(%rax), %rsi
	movq	X_display(%rip), %rax
	movl	$1, %ecx
	movq	%rax, %rdi
	call	XCreateColormap@PLT
	movq	%rax, X_cmap(%rip)
	movq	$10248, -296(%rbp)
	movq	$32771, -216(%rbp)
	movq	X_cmap(%rip), %rax
	movq	%rax, -192(%rbp)
	movq	$0, -264(%rbp)
	movq	X_visual(%rip), %rdi
	movl	X_height(%rip), %eax
	movl	%eax, %r9d
	movl	X_width(%rip), %eax
	movl	%eax, %r10d
	movl	-332(%rbp), %ecx
	movl	-336(%rbp), %edx
	movq	X_display(%rip), %rax
	movq	232(%rax), %rax
	movl	X_screen(%rip), %esi
	movslq	%esi, %rsi
	salq	$7, %rsi
	addq	%rsi, %rax
	movq	16(%rax), %rsi
	movq	X_display(%rip), %rax
	leaq	-288(%rbp), %r8
	pushq	%r8
	pushq	-296(%rbp)
	pushq	%rdi
	pushq	$1
	pushq	$8
	pushq	$0
	movl	%r10d, %r8d
	movq	%rax, %rdi
	call	XCreateWindow@PLT
	addq	$48, %rsp
	movq	%rax, X_mainWindow(%rip)
	movq	X_mainWindow(%rip), %rdx
	movq	X_display(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	createnullcursor
	movq	%rax, %rdx
	movq	X_mainWindow(%rip), %rcx
	movq	X_display(%rip), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	XDefineCursor@PLT
	movl	$65536, -316(%rbp)
	movl	$0, -76(%rbp)
	movl	-316(%rbp), %eax
	movslq	%eax, %rdx
	movq	X_mainWindow(%rip), %rsi
	movq	X_display(%rip), %rax
	leaq	-176(%rbp), %rcx
	movq	%rax, %rdi
	call	XCreateGC@PLT
	movq	%rax, X_gc(%rip)
	movq	X_cmap(%rip), %rdx
	movq	X_display(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XInstallColormap@PLT
	movq	X_mainWindow(%rip), %rdx
	movq	X_display(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XMapWindow@PLT
	movl	$0, -328(%rbp)
	jmp	.L151
.L153:
	movq	X_display(%rip), %rax
	leaq	X_event(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XNextEvent@PLT
	movl	X_event(%rip), %eax
	cmpl	$12, %eax
	jne	.L151
	movl	56+X_event(%rip), %eax
	testl	%eax, %eax
	jne	.L151
	movl	$1, -328(%rbp)
.L151:
	cmpl	$0, -328(%rbp)
	je	.L153
	movl	grabMouse(%rip), %eax
	testl	%eax, %eax
	je	.L154
	movq	X_mainWindow(%rip), %rdx
	movq	X_mainWindow(%rip), %rsi
	movq	X_display(%rip), %rax
	subq	$8, %rsp
	pushq	$0
	pushq	$0
	pushq	%rdx
	movl	$1, %r9d
	movl	$1, %r8d
	movl	$76, %ecx
	movl	$1, %edx
	movq	%rax, %rdi
	call	XGrabPointer@PLT
	addq	$32, %rsp
.L154:
	movl	doShm(%rip), %eax
	testl	%eax, %eax
	je	.L155
	movq	X_display(%rip), %rax
	movq	%rax, %rdi
	call	XShmGetEventBase@PLT
	movl	%eax, X_shmeventtype(%rip)
	movl	X_height(%rip), %eax
	movl	%eax, %ecx
	movl	X_width(%rip), %eax
	movl	%eax, %edx
	movq	X_visual(%rip), %rsi
	movq	X_display(%rip), %rax
	pushq	%rcx
	pushq	%rdx
	leaq	X_shminfo(%rip), %r9
	movl	$0, %r8d
	movl	$2, %ecx
	movl	$8, %edx
	movq	%rax, %rdi
	call	XShmCreateImage@PLT
	addq	$16, %rsp
	movq	%rax, image(%rip)
	movq	image(%rip), %rax
	movl	44(%rax), %edx
	movq	image(%rip), %rax
	movl	4(%rax), %eax
	imull	%edx, %eax
	movl	%eax, %edi
	call	grabsharedmemory
	movq	image(%rip), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L156
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	call	perror@PLT
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L156:
	movq	X_display(%rip), %rax
	leaq	X_shminfo(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XShmAttach@PLT
	testl	%eax, %eax
	jne	.L157
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L157
.L155:
	movl	X_width(%rip), %ebx
	movl	X_height(%rip), %eax
	movl	%eax, %r13d
	movl	X_width(%rip), %eax
	movl	%eax, %r12d
	movl	X_width(%rip), %edx
	movl	X_height(%rip), %eax
	imull	%edx, %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, %rdx
	movq	X_visual(%rip), %rsi
	movq	X_display(%rip), %rax
	pushq	%rbx
	pushq	$8
	pushq	%r13
	pushq	%r12
	movq	%rdx, %r9
	movl	$0, %r8d
	movl	$2, %ecx
	movl	$8, %edx
	movq	%rax, %rdi
	call	XCreateImage@PLT
	addq	$32, %rsp
	movq	%rax, image(%rip)
.L157:
	movl	multiply(%rip), %eax
	cmpl	$1, %eax
	jne	.L158
	movq	image(%rip), %rax
	movq	16(%rax), %rax
	movq	%rax, screens(%rip)
	jmp	.L130
.L158:
	movl	$64000, %edi
	call	malloc@PLT
	movq	%rax, screens(%rip)
	jmp	.L130
.L161:
	nop
.L130:
	movq	-40(%rbp), %rax
	subq	%fs:40, %rax
	je	.L160
	call	__stack_chk_fail@PLT
.L160:
	leaq	-24(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	I_InitGraphics, .-I_InitGraphics
	.globl	exptable
	.bss
	.align 32
	.type	exptable, @object
	.size	exptable, 1024
exptable:
	.zero	1024
	.text
	.globl	InitExpand
	.type	InitExpand, @function
InitExpand:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, -4(%rbp)
	jmp	.L163
.L164:
	movl	-4(%rbp), %eax
	sall	$8, %eax
	orl	-4(%rbp), %eax
	movl	-4(%rbp), %edx
	sall	$16, %edx
	orl	%eax, %edx
	movl	-4(%rbp), %eax
	sall	$24, %eax
	orl	%edx, %eax
	movl	%eax, %ecx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	exptable(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L163:
	cmpl	$255, -4(%rbp)
	jle	.L164
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	InitExpand, .-InitExpand
	.globl	exptable2
	.bss
	.align 32
	.type	exptable2, @object
	.size	exptable2, 524288
exptable2:
	.zero	524288
	.section	.rodata
.LC30:
	.string	"building exptable2..."
.LC31:
	.string	"done."
	.text
	.globl	InitExpand2
	.type	InitExpand2, @function
InitExpand2:
.LFB20:
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
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	exptable2(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$0, -32(%rbp)
	jmp	.L166
.L169:
	movl	-32(%rbp), %eax
	sall	$8, %eax
	orl	-32(%rbp), %eax
	movl	-32(%rbp), %edx
	sall	$16, %edx
	orl	%eax, %edx
	movl	-32(%rbp), %eax
	sall	$24, %eax
	orl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L167
.L168:
	movl	-28(%rbp), %eax
	sall	$8, %eax
	orl	-28(%rbp), %eax
	movl	-28(%rbp), %edx
	sall	$16, %edx
	orl	%eax, %edx
	movl	-28(%rbp), %eax
	sall	$24, %eax
	orl	%edx, %eax
	movl	%eax, -12(%rbp)
	movq	-24(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	addl	$1, -28(%rbp)
.L167:
	cmpl	$255, -28(%rbp)
	jle	.L168
	addl	$1, -32(%rbp)
.L166:
	cmpl	$255, -32(%rbp)
	jle	.L169
	leaq	.LC31(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L170
	call	__stack_chk_fail@PLT
.L170:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	InitExpand2, .-InitExpand2
	.globl	inited
	.bss
	.align 4
	.type	inited, @object
	.size	inited, 4
inited:
	.zero	4
	.text
	.globl	Expand4
	.type	Expand4, @function
Expand4:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	leaq	exptable2(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	inited(%rip), %eax
	testl	%eax, %eax
	jne	.L172
	movl	$1, inited(%rip)
	call	InitExpand2
.L172:
	movl	$480, -24(%rbp)
	movl	$199, -28(%rbp)
.L174:
	movl	$320, -32(%rbp)
.L173:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	shrl	$13, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1280, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2560, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3840, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	sall	$3, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$8, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1288, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2568, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3848, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	shrl	$13, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1296, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2576, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3856, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	sall	$3, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$24, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1304, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2584, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3864, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-40(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	shrl	$13, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$32, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1312, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2592, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3872, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	sall	$3, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$40, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1320, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2600, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3880, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-40(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	shrl	$13, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$48, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1328, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2608, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3888, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-16(%rbp), %rax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	sall	$3, %eax
	andl	$524280, %eax
	addl	%edx, %eax
	movl	%eax, %eax
	movsd	(%rax), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-48(%rbp), %rax
	addq	$56, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$1336, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$2616, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$3896, %rax
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	addq	$16, -40(%rbp)
	addq	$64, -48(%rbp)
	subl	$16, -32(%rbp)
	cmpl	$0, -32(%rbp)
	jne	.L173
	movl	-24(%rbp), %eax
	salq	$3, %rax
	addq	%rax, -48(%rbp)
	movl	-28(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -28(%rbp)
	testl	%eax, %eax
	jne	.L174
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	Expand4, .-Expand4
	.local	lasttic.2
	.comm	lasttic.2,4,4
	.data
	.align 4
	.type	firstcall.1, @object
	.size	firstcall.1, 4
firstcall.1:
	.long	1
	.align 4
	.type	firsttime.0, @object
	.size	firsttime.0, 4
firsttime.0:
	.long	1
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
