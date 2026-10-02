	.file	"d_main.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: d_main.c,v 1.8 1997/02/03 22:45:09 b1 Exp $"
	.globl	wadfiles
	.bss
	.align 32
	.type	wadfiles, @object
	.size	wadfiles, 160
wadfiles:
	.zero	160
	.globl	devparm
	.align 4
	.type	devparm, @object
	.size	devparm, 4
devparm:
	.zero	4
	.globl	nomonsters
	.align 4
	.type	nomonsters, @object
	.size	nomonsters, 4
nomonsters:
	.zero	4
	.globl	respawnparm
	.align 4
	.type	respawnparm, @object
	.size	respawnparm, 4
respawnparm:
	.zero	4
	.globl	fastparm
	.align 4
	.type	fastparm, @object
	.size	fastparm, 4
fastparm:
	.zero	4
	.globl	drone
	.align 4
	.type	drone, @object
	.size	drone, 4
drone:
	.zero	4
	.globl	singletics
	.align 4
	.type	singletics, @object
	.size	singletics, 4
singletics:
	.zero	4
	.globl	startskill
	.align 4
	.type	startskill, @object
	.size	startskill, 4
startskill:
	.zero	4
	.globl	startepisode
	.align 4
	.type	startepisode, @object
	.size	startepisode, 4
startepisode:
	.zero	4
	.globl	startmap
	.align 4
	.type	startmap, @object
	.size	startmap, 4
startmap:
	.zero	4
	.globl	autostart
	.align 4
	.type	autostart, @object
	.size	autostart, 4
autostart:
	.zero	4
	.globl	debugfile
	.align 8
	.type	debugfile, @object
	.size	debugfile, 8
debugfile:
	.zero	8
	.globl	advancedemo
	.align 4
	.type	advancedemo, @object
	.size	advancedemo, 4
advancedemo:
	.zero	4
	.globl	wadfile
	.align 32
	.type	wadfile, @object
	.size	wadfile, 1024
wadfile:
	.zero	1024
	.globl	mapdir
	.align 32
	.type	mapdir, @object
	.size	mapdir, 1024
mapdir:
	.zero	1024
	.globl	basedefault
	.align 32
	.type	basedefault, @object
	.size	basedefault, 1024
basedefault:
	.zero	1024
	.globl	events
	.align 32
	.type	events, @object
	.size	events, 1024
events:
	.zero	1024
	.globl	eventhead
	.align 4
	.type	eventhead, @object
	.size	eventhead, 4
eventhead:
	.zero	4
	.globl	eventtail
	.align 4
	.type	eventtail, @object
	.size	eventtail, 4
eventtail:
	.zero	4
	.text
	.globl	D_PostEvent
	.type	D_PostEvent, @function
D_PostEvent:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	eventhead(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rsi
	leaq	events(%rip), %rcx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, (%rsi,%rcx)
	movq	%rdx, 8(%rsi,%rcx)
	movl	eventhead(%rip), %eax
	addl	$1, %eax
	movl	%eax, eventhead(%rip)
	movl	eventhead(%rip), %eax
	andl	$63, %eax
	movl	%eax, eventhead(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	D_PostEvent, .-D_PostEvent
	.section	.rodata
.LC0:
	.string	"map01"
	.text
	.globl	D_ProcessEvents
	.type	D_ProcessEvents, @function
D_ProcessEvents:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L5
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	testl	%eax, %eax
	js	.L9
	jmp	.L5
.L8:
	movl	eventtail(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	events(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	M_Responder@PLT
	testl	%eax, %eax
	jne	.L10
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	G_Responder@PLT
	jmp	.L7
.L10:
	nop
.L7:
	movl	eventtail(%rip), %eax
	addl	$1, %eax
	movl	%eax, eventtail(%rip)
	movl	eventtail(%rip), %eax
	andl	$63, %eax
	movl	%eax, eventtail(%rip)
.L5:
	movl	eventtail(%rip), %edx
	movl	eventhead(%rip), %eax
	cmpl	%eax, %edx
	jne	.L8
	jmp	.L2
.L9:
	nop
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	D_ProcessEvents, .-D_ProcessEvents
	.globl	wipegamestate
	.data
	.align 4
	.type	wipegamestate, @object
	.size	wipegamestate, 4
wipegamestate:
	.long	3
	.section	.rodata
.LC1:
	.string	"PLAYPAL"
.LC2:
	.string	"M_PAUSE"
	.text
	.globl	D_Display
	.type	D_Display, @function
D_Display:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	nodrawers(%rip), %eax
	testl	%eax, %eax
	jne	.L41
	movl	$0, -16(%rbp)
	movl	setsizeneeded(%rip), %eax
	testl	%eax, %eax
	je	.L14
	call	R_ExecuteSetViewSize@PLT
	movl	$-1, oldgamestate.5(%rip)
	movl	$3, borderdrawcount.4(%rip)
.L14:
	movl	gamestate(%rip), %edx
	movl	wipegamestate(%rip), %eax
	cmpl	%eax, %edx
	je	.L15
	movl	$1, -20(%rbp)
	movl	$200, %ecx
	movl	$320, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	wipe_StartScreen@PLT
	jmp	.L16
.L15:
	movl	$0, -20(%rbp)
.L16:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L17
	movl	gametic(%rip), %eax
	testl	%eax, %eax
	je	.L17
	call	HU_Erase@PLT
.L17:
	movl	gamestate(%rip), %eax
	cmpl	$3, %eax
	je	.L18
	cmpl	$3, %eax
	ja	.L19
	cmpl	$2, %eax
	je	.L20
	cmpl	$2, %eax
	ja	.L19
	testl	%eax, %eax
	je	.L21
	cmpl	$1, %eax
	je	.L22
	jmp	.L19
.L21:
	movl	gametic(%rip), %eax
	testl	%eax, %eax
	je	.L42
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L24
	call	AM_Drawer@PLT
.L24:
	cmpl	$0, -20(%rbp)
	jne	.L25
	movl	viewheight(%rip), %eax
	cmpl	$200, %eax
	je	.L26
	movl	fullscreen.3(%rip), %eax
	testl	%eax, %eax
	je	.L26
.L25:
	movl	$1, -16(%rbp)
.L26:
	movl	inhelpscreensstate.2(%rip), %eax
	testl	%eax, %eax
	je	.L27
	movl	inhelpscreens(%rip), %eax
	testl	%eax, %eax
	jne	.L27
	movl	$1, -16(%rbp)
.L27:
	movl	viewheight(%rip), %eax
	cmpl	$200, %eax
	sete	%al
	movzbl	%al, %eax
	movl	-16(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	ST_Drawer@PLT
	movl	viewheight(%rip), %eax
	cmpl	$200, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, fullscreen.3(%rip)
	jmp	.L19
.L22:
	call	WI_Drawer@PLT
	jmp	.L19
.L20:
	call	F_Drawer@PLT
	jmp	.L19
.L18:
	call	D_PageDrawer
	jmp	.L19
.L42:
	nop
.L19:
	call	I_UpdateNoBlit@PLT
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L28
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	jne	.L28
	movl	gametic(%rip), %eax
	testl	%eax, %eax
	je	.L28
	movl	displayplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	R_RenderPlayerView@PLT
.L28:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L29
	movl	gametic(%rip), %eax
	testl	%eax, %eax
	je	.L29
	call	HU_Drawer@PLT
.L29:
	movl	gamestate(%rip), %edx
	movl	oldgamestate.5(%rip), %eax
	cmpl	%eax, %edx
	je	.L30
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	je	.L30
	movl	$101, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdi
	call	I_SetPalette@PLT
.L30:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L31
	movl	oldgamestate.5(%rip), %eax
	testl	%eax, %eax
	je	.L31
	movl	$0, viewactivestate.1(%rip)
	call	R_FillBackScreen@PLT
.L31:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L32
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	jne	.L32
	movl	scaledviewwidth(%rip), %eax
	cmpl	$320, %eax
	je	.L32
	movl	menuactive(%rip), %eax
	testl	%eax, %eax
	jne	.L33
	movl	menuactivestate.0(%rip), %eax
	testl	%eax, %eax
	jne	.L33
	movl	viewactivestate.1(%rip), %eax
	testl	%eax, %eax
	jne	.L34
.L33:
	movl	$3, borderdrawcount.4(%rip)
.L34:
	movl	borderdrawcount.4(%rip), %eax
	testl	%eax, %eax
	je	.L32
	call	R_DrawViewBorder@PLT
	movl	borderdrawcount.4(%rip), %eax
	subl	$1, %eax
	movl	%eax, borderdrawcount.4(%rip)
.L32:
	movl	menuactive(%rip), %eax
	movl	%eax, menuactivestate.0(%rip)
	movl	viewactive(%rip), %eax
	movl	%eax, viewactivestate.1(%rip)
	movl	inhelpscreens(%rip), %eax
	movl	%eax, inhelpscreensstate.2(%rip)
	movl	gamestate(%rip), %eax
	movl	%eax, wipegamestate(%rip)
	movl	wipegamestate(%rip), %eax
	movl	%eax, oldgamestate.5(%rip)
	movl	paused(%rip), %eax
	testl	%eax, %eax
	je	.L35
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L36
	movl	$4, -24(%rbp)
	jmp	.L37
.L36:
	movl	viewwindowy(%rip), %eax
	addl	$4, %eax
	movl	%eax, -24(%rbp)
.L37:
	movl	$101, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	scaledviewwidth(%rip), %eax
	subl	$68, %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	movl	%eax, %ecx
	movl	viewwindowx(%rip), %eax
	leal	(%rcx,%rax), %edi
	movl	-24(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatchDirect@PLT
.L35:
	call	M_Drawer@PLT
	call	NetUpdate@PLT
	cmpl	$0, -20(%rbp)
	jne	.L38
	call	I_FinishUpdate@PLT
	jmp	.L11
.L38:
	movl	$200, %ecx
	movl	$320, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	wipe_EndScreen@PLT
	call	I_GetTime@PLT
	subl	$1, %eax
	movl	%eax, -28(%rbp)
.L39:
	call	I_GetTime@PLT
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	je	.L39
	movl	-12(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %r9d
	movl	$200, %r8d
	movl	$320, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movl	$1, %edi
	call	wipe_ScreenWipe@PLT
	movl	%eax, -4(%rbp)
	call	I_UpdateNoBlit@PLT
	call	M_Drawer@PLT
	call	I_FinishUpdate@PLT
	cmpl	$0, -4(%rbp)
	je	.L39
	jmp	.L11
.L41:
	nop
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	D_Display, .-D_Display
	.section	.rodata
.LC3:
	.string	"-debugfile"
.LC4:
	.string	"debug%i.txt"
.LC5:
	.string	"debug output to: %s\n"
.LC6:
	.string	"w"
	.text
	.globl	D_DoomLoop
	.type	D_DoomLoop, @function
D_DoomLoop:
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
	movl	demorecording(%rip), %eax
	testl	%eax, %eax
	je	.L44
	call	G_BeginRecording@PLT
.L44:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L45
	movl	consoleplayer(%rip), %edx
	leaq	-32(%rbp), %rax
	leaq	.LC4(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-32(%rbp), %rax
	leaq	.LC6(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, debugfile(%rip)
.L45:
	call	I_InitGraphics@PLT
.L49:
	call	I_StartFrame@PLT
	movl	singletics(%rip), %eax
	testl	%eax, %eax
	je	.L46
	call	I_StartTic@PLT
	call	D_ProcessEvents
	movl	consoleplayer(%rip), %esi
	movl	maketic(%rip), %ecx
	movslq	%ecx, %rax
	imulq	$715827883, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$2, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movslq	%edx, %rcx
	movslq	%esi, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	netcmds(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	G_BuildTiccmd@PLT
	movl	advancedemo(%rip), %eax
	testl	%eax, %eax
	je	.L47
	call	D_DoAdvanceDemo
.L47:
	call	M_Ticker@PLT
	call	G_Ticker@PLT
	movl	gametic(%rip), %eax
	addl	$1, %eax
	movl	%eax, gametic(%rip)
	movl	maketic(%rip), %eax
	addl	$1, %eax
	movl	%eax, maketic(%rip)
	jmp	.L48
.L46:
	call	TryRunTics@PLT
.L48:
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdi
	call	S_UpdateSounds@PLT
	call	D_Display
	call	I_SubmitSound@PLT
	jmp	.L49
	.cfi_endproc
.LFE9:
	.size	D_DoomLoop, .-D_DoomLoop
	.globl	demosequence
	.bss
	.align 4
	.type	demosequence, @object
	.size	demosequence, 4
demosequence:
	.zero	4
	.globl	pagetic
	.align 4
	.type	pagetic, @object
	.size	pagetic, 4
pagetic:
	.zero	4
	.globl	pagename
	.align 8
	.type	pagename, @object
	.size	pagename, 8
pagename:
	.zero	8
	.text
	.globl	D_PageTicker
	.type	D_PageTicker, @function
D_PageTicker:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	pagetic(%rip), %eax
	subl	$1, %eax
	movl	%eax, pagetic(%rip)
	movl	pagetic(%rip), %eax
	testl	%eax, %eax
	jns	.L53
	call	D_AdvanceDemo
.L53:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	D_PageTicker, .-D_PageTicker
	.globl	D_PageDrawer
	.type	D_PageDrawer, @function
D_PageDrawer:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	pagename(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	D_PageDrawer, .-D_PageDrawer
	.globl	D_AdvanceDemo
	.type	D_AdvanceDemo, @function
D_AdvanceDemo:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, advancedemo(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	D_AdvanceDemo, .-D_AdvanceDemo
	.section	.rodata
.LC7:
	.string	"TITLEPIC"
.LC8:
	.string	"demo1"
.LC9:
	.string	"CREDIT"
.LC10:
	.string	"demo2"
.LC11:
	.string	"HELP2"
.LC12:
	.string	"demo3"
.LC13:
	.string	"demo4"
	.text
	.globl	D_DoAdvanceDemo
	.type	D_DoAdvanceDemo, @function
D_DoAdvanceDemo:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	8+players(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	$0, advancedemo(%rip)
	movl	$0, usergame(%rip)
	movl	$0, paused(%rip)
	movl	$0, gameaction(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L57
	movl	demosequence(%rip), %eax
	addl	$1, %eax
	movslq	%eax, %rdx
	imulq	$-1840700269, %rdx, %rdx
	shrq	$32, %rdx
	addl	%eax, %edx
	sarl	$2, %edx
	movl	%eax, %ecx
	sarl	$31, %ecx
	subl	%ecx, %edx
	movl	%edx, %ecx
	sall	$3, %ecx
	subl	%edx, %ecx
	subl	%ecx, %eax
	movl	%eax, %edx
	movl	%edx, demosequence(%rip)
	jmp	.L58
.L57:
	movl	demosequence(%rip), %eax
	leal	1(%rax), %ecx
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
	movl	%edx, demosequence(%rip)
.L58:
	movl	demosequence(%rip), %eax
	cmpl	$6, %eax
	ja	.L75
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L61(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L61(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L61:
	.long	.L67-.L61
	.long	.L66-.L61
	.long	.L65-.L61
	.long	.L64-.L61
	.long	.L63-.L61
	.long	.L62-.L61
	.long	.L60-.L61
	.text
.L67:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L68
	movl	$385, pagetic(%rip)
	jmp	.L69
.L68:
	movl	$170, pagetic(%rip)
.L69:
	movl	$3, gamestate(%rip)
	leaq	.LC7(%rip), %rax
	movq	%rax, pagename(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L70
	movl	$66, %edi
	call	S_StartMusic@PLT
	jmp	.L59
.L70:
	movl	$29, %edi
	call	S_StartMusic@PLT
	jmp	.L59
.L66:
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	G_DeferedPlayDemo@PLT
	jmp	.L59
.L65:
	movl	$200, pagetic(%rip)
	movl	$3, gamestate(%rip)
	leaq	.LC9(%rip), %rax
	movq	%rax, pagename(%rip)
	jmp	.L59
.L64:
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	G_DeferedPlayDemo@PLT
	jmp	.L59
.L63:
	movl	$3, gamestate(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L72
	movl	$385, pagetic(%rip)
	leaq	.LC7(%rip), %rax
	movq	%rax, pagename(%rip)
	movl	$66, %edi
	call	S_StartMusic@PLT
	jmp	.L59
.L72:
	movl	$200, pagetic(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L74
	leaq	.LC9(%rip), %rax
	movq	%rax, pagename(%rip)
	jmp	.L59
.L74:
	leaq	.LC11(%rip), %rax
	movq	%rax, pagename(%rip)
	jmp	.L59
.L62:
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	G_DeferedPlayDemo@PLT
	jmp	.L59
.L60:
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	G_DeferedPlayDemo@PLT
	nop
.L59:
.L75:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	D_DoAdvanceDemo, .-D_DoAdvanceDemo
	.globl	D_StartTitle
	.type	D_StartTitle, @function
D_StartTitle:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, gameaction(%rip)
	movl	$-1, demosequence(%rip)
	call	D_AdvanceDemo
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	D_StartTitle, .-D_StartTitle
	.globl	title
	.bss
	.align 32
	.type	title, @object
	.size	title, 128
title:
	.zero	128
	.text
	.globl	D_AddFile
	.type	D_AddFile, @function
D_AddFile:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L78
.L79:
	addl	$1, -12(%rbp)
.L78:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	wadfiles(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	jne	.L79
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$1, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	wadfiles(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rax, (%rcx,%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	D_AddFile, .-D_AddFile
	.section	.rodata
.LC14:
	.string	"DOOMWADDIR"
.LC15:
	.string	"."
.LC16:
	.string	"%s/doom2.wad"
.LC17:
	.string	"%s/doomu.wad"
.LC18:
	.string	"%s/doom.wad"
.LC19:
	.string	"%s/doom1.wad"
.LC20:
	.string	"%s/plutonia.wad"
.LC21:
	.string	"%s/tnt.wad"
.LC22:
	.string	"%s/doom2f.wad"
.LC23:
	.string	"HOME"
	.align 8
.LC24:
	.string	"Please set $HOME to your home directory"
.LC25:
	.string	"%s/.doomrc"
.LC26:
	.string	"-shdev"
.LC27:
	.string	"devdatadoom1.wad"
.LC28:
	.string	"devmapsdata_se/texture1.lmp"
.LC29:
	.string	"devmapsdata_se/pnames.lmp"
.LC30:
	.string	"-regdev"
.LC31:
	.string	"devdatadoom.wad"
.LC32:
	.string	"devmapsdata_se/texture2.lmp"
.LC33:
	.string	"-comdev"
.LC34:
	.string	"devdatadoom2.wad"
.LC35:
	.string	"devmapscdata/texture1.lmp"
.LC36:
	.string	"devmapscdata/pnames.lmp"
.LC37:
	.string	"French version"
.LC38:
	.string	"Game mode indeterminate."
	.text
	.globl	IdentifyVersion
	.type	IdentifyVersion, @function
IdentifyVersion:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	getenv@PLT
	movq	%rax, -72(%rbp)
	cmpq	$0, -72(%rbp)
	jne	.L81
	leaq	.LC15(%rip), %rax
	movq	%rax, -72(%rbp)
.L81:
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$11, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -64(%rbp)
	movq	-72(%rbp), %rdx
	movq	-64(%rbp), %rax
	leaq	.LC16(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$10, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -56(%rbp)
	movq	-72(%rbp), %rdx
	movq	-56(%rbp), %rax
	leaq	.LC17(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$10, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -48(%rbp)
	movq	-72(%rbp), %rdx
	movq	-48(%rbp), %rax
	leaq	.LC18(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$11, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -40(%rbp)
	movq	-72(%rbp), %rdx
	movq	-40(%rbp), %rax
	leaq	.LC19(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$14, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -32(%rbp)
	movq	-72(%rbp), %rdx
	movq	-32(%rbp), %rax
	leaq	.LC20(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$11, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movq	-72(%rbp), %rdx
	movq	-24(%rbp), %rax
	leaq	.LC21(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	addq	$12, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-72(%rbp), %rdx
	movq	-16(%rbp), %rax
	leaq	.LC22(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	getenv@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L82
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L82:
	movq	-8(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC25(%rip), %rax
	movq	%rax, %rsi
	leaq	basedefault(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L83
	movl	$0, gamemode(%rip)
	movl	$1, devparm(%rip)
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	movabsq	$7233190438179857764, %rax
	movabsq	$7146777667858163301, %rdx
	movq	%rax, basedefault(%rip)
	movq	%rdx, 8+basedefault(%rip)
	movl	$6776419, 15+basedefault(%rip)
	jmp	.L80
.L83:
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L85
	movl	$1, gamemode(%rip)
	movl	$1, devparm(%rip)
	leaq	.LC31(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	movabsq	$7233190438179857764, %rax
	movabsq	$7146777667858163301, %rdx
	movq	%rax, basedefault(%rip)
	movq	%rdx, 8+basedefault(%rip)
	movl	$6776419, 15+basedefault(%rip)
	jmp	.L80
.L85:
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L86
	movl	$2, gamemode(%rip)
	movl	$1, devparm(%rip)
	leaq	.LC34(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC35(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	leaq	.LC36(%rip), %rax
	movq	%rax, %rdi
	call	D_AddFile
	movabsq	$7233190438179857764, %rax
	movabsq	$7146777667858163301, %rdx
	movq	%rax, basedefault(%rip)
	movq	%rdx, 8+basedefault(%rip)
	movl	$6776419, 15+basedefault(%rip)
	jmp	.L80
.L86:
	movq	-16(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L87
	movl	$2, gamemode(%rip)
	movl	$1, language(%rip)
	leaq	.LC37(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L87:
	movq	-64(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L88
	movl	$2, gamemode(%rip)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L88:
	movq	-32(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L89
	movl	$2, gamemode(%rip)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L89:
	movq	-24(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L90
	movl	$2, gamemode(%rip)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L90:
	movq	-56(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L91
	movl	$3, gamemode(%rip)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L91:
	movq	-48(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L92
	movl	$1, gamemode(%rip)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L92:
	movq	-40(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	access@PLT
	testl	%eax, %eax
	jne	.L93
	movl	$0, gamemode(%rip)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	jmp	.L80
.L93:
	leaq	.LC38(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$4, gamemode(%rip)
.L80:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	IdentifyVersion, .-IdentifyVersion
	.section	.rodata
.LC39:
	.string	"rb"
.LC40:
	.string	"\nNo such response file!"
.LC41:
	.string	"Found response file %s!\n"
.LC42:
	.string	"%d command-line args:\n"
	.text
	.globl	FindResponseFile
	.type	FindResponseFile, @function
FindResponseFile:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$240, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -228(%rbp)
	jmp	.L95
.L112:
	movq	myargv(%rip), %rax
	movl	-228(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$64, %al
	jne	.L96
	movq	myargv(%rip), %rax
	movl	-228(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	addq	$1, %rax
	leaq	.LC39(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -208(%rbp)
	cmpq	$0, -208(%rbp)
	jne	.L97
	leaq	.LC40(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, %edi
	call	exit@PLT
.L97:
	movq	myargv(%rip), %rax
	movl	-228(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	addq	$1, %rax
	movq	%rax, %rsi
	leaq	.LC41(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-208(%rbp), %rax
	movl	$2, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	fseek@PLT
	movq	-208(%rbp), %rax
	movq	%rax, %rdi
	call	ftell@PLT
	movl	%eax, -212(%rbp)
	movq	-208(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	fseek@PLT
	movl	-212(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -200(%rbp)
	movl	-212(%rbp), %eax
	movslq	%eax, %rsi
	movq	-208(%rbp), %rdx
	movq	-200(%rbp), %rax
	movq	%rdx, %rcx
	movl	$1, %edx
	movq	%rax, %rdi
	call	fread@PLT
	movq	-208(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	movl	$0, -220(%rbp)
	movl	-228(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -224(%rbp)
	jmp	.L98
.L99:
	movq	myargv(%rip), %rax
	movl	-224(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	leaq	(%rax,%rdx), %rcx
	movl	-220(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -220(%rbp)
	movq	(%rcx), %rdx
	cltq
	movq	%rdx, -176(%rbp,%rax,8)
	addl	$1, -224(%rbp)
.L98:
	movl	myargc(%rip), %eax
	cmpl	%eax, -224(%rbp)
	jl	.L99
	movq	myargv(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -192(%rbp)
	movl	$800, %edi
	call	malloc@PLT
	movq	%rax, myargv(%rip)
	movq	myargv(%rip), %rax
	movl	$800, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	myargv(%rip), %rax
	movq	-192(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-200(%rbp), %rax
	movq	%rax, -184(%rbp)
	movl	$0, -224(%rbp)
	movl	-224(%rbp), %eax
	movl	%eax, -216(%rbp)
	addl	$1, -216(%rbp)
.L106:
	movl	-224(%rbp), %eax
	movslq	%eax, %rcx
	movq	myargv(%rip), %rsi
	movl	-216(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -216(%rbp)
	cltq
	salq	$3, %rax
	addq	%rsi, %rax
	movq	-184(%rbp), %rdx
	addq	%rcx, %rdx
	movq	%rdx, (%rax)
	jmp	.L100
.L102:
	addl	$1, -224(%rbp)
.L100:
	movl	-224(%rbp), %eax
	cmpl	-212(%rbp), %eax
	jge	.L101
	movl	-224(%rbp), %eax
	movslq	%eax, %rdx
	movq	-184(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	jle	.L101
	movl	-224(%rbp), %eax
	movslq	%eax, %rdx
	movq	-184(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$122, %al
	jle	.L102
.L101:
	movl	-224(%rbp), %eax
	movslq	%eax, %rdx
	movq	-184(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	jmp	.L103
.L105:
	addl	$1, -224(%rbp)
.L103:
	movl	-224(%rbp), %eax
	cmpl	-212(%rbp), %eax
	jge	.L104
	movl	-224(%rbp), %eax
	movslq	%eax, %rdx
	movq	-184(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	jle	.L105
	movl	-224(%rbp), %eax
	movslq	%eax, %rdx
	movq	-184(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$122, %al
	jg	.L105
.L104:
	movl	-224(%rbp), %eax
	cmpl	-212(%rbp), %eax
	jl	.L106
	movl	$0, -224(%rbp)
	jmp	.L107
.L108:
	movq	myargv(%rip), %rcx
	movl	-216(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -216(%rbp)
	cltq
	salq	$3, %rax
	leaq	(%rcx,%rax), %rdx
	movl	-224(%rbp), %eax
	cltq
	movq	-176(%rbp,%rax,8), %rax
	movq	%rax, (%rdx)
	addl	$1, -224(%rbp)
.L107:
	movl	-224(%rbp), %eax
	cmpl	-220(%rbp), %eax
	jl	.L108
	movl	-216(%rbp), %eax
	movl	%eax, myargc(%rip)
	movl	myargc(%rip), %eax
	movl	%eax, %esi
	leaq	.LC42(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, -224(%rbp)
	jmp	.L109
.L110:
	movq	myargv(%rip), %rax
	movl	-224(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	puts@PLT
	addl	$1, -224(%rbp)
.L109:
	movl	myargc(%rip), %eax
	cmpl	%eax, -224(%rbp)
	jl	.L110
	jmp	.L111
.L96:
	addl	$1, -228(%rbp)
.L95:
	movl	myargc(%rip), %eax
	cmpl	%eax, -228(%rbp)
	jl	.L112
.L111:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L113
	call	__stack_chk_fail@PLT
.L113:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	FindResponseFile, .-FindResponseFile
	.section	.rodata
.LC43:
	.string	"-nomonsters"
.LC44:
	.string	"-respawn"
.LC45:
	.string	"-fast"
.LC46:
	.string	"-devparm"
.LC47:
	.string	"-altdeath"
.LC48:
	.string	"-deathmatch"
	.align 8
.LC49:
	.string	"                         The Ultimate DOOM Startup v%i.%i                           "
	.align 8
.LC50:
	.string	"                            DOOM Shareware Startup v%i.%i                           "
	.align 8
.LC51:
	.string	"                            DOOM Registered Startup v%i.%i                           "
	.align 8
.LC52:
	.string	"                         DOOM 2: Hell on Earth v%i.%i                           "
	.align 8
.LC53:
	.string	"                     Public DOOM - v%i.%i                           "
.LC54:
	.string	"Development mode ON."
.LC55:
	.string	"-cdrom"
	.align 8
.LC56:
	.string	"CD-ROM Version: default.cfg from c:\\doomdata"
.LC57:
	.string	"c:\\doomdata"
.LC58:
	.string	"-turbo"
.LC59:
	.string	"turbo scale: %i%%\n"
.LC60:
	.string	"-wart"
.LC61:
	.string	"~devmapsE%cM%c.wad"
	.align 8
.LC62:
	.string	"Warping to Episode %s, Map %s.\n"
.LC63:
	.string	"~devmapscdata/map0%i.wad"
.LC64:
	.string	"~devmapscdata/map%i.wad"
.LC65:
	.string	"-file"
.LC66:
	.string	"-playdemo"
.LC67:
	.string	"-timedemo"
.LC68:
	.string	"%s.lmp"
.LC69:
	.string	"Playing demo %s.lmp.\n"
.LC70:
	.string	"-skill"
.LC71:
	.string	"-episode"
.LC72:
	.string	"-timer"
	.align 8
.LC73:
	.string	"Levels will end after %d minute"
.LC74:
	.string	"-avg"
	.align 8
.LC75:
	.string	"Austin Virtual Gaming: Levels will end after 20 minutes"
.LC76:
	.string	"-warp"
.LC77:
	.string	"V_Init: allocate screens."
	.align 8
.LC78:
	.string	"M_LoadDefaults: Load system defaults."
	.align 8
.LC79:
	.string	"Z_Init: Init zone memory allocation daemon. "
.LC80:
	.string	"W_Init: Init WADfiles."
	.align 8
.LC81:
	.string	"\nYou cannot -file with the shareware version. Register!"
	.align 8
.LC82:
	.string	"\nThis is not the registered version."
	.align 8
.LC83:
	.ascii	"============================================================"
	.ascii	"===============\nATTENTION:  This version of DOOM has been m"
	.ascii	"odified.  If you would like to\nget a co"
	.string	"py of the original game, call 1-800-IDGAMES or see the readme file.\n        You will not receive technical support for modified games.\n                      press enter to continue\n==========================================================================="
	.align 8
.LC84:
	.string	"===========================================================================\n                                Shareware!\n==========================================================================="
	.align 8
.LC85:
	.ascii	"=================="
	.string	"=========================================================\n                 Commercial product - do not distribute!\n         Please report software piracy to the SPA: 1-800-388-PIR8\n==========================================================================="
	.align 8
.LC86:
	.string	"M_Init: Init miscellaneous info."
	.align 8
.LC87:
	.string	"R_Init: Init DOOM refresh daemon - "
.LC88:
	.string	"\nP_Init: Init Playloop state."
	.align 8
.LC89:
	.string	"I_Init: Setting up machine state."
	.align 8
.LC90:
	.string	"D_CheckNetGame: Checking network game status."
.LC91:
	.string	"S_Init: Setting up sound."
	.align 8
.LC92:
	.string	"HU_Init: Setting up heads up display."
.LC93:
	.string	"ST_Init: Init status bar."
.LC94:
	.string	"-statcopy"
	.align 8
.LC95:
	.string	"External statistics registered."
.LC96:
	.string	"-record"
.LC97:
	.string	"-loadgame"
.LC98:
	.string	"c:\\doomdata\\doomsav%c.dsg"
.LC99:
	.string	"doomsav%c.dsg"
	.text
	.globl	D_DoomMain
	.type	D_DoomMain, @function
D_DoomMain:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$480, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	call	FindResponseFile
	call	IdentifyVersion
	movq	stdout(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	setbuf@PLT
	movl	$0, modifiedgame(%rip)
	leaq	.LC43(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, nomonsters(%rip)
	leaq	.LC44(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, respawnparm(%rip)
	leaq	.LC45(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, fastparm(%rip)
	leaq	.LC46(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, devparm(%rip)
	leaq	.LC47(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L115
	movl	$2, deathmatch(%rip)
	jmp	.L116
.L115:
	leaq	.LC48(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L116
	movl	$1, deathmatch(%rip)
.L116:
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	je	.L117
	cmpl	$3, %eax
	ja	.L118
	cmpl	$2, %eax
	je	.L119
	cmpl	$2, %eax
	ja	.L118
	testl	%eax, %eax
	je	.L120
	cmpl	$1, %eax
	je	.L121
	jmp	.L118
.L117:
	movl	$10, %ecx
	movl	$1, %edx
	leaq	.LC49(%rip), %rax
	movq	%rax, %rsi
	leaq	title(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L122
.L120:
	movl	$10, %ecx
	movl	$1, %edx
	leaq	.LC50(%rip), %rax
	movq	%rax, %rsi
	leaq	title(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L122
.L121:
	movl	$10, %ecx
	movl	$1, %edx
	leaq	.LC51(%rip), %rax
	movq	%rax, %rsi
	leaq	title(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L122
.L119:
	movl	$10, %ecx
	movl	$1, %edx
	leaq	.LC52(%rip), %rax
	movq	%rax, %rsi
	leaq	title(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L122
.L118:
	movl	$10, %ecx
	movl	$1, %edx
	leaq	.LC53(%rip), %rax
	movq	%rax, %rsi
	leaq	title(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	nop
.L122:
	leaq	title(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	devparm(%rip), %eax
	testl	%eax, %eax
	je	.L123
	leaq	.LC54(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L123:
	leaq	.LC55(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L124
	leaq	.LC56(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %esi
	leaq	.LC57(%rip), %rax
	movq	%rax, %rdi
	call	mkdir@PLT
	movabsq	$7236562700467124835, %rax
	movabsq	$7018408550269547617, %rdx
	movq	%rax, basedefault(%rip)
	movq	%rdx, 8+basedefault(%rip)
	movabsq	$29104498768374901, %rax
	movq	%rax, 16+basedefault(%rip)
.L124:
	leaq	.LC58(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L125
	movl	$200, -476(%rbp)
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L126
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, -476(%rbp)
.L126:
	cmpl	$9, -476(%rbp)
	jg	.L127
	movl	$10, -476(%rbp)
.L127:
	cmpl	$400, -476(%rbp)
	jle	.L128
	movl	$400, -476(%rbp)
.L128:
	movl	-476(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC59(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	forwardmove(%rip), %eax
	imull	-476(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1374389535, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, forwardmove(%rip)
	movl	4+forwardmove(%rip), %eax
	imull	-476(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1374389535, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, 4+forwardmove(%rip)
	movl	sidemove(%rip), %eax
	imull	-476(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1374389535, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, sidemove(%rip)
	movl	4+sidemove(%rip), %eax
	imull	-476(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1374389535, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$5, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, 4+sidemove(%rip)
.L125:
	leaq	.LC60(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L129
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	addq	$4, %rax
	movb	$112, (%rax)
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jbe	.L130
	cmpl	$3, %eax
	jne	.L131
.L130:
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$2, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %ecx
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	leaq	-272(%rbp), %rax
	leaq	.LC61(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$2, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$1, %rcx
	salq	$3, %rcx
	addq	%rcx, %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC62(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L132
.L131:
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, -480(%rbp)
	cmpl	$9, -480(%rbp)
	jg	.L133
	movl	-480(%rbp), %edx
	leaq	-272(%rbp), %rax
	leaq	.LC63(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L171
.L133:
	movl	-480(%rbp), %edx
	leaq	-272(%rbp), %rax
	leaq	.LC64(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L171:
	nop
.L132:
	leaq	-272(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
.L129:
	leaq	.LC65(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L135
	movl	$1, modifiedgame(%rip)
	jmp	.L136
.L137:
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	D_AddFile
.L136:
	addl	$1, -480(%rbp)
	movl	myargc(%rip), %eax
	cmpl	%eax, -480(%rbp)
	je	.L135
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$45, %al
	jne	.L137
.L135:
	leaq	.LC66(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	jne	.L138
	leaq	.LC67(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
.L138:
	cmpl	$0, -480(%rbp)
	je	.L139
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L139
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	leaq	-272(%rbp), %rax
	leaq	.LC68(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-272(%rbp), %rax
	movq	%rax, %rdi
	call	D_AddFile
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC69(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L139:
	movl	$2, startskill(%rip)
	movl	$1, startepisode(%rip)
	movl	$1, startmap(%rip)
	movl	$0, autostart(%rip)
	leaq	.LC70(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L140
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L140
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$49, %eax
	movl	%eax, startskill(%rip)
	movl	$1, autostart(%rip)
.L140:
	leaq	.LC71(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L141
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L141
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, startepisode(%rip)
	movl	$1, startmap(%rip)
	movl	$1, autostart(%rip)
.L141:
	leaq	.LC72(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L142
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L142
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L142
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, -468(%rbp)
	movl	-468(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC73(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	cmpl	$1, -468(%rbp)
	jle	.L143
	movl	$115, %edi
	call	putchar@PLT
.L143:
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L142:
	leaq	.LC74(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L144
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L144
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L144
	leaq	.LC75(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L144:
	leaq	.LC76(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L145
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L145
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L146
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, startmap(%rip)
	jmp	.L147
.L146:
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, startepisode(%rip)
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$2, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, startmap(%rip)
.L147:
	movl	$1, autostart(%rip)
.L145:
	leaq	.LC77(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	V_Init@PLT
	leaq	.LC78(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	M_LoadDefaults@PLT
	leaq	.LC79(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	Z_Init@PLT
	leaq	.LC80(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	wadfiles(%rip), %rax
	movq	%rax, %rdi
	call	W_InitMultipleFiles@PLT
	movl	modifiedgame(%rip), %eax
	testl	%eax, %eax
	je	.L148
	movq	$829239909, -464(%rbp)
	movq	$846017125, -456(%rbp)
	movq	$862794341, -448(%rbp)
	movq	$879571557, -440(%rbp)
	movq	$896348773, -432(%rbp)
	movq	$913125989, -424(%rbp)
	movq	$929903205, -416(%rbp)
	movq	$946680421, -408(%rbp)
	movq	$963457637, -400(%rbp)
	movq	$829240165, -392(%rbp)
	movq	$862794597, -384(%rbp)
	movq	$862794597, -376(%rbp)
	movq	$879571813, -368(%rbp)
	movq	$896349029, -360(%rbp)
	movq	$913126245, -352(%rbp)
	movq	$929903461, -344(%rbp)
	movq	$946680677, -336(%rbp)
	movq	$963457893, -328(%rbp)
	movabsq	$112628796518500, %rax
	movq	%rax, -320(%rbp)
	movabsq	$53194904790626, %rax
	movq	%rax, -312(%rbp)
	movabsq	$54294365693288, %rax
	movq	%rax, -304(%rbp)
	movabsq	$54294600644963, %rax
	movq	%rax, -296(%rbp)
	movabsq	$3559023899895754867, %rax
	movq	%rax, -288(%rbp)
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	jne	.L149
	leaq	.LC81(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L149:
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jne	.L148
	movl	$0, -472(%rbp)
	jmp	.L151
.L153:
	leaq	-464(%rbp), %rax
	movl	-472(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	testl	%eax, %eax
	jns	.L152
	leaq	.LC82(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L152:
	addl	$1, -472(%rbp)
.L151:
	cmpl	$22, -472(%rbp)
	jle	.L153
.L148:
	movl	modifiedgame(%rip), %eax
	testl	%eax, %eax
	je	.L154
	leaq	.LC83(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	getchar@PLT
.L154:
	movl	gamemode(%rip), %eax
	cmpl	$4, %eax
	je	.L155
	cmpl	$4, %eax
	ja	.L172
	testl	%eax, %eax
	je	.L155
	subl	$1, %eax
	cmpl	$2, %eax
	ja	.L172
	jmp	.L170
.L155:
	leaq	.LC84(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L158
.L170:
	leaq	.LC85(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L158
.L172:
	nop
.L158:
	leaq	.LC86(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	M_Init@PLT
	leaq	.LC87(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	R_Init@PLT
	leaq	.LC88(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	P_Init@PLT
	leaq	.LC89(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	I_Init@PLT
	leaq	.LC90(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	D_CheckNetGame@PLT
	leaq	.LC91(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	snd_MusicVolume(%rip), %edx
	movl	snd_SfxVolume(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	S_Init@PLT
	leaq	.LC92(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	HU_Init@PLT
	leaq	.LC93(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	call	ST_Init@PLT
	leaq	.LC94(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L159
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L159
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	cltq
	movq	%rax, statcopy(%rip)
	leaq	.LC95(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L159:
	leaq	.LC96(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L160
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L160
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	G_RecordDemo@PLT
	movl	$1, autostart(%rip)
.L160:
	leaq	.LC66(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L161
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L161
	movl	$1, singledemo(%rip)
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	G_DeferedPlayDemo@PLT
	call	D_DoomLoop
.L161:
	leaq	.LC67(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L162
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L162
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	G_TimeDemo@PLT
	call	D_DoomLoop
.L162:
	leaq	.LC97(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -480(%rbp)
	cmpl	$0, -480(%rbp)
	je	.L163
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -480(%rbp)
	jge	.L163
	leaq	.LC55(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L164
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	leaq	-272(%rbp), %rax
	leaq	.LC98(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L165
.L164:
	movq	myargv(%rip), %rax
	movl	-480(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	leaq	-272(%rbp), %rax
	leaq	.LC99(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L165:
	leaq	-272(%rbp), %rax
	movq	%rax, %rdi
	call	G_LoadGame@PLT
.L163:
	movl	gameaction(%rip), %eax
	cmpl	$3, %eax
	je	.L166
	movl	autostart(%rip), %eax
	testl	%eax, %eax
	jne	.L167
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L168
.L167:
	movl	startmap(%rip), %edx
	movl	startepisode(%rip), %ecx
	movl	startskill(%rip), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	G_InitNew@PLT
	jmp	.L166
.L168:
	call	D_StartTitle
.L166:
	call	D_DoomLoop
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L169
	call	__stack_chk_fail@PLT
.L169:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	D_DoomMain, .-D_DoomMain
	.data
	.align 4
	.type	oldgamestate.5, @object
	.size	oldgamestate.5, 4
oldgamestate.5:
	.long	-1
	.local	borderdrawcount.4
	.comm	borderdrawcount.4,4,4
	.local	fullscreen.3
	.comm	fullscreen.3,4,4
	.local	inhelpscreensstate.2
	.comm	inhelpscreensstate.2,4,4
	.local	viewactivestate.1
	.comm	viewactivestate.1,4,4
	.local	menuactivestate.0
	.comm	menuactivestate.0,4,4
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
