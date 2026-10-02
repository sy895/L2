	.file	"s_sound.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: s_sound.c,v 1.6 1997/02/03 22:45:12 b1 Exp $"
	.globl	snd_prefixen
	.align 8
	.type	snd_prefixen, @object
	.size	snd_prefixen, 12
snd_prefixen:
	.ascii	"PPASSSMMMSSS"
	.local	channels
	.comm	channels,8,8
	.globl	snd_SfxVolume
	.data
	.align 4
	.type	snd_SfxVolume, @object
	.size	snd_SfxVolume, 4
snd_SfxVolume:
	.long	15
	.globl	snd_MusicVolume
	.align 4
	.type	snd_MusicVolume, @object
	.size	snd_MusicVolume, 4
snd_MusicVolume:
	.long	15
	.local	mus_paused
	.comm	mus_paused,4,4
	.local	mus_playing
	.comm	mus_playing,8,8
	.globl	numChannels
	.bss
	.align 4
	.type	numChannels, @object
	.size	numChannels, 4
numChannels:
	.zero	4
	.local	nextcleanup
	.comm	nextcleanup,4,4
	.section	.rodata
	.align 8
.LC0:
	.string	"S_Init: default sfx volume %d\n"
	.text
	.globl	S_Init
	.type	S_Init, @function
S_Init:
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
	movq	stderr(%rip), %rax
	movl	-20(%rbp), %edx
	leaq	.LC0(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movl	$0, %eax
	call	I_SetChannels@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	S_SetSfxVolume
	movl	-24(%rbp), %eax
	movl	%eax, %edi
	call	S_SetMusicVolume
	movl	numChannels(%rip), %eax
	cltq
	movl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$3, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, channels(%rip)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movq	channels(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	$0, (%rax)
	addl	$1, -4(%rbp)
.L2:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L3
	movl	$0, mus_paused(%rip)
	movl	$1, -4(%rbp)
	jmp	.L4
.L5:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	40+S_sfx(%rip), %rax
	movl	$-1, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	40+S_sfx(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	44+S_sfx(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L4:
	cmpl	$108, -4(%rbp)
	jle	.L5
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	S_Init, .-S_Init
	.globl	S_Start
	.type	S_Start, @function
S_Start:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -56(%rbp)
	jmp	.L7
.L9:
	movq	channels(%rip), %rcx
	movl	-56(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L8
	movl	-56(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
.L8:
	addl	$1, -56(%rbp)
.L7:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L9
	movl	$0, mus_paused(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L10
	movl	gamemap(%rip), %eax
	addl	$32, %eax
	movl	%eax, -52(%rbp)
	jmp	.L11
.L10:
	movl	$22, -48(%rbp)
	movl	$20, -44(%rbp)
	movl	$21, -40(%rbp)
	movl	$5, -36(%rbp)
	movl	$16, -32(%rbp)
	movl	$13, -28(%rbp)
	movl	$15, -24(%rbp)
	movl	$14, -20(%rbp)
	movl	$9, -16(%rbp)
	movl	gameepisode(%rip), %eax
	cmpl	$3, %eax
	jg	.L12
	movl	gameepisode(%rip), %eax
	leal	-1(%rax), %edx
	movl	%edx, %eax
	sall	$3, %eax
	addl	%edx, %eax
	leal	1(%rax), %edx
	movl	gamemap(%rip), %eax
	addl	%edx, %eax
	subl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	.L11
.L12:
	movl	gamemap(%rip), %eax
	subl	$1, %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, -52(%rbp)
.L11:
	movl	-52(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	S_ChangeMusic
	movl	$15, nextcleanup(%rip)
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L14
	call	__stack_chk_fail@PLT
.L14:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	S_Start, .-S_Start
	.section	.rodata
.LC1:
	.string	"Bad sfx #: %d"
	.align 8
.LC2:
	.string	"S_StartSoundAtVolume: 16bit and not pre-cached - wtf?\n"
	.text
	.globl	S_StartSoundAtVolume
	.type	S_StartSoundAtVolume, @function
S_StartSoundAtVolume:
.LFB8:
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
	movl	%esi, -76(%rbp)
	movl	%edx, -80(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-72(%rbp), %rax
	movq	%rax, -40(%rbp)
	cmpl	$0, -76(%rbp)
	jle	.L16
	cmpl	$109, -76(%rbp)
	jle	.L17
.L16:
	movl	-76(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L17:
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	leaq	S_sfx(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L18
	movq	-32(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, -56(%rbp)
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -52(%rbp)
	movq	-32(%rbp), %rax
	movl	28(%rax), %edx
	movl	-80(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	testl	%eax, %eax
	jle	.L37
	movl	-80(%rbp), %edx
	movl	snd_SfxVolume(%rip), %eax
	cmpl	%eax, %edx
	jle	.L21
	movl	snd_SfxVolume(%rip), %eax
	movl	%eax, -80(%rbp)
	jmp	.L21
.L18:
	movl	$128, -56(%rbp)
	movl	$64, -52(%rbp)
.L21:
	cmpq	$0, -40(%rbp)
	je	.L22
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	%rax, -40(%rbp)
	je	.L22
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	leaq	-56(%rbp), %rdi
	leaq	-60(%rbp), %rcx
	leaq	-80(%rbp), %rdx
	movq	-40(%rbp), %rsi
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	S_AdjustSoundParams
	movl	%eax, -48(%rbp)
	movq	-40(%rbp), %rax
	movl	24(%rax), %ecx
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	24(%rax), %eax
	cmpl	%eax, %ecx
	jne	.L23
	movq	-40(%rbp), %rax
	movl	28(%rax), %ecx
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	28(%rax), %eax
	cmpl	%eax, %ecx
	jne	.L23
	movl	$128, -60(%rbp)
.L23:
	cmpl	$0, -48(%rbp)
	jne	.L25
	jmp	.L15
.L22:
	movl	$128, -60(%rbp)
.L25:
	cmpl	$9, -76(%rbp)
	jle	.L26
	cmpl	$13, -76(%rbp)
	jg	.L26
	call	M_Random@PLT
	andl	$15, %eax
	movl	$8, %edx
	subl	%eax, %edx
	movl	-56(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	testl	%eax, %eax
	jns	.L27
	movl	$0, -56(%rbp)
	jmp	.L38
.L27:
	movl	-56(%rbp), %eax
	cmpl	$255, %eax
	jle	.L38
	movl	$255, -56(%rbp)
	jmp	.L38
.L26:
	cmpl	$32, -76(%rbp)
	je	.L29
	cmpl	$87, -76(%rbp)
	je	.L29
	call	M_Random@PLT
	andl	$31, %eax
	movl	$16, %edx
	subl	%eax, %edx
	movl	-56(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	testl	%eax, %eax
	jns	.L30
	movl	$0, -56(%rbp)
	jmp	.L29
.L30:
	movl	-56(%rbp), %eax
	cmpl	$255, %eax
	jle	.L29
	movl	$255, -56(%rbp)
	jmp	.L29
.L38:
	nop
.L29:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	S_StopSound
	movq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	S_getChannel
	movl	%eax, -44(%rbp)
	cmpl	$0, -44(%rbp)
	js	.L39
	movq	-32(%rbp), %rax
	movl	44(%rax), %eax
	testl	%eax, %eax
	jns	.L32
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	I_GetSfxLumpNum@PLT
	movq	-32(%rbp), %rdx
	movl	%eax, 44(%rdx)
.L32:
	movq	-32(%rbp), %rax
	movq	32(%rax), %rax
	testq	%rax, %rax
	jne	.L33
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$54, %edx
	movl	$1, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L33:
	movq	-32(%rbp), %rax
	movl	40(%rax), %eax
	leal	1(%rax), %ecx
	movq	-32(%rbp), %rdx
	movl	%ecx, 40(%rdx)
	testl	%eax, %eax
	jns	.L34
	movq	-32(%rbp), %rax
	movl	$1, 40(%rax)
.L34:
	movl	-56(%rbp), %ecx
	movl	-60(%rbp), %edi
	movl	-80(%rbp), %esi
	movq	channels(%rip), %r8
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%r8,%rax), %rbx
	movl	-52(%rbp), %edx
	movl	-76(%rbp), %eax
	movl	%edx, %r8d
	movl	%edi, %edx
	movl	%eax, %edi
	call	I_StartSound@PLT
	movl	%eax, 16(%rbx)
	jmp	.L15
.L37:
	nop
	jmp	.L15
.L39:
	nop
.L15:
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L36
	call	__stack_chk_fail@PLT
.L36:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	S_StartSoundAtVolume, .-S_StartSoundAtVolume
	.globl	S_StartSound
	.type	S_StartSound, @function
S_StartSound:
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
	movl	%esi, -12(%rbp)
	movl	snd_SfxVolume(%rip), %edx
	movl	-12(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	S_StartSoundAtVolume
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	S_StartSound, .-S_StartSound
	.globl	S_StopSound
	.type	S_StopSound, @function
S_StopSound:
.LFB10:
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
	jmp	.L42
.L45:
	movq	channels(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L43
	movq	channels(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	8(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L43
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
	jmp	.L44
.L43:
	addl	$1, -4(%rbp)
.L42:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L45
	nop
.L44:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	S_StopSound, .-S_StopSound
	.globl	S_PauseSound
	.type	S_PauseSound, @function
S_PauseSound:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	mus_playing(%rip), %rax
	testq	%rax, %rax
	je	.L48
	movl	mus_paused(%rip), %eax
	testl	%eax, %eax
	jne	.L48
	movq	mus_playing(%rip), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	I_PauseSong@PLT
	movl	$1, mus_paused(%rip)
.L48:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	S_PauseSound, .-S_PauseSound
	.globl	S_ResumeSound
	.type	S_ResumeSound, @function
S_ResumeSound:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	mus_playing(%rip), %rax
	testq	%rax, %rax
	je	.L51
	movl	mus_paused(%rip), %eax
	testl	%eax, %eax
	je	.L51
	movq	mus_playing(%rip), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	I_ResumeSong@PLT
	movl	$0, mus_paused(%rip)
.L51:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	S_ResumeSound, .-S_ResumeSound
	.globl	S_UpdateSounds
	.type	S_UpdateSounds, @function
S_UpdateSounds:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-72(%rbp), %rax
	movq	%rax, -32(%rbp)
	movl	$0, -40(%rbp)
	jmp	.L53
.L59:
	movq	channels(%rip), %rcx
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L54
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edi
	call	I_SoundIsPlaying@PLT
	testl	%eax, %eax
	je	.L55
	movl	snd_SfxVolume(%rip), %eax
	movl	%eax, -52(%rbp)
	movl	$128, -44(%rbp)
	movl	$128, -48(%rbp)
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L56
	movq	-16(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, -44(%rbp)
	movq	-16(%rbp), %rax
	movl	28(%rax), %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	testl	%eax, %eax
	jg	.L57
	movl	-40(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
	jmp	.L54
.L57:
	movl	-52(%rbp), %edx
	movl	snd_SfxVolume(%rip), %eax
	cmpl	%eax, %edx
	jle	.L56
	movl	snd_SfxVolume(%rip), %eax
	movl	%eax, -52(%rbp)
.L56:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L54
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	%rax, -72(%rbp)
	je	.L54
	movq	-24(%rbp), %rax
	movq	8(%rax), %rsi
	leaq	-44(%rbp), %rdi
	leaq	-48(%rbp), %rcx
	leaq	-52(%rbp), %rdx
	movq	-32(%rbp), %rax
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	S_AdjustSoundParams
	movl	%eax, -36(%rbp)
	cmpl	$0, -36(%rbp)
	jne	.L58
	movl	-40(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
	jmp	.L54
.L58:
	movl	-44(%rbp), %ecx
	movl	-48(%rbp), %edx
	movl	-52(%rbp), %esi
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edi
	call	I_UpdateSoundParams@PLT
	jmp	.L54
.L55:
	movl	-40(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
.L54:
	addl	$1, -40(%rbp)
.L53:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L59
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L60
	call	__stack_chk_fail@PLT
.L60:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	S_UpdateSounds, .-S_UpdateSounds
	.section	.rodata
	.align 8
.LC3:
	.string	"Attempt to set music volume at %d"
	.text
	.globl	S_SetMusicVolume
	.type	S_SetMusicVolume, @function
S_SetMusicVolume:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	js	.L62
	cmpl	$127, -4(%rbp)
	jle	.L63
.L62:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L63:
	movl	$127, %edi
	call	I_SetMusicVolume@PLT
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	I_SetMusicVolume@PLT
	movl	-4(%rbp), %eax
	movl	%eax, snd_MusicVolume(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	S_SetMusicVolume, .-S_SetMusicVolume
	.section	.rodata
	.align 8
.LC4:
	.string	"Attempt to set sfx volume at %d"
	.text
	.globl	S_SetSfxVolume
	.type	S_SetSfxVolume, @function
S_SetSfxVolume:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	js	.L65
	cmpl	$127, -4(%rbp)
	jle	.L66
.L65:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L66:
	movl	-4(%rbp), %eax
	movl	%eax, snd_SfxVolume(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	S_SetSfxVolume, .-S_SetSfxVolume
	.globl	S_StartMusic
	.type	S_StartMusic, @function
S_StartMusic:
.LFB16:
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
	movl	$0, %esi
	movl	%eax, %edi
	call	S_ChangeMusic
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	S_StartMusic, .-S_StartMusic
	.section	.rodata
.LC5:
	.string	"Bad music number %d"
.LC6:
	.string	"d_%s"
	.text
	.globl	S_ChangeMusic
	.type	S_ChangeMusic, @function
S_ChangeMusic:
.LFB17:
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
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	cmpl	$0, -36(%rbp)
	jle	.L69
	cmpl	$67, -36(%rbp)
	jle	.L70
.L69:
	movl	-36(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L71
.L70:
	movl	-36(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	S_music(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
.L71:
	movq	mus_playing(%rip), %rax
	cmpq	%rax, -32(%rbp)
	je	.L76
	call	S_StopMusic
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jne	.L74
	movq	-32(%rbp), %rax
	movq	(%rax), %rdx
	leaq	-17(%rbp), %rax
	leaq	.LC6(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-17(%rbp), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movq	-32(%rbp), %rdx
	movl	%eax, 8(%rdx)
.L74:
	movq	-32(%rbp), %rax
	movl	8(%rax), %eax
	movl	$3, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	-32(%rbp), %rdx
	movq	%rax, 16(%rdx)
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdi
	call	I_RegisterSong@PLT
	movq	-32(%rbp), %rdx
	movl	%eax, 24(%rdx)
	movq	-32(%rbp), %rax
	movl	24(%rax), %eax
	movl	-40(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	I_PlaySong@PLT
	movq	-32(%rbp), %rax
	movq	%rax, mus_playing(%rip)
	jmp	.L68
.L76:
	nop
.L68:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L75
	call	__stack_chk_fail@PLT
.L75:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	S_ChangeMusic, .-S_ChangeMusic
	.section	.rodata
.LC7:
	.string	"Z_CT at s_sound.c:%i"
	.text
	.globl	S_StopMusic
	.type	S_StopMusic, @function
S_StopMusic:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	mus_playing(%rip), %rax
	testq	%rax, %rax
	je	.L81
	movl	mus_paused(%rip), %eax
	testl	%eax, %eax
	je	.L79
	movq	mus_playing(%rip), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	I_ResumeSong@PLT
.L79:
	movq	mus_playing(%rip), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	I_StopSong@PLT
	movq	mus_playing(%rip), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	I_UnRegisterSong@PLT
	movq	mus_playing(%rip), %rax
	movq	16(%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L80
	movl	$698, %esi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L80:
	movq	mus_playing(%rip), %rax
	movq	16(%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	mus_playing(%rip), %rax
	movq	$0, 16(%rax)
	movq	$0, mus_playing(%rip)
.L81:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	S_StopMusic, .-S_StopMusic
	.globl	S_StopChannel
	.type	S_StopChannel, @function
S_StopChannel:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	channels(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L89
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edi
	call	I_SoundIsPlaying@PLT
	testl	%eax, %eax
	je	.L84
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edi
	call	I_StopSound@PLT
.L84:
	movl	$0, -12(%rbp)
	jmp	.L85
.L88:
	movl	-20(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.L86
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	channels(%rip), %rsi
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rcx
	je	.L90
.L86:
	addl	$1, -12(%rbp)
.L85:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L88
	jmp	.L87
.L90:
	nop
.L87:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	40(%rax), %edx
	subl	$1, %edx
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
.L89:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	S_StopChannel, .-S_StopChannel
	.globl	S_AdjustSoundParams
	.type	S_AdjustSoundParams, @function
S_AdjustSoundParams:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%rcx, -48(%rbp)
	movq	%r8, -56(%rbp)
	movq	-24(%rbp), %rax
	movl	24(%rax), %ecx
	movq	-32(%rbp), %rax
	movl	24(%rax), %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-32(%rbp), %rax
	movl	28(%rax), %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	negl	%edx
	cmovns	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	je	.L92
	cmpl	$78643200, -16(%rbp)
	jle	.L92
	movl	$0, %eax
	jmp	.L93
.L92:
	movq	-32(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-32(%rbp), %rax
	movl	24(%rax), %edx
	movq	-24(%rbp), %rax
	movl	28(%rax), %esi
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -12(%rbp)
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	cmpl	-12(%rbp), %eax
	jnb	.L94
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	subl	%eax, -12(%rbp)
	jmp	.L95
.L94:
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	movl	-12(%rbp), %edx
	subl	%eax, %edx
	leal	-1(%rdx), %eax
	movl	%eax, -12(%rbp)
.L95:
	shrl	$19, -12(%rbp)
	movl	-12(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	movl	$6291456, %edi
	call	FixedMul@PLT
	sarl	$16, %eax
	movl	$128, %edx
	subl	%eax, %edx
	movq	-48(%rbp), %rax
	movl	%edx, (%rax)
	cmpl	$10485759, -16(%rbp)
	jg	.L96
	movl	snd_SfxVolume(%rip), %edx
	movq	-40(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L97
.L96:
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	jne	.L98
	cmpl	$78643200, -16(%rbp)
	jle	.L99
	movl	$78643200, -16(%rbp)
.L99:
	movl	snd_SfxVolume(%rip), %eax
	leal	-15(%rax), %edx
	movl	$78643200, %eax
	subl	-16(%rbp), %eax
	sarl	$16, %eax
	imull	%edx, %eax
	movslq	%eax, %rdx
	imulq	$2114445439, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$9, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	addl	$15, %edx
	movq	-40(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L97
.L98:
	movl	$78643200, %eax
	subl	-16(%rbp), %eax
	sarl	$16, %eax
	movl	%eax, %edx
	movl	snd_SfxVolume(%rip), %eax
	imull	%edx, %eax
	movslq	%eax, %rdx
	imulq	$2114445439, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$9, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, (%rax)
.L97:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
.L93:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	S_AdjustSoundParams, .-S_AdjustSoundParams
	.globl	S_getChannel
	.type	S_getChannel, @function
S_getChannel:
.LFB21:
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
	movl	$0, -12(%rbp)
	jmp	.L101
.L105:
	movq	channels(%rip), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L113
	cmpq	$0, -24(%rbp)
	je	.L104
	movq	channels(%rip), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	8(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L104
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
	jmp	.L103
.L104:
	addl	$1, -12(%rbp)
.L101:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L105
	jmp	.L103
.L113:
	nop
.L103:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jne	.L106
	movl	$0, -12(%rbp)
	jmp	.L107
.L110:
	movq	channels(%rip), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movl	12(%rax), %edx
	movq	-32(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, %edx
	jge	.L114
	addl	$1, -12(%rbp)
.L107:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L110
	jmp	.L109
.L114:
	nop
.L109:
	movl	numChannels(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jne	.L111
	movl	$-1, %eax
	jmp	.L112
.L111:
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	S_StopChannel
.L106:
	movq	channels(%rip), %rcx
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movl	-12(%rbp), %eax
.L112:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	S_getChannel, .-S_getChannel
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
