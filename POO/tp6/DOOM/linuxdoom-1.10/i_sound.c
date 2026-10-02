	.file	"i_sound.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: i_unix.c,v 1.5 1997/02/03 22:45:10 b1 Exp $"
	.globl	sndserver
	.bss
	.align 8
	.type	sndserver, @object
	.size	sndserver, 8
sndserver:
	.zero	8
	.globl	sndserver_filename
	.section	.rodata
.LC0:
	.string	"./sndserver "
	.section	.data.rel.local,"aw"
	.align 8
	.type	sndserver_filename, @object
	.size	sndserver_filename, 8
sndserver_filename:
	.quad	.LC0
	.local	flag
	.comm	flag,4,4
	.globl	lengths
	.bss
	.align 32
	.type	lengths, @object
	.size	lengths, 436
lengths:
	.zero	436
	.globl	audio_fd
	.align 4
	.type	audio_fd, @object
	.size	audio_fd, 4
audio_fd:
	.zero	4
	.globl	mixbuffer
	.align 32
	.type	mixbuffer, @object
	.size	mixbuffer, 4096
mixbuffer:
	.zero	4096
	.globl	channelstep
	.align 32
	.type	channelstep, @object
	.size	channelstep, 32
channelstep:
	.zero	32
	.globl	channelstepremainder
	.align 32
	.type	channelstepremainder, @object
	.size	channelstepremainder, 32
channelstepremainder:
	.zero	32
	.globl	channels
	.align 32
	.type	channels, @object
	.size	channels, 64
channels:
	.zero	64
	.globl	channelsend
	.align 32
	.type	channelsend, @object
	.size	channelsend, 64
channelsend:
	.zero	64
	.globl	channelstart
	.align 32
	.type	channelstart, @object
	.size	channelstart, 32
channelstart:
	.zero	32
	.globl	channelhandles
	.align 32
	.type	channelhandles, @object
	.size	channelhandles, 32
channelhandles:
	.zero	32
	.globl	channelids
	.align 32
	.type	channelids, @object
	.size	channelids, 32
channelids:
	.zero	32
	.globl	steptable
	.align 32
	.type	steptable, @object
	.size	steptable, 1024
steptable:
	.zero	1024
	.globl	vol_lookup
	.align 32
	.type	vol_lookup, @object
	.size	vol_lookup, 131072
vol_lookup:
	.zero	131072
	.globl	channelleftvol_lookup
	.align 32
	.type	channelleftvol_lookup, @object
	.size	channelleftvol_lookup, 64
channelleftvol_lookup:
	.zero	64
	.globl	channelrightvol_lookup
	.align 32
	.type	channelrightvol_lookup, @object
	.size	channelrightvol_lookup, 64
channelrightvol_lookup:
	.zero	64
	.section	.rodata
.LC1:
	.string	"ioctl(dsp,%d,arg) failed\n"
.LC2:
	.string	"errno=%d\n"
	.text
	.globl	myioctl
	.type	myioctl, @function
myioctl:
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
	movq	%rdx, -32(%rbp)
	movl	-24(%rbp), %eax
	movslq	%eax, %rcx
	movq	-32(%rbp), %rdx
	movl	-20(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	movl	$0, %eax
	call	ioctl@PLT
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L3
	movq	stderr(%rip), %rax
	movl	-24(%rbp), %edx
	leaq	.LC1(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	call	__errno_location@PLT
	movl	(%rax), %edx
	movq	stderr(%rip), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movl	$-1, %edi
	call	exit@PLT
.L3:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	myioctl, .-myioctl
	.section	.rodata
.LC3:
	.string	"ds%s"
.LC4:
	.string	"dspistol"
	.text
	.globl	getsfx
	.type	getsfx, @function
getsfx:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-72(%rbp), %rdx
	leaq	-32(%rbp), %rax
	leaq	.LC3(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	cmpl	$-1, %eax
	jne	.L5
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, -60(%rbp)
	jmp	.L6
.L5:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, -60(%rbp)
.L6:
	movl	-60(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength@PLT
	movl	%eax, -56(%rbp)
	movl	-60(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -48(%rbp)
	movl	-56(%rbp), %eax
	addl	$503, %eax
	leal	511(%rax), %edx
	testl	%eax, %eax
	cmovs	%edx, %eax
	sarl	$9, %eax
	sall	$9, %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	addl	$8, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, -40(%rbp)
	movl	-56(%rbp), %eax
	movslq	%eax, %rdx
	movq	-48(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movl	-56(%rbp), %eax
	movl	%eax, -64(%rbp)
	jmp	.L7
.L8:
	movl	-64(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movb	$-128, (%rax)
	addl	$1, -64(%rbp)
.L7:
	movl	-52(%rbp), %eax
	addl	$7, %eax
	cmpl	%eax, -64(%rbp)
	jle	.L8
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	movq	-80(%rbp), %rax
	movl	-52(%rbp), %edx
	movl	%edx, (%rax)
	movq	-40(%rbp), %rax
	addq	$8, %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	getsfx, .-getsfx
	.section	.rodata
.LC5:
	.string	"rightvol out of bounds"
.LC6:
	.string	"leftvol out of bounds"
	.text
	.globl	addsfx
	.type	addsfx, @function
addsfx:
.LFB8:
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
	movl	$-1, -12(%rbp)
	movl	gametic(%rip), %eax
	movl	%eax, -24(%rbp)
	movl	$0, -20(%rbp)
	cmpl	$10, -36(%rbp)
	je	.L12
	cmpl	$11, -36(%rbp)
	je	.L12
	cmpl	$12, -36(%rbp)
	je	.L12
	cmpl	$13, -36(%rbp)
	je	.L12
	cmpl	$22, -36(%rbp)
	je	.L12
	cmpl	$1, -36(%rbp)
	jne	.L13
.L12:
	movl	$0, -28(%rbp)
	jmp	.L14
.L16:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L15
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelids(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -36(%rbp)
	jne	.L15
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	$0, (%rdx,%rax)
	jmp	.L13
.L15:
	addl	$1, -28(%rbp)
.L14:
	cmpl	$7, -28(%rbp)
	jle	.L16
.L13:
	movl	$0, -28(%rbp)
	jmp	.L17
.L20:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelstart(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -24(%rbp)
	jle	.L18
	movl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelstart(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -24(%rbp)
.L18:
	addl	$1, -28(%rbp)
.L17:
	cmpl	$7, -28(%rbp)
	jg	.L19
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	jne	.L20
.L19:
	cmpl	$8, -28(%rbp)
	jne	.L21
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L22
.L21:
	movl	-28(%rbp), %eax
	movl	%eax, -16(%rbp)
.L22:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	32+S_sfx(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	channels(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	lengths(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channelsend(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	movzwl	handlenums.0(%rip), %eax
	testw	%ax, %ax
	jne	.L23
	movw	$100, handlenums.0(%rip)
.L23:
	movzwl	handlenums.0(%rip), %eax
	leal	1(%rax), %edx
	movw	%dx, handlenums.0(%rip)
	movzwl	%ax, %eax
	movl	%eax, -12(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	channelhandles(%rip), %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-44(%rbp), %eax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	channelstep(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelstepremainder(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	gametic(%rip), %eax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	channelstart(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -48(%rbp)
	movl	-40(%rbp), %eax
	imull	-48(%rbp), %eax
	imull	-48(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-40(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, -8(%rbp)
	subl	$257, -48(%rbp)
	movl	-40(%rbp), %eax
	imull	-48(%rbp), %eax
	imull	-48(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	-40(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	js	.L24
	cmpl	$127, -4(%rbp)
	jle	.L25
.L24:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L25:
	cmpl	$0, -8(%rbp)
	js	.L26
	cmpl	$127, -8(%rbp)
	jle	.L27
.L26:
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L27:
	movl	-8(%rbp), %eax
	sall	$8, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	vol_lookup(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channelleftvol_lookup(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	sall	$8, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	vol_lookup(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channelrightvol_lookup(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	channelids(%rip), %rdx
	movl	-36(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-12(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	addsfx, .-addsfx
	.globl	I_SetChannels
	.type	I_SetChannels, @function
I_SetChannels:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	512+steptable(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$-128, -16(%rbp)
	jmp	.L30
.L31:
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-16(%rbp), %xmm0
	movsd	.LC7(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movq	.LC8(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow@PLT
	movsd	.LC9(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	cvttsd2sil	%xmm0, %eax
	movl	%eax, (%rdx)
	addl	$1, -16(%rbp)
.L30:
	cmpl	$127, -16(%rbp)
	jle	.L31
	movl	$0, -16(%rbp)
	jmp	.L32
.L35:
	movl	$0, -12(%rbp)
	jmp	.L33
.L34:
	movl	-12(%rbp), %eax
	addl	$-128, %eax
	imull	-16(%rbp), %eax
	sall	$8, %eax
	movl	-16(%rbp), %edx
	movl	%edx, %ecx
	sall	$8, %ecx
	movl	-12(%rbp), %edx
	leal	(%rcx,%rdx), %esi
	movslq	%eax, %rdx
	imulq	$-2130574327, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	sarl	$6, %edx
	sarl	$31, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movslq	%esi, %rax
	leaq	0(,%rax,4), %rdx
	leaq	vol_lookup(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -12(%rbp)
.L33:
	cmpl	$255, -12(%rbp)
	jle	.L34
	addl	$1, -16(%rbp)
.L32:
	cmpl	$127, -16(%rbp)
	jle	.L35
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	I_SetChannels, .-I_SetChannels
	.globl	I_SetSfxVolume
	.type	I_SetSfxVolume, @function
I_SetSfxVolume:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, snd_SfxVolume(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	I_SetSfxVolume, .-I_SetSfxVolume
	.globl	I_SetMusicVolume
	.type	I_SetMusicVolume, @function
I_SetMusicVolume:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, snd_MusicVolume(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	I_SetMusicVolume, .-I_SetMusicVolume
	.globl	I_GetSfxLumpNum
	.type	I_GetSfxLumpNum, @function
I_GetSfxLumpNum:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rdx
	leaq	-17(%rbp), %rax
	leaq	.LC3(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-17(%rbp), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L40
	call	__stack_chk_fail@PLT
.L40:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	I_GetSfxLumpNum, .-I_GetSfxLumpNum
	.section	.rodata
.LC10:
	.string	"p%2.2x%2.2x%2.2x%2.2x\n"
	.text
	.globl	I_StartSound
	.type	I_StartSound, @function
I_StartSound:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movl	%r8d, -20(%rbp)
	movl	$0, -20(%rbp)
	movq	sndserver(%rip), %rax
	testq	%rax, %rax
	je	.L42
	movq	sndserver(%rip), %rax
	movl	-12(%rbp), %edi
	movl	-8(%rbp), %esi
	movl	-16(%rbp), %ecx
	movl	-4(%rbp), %edx
	movl	%edi, %r9d
	movl	%esi, %r8d
	leaq	.LC10(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movq	sndserver(%rip), %rax
	movq	%rax, %rdi
	call	fflush@PLT
.L42:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	I_StartSound, .-I_StartSound
	.globl	I_StopSound
	.type	I_StopSound, @function
I_StopSound:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	I_StopSound, .-I_StopSound
	.globl	I_SoundIsPlaying
	.type	I_SoundIsPlaying, @function
I_SoundIsPlaying:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	gametic(%rip), %eax
	cmpl	%eax, -4(%rbp)
	setg	%al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	I_SoundIsPlaying, .-I_SoundIsPlaying
	.globl	I_UpdateSound
	.type	I_UpdateSound, @function
I_UpdateSound:
.LFB16:
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
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	leaq	mixbuffer(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	2+mixbuffer(%rip), %rax
	movq	%rax, -40(%rbp)
	movl	$2, -52(%rbp)
	movl	-52(%rbp), %eax
	sall	$9, %eax
	cltq
	leaq	(%rax,%rax), %rdx
	leaq	mixbuffer(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	jmp	.L48
.L58:
	movl	$0, %r12d
	movl	$0, %ebx
	movl	$0, -56(%rbp)
	jmp	.L49
.L51:
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L50
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %r13d
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channelleftvol_lookup(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	%r13d, %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, %r12d
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channelrightvol_lookup(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	%r13d, %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, %ebx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelstepremainder(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	channelstep(%rip), %rax
	movl	(%rcx,%rax), %eax
	leal	(%rdx,%rax), %ecx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelstepremainder(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	channelstepremainder(%rip), %rdx
	movl	(%rcx,%rdx), %edx
	shrl	$16, %edx
	movl	%edx, %edx
	leaq	(%rax,%rdx), %rcx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	channelstepremainder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movzwl	%ax, %eax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	channelstepremainder(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	channelsend(%rip), %rax
	movq	(%rcx,%rax), %rax
	cmpq	%rax, %rdx
	jb	.L50
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	channels(%rip), %rax
	movq	$0, (%rdx,%rax)
.L50:
	addl	$1, -56(%rbp)
.L49:
	cmpl	$7, -56(%rbp)
	jle	.L51
	cmpl	$32767, %r12d
	jle	.L52
	movq	-48(%rbp), %rax
	movw	$32767, (%rax)
	jmp	.L53
.L52:
	cmpl	$-32768, %r12d
	jge	.L54
	movq	-48(%rbp), %rax
	movw	$-32768, (%rax)
	jmp	.L53
.L54:
	movl	%r12d, %edx
	movq	-48(%rbp), %rax
	movw	%dx, (%rax)
.L53:
	cmpl	$32767, %ebx
	jle	.L55
	movq	-40(%rbp), %rax
	movw	$32767, (%rax)
	jmp	.L56
.L55:
	cmpl	$-32768, %ebx
	jge	.L57
	movq	-40(%rbp), %rax
	movw	$-32768, (%rax)
	jmp	.L56
.L57:
	movl	%ebx, %edx
	movq	-40(%rbp), %rax
	movw	%dx, (%rax)
.L56:
	movl	-52(%rbp), %eax
	cltq
	addq	%rax, %rax
	addq	%rax, -48(%rbp)
	movl	-52(%rbp), %eax
	cltq
	addq	%rax, %rax
	addq	%rax, -40(%rbp)
.L48:
	movq	-48(%rbp), %rax
	cmpq	-32(%rbp), %rax
	jne	.L58
	nop
	nop
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	I_UpdateSound, .-I_UpdateSound
	.globl	I_SubmitSound
	.type	I_SubmitSound, @function
I_SubmitSound:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	audio_fd(%rip), %eax
	movl	$2048, %edx
	leaq	mixbuffer(%rip), %rcx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	write@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	I_SubmitSound, .-I_SubmitSound
	.globl	I_UpdateSoundParams
	.type	I_UpdateSoundParams, @function
I_UpdateSoundParams:
.LFB18:
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
	movl	%ecx, -16(%rbp)
	movl	$0, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	I_UpdateSoundParams, .-I_UpdateSoundParams
	.section	.rodata
.LC11:
	.string	"q\n"
	.text
	.globl	I_ShutdownSound
	.type	I_ShutdownSound, @function
I_ShutdownSound:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	sndserver(%rip), %rax
	testq	%rax, %rax
	je	.L64
	movq	sndserver(%rip), %rax
	movq	%rax, %rcx
	movl	$2, %edx
	movl	$1, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	movq	sndserver(%rip), %rax
	movq	%rax, %rdi
	call	fflush@PLT
	nop
.L64:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	I_ShutdownSound, .-I_ShutdownSound
	.section	.rodata
.LC12:
	.string	"DOOMWADDIR"
.LC13:
	.string	"%s/%s"
.LC14:
	.string	"%s"
.LC15:
	.string	"w"
	.align 8
.LC16:
	.string	"Could not start sound server [%s]\n"
	.text
	.globl	I_InitSound
	.type	I_InitSound, @function
I_InitSound:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$280, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	getenv@PLT
	testq	%rax, %rax
	je	.L66
	movq	sndserver_filename(%rip), %rbx
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	getenv@PLT
	movq	%rax, %rdx
	leaq	-288(%rbp), %rax
	movq	%rbx, %rcx
	leaq	.LC13(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L67
.L66:
	movq	sndserver_filename(%rip), %rdx
	leaq	-288(%rbp), %rax
	leaq	.LC14(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L67:
	leaq	-288(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L68
	leaq	-288(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, %rdx
	leaq	-288(%rbp), %rax
	addq	%rdx, %rax
	movabsq	$32762600914758944, %rbx
	movq	%rbx, (%rax)
	leaq	-288(%rbp), %rax
	leaq	.LC15(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	popen@PLT
	movq	%rax, sndserver(%rip)
	jmp	.L71
.L68:
	movq	stderr(%rip), %rax
	leaq	-288(%rbp), %rdx
	leaq	.LC16(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
.L71:
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L70
	call	__stack_chk_fail@PLT
.L70:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	I_InitSound, .-I_InitSound
	.globl	I_InitMusic
	.type	I_InitMusic, @function
I_InitMusic:
.LFB21:
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
.LFE21:
	.size	I_InitMusic, .-I_InitMusic
	.globl	I_ShutdownMusic
	.type	I_ShutdownMusic, @function
I_ShutdownMusic:
.LFB22:
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
.LFE22:
	.size	I_ShutdownMusic, .-I_ShutdownMusic
	.local	looping
	.comm	looping,4,4
	.data
	.align 4
	.type	musicdies, @object
	.size	musicdies, 4
musicdies:
	.long	-1
	.text
	.globl	I_PlaySong
	.type	I_PlaySong, @function
I_PlaySong:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	$0, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	gametic(%rip), %eax
	addl	$1050, %eax
	movl	%eax, musicdies(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	I_PlaySong, .-I_PlaySong
	.globl	I_PauseSong
	.type	I_PauseSong, @function
I_PauseSong:
.LFB24:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	I_PauseSong, .-I_PauseSong
	.globl	I_ResumeSong
	.type	I_ResumeSong, @function
I_ResumeSong:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	I_ResumeSong, .-I_ResumeSong
	.globl	I_StopSong
	.type	I_StopSong, @function
I_StopSong:
.LFB26:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, looping(%rip)
	movl	$0, musicdies(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	I_StopSong, .-I_StopSong
	.globl	I_UnRegisterSong
	.type	I_UnRegisterSong, @function
I_UnRegisterSong:
.LFB27:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	I_UnRegisterSong, .-I_UnRegisterSong
	.globl	I_RegisterSong
	.type	I_RegisterSong, @function
I_RegisterSong:
.LFB28:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	$0, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	I_RegisterSong, .-I_RegisterSong
	.globl	I_QrySongPlaying
	.type	I_QrySongPlaying, @function
I_QrySongPlaying:
.LFB29:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	movl	looping(%rip), %eax
	testl	%eax, %eax
	jne	.L82
	movl	musicdies(%rip), %edx
	movl	gametic(%rip), %eax
	cmpl	%eax, %edx
	jle	.L83
.L82:
	movl	$1, %eax
	jmp	.L85
.L83:
	movl	$0, %eax
.L85:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	I_QrySongPlaying, .-I_QrySongPlaying
	.local	itimer
	.comm	itimer,4,4
	.data
	.align 4
	.type	sig, @object
	.size	sig, 4
sig:
	.long	14
	.text
	.globl	I_HandleSoundTimer
	.type	I_HandleSoundTimer, @function
I_HandleSoundTimer:
.LFB30:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	flag(%rip), %eax
	testl	%eax, %eax
	je	.L90
	movl	audio_fd(%rip), %eax
	movl	$2048, %edx
	leaq	mixbuffer(%rip), %rcx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	write@PLT
	movl	$0, flag(%rip)
	movl	$0, -4(%rbp)
	jmp	.L86
.L90:
	nop
.L86:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE30:
	.size	I_HandleSoundTimer, .-I_HandleSoundTimer
	.section	.rodata
	.align 8
.LC17:
	.string	"I_SoundSetTimer: interrupt n.a.\n"
	.text
	.globl	I_SoundSetTimer
	.type	I_SoundSetTimer, @function
I_SoundSetTimer:
.LFB31:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$416, %rsp
	movl	%edi, -404(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	I_HandleSoundTimer(%rip), %rax
	movq	%rax, -320(%rbp)
	movl	$268435456, -184(%rbp)
	movl	sig(%rip), %eax
	leaq	-160(%rbp), %rdx
	leaq	-320(%rbp), %rcx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	sigaction@PLT
	movq	$0, -384(%rbp)
	movl	-404(%rbp), %eax
	cltq
	movq	%rax, -376(%rbp)
	movq	$0, -368(%rbp)
	movl	-404(%rbp), %eax
	cltq
	movq	%rax, -360(%rbp)
	movl	itimer(%rip), %eax
	leaq	-352(%rbp), %rdx
	leaq	-384(%rbp), %rcx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	setitimer@PLT
	movl	%eax, -388(%rbp)
	cmpl	$-1, -388(%rbp)
	jne	.L92
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$32, %edx
	movl	$1, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L92:
	movl	-388(%rbp), %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L94
	call	__stack_chk_fail@PLT
.L94:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE31:
	.size	I_SoundSetTimer, .-I_SoundSetTimer
	.section	.rodata
	.align 8
.LC18:
	.string	"I_SoundDelTimer: failed to remove interrupt. Doh!\n"
	.text
	.globl	I_SoundDelTimer
	.type	I_SoundDelTimer, @function
I_SoundDelTimer:
.LFB32:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %edi
	call	I_SoundSetTimer
	cmpl	$-1, %eax
	jne	.L97
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$50, %edx
	movl	$1, %esi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L97:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE32:
	.size	I_SoundDelTimer, .-I_SoundDelTimer
	.local	handlenums.0
	.comm	handlenums.0,2,2
	.section	.rodata
	.align 8
.LC7:
	.long	0
	.long	1078984704
	.align 8
.LC8:
	.long	0
	.long	1073741824
	.align 8
.LC9:
	.long	0
	.long	1089470464
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
