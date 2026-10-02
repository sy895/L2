	.file	"m_misc.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_misc.c,v 1.6 1997/02/03 22:45:10 b1 Exp $"
	.text
	.globl	M_DrawText
	.type	M_DrawText, @function
M_DrawText:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movq	%rcx, -40(%rbp)
	jmp	.L2
.L10:
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	toupper@PLT
	subl	$33, %eax
	movl	%eax, -8(%rbp)
	addq	$1, -40(%rbp)
	cmpl	$0, -8(%rbp)
	js	.L3
	cmpl	$63, -8(%rbp)
	jle	.L4
.L3:
	addl	$4, -20(%rbp)
	jmp	.L2
.L4:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L12
	cmpl	$0, -28(%rbp)
	je	.L8
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	jmp	.L9
.L8:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
.L9:
	movl	-4(%rbp), %eax
	addl	%eax, -20(%rbp)
.L2:
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L10
	jmp	.L7
.L12:
	nop
.L7:
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	M_DrawText, .-M_DrawText
	.globl	M_WriteFile
	.type	M_WriteFile, @function
M_WriteFile:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movq	-24(%rbp), %rax
	movl	$438, %edx
	movl	$577, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -8(%rbp)
	cmpl	$-1, -8(%rbp)
	jne	.L14
	movl	$0, %eax
	jmp	.L15
.L14:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rcx
	movl	-8(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	write@PLT
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
	movl	-4(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jge	.L16
	movl	$0, %eax
	jmp	.L15
.L16:
	movl	$1, %eax
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	M_WriteFile, .-M_WriteFile
	.section	.rodata
.LC0:
	.string	"Couldn't read file %s"
	.text
	.globl	M_ReadFile
	.type	M_ReadFile, @function
M_ReadFile:
.LFB8:
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
	movq	-200(%rbp), %rax
	movl	$438, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -180(%rbp)
	cmpl	$-1, -180(%rbp)
	jne	.L18
	movq	-200(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L18:
	leaq	-160(%rbp), %rdx
	movl	-180(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	fstat@PLT
	cmpl	$-1, %eax
	jne	.L19
	movq	-200(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L19:
	movq	-112(%rbp), %rax
	movl	%eax, -176(%rbp)
	movl	-176(%rbp), %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, -168(%rbp)
	movl	-176(%rbp), %eax
	movslq	%eax, %rdx
	movq	-168(%rbp), %rcx
	movl	-180(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	movl	%eax, -172(%rbp)
	movl	-180(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
	movl	-172(%rbp), %eax
	cmpl	-176(%rbp), %eax
	jge	.L20
	movq	-200(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L20:
	movq	-208(%rbp), %rax
	movq	-168(%rbp), %rdx
	movq	%rdx, (%rax)
	movl	-176(%rbp), %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L22
	call	__stack_chk_fail@PLT
.L22:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	M_ReadFile, .-M_ReadFile
	.globl	usemouse
	.bss
	.align 4
	.type	usemouse, @object
	.size	usemouse, 4
usemouse:
	.zero	4
	.globl	usejoystick
	.align 4
	.type	usejoystick, @object
	.size	usejoystick, 4
usejoystick:
	.zero	4
	.globl	mousetype
	.align 8
	.type	mousetype, @object
	.size	mousetype, 8
mousetype:
	.zero	8
	.globl	mousedev
	.align 8
	.type	mousedev, @object
	.size	mousedev, 8
mousedev:
	.zero	8
	.globl	defaults
	.section	.rodata
.LC1:
	.string	"mouse_sensitivity"
.LC2:
	.string	"sfx_volume"
.LC3:
	.string	"music_volume"
.LC4:
	.string	"show_messages"
.LC5:
	.string	"key_right"
.LC6:
	.string	"key_left"
.LC7:
	.string	"key_up"
.LC8:
	.string	"key_down"
.LC9:
	.string	"key_strafeleft"
.LC10:
	.string	"key_straferight"
.LC11:
	.string	"key_fire"
.LC12:
	.string	"key_use"
.LC13:
	.string	"key_strafe"
.LC14:
	.string	"key_speed"
.LC15:
	.string	"sndserver"
.LC16:
	.string	"mb_used"
.LC17:
	.string	"mousedev"
.LC18:
	.string	"/dev/ttyS0"
.LC19:
	.string	"mousetype"
.LC20:
	.string	"microsoft"
.LC21:
	.string	"use_mouse"
.LC22:
	.string	"mouseb_fire"
.LC23:
	.string	"mouseb_strafe"
.LC24:
	.string	"mouseb_forward"
.LC25:
	.string	"use_joystick"
.LC26:
	.string	"joyb_fire"
.LC27:
	.string	"joyb_strafe"
.LC28:
	.string	"joyb_use"
.LC29:
	.string	"joyb_speed"
.LC30:
	.string	"screenblocks"
.LC31:
	.string	"detaillevel"
.LC32:
	.string	"snd_channels"
.LC33:
	.string	"usegamma"
.LC34:
	.string	"chatmacro0"
.LC35:
	.string	"No"
.LC36:
	.string	"chatmacro1"
.LC37:
	.string	"I'm ready to kick butt!"
.LC38:
	.string	"chatmacro2"
.LC39:
	.string	"I'm OK."
.LC40:
	.string	"chatmacro3"
.LC41:
	.string	"I'm not looking too good!"
.LC42:
	.string	"chatmacro4"
.LC43:
	.string	"Help!"
.LC44:
	.string	"chatmacro5"
.LC45:
	.string	"You suck!"
.LC46:
	.string	"chatmacro6"
.LC47:
	.string	"Next time, scumbag..."
.LC48:
	.string	"chatmacro7"
.LC49:
	.string	"Come here!"
.LC50:
	.string	"chatmacro8"
.LC51:
	.string	"I'll take care of it."
.LC52:
	.string	"chatmacro9"
.LC53:
	.string	"Yes"
	.section	.data.rel,"aw"
	.align 32
	.type	defaults, @object
	.size	defaults, 1312
defaults:
	.quad	.LC1
	.quad	mouseSensitivity
	.quad	5
	.zero	8
	.quad	.LC2
	.quad	snd_SfxVolume
	.quad	8
	.zero	8
	.quad	.LC3
	.quad	snd_MusicVolume
	.quad	8
	.zero	8
	.quad	.LC4
	.quad	showMessages
	.quad	1
	.zero	8
	.quad	.LC5
	.quad	key_right
	.quad	174
	.zero	8
	.quad	.LC6
	.quad	key_left
	.quad	172
	.zero	8
	.quad	.LC7
	.quad	key_up
	.quad	173
	.zero	8
	.quad	.LC8
	.quad	key_down
	.quad	175
	.zero	8
	.quad	.LC9
	.quad	key_strafeleft
	.quad	44
	.zero	8
	.quad	.LC10
	.quad	key_straferight
	.quad	46
	.zero	8
	.quad	.LC11
	.quad	key_fire
	.quad	157
	.zero	8
	.quad	.LC12
	.quad	key_use
	.quad	32
	.zero	8
	.quad	.LC13
	.quad	key_strafe
	.quad	184
	.zero	8
	.quad	.LC14
	.quad	key_speed
	.quad	182
	.zero	8
	.quad	.LC15
	.quad	sndserver_filename
	.quad	.LC15
	.zero	8
	.quad	.LC16
	.quad	mb_used
	.quad	2
	.zero	8
	.quad	.LC17
	.quad	mousedev
	.quad	.LC18
	.zero	8
	.quad	.LC19
	.quad	mousetype
	.quad	.LC20
	.zero	8
	.quad	.LC21
	.quad	usemouse
	.quad	1
	.zero	8
	.quad	.LC22
	.quad	mousebfire
	.quad	0
	.zero	8
	.quad	.LC23
	.quad	mousebstrafe
	.quad	1
	.zero	8
	.quad	.LC24
	.quad	mousebforward
	.quad	2
	.zero	8
	.quad	.LC25
	.quad	usejoystick
	.quad	0
	.zero	8
	.quad	.LC26
	.quad	joybfire
	.quad	0
	.zero	8
	.quad	.LC27
	.quad	joybstrafe
	.quad	1
	.zero	8
	.quad	.LC28
	.quad	joybuse
	.quad	3
	.zero	8
	.quad	.LC29
	.quad	joybspeed
	.quad	2
	.zero	8
	.quad	.LC30
	.quad	screenblocks
	.quad	9
	.zero	8
	.quad	.LC31
	.quad	detailLevel
	.quad	0
	.zero	8
	.quad	.LC32
	.quad	numChannels
	.quad	3
	.zero	8
	.quad	.LC33
	.quad	usegamma
	.quad	0
	.zero	8
	.quad	.LC34
	.quad	chat_macros
	.quad	.LC35
	.zero	8
	.quad	.LC36
	.quad	chat_macros+8
	.quad	.LC37
	.zero	8
	.quad	.LC38
	.quad	chat_macros+16
	.quad	.LC39
	.zero	8
	.quad	.LC40
	.quad	chat_macros+24
	.quad	.LC41
	.zero	8
	.quad	.LC42
	.quad	chat_macros+32
	.quad	.LC43
	.zero	8
	.quad	.LC44
	.quad	chat_macros+40
	.quad	.LC45
	.zero	8
	.quad	.LC46
	.quad	chat_macros+48
	.quad	.LC47
	.zero	8
	.quad	.LC48
	.quad	chat_macros+56
	.quad	.LC49
	.zero	8
	.quad	.LC50
	.quad	chat_macros+64
	.quad	.LC51
	.zero	8
	.quad	.LC52
	.quad	chat_macros+72
	.quad	.LC53
	.zero	8
	.globl	numdefaults
	.bss
	.align 4
	.type	numdefaults, @object
	.size	numdefaults, 4
numdefaults:
	.zero	4
	.globl	defaultfile
	.align 8
	.type	defaultfile, @object
	.size	defaultfile, 8
defaultfile:
	.zero	8
	.section	.rodata
.LC54:
	.string	"w"
.LC55:
	.string	"%s\t\t%i\n"
.LC56:
	.string	"%s\t\t\"%s\"\n"
	.text
	.globl	M_SaveDefaults
	.type	M_SaveDefaults, @function
M_SaveDefaults:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	defaultfile(%rip), %rax
	leaq	.LC54(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L30
	movl	$0, -16(%rbp)
	jmp	.L26
.L29:
	movl	-16(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	$-4094, %rax
	jl	.L27
	movl	-16(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	cmpq	$4094, %rax
	jg	.L27
	movl	-16(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	8+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	movl	-16(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	defaults(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-12(%rbp), %ecx
	movq	-8(%rbp), %rax
	leaq	.LC55(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	jmp	.L28
.L27:
	movl	-16(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	8+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	(%rax), %rcx
	movl	-16(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	defaults(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movq	-8(%rbp), %rax
	leaq	.LC56(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
.L28:
	addl	$1, -16(%rbp)
.L26:
	movl	numdefaults(%rip), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L29
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	jmp	.L23
.L30:
	nop
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	M_SaveDefaults, .-M_SaveDefaults
	.section	.rodata
.LC57:
	.string	"-config"
.LC58:
	.string	"\tdefault file: %s\n"
.LC59:
	.string	"r"
.LC60:
	.string	"%79s %[^\n]\n"
.LC61:
	.string	"%x"
.LC62:
	.string	"%i"
	.text
	.globl	M_LoadDefaults
	.type	M_LoadDefaults, @function
M_LoadDefaults:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$224, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$41, numdefaults(%rip)
	movl	$0, -220(%rbp)
	jmp	.L32
.L33:
	movl	-220(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	16+defaults(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-220(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	8+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	%ecx, %edx
	movl	%edx, (%rax)
	addl	$1, -220(%rbp)
.L32:
	movl	numdefaults(%rip), %eax
	cmpl	%eax, -220(%rbp)
	jl	.L33
	leaq	.LC57(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -220(%rbp)
	cmpl	$0, -220(%rbp)
	je	.L34
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -220(%rbp)
	jge	.L34
	movq	myargv(%rip), %rax
	movl	-220(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, defaultfile(%rip)
	movq	defaultfile(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC58(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L35
.L34:
	leaq	basedefault(%rip), %rax
	movq	%rax, defaultfile(%rip)
.L35:
	movq	defaultfile(%rip), %rax
	leaq	.LC59(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -200(%rbp)
	cmpq	$0, -200(%rbp)
	je	.L50
	jmp	.L38
.L48:
	movl	$0, -216(%rbp)
	leaq	-112(%rbp), %rcx
	leaq	-192(%rbp), %rdx
	movq	-200(%rbp), %rax
	leaq	.LC60(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	cmpl	$2, %eax
	jne	.L38
	movzbl	-112(%rbp), %eax
	cmpb	$34, %al
	jne	.L39
	movl	$1, -216(%rbp)
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movl	%eax, -212(%rbp)
	movl	-212(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -208(%rbp)
	movl	-212(%rbp), %eax
	subl	$1, %eax
	cltq
	movb	$0, -112(%rbp,%rax)
	leaq	-112(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcpy@PLT
	jmp	.L40
.L39:
	movzbl	-112(%rbp), %eax
	cmpb	$48, %al
	jne	.L41
	movzbl	-111(%rbp), %eax
	cmpb	$120, %al
	jne	.L41
	leaq	-112(%rbp), %rax
	addq	$2, %rax
	leaq	-224(%rbp), %rdx
	leaq	.LC61(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_sscanf@PLT
	jmp	.L40
.L41:
	leaq	-224(%rbp), %rdx
	leaq	-112(%rbp), %rax
	leaq	.LC62(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_sscanf@PLT
.L40:
	movl	$0, -220(%rbp)
	jmp	.L42
.L47:
	movl	-220(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	defaults(%rip), %rax
	movq	(%rdx,%rax), %rdx
	leaq	-192(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L43
	cmpl	$0, -216(%rbp)
	jne	.L44
	movl	-220(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	8+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	-224(%rbp), %edx
	movl	%edx, (%rax)
	jmp	.L38
.L44:
	movq	-208(%rbp), %rcx
	movl	-220(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	8+defaults(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	%ecx, %edx
	movl	%edx, (%rax)
	jmp	.L38
.L43:
	addl	$1, -220(%rbp)
.L42:
	movl	numdefaults(%rip), %eax
	cmpl	%eax, -220(%rbp)
	jl	.L47
.L38:
	movq	-200(%rbp), %rax
	movq	%rax, %rdi
	call	feof@PLT
	testl	%eax, %eax
	je	.L48
	movq	-200(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
.L50:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L49
	call	__stack_chk_fail@PLT
.L49:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	M_LoadDefaults, .-M_LoadDefaults
	.globl	WritePCXfile
	.type	WritePCXfile, @function
WritePCXfile:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	%ecx, -56(%rbp)
	movq	%r8, -64(%rbp)
	movl	-52(%rbp), %eax
	imull	-56(%rbp), %eax
	addl	$500, %eax
	addl	%eax, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movb	$10, (%rax)
	movq	-8(%rbp), %rax
	movb	$5, 1(%rax)
	movq	-8(%rbp), %rax
	movb	$1, 2(%rax)
	movq	-8(%rbp), %rax
	movb	$8, 3(%rax)
	movq	-8(%rbp), %rax
	movw	$0, 4(%rax)
	movq	-8(%rbp), %rax
	movw	$0, 6(%rax)
	movl	-52(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 8(%rax)
	movl	-56(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 10(%rax)
	movl	-52(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, 12(%rax)
	movl	-56(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, 14(%rax)
	movq	-8(%rbp), %rax
	addq	$16, %rax
	movl	$48, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-8(%rbp), %rax
	movb	$1, 65(%rax)
	movl	-52(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, 66(%rax)
	movq	-8(%rbp), %rax
	movw	$2, 68(%rax)
	movq	-8(%rbp), %rax
	addq	$70, %rax
	movl	$58, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-8(%rbp), %rax
	subq	$-128, %rax
	movq	%rax, -16(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L52
.L55:
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	andl	$192, %eax
	cmpl	$192, %eax
	je	.L53
	movq	-48(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -48(%rbp)
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -16(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	jmp	.L54
.L53:
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movb	$-63, (%rax)
	movq	-48(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -48(%rbp)
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -16(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
.L54:
	addl	$1, -24(%rbp)
.L52:
	movl	-52(%rbp), %eax
	imull	-56(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L55
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movb	$12, (%rax)
	movl	$0, -24(%rbp)
	jmp	.L56
.L57:
	movq	-64(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -64(%rbp)
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -16(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	addl	$1, -24(%rbp)
.L56:
	cmpl	$767, -24(%rbp)
	jle	.L57
	movq	-16(%rbp), %rax
	subq	-8(%rbp), %rax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %edx
	movq	-8(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	M_WriteFile
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	WritePCXfile, .-WritePCXfile
	.section	.rodata
	.align 8
.LC63:
	.string	"M_ScreenShot: Couldn't create a PCX"
.LC64:
	.string	"PLAYPAL"
.LC65:
	.string	"screen shot"
	.text
	.globl	M_ScreenShot
	.type	M_ScreenShot, @function
M_ScreenShot:
.LFB12:
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
	movq	16+screens(%rip), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	I_ReadScreen@PLT
	leaq	-20(%rbp), %rax
	movabsq	$8083451365190225732, %rsi
	movq	%rsi, (%rax)
	movl	$7889776, 7(%rax)
	movl	$0, -36(%rbp)
	jmp	.L59
.L62:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	$48, %eax
	movb	%al, -16(%rbp)
	movl	-36(%rbp), %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$48, %eax
	movb	%al, -15(%rbp)
	leaq	-20(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	access@PLT
	cmpl	$-1, %eax
	je	.L65
	addl	$1, -36(%rbp)
.L59:
	cmpl	$99, -36(%rbp)
	jle	.L62
	jmp	.L61
.L65:
	nop
.L61:
	cmpl	$100, -36(%rbp)
	jne	.L63
	leaq	.LC63(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L63:
	movl	$101, %esi
	leaq	.LC64(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movq	-32(%rbp), %rsi
	leaq	-20(%rbp), %rax
	movq	%rdx, %r8
	movl	$200, %ecx
	movl	$320, %edx
	movq	%rax, %rdi
	call	WritePCXfile
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	224+players(%rip), %rax
	leaq	.LC65(%rip), %rdx
	movq	%rdx, (%rcx,%rax)
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L64
	call	__stack_chk_fail@PLT
.L64:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	M_ScreenShot, .-M_ScreenShot
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
