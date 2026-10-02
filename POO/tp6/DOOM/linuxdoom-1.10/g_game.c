	.file	"g_game.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: g_game.c,v 1.8 1997/02/03 22:45:09 b1 Exp $"
	.globl	gameaction
	.bss
	.align 4
	.type	gameaction, @object
	.size	gameaction, 4
gameaction:
	.zero	4
	.globl	gamestate
	.align 4
	.type	gamestate, @object
	.size	gamestate, 4
gamestate:
	.zero	4
	.globl	gameskill
	.align 4
	.type	gameskill, @object
	.size	gameskill, 4
gameskill:
	.zero	4
	.globl	respawnmonsters
	.align 4
	.type	respawnmonsters, @object
	.size	respawnmonsters, 4
respawnmonsters:
	.zero	4
	.globl	gameepisode
	.align 4
	.type	gameepisode, @object
	.size	gameepisode, 4
gameepisode:
	.zero	4
	.globl	gamemap
	.align 4
	.type	gamemap, @object
	.size	gamemap, 4
gamemap:
	.zero	4
	.globl	paused
	.align 4
	.type	paused, @object
	.size	paused, 4
paused:
	.zero	4
	.globl	sendpause
	.align 4
	.type	sendpause, @object
	.size	sendpause, 4
sendpause:
	.zero	4
	.globl	sendsave
	.align 4
	.type	sendsave, @object
	.size	sendsave, 4
sendsave:
	.zero	4
	.globl	usergame
	.align 4
	.type	usergame, @object
	.size	usergame, 4
usergame:
	.zero	4
	.globl	timingdemo
	.align 4
	.type	timingdemo, @object
	.size	timingdemo, 4
timingdemo:
	.zero	4
	.globl	nodrawers
	.align 4
	.type	nodrawers, @object
	.size	nodrawers, 4
nodrawers:
	.zero	4
	.globl	noblit
	.align 4
	.type	noblit, @object
	.size	noblit, 4
noblit:
	.zero	4
	.globl	starttime
	.align 4
	.type	starttime, @object
	.size	starttime, 4
starttime:
	.zero	4
	.globl	viewactive
	.align 4
	.type	viewactive, @object
	.size	viewactive, 4
viewactive:
	.zero	4
	.globl	deathmatch
	.align 4
	.type	deathmatch, @object
	.size	deathmatch, 4
deathmatch:
	.zero	4
	.globl	netgame
	.align 4
	.type	netgame, @object
	.size	netgame, 4
netgame:
	.zero	4
	.globl	playeringame
	.align 16
	.type	playeringame, @object
	.size	playeringame, 16
playeringame:
	.zero	16
	.globl	players
	.align 32
	.type	players, @object
	.size	players, 1280
players:
	.zero	1280
	.globl	consoleplayer
	.align 4
	.type	consoleplayer, @object
	.size	consoleplayer, 4
consoleplayer:
	.zero	4
	.globl	displayplayer
	.align 4
	.type	displayplayer, @object
	.size	displayplayer, 4
displayplayer:
	.zero	4
	.globl	gametic
	.align 4
	.type	gametic, @object
	.size	gametic, 4
gametic:
	.zero	4
	.globl	levelstarttic
	.align 4
	.type	levelstarttic, @object
	.size	levelstarttic, 4
levelstarttic:
	.zero	4
	.globl	totalkills
	.align 4
	.type	totalkills, @object
	.size	totalkills, 4
totalkills:
	.zero	4
	.globl	totalitems
	.align 4
	.type	totalitems, @object
	.size	totalitems, 4
totalitems:
	.zero	4
	.globl	totalsecret
	.align 4
	.type	totalsecret, @object
	.size	totalsecret, 4
totalsecret:
	.zero	4
	.globl	demoname
	.align 32
	.type	demoname, @object
	.size	demoname, 32
demoname:
	.zero	32
	.globl	demorecording
	.align 4
	.type	demorecording, @object
	.size	demorecording, 4
demorecording:
	.zero	4
	.globl	demoplayback
	.align 4
	.type	demoplayback, @object
	.size	demoplayback, 4
demoplayback:
	.zero	4
	.globl	netdemo
	.align 4
	.type	netdemo, @object
	.size	netdemo, 4
netdemo:
	.zero	4
	.globl	demobuffer
	.align 8
	.type	demobuffer, @object
	.size	demobuffer, 8
demobuffer:
	.zero	8
	.globl	demo_p
	.align 8
	.type	demo_p, @object
	.size	demo_p, 8
demo_p:
	.zero	8
	.globl	demoend
	.align 8
	.type	demoend, @object
	.size	demoend, 8
demoend:
	.zero	8
	.globl	singledemo
	.align 4
	.type	singledemo, @object
	.size	singledemo, 4
singledemo:
	.zero	4
	.globl	precache
	.data
	.align 4
	.type	precache, @object
	.size	precache, 4
precache:
	.long	1
	.globl	wminfo
	.bss
	.align 32
	.type	wminfo, @object
	.size	wminfo, 200
wminfo:
	.zero	200
	.globl	consistancy
	.align 32
	.type	consistancy, @object
	.size	consistancy, 96
consistancy:
	.zero	96
	.globl	savebuffer
	.align 8
	.type	savebuffer, @object
	.size	savebuffer, 8
savebuffer:
	.zero	8
	.globl	key_right
	.align 4
	.type	key_right, @object
	.size	key_right, 4
key_right:
	.zero	4
	.globl	key_left
	.align 4
	.type	key_left, @object
	.size	key_left, 4
key_left:
	.zero	4
	.globl	key_up
	.align 4
	.type	key_up, @object
	.size	key_up, 4
key_up:
	.zero	4
	.globl	key_down
	.align 4
	.type	key_down, @object
	.size	key_down, 4
key_down:
	.zero	4
	.globl	key_strafeleft
	.align 4
	.type	key_strafeleft, @object
	.size	key_strafeleft, 4
key_strafeleft:
	.zero	4
	.globl	key_straferight
	.align 4
	.type	key_straferight, @object
	.size	key_straferight, 4
key_straferight:
	.zero	4
	.globl	key_fire
	.align 4
	.type	key_fire, @object
	.size	key_fire, 4
key_fire:
	.zero	4
	.globl	key_use
	.align 4
	.type	key_use, @object
	.size	key_use, 4
key_use:
	.zero	4
	.globl	key_strafe
	.align 4
	.type	key_strafe, @object
	.size	key_strafe, 4
key_strafe:
	.zero	4
	.globl	key_speed
	.align 4
	.type	key_speed, @object
	.size	key_speed, 4
key_speed:
	.zero	4
	.globl	mousebfire
	.align 4
	.type	mousebfire, @object
	.size	mousebfire, 4
mousebfire:
	.zero	4
	.globl	mousebstrafe
	.align 4
	.type	mousebstrafe, @object
	.size	mousebstrafe, 4
mousebstrafe:
	.zero	4
	.globl	mousebforward
	.align 4
	.type	mousebforward, @object
	.size	mousebforward, 4
mousebforward:
	.zero	4
	.globl	joybfire
	.align 4
	.type	joybfire, @object
	.size	joybfire, 4
joybfire:
	.zero	4
	.globl	joybstrafe
	.align 4
	.type	joybstrafe, @object
	.size	joybstrafe, 4
joybstrafe:
	.zero	4
	.globl	joybuse
	.align 4
	.type	joybuse, @object
	.size	joybuse, 4
joybuse:
	.zero	4
	.globl	joybspeed
	.align 4
	.type	joybspeed, @object
	.size	joybspeed, 4
joybspeed:
	.zero	4
	.globl	forwardmove
	.data
	.align 8
	.type	forwardmove, @object
	.size	forwardmove, 8
forwardmove:
	.long	25
	.long	50
	.globl	sidemove
	.align 8
	.type	sidemove, @object
	.size	sidemove, 8
sidemove:
	.long	24
	.long	40
	.globl	angleturn
	.align 8
	.type	angleturn, @object
	.size	angleturn, 12
angleturn:
	.long	640
	.long	1280
	.long	320
	.globl	gamekeydown
	.bss
	.align 32
	.type	gamekeydown, @object
	.size	gamekeydown, 1024
gamekeydown:
	.zero	1024
	.globl	turnheld
	.align 4
	.type	turnheld, @object
	.size	turnheld, 4
turnheld:
	.zero	4
	.globl	mousearray
	.align 16
	.type	mousearray, @object
	.size	mousearray, 16
mousearray:
	.zero	16
	.globl	mousebuttons
	.section	.data.rel.local,"aw"
	.align 8
	.type	mousebuttons, @object
	.size	mousebuttons, 8
mousebuttons:
	.quad	mousearray+4
	.globl	mousex
	.bss
	.align 4
	.type	mousex, @object
	.size	mousex, 4
mousex:
	.zero	4
	.globl	mousey
	.align 4
	.type	mousey, @object
	.size	mousey, 4
mousey:
	.zero	4
	.globl	dclicktime
	.align 4
	.type	dclicktime, @object
	.size	dclicktime, 4
dclicktime:
	.zero	4
	.globl	dclickstate
	.align 4
	.type	dclickstate, @object
	.size	dclickstate, 4
dclickstate:
	.zero	4
	.globl	dclicks
	.align 4
	.type	dclicks, @object
	.size	dclicks, 4
dclicks:
	.zero	4
	.globl	dclicktime2
	.align 4
	.type	dclicktime2, @object
	.size	dclicktime2, 4
dclicktime2:
	.zero	4
	.globl	dclickstate2
	.align 4
	.type	dclickstate2, @object
	.size	dclickstate2, 4
dclickstate2:
	.zero	4
	.globl	dclicks2
	.align 4
	.type	dclicks2, @object
	.size	dclicks2, 4
dclicks2:
	.zero	4
	.globl	joyxmove
	.align 4
	.type	joyxmove, @object
	.size	joyxmove, 4
joyxmove:
	.zero	4
	.globl	joyymove
	.align 4
	.type	joyymove, @object
	.size	joyymove, 4
joyymove:
	.zero	4
	.globl	joyarray
	.align 16
	.type	joyarray, @object
	.size	joyarray, 20
joyarray:
	.zero	20
	.globl	joybuttons
	.section	.data.rel.local
	.align 8
	.type	joybuttons, @object
	.size	joybuttons, 8
joybuttons:
	.quad	joyarray+4
	.globl	savegameslot
	.bss
	.align 4
	.type	savegameslot, @object
	.size	savegameslot, 4
savegameslot:
	.zero	4
	.globl	savedescription
	.align 32
	.type	savedescription, @object
	.size	savedescription, 32
savedescription:
	.zero	32
	.globl	bodyque
	.align 32
	.type	bodyque, @object
	.size	bodyque, 256
bodyque:
	.zero	256
	.globl	bodyqueslot
	.align 4
	.type	bodyqueslot, @object
	.size	bodyqueslot, 4
bodyqueslot:
	.zero	4
	.globl	statcopy
	.align 8
	.type	statcopy, @object
	.size	statcopy, 8
statcopy:
	.zero	8
	.text
	.globl	G_CmdChecksum
	.type	G_CmdChecksum, @function
G_CmdChecksum:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L3:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L2:
	cmpl	$0, -8(%rbp)
	je	.L3
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	G_CmdChecksum, .-G_CmdChecksum
	.globl	G_BuildTiccmd
	.type	G_BuildTiccmd, @function
G_BuildTiccmd:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	call	I_BaseTiccmd@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, (%rax)
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
	leaq	(%rax,%rax), %rdx
	leaq	consistancy(%rip), %rax
	movzwl	(%rdx,%rax), %edx
	movq	-56(%rbp), %rax
	movw	%dx, 4(%rax)
	movl	key_strafe(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L6
	movq	mousebuttons(%rip), %rax
	movl	mousebstrafe(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L6
	movq	joybuttons(%rip), %rax
	movl	joybstrafe(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L7
.L6:
	movl	$1, %eax
	jmp	.L8
.L7:
	movl	$0, %eax
.L8:
	movl	%eax, -20(%rbp)
	movl	key_speed(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L9
	movq	joybuttons(%rip), %rax
	movl	joybspeed(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L10
.L9:
	movl	$1, %eax
	jmp	.L11
.L10:
	movl	$0, %eax
.L11:
	movl	%eax, -16(%rbp)
	movl	$0, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	joyxmove(%rip), %eax
	testl	%eax, %eax
	js	.L12
	movl	joyxmove(%rip), %eax
	testl	%eax, %eax
	jg	.L12
	movl	key_right(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L12
	movl	key_left(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L13
.L12:
	movl	turnheld(%rip), %edx
	movl	ticdup(%rip), %eax
	addl	%edx, %eax
	movl	%eax, turnheld(%rip)
	jmp	.L14
.L13:
	movl	$0, turnheld(%rip)
.L14:
	movl	turnheld(%rip), %eax
	cmpl	$5, %eax
	jg	.L15
	movl	$2, -32(%rbp)
	jmp	.L16
.L15:
	movl	-16(%rbp), %eax
	movl	%eax, -32(%rbp)
.L16:
	cmpl	$0, -20(%rbp)
	je	.L17
	movl	key_right(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L18
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	sidemove(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -24(%rbp)
.L18:
	movl	key_left(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L19
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	sidemove(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	%eax, -24(%rbp)
.L19:
	movl	joyxmove(%rip), %eax
	testl	%eax, %eax
	jle	.L20
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	sidemove(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -24(%rbp)
.L20:
	movl	joyxmove(%rip), %eax
	testl	%eax, %eax
	jns	.L21
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	sidemove(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	%eax, -24(%rbp)
	jmp	.L21
.L17:
	movl	key_right(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L22
	movq	-56(%rbp), %rax
	movzwl	2(%rax), %eax
	movl	%eax, %ecx
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	angleturn(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movw	%dx, 2(%rax)
.L22:
	movl	key_left(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L23
	movq	-56(%rbp), %rax
	movzwl	2(%rax), %eax
	movl	%eax, %ecx
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	angleturn(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%ecx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movw	%dx, 2(%rax)
.L23:
	movl	joyxmove(%rip), %eax
	testl	%eax, %eax
	jle	.L24
	movq	-56(%rbp), %rax
	movzwl	2(%rax), %eax
	movl	%eax, %ecx
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	angleturn(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movw	%dx, 2(%rax)
.L24:
	movl	joyxmove(%rip), %eax
	testl	%eax, %eax
	jns	.L21
	movq	-56(%rbp), %rax
	movzwl	2(%rax), %eax
	movl	%eax, %ecx
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	angleturn(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%ecx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movw	%dx, 2(%rax)
.L21:
	movl	key_up(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L25
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	forwardmove(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -28(%rbp)
.L25:
	movl	key_down(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L26
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	forwardmove(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	%eax, -28(%rbp)
.L26:
	movl	joyymove(%rip), %eax
	testl	%eax, %eax
	jns	.L27
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	forwardmove(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -28(%rbp)
.L27:
	movl	joyymove(%rip), %eax
	testl	%eax, %eax
	jle	.L28
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	forwardmove(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	%eax, -28(%rbp)
.L28:
	movl	key_straferight(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L29
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	sidemove(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -24(%rbp)
.L29:
	movl	key_strafeleft(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L30
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	sidemove(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	%eax, -24(%rbp)
.L30:
	call	HU_dequeueChatChar@PLT
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 6(%rax)
	movl	key_fire(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L31
	movq	mousebuttons(%rip), %rax
	movl	mousebfire(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L31
	movq	joybuttons(%rip), %rax
	movl	joybfire(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L32
.L31:
	movq	-56(%rbp), %rax
	movzbl	7(%rax), %eax
	orl	$1, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
.L32:
	movl	key_use(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L33
	movq	joybuttons(%rip), %rax
	movl	joybuse(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L34
.L33:
	movq	-56(%rbp), %rax
	movzbl	7(%rax), %eax
	orl	$2, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
	movl	$0, dclicks(%rip)
.L34:
	movl	$0, -36(%rbp)
	jmp	.L35
.L38:
	movl	-36(%rbp), %eax
	addl	$49, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L36
	movq	-56(%rbp), %rax
	movzbl	7(%rax), %eax
	orl	$4, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
	movq	-56(%rbp), %rax
	movzbl	7(%rax), %eax
	movl	%eax, %edx
	movl	-36(%rbp), %eax
	sall	$3, %eax
	orl	%edx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
	jmp	.L37
.L36:
	addl	$1, -36(%rbp)
.L35:
	cmpl	$7, -36(%rbp)
	jle	.L38
.L37:
	movq	mousebuttons(%rip), %rax
	movl	mousebforward(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L39
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	forwardmove(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -28(%rbp)
.L39:
	movq	mousebuttons(%rip), %rax
	movl	mousebforward(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	dclickstate(%rip), %edx
	cmpl	%edx, %eax
	je	.L40
	movl	dclicktime(%rip), %eax
	cmpl	$1, %eax
	jle	.L40
	movq	mousebuttons(%rip), %rax
	movl	mousebforward(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, dclickstate(%rip)
	movl	dclickstate(%rip), %eax
	testl	%eax, %eax
	je	.L41
	movl	dclicks(%rip), %eax
	addl	$1, %eax
	movl	%eax, dclicks(%rip)
.L41:
	movl	dclicks(%rip), %eax
	cmpl	$2, %eax
	jne	.L42
	movq	-56(%rbp), %rax
	movzbl	7(%rax), %eax
	orl	$2, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
	movl	$0, dclicks(%rip)
	jmp	.L44
.L42:
	movl	$0, dclicktime(%rip)
	jmp	.L44
.L40:
	movl	dclicktime(%rip), %edx
	movl	ticdup(%rip), %eax
	addl	%edx, %eax
	movl	%eax, dclicktime(%rip)
	movl	dclicktime(%rip), %eax
	cmpl	$20, %eax
	jle	.L44
	movl	$0, dclicks(%rip)
	movl	$0, dclickstate(%rip)
.L44:
	movq	mousebuttons(%rip), %rax
	movl	mousebstrafe(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L45
	movq	joybuttons(%rip), %rax
	movl	joybstrafe(%rip), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L46
.L45:
	movl	$1, %eax
	jmp	.L47
.L46:
	movl	$0, %eax
.L47:
	movl	%eax, -12(%rbp)
	movl	dclickstate2(%rip), %eax
	cmpl	%eax, -12(%rbp)
	je	.L48
	movl	dclicktime2(%rip), %eax
	cmpl	$1, %eax
	jle	.L48
	movl	-12(%rbp), %eax
	movl	%eax, dclickstate2(%rip)
	movl	dclickstate2(%rip), %eax
	testl	%eax, %eax
	je	.L49
	movl	dclicks2(%rip), %eax
	addl	$1, %eax
	movl	%eax, dclicks2(%rip)
.L49:
	movl	dclicks2(%rip), %eax
	cmpl	$2, %eax
	jne	.L50
	movq	-56(%rbp), %rax
	movzbl	7(%rax), %eax
	orl	$2, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
	movl	$0, dclicks2(%rip)
	jmp	.L52
.L50:
	movl	$0, dclicktime2(%rip)
	jmp	.L52
.L48:
	movl	dclicktime2(%rip), %edx
	movl	ticdup(%rip), %eax
	addl	%edx, %eax
	movl	%eax, dclicktime2(%rip)
	movl	dclicktime2(%rip), %eax
	cmpl	$20, %eax
	jle	.L52
	movl	$0, dclicks2(%rip)
	movl	$0, dclickstate2(%rip)
.L52:
	movl	mousey(%rip), %eax
	addl	%eax, -28(%rbp)
	cmpl	$0, -20(%rbp)
	je	.L53
	movl	mousex(%rip), %eax
	addl	%eax, %eax
	addl	%eax, -24(%rbp)
	jmp	.L54
.L53:
	movq	-56(%rbp), %rax
	movzwl	2(%rax), %eax
	movl	%eax, %ecx
	movl	mousex(%rip), %eax
	leal	0(,%rax,8), %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movw	%dx, 2(%rax)
.L54:
	movl	$0, mousey(%rip)
	movl	mousey(%rip), %eax
	movl	%eax, mousex(%rip)
	movl	4+forwardmove(%rip), %eax
	cmpl	%eax, -28(%rbp)
	jle	.L55
	movl	4+forwardmove(%rip), %eax
	movl	%eax, -28(%rbp)
	jmp	.L56
.L55:
	movl	4+forwardmove(%rip), %eax
	negl	%eax
	cmpl	%eax, -28(%rbp)
	jge	.L56
	movl	4+forwardmove(%rip), %eax
	negl	%eax
	movl	%eax, -28(%rbp)
.L56:
	movl	4+forwardmove(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jle	.L57
	movl	4+forwardmove(%rip), %eax
	movl	%eax, -24(%rbp)
	jmp	.L58
.L57:
	movl	4+forwardmove(%rip), %eax
	negl	%eax
	cmpl	%eax, -24(%rbp)
	jge	.L58
	movl	4+forwardmove(%rip), %eax
	negl	%eax
	movl	%eax, -24(%rbp)
.L58:
	movq	-56(%rbp), %rax
	movzbl	(%rax), %eax
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, (%rax)
	movq	-56(%rbp), %rax
	movzbl	1(%rax), %eax
	movl	%eax, %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 1(%rax)
	movl	sendpause(%rip), %eax
	testl	%eax, %eax
	je	.L59
	movl	$0, sendpause(%rip)
	movq	-56(%rbp), %rax
	movb	$-127, 7(%rax)
.L59:
	movl	sendsave(%rip), %eax
	testl	%eax, %eax
	je	.L61
	movl	$0, sendsave(%rip)
	movl	savegameslot(%rip), %eax
	sall	$2, %eax
	orl	$-126, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, 7(%rax)
.L61:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	G_BuildTiccmd, .-G_BuildTiccmd
	.section	.rodata
.LC0:
	.string	"F_SKY1"
.LC1:
	.string	"SKY3"
.LC2:
	.string	"SKY1"
.LC3:
	.string	"SKY2"
	.text
	.globl	G_DoLoadLevel
	.type	G_DoLoadLevel, @function
G_DoLoadLevel:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	R_FlatNumForName@PLT
	movl	%eax, skyflatnum(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L63
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L63
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L64
.L63:
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	movl	gamemap(%rip), %eax
	cmpl	$11, %eax
	jg	.L65
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	jmp	.L64
.L65:
	movl	gamemap(%rip), %eax
	cmpl	$20, %eax
	jg	.L64
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
.L64:
	movl	gametic(%rip), %eax
	movl	%eax, levelstarttic(%rip)
	movl	wipegamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L66
	movl	$-1, wipegamestate(%rip)
.L66:
	movl	$0, gamestate(%rip)
	movl	$0, -4(%rbp)
	jmp	.L67
.L69:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L68
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	8+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L68
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	8+players(%rip), %rax
	movl	$2, (%rdx,%rax)
.L68:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	96(%rax), %rdx
	leaq	players(%rip), %rax
	addq	%rdx, %rax
	addq	$4, %rax
	movl	$16, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	addl	$1, -4(%rbp)
.L67:
	cmpl	$3, -4(%rbp)
	jle	.L69
	movl	gameskill(%rip), %edx
	movl	gamemap(%rip), %esi
	movl	gameepisode(%rip), %eax
	movl	%edx, %ecx
	movl	$0, %edx
	movl	%eax, %edi
	call	P_SetupLevel@PLT
	movl	consoleplayer(%rip), %eax
	movl	%eax, displayplayer(%rip)
	call	I_GetTime@PLT
	movl	%eax, starttime(%rip)
	movl	$0, gameaction(%rip)
	call	Z_CheckHeap@PLT
	movl	$1024, %edx
	movl	$0, %esi
	leaq	gamekeydown(%rip), %rax
	movq	%rax, %rdi
	call	memset@PLT
	movl	$0, joyymove(%rip)
	movl	joyymove(%rip), %eax
	movl	%eax, joyxmove(%rip)
	movl	$0, mousey(%rip)
	movl	mousey(%rip), %eax
	movl	%eax, mousex(%rip)
	movl	$0, paused(%rip)
	movl	paused(%rip), %eax
	movl	%eax, sendsave(%rip)
	movl	sendsave(%rip), %eax
	movl	%eax, sendpause(%rip)
	movq	mousebuttons(%rip), %rax
	movl	$8, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	joybuttons(%rip), %rax
	movl	$8, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	G_DoLoadLevel, .-G_DoLoadLevel
	.globl	G_Responder
	.type	G_Responder, @function
G_Responder:
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
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L71
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L71
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$216, %eax
	jne	.L71
	movl	singledemo(%rip), %eax
	testl	%eax, %eax
	jne	.L75
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	jne	.L71
.L75:
	movl	displayplayer(%rip), %eax
	addl	$1, %eax
	movl	%eax, displayplayer(%rip)
	movl	displayplayer(%rip), %eax
	cmpl	$4, %eax
	jne	.L73
	movl	$0, displayplayer(%rip)
.L73:
	movl	displayplayer(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L74
	movl	displayplayer(%rip), %edx
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, %edx
	jne	.L75
.L74:
	movl	$1, %eax
	jmp	.L76
.L71:
	movl	gameaction(%rip), %eax
	testl	%eax, %eax
	jne	.L77
	movl	singledemo(%rip), %eax
	testl	%eax, %eax
	jne	.L77
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L78
	movl	gamestate(%rip), %eax
	cmpl	$3, %eax
	jne	.L77
.L78:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L79
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jne	.L80
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	jne	.L79
.L80:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$3, %eax
	jne	.L81
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	je	.L81
.L79:
	call	M_StartControlPanel@PLT
	movl	$1, %eax
	jmp	.L76
.L81:
	movl	$0, %eax
	jmp	.L76
.L77:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L82
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	HU_Responder@PLT
	testl	%eax, %eax
	je	.L83
	movl	$1, %eax
	jmp	.L76
.L83:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	ST_Responder@PLT
	testl	%eax, %eax
	je	.L84
	movl	$1, %eax
	jmp	.L76
.L84:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	AM_Responder@PLT
	testl	%eax, %eax
	je	.L82
	movl	$1, %eax
	jmp	.L76
.L82:
	movl	gamestate(%rip), %eax
	cmpl	$2, %eax
	jne	.L85
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	F_Responder@PLT
	testl	%eax, %eax
	je	.L85
	movl	$1, %eax
	jmp	.L76
.L85:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$3, %eax
	je	.L86
	cmpl	$3, %eax
	ja	.L95
	cmpl	$2, %eax
	je	.L88
	cmpl	$2, %eax
	ja	.L95
	testl	%eax, %eax
	je	.L89
	cmpl	$1, %eax
	je	.L90
	jmp	.L95
.L89:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$255, %eax
	jne	.L91
	movl	$1, sendpause(%rip)
	movl	$1, %eax
	jmp	.L76
.L91:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$255, %eax
	jg	.L92
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	$1, (%rdx,%rax)
.L92:
	movl	$1, %eax
	jmp	.L76
.L90:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$255, %eax
	jg	.L93
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	gamekeydown(%rip), %rax
	movl	$0, (%rdx,%rax)
.L93:
	movl	$0, %eax
	jmp	.L76
.L88:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$1, %eax
	movl	%eax, %edx
	movq	mousebuttons(%rip), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$2, %eax
	movl	%eax, %edx
	movq	mousebuttons(%rip), %rax
	addq	$4, %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$4, %eax
	movl	%eax, %edx
	movq	mousebuttons(%rip), %rax
	addq	$8, %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	movl	mouseSensitivity(%rip), %edx
	addl	$5, %edx
	imull	%edx, %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$2, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, mousex(%rip)
	movq	-8(%rbp), %rax
	movl	12(%rax), %eax
	movl	mouseSensitivity(%rip), %edx
	addl	$5, %edx
	imull	%edx, %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	$2, %ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, mousey(%rip)
	movl	$1, %eax
	jmp	.L76
.L86:
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$1, %eax
	movl	%eax, %edx
	movq	joybuttons(%rip), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$2, %eax
	movl	%eax, %edx
	movq	joybuttons(%rip), %rax
	addq	$4, %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$4, %eax
	movl	%eax, %edx
	movq	joybuttons(%rip), %rax
	addq	$8, %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	andl	$8, %eax
	movl	%eax, %edx
	movq	joybuttons(%rip), %rax
	addq	$12, %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, joyxmove(%rip)
	movq	-8(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, joyymove(%rip)
	movl	$1, %eax
	jmp	.L76
.L95:
	nop
	movl	$0, %eax
.L76:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	G_Responder, .-G_Responder
	.section	.rodata
.LC4:
	.string	"%s is turbo!"
	.align 8
.LC5:
	.string	"consistency failure (%i should be %i)"
	.text
	.globl	G_Ticker
	.type	G_Ticker, @function
G_Ticker:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -16(%rbp)
	jmp	.L97
.L99:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L98
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	8+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$2, %eax
	jne	.L98
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	G_DoReborn
.L98:
	addl	$1, -16(%rbp)
.L97:
	cmpl	$3, -16(%rbp)
	jle	.L99
	jmp	.L101
.L114:
	movl	gameaction(%rip), %eax
	cmpl	$9, %eax
	ja	.L101
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L103(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L103(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L103:
	.long	.L136-.L103
	.long	.L111-.L103
	.long	.L110-.L103
	.long	.L109-.L103
	.long	.L108-.L103
	.long	.L107-.L103
	.long	.L106-.L103
	.long	.L105-.L103
	.long	.L104-.L103
	.long	.L102-.L103
	.text
.L111:
	call	G_DoLoadLevel
	jmp	.L101
.L110:
	call	G_DoNewGame
	jmp	.L101
.L109:
	call	G_DoLoadGame
	jmp	.L101
.L108:
	call	G_DoSaveGame
	jmp	.L101
.L107:
	call	G_DoPlayDemo
	jmp	.L101
.L106:
	call	G_DoCompleted
	jmp	.L101
.L105:
	call	F_StartFinale@PLT
	jmp	.L101
.L104:
	call	G_DoWorldDone
	jmp	.L101
.L102:
	call	M_ScreenShot@PLT
	movl	$0, gameaction(%rip)
	jmp	.L101
.L136:
	nop
.L101:
	movl	gameaction(%rip), %eax
	testl	%eax, %eax
	jne	.L114
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %edi
	cltd
	idivl	%edi
	movl	%eax, %edx
	movslq	%edx, %rax
	imulq	$715827883, %rax, %rax
	shrq	$32, %rax
	sarl	%eax
	movl	%edx, %ecx
	sarl	$31, %ecx
	subl	%ecx, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %ecx
	movl	%ecx, %eax
	addl	%eax, %eax
	addl	%ecx, %eax
	sall	$2, %eax
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L115
.L122:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L116
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	addq	$12, %rax
	movq	%rax, -8(%rbp)
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	netcmds(%rip), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	je	.L117
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	G_ReadDemoTiccmd
.L117:
	movl	demorecording(%rip), %eax
	testl	%eax, %eax
	je	.L118
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	G_WriteDemoTiccmd
.L118:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$50, %al
	jle	.L119
	movl	gametic(%rip), %eax
	andl	$31, %eax
	testl	%eax, %eax
	jne	.L119
	movl	gametic(%rip), %eax
	sarl	$5, %eax
	andl	$3, %eax
	cmpl	%eax, -16(%rbp)
	jne	.L119
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	player_names(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rsi
	leaq	turbomessage.0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	224+players(%rip), %rax
	leaq	turbomessage.0(%rip), %rdx
	movq	%rdx, (%rcx,%rax)
.L119:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L116
	movl	netdemo(%rip), %eax
	testl	%eax, %eax
	jne	.L116
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %esi
	cltd
	idivl	%esi
	movl	%edx, %ecx
	movl	%ecx, %eax
	testl	%eax, %eax
	jne	.L116
	movl	gametic(%rip), %eax
	cmpl	$12, %eax
	jle	.L120
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	consistancy(%rip), %rax
	movzwl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movzwl	4(%rax), %eax
	cmpw	%ax, %dx
	je	.L120
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	consistancy(%rip), %rax
	movzwl	(%rdx,%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	movl	%eax, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L120:
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	je	.L121
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, %esi
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	consistancy(%rip), %rax
	movw	%si, (%rdx,%rax)
	jmp	.L116
.L121:
	movl	rndindex(%rip), %eax
	movl	%eax, %esi
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	(%rax,%rax), %rdx
	leaq	consistancy(%rip), %rax
	movw	%si, (%rdx,%rax)
.L116:
	addl	$1, -16(%rbp)
.L115:
	cmpl	$3, -16(%rbp)
	jle	.L122
	movl	$0, -16(%rbp)
	jmp	.L123
.L130:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L124
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	19+players(%rip), %rax
	movzbl	(%rdx,%rax), %eax
	testb	%al, %al
	jns	.L124
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	19+players(%rip), %rax
	movzbl	(%rdx,%rax), %eax
	movzbl	%al, %eax
	andl	$3, %eax
	cmpl	$1, %eax
	je	.L125
	cmpl	$2, %eax
	je	.L126
	jmp	.L124
.L125:
	movl	paused(%rip), %eax
	xorl	$1, %eax
	movl	%eax, paused(%rip)
	movl	paused(%rip), %eax
	testl	%eax, %eax
	je	.L127
	call	S_PauseSound@PLT
	jmp	.L124
.L127:
	call	S_ResumeSound@PLT
	jmp	.L124
.L126:
	movzbl	savedescription(%rip), %eax
	testb	%al, %al
	jne	.L129
	movabsq	$4993719335564625230, %rax
	movq	%rax, savedescription(%rip)
	movb	$0, 8+savedescription(%rip)
.L129:
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	19+players(%rip), %rax
	movzbl	(%rdx,%rax), %eax
	movzbl	%al, %eax
	sarl	$2, %eax
	andl	$7, %eax
	movl	%eax, savegameslot(%rip)
	movl	$4, gameaction(%rip)
	nop
.L124:
	addl	$1, -16(%rbp)
.L123:
	cmpl	$3, -16(%rbp)
	jle	.L130
	movl	gamestate(%rip), %eax
	cmpl	$3, %eax
	je	.L131
	cmpl	$3, %eax
	ja	.L137
	cmpl	$2, %eax
	je	.L133
	cmpl	$2, %eax
	ja	.L137
	testl	%eax, %eax
	je	.L134
	cmpl	$1, %eax
	je	.L135
	jmp	.L137
.L134:
	call	P_Ticker@PLT
	call	ST_Ticker@PLT
	call	AM_Ticker@PLT
	call	HU_Ticker@PLT
	jmp	.L132
.L135:
	call	WI_Ticker@PLT
	jmp	.L132
.L133:
	call	F_Ticker@PLT
	jmp	.L132
.L131:
	call	D_PageTicker@PLT
	nop
.L132:
.L137:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	G_Ticker, .-G_Ticker
	.globl	G_InitPlayer
	.type	G_InitPlayer, @function
G_InitPlayer:
.LFB11:
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
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	G_PlayerReborn
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	G_InitPlayer, .-G_InitPlayer
	.globl	G_PlayerFinishLevel
	.type	G_PlayerFinishLevel, @function
G_PlayerFinishLevel:
.LFB12:
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
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$48, %rax
	movl	$24, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-8(%rbp), %rax
	addq	$72, %rax
	movl	$24, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	andl	$-262145, %edx
	movl	%edx, 160(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 248(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 252(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 232(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 236(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	G_PlayerFinishLevel, .-G_PlayerFinishLevel
	.globl	G_PlayerReborn
	.type	G_PlayerReborn, @function
G_PlayerReborn:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movl	%edi, -68(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	96(%rax), %rdx
	leaq	players(%rip), %rax
	addq	%rdx, %rax
	addq	$4, %rax
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	208+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -52(%rbp)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	212+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -48(%rbp)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	216+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -44(%rbp)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movl	$320, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	96(%rax), %rdx
	leaq	players(%rip), %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rcx
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	208+players(%rip), %rdx
	movl	-52(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	212+players(%rip), %rdx
	movl	-48(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	216+players(%rip), %rdx
	movl	-44(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movq	-40(%rbp), %rax
	movl	$1, 192(%rax)
	movq	-40(%rbp), %rax
	movl	192(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 196(%rax)
	movq	-40(%rbp), %rax
	movl	$0, 8(%rax)
	movq	-40(%rbp), %rax
	movl	$100, 36(%rax)
	movq	-40(%rbp), %rax
	movl	$1, 120(%rax)
	movq	-40(%rbp), %rax
	movl	120(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-40(%rbp), %rax
	movl	$1, 124(%rax)
	movq	-40(%rbp), %rax
	movl	$1, 128(%rax)
	movq	-40(%rbp), %rax
	movl	$50, 160(%rax)
	movl	$0, -56(%rbp)
	jmp	.L141
.L142:
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	maxammo(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	-56(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$44, %rcx
	movl	%edx, (%rax,%rcx,4)
	addl	$1, -56(%rbp)
.L141:
	cmpl	$3, -56(%rbp)
	jle	.L142
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L143
	call	__stack_chk_fail@PLT
.L143:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	G_PlayerReborn, .-G_PlayerReborn
	.globl	G_CheckSpot
	.type	G_CheckSpot, @function
G_CheckSpot:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	jne	.L145
	movl	$0, -32(%rbp)
	jmp	.L146
.L149:
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	24(%rax), %edx
	movq	-48(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	cmpl	%eax, %edx
	jne	.L147
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	28(%rax), %edx
	movq	-48(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	cmpl	%eax, %edx
	jne	.L147
	movl	$0, %eax
	jmp	.L148
.L147:
	addl	$1, -32(%rbp)
.L146:
	movl	-32(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L149
	movl	$1, %eax
	jmp	.L148
.L145:
	movq	-48(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -28(%rbp)
	movq	-48(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	sall	$16, %eax
	movl	%eax, -24(%rbp)
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %ecx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_CheckPosition@PLT
	testl	%eax, %eax
	jne	.L150
	movl	$0, %eax
	jmp	.L148
.L150:
	movl	bodyqueslot(%rip), %eax
	cmpl	$31, %eax
	jle	.L151
	movl	bodyqueslot(%rip), %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$27, %eax
	addl	%eax, %edx
	andl	$31, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	bodyque(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj@PLT
.L151:
	movl	bodyqueslot(%rip), %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$27, %eax
	addl	%eax, %edx
	andl	$31, %edx
	subl	%eax, %edx
	movl	%edx, %ecx
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movslq	%ecx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	bodyque(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	bodyqueslot(%rip), %eax
	addl	$1, %eax
	movl	%eax, bodyqueslot(%rip)
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_PointInSubsector@PLT
	movq	%rax, -16(%rbp)
	movq	-48(%rbp), %rax
	movzwl	4(%rax), %eax
	movswl	%ax, %edx
	imull	$11651, %edx, %edx
	shrl	$16, %edx
	sarw	$3, %dx
	sarw	$15, %ax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	cwtl
	sall	$29, %eax
	sarl	$19, %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %esi
	movl	-20(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	movl	%eax, %edx
	movl	-24(%rbp), %eax
	leal	(%rdx,%rax), %edi
	movq	finecosine(%rip), %rax
	movl	-20(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	$39, %ecx
	movl	%esi, %edx
	movl	%edi, %esi
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	20+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$1, %eax
	je	.L152
	movq	-8(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L152:
	movl	$1, %eax
.L148:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	G_CheckSpot, .-G_CheckSpot
	.section	.rodata
	.align 8
.LC6:
	.string	"Only %i deathmatch spots, 4 required"
	.text
	.globl	G_DeathMatchSpawnPlayer
	.type	G_DeathMatchSpawnPlayer, @function
G_DeathMatchSpawnPlayer:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	deathmatch_p(%rip), %rdx
	leaq	deathmatchstarts(%rip), %rax
	subq	%rax, %rdx
	sarq	%rdx
	movabsq	$-3689348814741910323, %rax
	imulq	%rdx, %rax
	movl	%eax, -8(%rbp)
	cmpl	$3, -8(%rbp)
	jg	.L154
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L154:
	movl	$0, -12(%rbp)
	jmp	.L155
.L158:
	call	P_Random@PLT
	cltd
	idivl	-8(%rbp)
	movl	%edx, -4(%rbp)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	deathmatchstarts(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	G_CheckSpot
	testl	%eax, %eax
	je	.L156
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	leaq	6+deathmatchstarts(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	deathmatchstarts(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	P_SpawnPlayer@PLT
	jmp	.L153
.L156:
	addl	$1, -12(%rbp)
.L155:
	cmpl	$19, -12(%rbp)
	jle	.L158
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	playerstarts(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	P_SpawnPlayer@PLT
.L153:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	G_DeathMatchSpawnPlayer, .-G_DeathMatchSpawnPlayer
	.globl	G_DoReborn
	.type	G_DoReborn, @function
G_DoReborn:
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
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L160
	movl	$1, gameaction(%rip)
	jmp	.L159
.L160:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	$0, 192(%rax)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L162
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	G_DeathMatchSpawnPlayer
	jmp	.L159
.L162:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	playerstarts(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	G_CheckSpot
	testl	%eax, %eax
	je	.L163
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	playerstarts(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	P_SpawnPlayer@PLT
	jmp	.L159
.L163:
	movl	$0, -4(%rbp)
	jmp	.L164
.L166:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	playerstarts(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	G_CheckSpot
	testl	%eax, %eax
	je	.L165
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	leaq	6+playerstarts(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	playerstarts(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	P_SpawnPlayer@PLT
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	leaq	6+playerstarts(%rip), %rax
	movw	%cx, (%rdx,%rax)
	jmp	.L159
.L165:
	addl	$1, -4(%rbp)
.L164:
	cmpl	$3, -4(%rbp)
	jle	.L166
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	playerstarts(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	P_SpawnPlayer@PLT
.L159:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	G_DoReborn, .-G_DoReborn
	.globl	G_ScreenShot
	.type	G_ScreenShot, @function
G_ScreenShot:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$9, gameaction(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	G_ScreenShot, .-G_ScreenShot
	.globl	pars
	.data
	.align 32
	.type	pars, @object
	.size	pars, 160
pars:
	.long	0
	.zero	36
	.long	0
	.long	30
	.long	75
	.long	120
	.long	90
	.long	165
	.long	180
	.long	180
	.long	30
	.long	165
	.long	0
	.long	90
	.long	90
	.long	90
	.long	120
	.long	90
	.long	360
	.long	240
	.long	30
	.long	170
	.long	0
	.long	90
	.long	45
	.long	90
	.long	150
	.long	90
	.long	90
	.long	165
	.long	30
	.long	135
	.globl	cpars
	.align 32
	.type	cpars, @object
	.size	cpars, 128
cpars:
	.long	30
	.long	90
	.long	120
	.long	120
	.long	90
	.long	150
	.long	120
	.long	120
	.long	270
	.long	90
	.long	210
	.long	150
	.long	150
	.long	150
	.long	210
	.long	150
	.long	420
	.long	150
	.long	210
	.long	150
	.long	240
	.long	150
	.long	180
	.long	150
	.long	150
	.long	300
	.long	330
	.long	420
	.long	300
	.long	180
	.long	120
	.long	30
	.globl	secretexit
	.bss
	.align 4
	.type	secretexit, @object
	.size	secretexit, 4
secretexit:
	.zero	4
	.text
	.globl	G_ExitLevel
	.type	G_ExitLevel, @function
G_ExitLevel:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, secretexit(%rip)
	movl	$6, gameaction(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	G_ExitLevel, .-G_ExitLevel
	.section	.rodata
.LC7:
	.string	"map31"
	.text
	.globl	G_SecretExitLevel
	.type	G_SecretExitLevel, @function
G_SecretExitLevel:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L170
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName@PLT
	testl	%eax, %eax
	jns	.L170
	movl	$0, secretexit(%rip)
	jmp	.L171
.L170:
	movl	$1, secretexit(%rip)
.L171:
	movl	$6, gameaction(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	G_SecretExitLevel, .-G_SecretExitLevel
	.globl	G_DoCompleted
	.type	G_DoCompleted, @function
G_DoCompleted:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, gameaction(%rip)
	movl	$0, -4(%rbp)
	jmp	.L173
.L175:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L174
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	G_PlayerFinishLevel
.L174:
	addl	$1, -4(%rbp)
.L173:
	cmpl	$3, -4(%rbp)
	jle	.L175
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L176
	call	AM_Stop@PLT
.L176:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L177
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	je	.L178
	cmpl	$9, %eax
	je	.L179
	jmp	.L177
.L178:
	movl	$7, gameaction(%rip)
	jmp	.L172
.L179:
	movl	$0, -4(%rbp)
	jmp	.L181
.L182:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	312+players(%rip), %rax
	movl	$1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L181:
	cmpl	$3, -4(%rbp)
	jle	.L182
	nop
.L177:
	movl	gamemap(%rip), %eax
	cmpl	$8, %eax
	jne	.L183
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L183
	movl	$7, gameaction(%rip)
	jmp	.L172
.L183:
	movl	gamemap(%rip), %eax
	cmpl	$9, %eax
	jne	.L184
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L184
	movl	$0, -4(%rbp)
	jmp	.L185
.L186:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	312+players(%rip), %rax
	movl	$1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L185:
	cmpl	$3, -4(%rbp)
	jle	.L186
.L184:
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	312+players(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, 4+wminfo(%rip)
	movl	gameepisode(%rip), %eax
	subl	$1, %eax
	movl	%eax, wminfo(%rip)
	movl	gamemap(%rip), %eax
	subl	$1, %eax
	movl	%eax, 8+wminfo(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L187
	movl	secretexit(%rip), %eax
	testl	%eax, %eax
	je	.L188
	movl	gamemap(%rip), %eax
	cmpl	$15, %eax
	je	.L189
	cmpl	$31, %eax
	je	.L190
	jmp	.L194
.L189:
	movl	$30, 12+wminfo(%rip)
	jmp	.L194
.L190:
	movl	$31, 12+wminfo(%rip)
	jmp	.L194
.L188:
	movl	gamemap(%rip), %eax
	subl	$31, %eax
	cmpl	$1, %eax
	ja	.L193
	movl	$15, 12+wminfo(%rip)
	jmp	.L194
.L193:
	movl	gamemap(%rip), %eax
	movl	%eax, 12+wminfo(%rip)
	jmp	.L194
.L187:
	movl	secretexit(%rip), %eax
	testl	%eax, %eax
	je	.L195
	movl	$8, 12+wminfo(%rip)
	jmp	.L194
.L195:
	movl	gamemap(%rip), %eax
	cmpl	$9, %eax
	jne	.L196
	movl	gameepisode(%rip), %eax
	cmpl	$4, %eax
	je	.L197
	cmpl	$4, %eax
	jg	.L194
	cmpl	$3, %eax
	je	.L199
	cmpl	$3, %eax
	jg	.L194
	cmpl	$1, %eax
	je	.L200
	cmpl	$2, %eax
	je	.L201
	jmp	.L194
.L200:
	movl	$3, 12+wminfo(%rip)
	jmp	.L194
.L201:
	movl	$5, 12+wminfo(%rip)
	jmp	.L194
.L199:
	movl	$6, 12+wminfo(%rip)
	jmp	.L194
.L197:
	movl	$2, 12+wminfo(%rip)
	jmp	.L194
.L196:
	movl	gamemap(%rip), %eax
	movl	%eax, 12+wminfo(%rip)
.L194:
	movl	totalkills(%rip), %eax
	movl	%eax, 16+wminfo(%rip)
	movl	totalitems(%rip), %eax
	movl	%eax, 20+wminfo(%rip)
	movl	totalsecret(%rip), %eax
	movl	%eax, 24+wminfo(%rip)
	movl	$0, 28+wminfo(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L202
	movl	gamemap(%rip), %eax
	subl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	cpars(%rip), %rax
	movl	(%rdx,%rax), %eax
	imull	$35, %eax, %eax
	movl	%eax, 32+wminfo(%rip)
	jmp	.L203
.L202:
	movl	gameepisode(%rip), %eax
	movl	gamemap(%rip), %edx
	movslq	%edx, %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	pars(%rip), %rax
	movl	(%rdx,%rax), %eax
	imull	$35, %eax, %eax
	movl	%eax, 32+wminfo(%rip)
.L203:
	movl	consoleplayer(%rip), %eax
	movl	%eax, 36+wminfo(%rip)
	movl	$0, -4(%rbp)
	jmp	.L204
.L205:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	40+wminfo(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	208+players(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	44+wminfo(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	212+players(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	48+wminfo(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	216+players(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	52+wminfo(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	leveltime(%rip), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	56+wminfo(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	96(%rax), %rdx
	leaq	players(%rip), %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	48(%rax), %rdx
	leaq	wminfo(%rip), %rax
	addq	%rdx, %rax
	leaq	12(%rax), %rcx
	movq	(%rsi), %rax
	movq	8(%rsi), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
	addl	$1, -4(%rbp)
.L204:
	cmpl	$3, -4(%rbp)
	jle	.L205
	movl	$1, gamestate(%rip)
	movl	$0, viewactive(%rip)
	movl	$0, automapactive(%rip)
	movq	statcopy(%rip), %rax
	testq	%rax, %rax
	je	.L206
	movq	statcopy(%rip), %rax
	movl	$200, %edx
	leaq	wminfo(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
.L206:
	leaq	wminfo(%rip), %rax
	movq	%rax, %rdi
	call	WI_Start@PLT
.L172:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	G_DoCompleted, .-G_DoCompleted
	.globl	G_WorldDone
	.type	G_WorldDone, @function
G_WorldDone:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$8, gameaction(%rip)
	movl	secretexit(%rip), %eax
	testl	%eax, %eax
	je	.L208
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	312+players(%rip), %rax
	movl	$1, (%rdx,%rax)
.L208:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L211
	movl	gamemap(%rip), %eax
	cmpl	$31, %eax
	seta	%dl
	testb	%dl, %dl
	jne	.L211
	movl	$1, %edx
	movl	%eax, %ecx
	salq	%cl, %rdx
	movq	%rdx, %rax
	movq	%rax, %rdx
	andl	$1074792512, %edx
	testq	%rdx, %rdx
	setne	%dl
	testb	%dl, %dl
	jne	.L210
	andl	$2147516416, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L211
	movl	secretexit(%rip), %eax
	testl	%eax, %eax
	je	.L212
.L210:
	call	F_StartFinale@PLT
	jmp	.L209
.L212:
	nop
.L209:
.L211:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	G_WorldDone, .-G_WorldDone
	.globl	G_DoWorldDone
	.type	G_DoWorldDone, @function
G_DoWorldDone:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, gamestate(%rip)
	movl	12+wminfo(%rip), %eax
	addl	$1, %eax
	movl	%eax, gamemap(%rip)
	call	G_DoLoadLevel
	movl	$0, gameaction(%rip)
	movl	$1, viewactive(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	G_DoWorldDone, .-G_DoWorldDone
	.globl	savename
	.bss
	.align 32
	.type	savename, @object
	.size	savename, 256
savename:
	.zero	256
	.text
	.globl	G_LoadGame
	.type	G_LoadGame, @function
G_LoadGame:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	savename(%rip), %rax
	movq	%rax, %rdi
	call	strcpy@PLT
	movl	$3, gameaction(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	G_LoadGame, .-G_LoadGame
	.section	.rodata
.LC8:
	.string	"version %i"
.LC9:
	.string	"Bad savegame"
	.text
	.globl	G_DoLoadGame
	.type	G_DoLoadGame, @function
G_DoLoadGame:
.LFB24:
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
	movl	$0, gameaction(%rip)
	leaq	savebuffer(%rip), %rax
	movq	%rax, %rsi
	leaq	savename(%rip), %rax
	movq	%rax, %rdi
	call	M_ReadFile@PLT
	movl	%eax, -48(%rbp)
	movq	savebuffer(%rip), %rax
	addq	$24, %rax
	movq	%rax, save_p(%rip)
	leaq	-32(%rbp), %rax
	movl	$16, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	leaq	-32(%rbp), %rax
	movl	$110, %edx
	leaq	.LC8(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	save_p(%rip), %rax
	leaq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L223
	movq	save_p(%rip), %rax
	addq	$16, %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, gameskill(%rip)
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, gameepisode(%rip)
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, gamemap(%rip)
	movl	$0, -52(%rbp)
	jmp	.L218
.L219:
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	-52(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	playeringame(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -52(%rbp)
.L218:
	cmpl	$3, -52(%rbp)
	jle	.L219
	movl	gamemap(%rip), %edx
	movl	gameepisode(%rip), %ecx
	movl	gameskill(%rip), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	G_InitNew
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -44(%rbp)
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -40(%rbp)
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	sall	$16, %eax
	movl	%eax, %edx
	movl	-40(%rbp), %eax
	sall	$8, %eax
	addl	%eax, %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, leveltime(%rip)
	call	P_UnArchivePlayers@PLT
	call	P_UnArchiveWorld@PLT
	call	P_UnArchiveThinkers@PLT
	call	P_UnArchiveSpecials@PLT
	movq	save_p(%rip), %rax
	movzbl	(%rax), %eax
	cmpb	$29, %al
	je	.L220
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L220:
	movq	savebuffer(%rip), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	movl	setsizeneeded(%rip), %eax
	testl	%eax, %eax
	je	.L221
	call	R_ExecuteSetViewSize@PLT
.L221:
	call	R_FillBackScreen@PLT
	jmp	.L215
.L223:
	nop
.L215:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L222
	call	__stack_chk_fail@PLT
.L222:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	G_DoLoadGame, .-G_DoLoadGame
	.globl	G_SaveGame
	.type	G_SaveGame, @function
G_SaveGame:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, savegameslot(%rip)
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	savedescription(%rip), %rax
	movq	%rax, %rdi
	call	strcpy@PLT
	movl	$1, sendsave(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	G_SaveGame, .-G_SaveGame
	.section	.rodata
.LC10:
	.string	"-cdrom"
.LC11:
	.string	"c:\\doomdata\\doomsav%d.dsg"
.LC12:
	.string	"doomsav%d.dsg"
.LC13:
	.string	"Savegame buffer overrun"
.LC14:
	.string	"game saved."
	.text
	.globl	G_DoSaveGame
	.type	G_DoSaveGame, @function
G_DoSaveGame:
.LFB26:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L226
	movl	savegameslot(%rip), %edx
	leaq	-112(%rbp), %rax
	leaq	.LC11(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L227
.L226:
	movl	savegameslot(%rip), %edx
	leaq	-112(%rbp), %rax
	leaq	.LC12(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L227:
	leaq	savedescription(%rip), %rax
	movq	%rax, -136(%rbp)
	movq	8+screens(%rip), %rax
	addq	$16384, %rax
	movq	%rax, savebuffer(%rip)
	movq	savebuffer(%rip), %rax
	movq	%rax, save_p(%rip)
	movq	save_p(%rip), %rax
	movq	-136(%rbp), %rcx
	movl	$24, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	save_p(%rip), %rax
	addq	$24, %rax
	movq	%rax, save_p(%rip)
	leaq	-128(%rbp), %rax
	movl	$16, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	leaq	-128(%rbp), %rax
	movl	$110, %edx
	leaq	.LC8(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	save_p(%rip), %rcx
	movq	-128(%rbp), %rax
	movq	-120(%rbp), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
	movq	save_p(%rip), %rax
	addq	$16, %rax
	movq	%rax, save_p(%rip)
	movl	gameskill(%rip), %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	gameepisode(%rip), %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	gamemap(%rip), %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	$0, -144(%rbp)
	jmp	.L228
.L229:
	movl	-144(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	addl	$1, -144(%rbp)
.L228:
	cmpl	$3, -144(%rbp)
	jle	.L229
	movl	leveltime(%rip), %eax
	sarl	$16, %eax
	movl	%eax, %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	leveltime(%rip), %eax
	sarl	$8, %eax
	movl	%eax, %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	leveltime(%rip), %ecx
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	call	P_ArchivePlayers@PLT
	call	P_ArchiveWorld@PLT
	call	P_ArchiveThinkers@PLT
	call	P_ArchiveSpecials@PLT
	movq	save_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, save_p(%rip)
	movb	$29, (%rax)
	movq	save_p(%rip), %rdx
	movq	savebuffer(%rip), %rax
	subq	%rax, %rdx
	movl	%edx, -140(%rbp)
	cmpl	$180224, -140(%rbp)
	jle	.L230
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L230:
	movq	savebuffer(%rip), %rcx
	movl	-140(%rbp), %edx
	leaq	-112(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	M_WriteFile@PLT
	movl	$0, gameaction(%rip)
	movb	$0, savedescription(%rip)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	224+players(%rip), %rax
	leaq	.LC14(%rip), %rdx
	movq	%rdx, (%rcx,%rax)
	call	R_FillBackScreen@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L231
	call	__stack_chk_fail@PLT
.L231:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	G_DoSaveGame, .-G_DoSaveGame
	.globl	d_skill
	.bss
	.align 4
	.type	d_skill, @object
	.size	d_skill, 4
d_skill:
	.zero	4
	.globl	d_episode
	.align 4
	.type	d_episode, @object
	.size	d_episode, 4
d_episode:
	.zero	4
	.globl	d_map
	.align 4
	.type	d_map, @object
	.size	d_map, 4
d_map:
	.zero	4
	.text
	.globl	G_DeferedInitNew
	.type	G_DeferedInitNew, @function
G_DeferedInitNew:
.LFB27:
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
	movl	-4(%rbp), %eax
	movl	%eax, d_skill(%rip)
	movl	-8(%rbp), %eax
	movl	%eax, d_episode(%rip)
	movl	-12(%rbp), %eax
	movl	%eax, d_map(%rip)
	movl	$2, gameaction(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	G_DeferedInitNew, .-G_DeferedInitNew
	.globl	G_DoNewGame
	.type	G_DoNewGame, @function
G_DoNewGame:
.LFB28:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, demoplayback(%rip)
	movl	$0, netdemo(%rip)
	movl	$0, netgame(%rip)
	movl	$0, deathmatch(%rip)
	movl	$0, 12+playeringame(%rip)
	movl	12+playeringame(%rip), %eax
	movl	%eax, 8+playeringame(%rip)
	movl	8+playeringame(%rip), %eax
	movl	%eax, 4+playeringame(%rip)
	movl	$0, respawnparm(%rip)
	movl	$0, fastparm(%rip)
	movl	$0, nomonsters(%rip)
	movl	$0, consoleplayer(%rip)
	movl	d_map(%rip), %edx
	movl	d_episode(%rip), %ecx
	movl	d_skill(%rip), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	G_InitNew
	movl	$0, gameaction(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	G_DoNewGame, .-G_DoNewGame
	.section	.rodata
.LC15:
	.string	"SKY4"
	.text
	.globl	G_InitNew
	.type	G_InitNew, @function
G_InitNew:
.LFB29:
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
	movl	%edx, -28(%rbp)
	movl	paused(%rip), %eax
	testl	%eax, %eax
	je	.L235
	movl	$0, paused(%rip)
	call	S_ResumeSound@PLT
.L235:
	cmpl	$4, -20(%rbp)
	jbe	.L236
	movl	$4, -20(%rbp)
.L236:
	cmpl	$0, -24(%rbp)
	jg	.L237
	movl	$1, -24(%rbp)
.L237:
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L238
	cmpl	$4, -24(%rbp)
	jle	.L239
	movl	$4, -24(%rbp)
	jmp	.L239
.L238:
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	jne	.L240
	cmpl	$1, -24(%rbp)
	jle	.L239
	movl	$1, -24(%rbp)
	jmp	.L239
.L240:
	cmpl	$3, -24(%rbp)
	jle	.L239
	movl	$3, -24(%rbp)
.L239:
	cmpl	$0, -28(%rbp)
	jg	.L241
	movl	$1, -28(%rbp)
.L241:
	cmpl	$9, -28(%rbp)
	jle	.L242
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L242
	movl	$9, -28(%rbp)
.L242:
	call	M_ClearRandom@PLT
	cmpl	$4, -20(%rbp)
	je	.L243
	movl	respawnparm(%rip), %eax
	testl	%eax, %eax
	je	.L244
.L243:
	movl	$1, respawnmonsters(%rip)
	jmp	.L245
.L244:
	movl	$0, respawnmonsters(%rip)
.L245:
	movl	fastparm(%rip), %eax
	testl	%eax, %eax
	jne	.L246
	cmpl	$4, -20(%rbp)
	jne	.L247
	movl	gameskill(%rip), %eax
	cmpl	$4, %eax
	je	.L247
.L246:
	movl	$477, -4(%rbp)
	jmp	.L248
.L249:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	16+states(%rip), %rax
	movq	(%rdx,%rax), %rax
	sarq	%rax
	movq	%rax, %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	16+states(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L248:
	cmpl	$489, -4(%rbp)
	jle	.L249
	movl	$1310720, 1532+mobjinfo(%rip)
	movl	$1310720, 3004+mobjinfo(%rip)
	movl	$1310720, 2912+mobjinfo(%rip)
	jmp	.L250
.L247:
	cmpl	$4, -20(%rbp)
	je	.L250
	movl	gameskill(%rip), %eax
	cmpl	$4, %eax
	jne	.L250
	movl	$477, -4(%rbp)
	jmp	.L251
.L252:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	16+states(%rip), %rax
	movq	(%rdx,%rax), %rax
	leaq	(%rax,%rax), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	16+states(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L251:
	cmpl	$489, -4(%rbp)
	jle	.L252
	movl	$983040, 1532+mobjinfo(%rip)
	movl	$655360, 3004+mobjinfo(%rip)
	movl	$655360, 2912+mobjinfo(%rip)
.L250:
	movl	$0, -4(%rbp)
	jmp	.L253
.L254:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	8+players(%rip), %rax
	movl	$2, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L253:
	cmpl	$3, -4(%rbp)
	jle	.L254
	movl	$1, usergame(%rip)
	movl	$0, paused(%rip)
	movl	$0, demoplayback(%rip)
	movl	$0, automapactive(%rip)
	movl	$1, viewactive(%rip)
	movl	-24(%rbp), %eax
	movl	%eax, gameepisode(%rip)
	movl	-28(%rbp), %eax
	movl	%eax, gamemap(%rip)
	movl	-20(%rbp), %eax
	movl	%eax, gameskill(%rip)
	movl	$1, viewactive(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L255
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	movl	gamemap(%rip), %eax
	cmpl	$11, %eax
	jg	.L256
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	jmp	.L257
.L256:
	movl	gamemap(%rip), %eax
	cmpl	$20, %eax
	jg	.L257
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	jmp	.L257
.L255:
	cmpl	$4, -24(%rbp)
	je	.L258
	cmpl	$4, -24(%rbp)
	jg	.L257
	cmpl	$3, -24(%rbp)
	je	.L259
	cmpl	$3, -24(%rbp)
	jg	.L257
	cmpl	$1, -24(%rbp)
	je	.L260
	cmpl	$2, -24(%rbp)
	je	.L261
	jmp	.L257
.L260:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	jmp	.L257
.L261:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	jmp	.L257
.L259:
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	jmp	.L257
.L258:
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	R_TextureNumForName@PLT
	movl	%eax, skytexture(%rip)
	nop
.L257:
	call	G_DoLoadLevel
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	G_InitNew, .-G_InitNew
	.globl	G_ReadDemoTiccmd
	.type	G_ReadDemoTiccmd, @function
G_ReadDemoTiccmd:
.LFB30:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	demo_p(%rip), %rax
	movzbl	(%rax), %eax
	cmpb	$-128, %al
	jne	.L263
	call	G_CheckDemoStatus
	jmp	.L262
.L263:
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movb	%dl, 1(%rax)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	sall	$8, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, 2(%rax)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movb	%dl, 7(%rax)
.L262:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE30:
	.size	G_ReadDemoTiccmd, .-G_ReadDemoTiccmd
	.globl	G_WriteDemoTiccmd
	.type	G_WriteDemoTiccmd, @function
G_WriteDemoTiccmd:
.LFB31:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	452+gamekeydown(%rip), %eax
	testl	%eax, %eax
	je	.L266
	call	G_CheckDemoStatus
.L266:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movq	-8(%rbp), %rax
	movzbl	1(%rax), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movq	-8(%rbp), %rax
	movzwl	2(%rax), %eax
	cwtl
	subl	$-128, %eax
	sarl	$8, %eax
	movl	%eax, %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movq	-8(%rbp), %rdx
	movzbl	7(%rdx), %edx
	movb	%dl, (%rax)
	movq	demo_p(%rip), %rax
	subq	$4, %rax
	movq	%rax, demo_p(%rip)
	movq	demoend(%rip), %rax
	leaq	-16(%rax), %rdx
	movq	demo_p(%rip), %rax
	cmpq	%rax, %rdx
	jnb	.L267
	call	G_CheckDemoStatus
	jmp	.L265
.L267:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	G_ReadDemoTiccmd
.L265:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE31:
	.size	G_WriteDemoTiccmd, .-G_WriteDemoTiccmd
	.section	.rodata
.LC16:
	.string	"-maxdemo"
	.text
	.globl	G_RecordDemo
	.type	G_RecordDemo, @function
G_RecordDemo:
.LFB32:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, usergame(%rip)
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	demoname(%rip), %rax
	movq	%rax, %rdi
	call	strcpy@PLT
	leaq	demoname(%rip), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, %rdx
	leaq	demoname(%rip), %rax
	addq	%rdx, %rax
	movl	$1886219310, (%rax)
	movb	$0, 4(%rax)
	movl	$131072, -8(%rbp)
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L270
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -4(%rbp)
	jge	.L270
	movq	myargv(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	sall	$10, %eax
	movl	%eax, -8(%rbp)
.L270:
	movl	-8(%rbp), %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	%eax, %edi
	call	Z_Malloc@PLT
	movq	%rax, demobuffer(%rip)
	movq	demobuffer(%rip), %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, demoend(%rip)
	movl	$1, demorecording(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE32:
	.size	G_RecordDemo, .-G_RecordDemo
	.globl	G_BeginRecording
	.type	G_BeginRecording, @function
G_BeginRecording:
.LFB33:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	demobuffer(%rip), %rax
	movq	%rax, demo_p(%rip)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movb	$110, (%rax)
	movl	gameskill(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	gameepisode(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	gamemap(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	deathmatch(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	respawnparm(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	fastparm(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	nomonsters(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	consoleplayer(%rip), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	movl	$0, -4(%rbp)
	jmp	.L272
.L273:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movl	%ecx, %edx
	movb	%dl, (%rax)
	addl	$1, -4(%rbp)
.L272:
	cmpl	$3, -4(%rbp)
	jle	.L273
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE33:
	.size	G_BeginRecording, .-G_BeginRecording
	.globl	defdemoname
	.bss
	.align 8
	.type	defdemoname, @object
	.size	defdemoname, 8
defdemoname:
	.zero	8
	.text
	.globl	G_DeferedPlayDemo
	.type	G_DeferedPlayDemo, @function
G_DeferedPlayDemo:
.LFB34:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, defdemoname(%rip)
	movl	$5, gameaction(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE34:
	.size	G_DeferedPlayDemo, .-G_DeferedPlayDemo
	.section	.rodata
	.align 8
.LC17:
	.string	"Demo is from a different game version!\n"
	.text
	.globl	G_DoPlayDemo
	.type	G_DoPlayDemo, @function
G_DoPlayDemo:
.LFB35:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, gameaction(%rip)
	movq	defdemoname(%rip), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, demo_p(%rip)
	movq	demo_p(%rip), %rax
	movq	%rax, demobuffer(%rip)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	cmpb	$110, %al
	je	.L276
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$39, %edx
	movl	$1, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	movl	$0, gameaction(%rip)
	jmp	.L275
.L276:
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -12(%rbp)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, deathmatch(%rip)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, respawnparm(%rip)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, fastparm(%rip)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, nomonsters(%rip)
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, consoleplayer(%rip)
	movl	$0, -16(%rbp)
	jmp	.L278
.L279:
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	playeringame(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -16(%rbp)
.L278:
	cmpl	$3, -16(%rbp)
	jle	.L279
	movl	4+playeringame(%rip), %eax
	testl	%eax, %eax
	je	.L280
	movl	$1, netgame(%rip)
	movl	$1, netdemo(%rip)
.L280:
	movl	$0, precache(%rip)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %ecx
	movl	-12(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	G_InitNew
	movl	$1, precache(%rip)
	movl	$0, usergame(%rip)
	movl	$1, demoplayback(%rip)
.L275:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE35:
	.size	G_DoPlayDemo, .-G_DoPlayDemo
	.section	.rodata
.LC18:
	.string	"-nodraw"
.LC19:
	.string	"-noblit"
	.text
	.globl	G_TimeDemo
	.type	G_TimeDemo, @function
G_TimeDemo:
.LFB36:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, nodrawers(%rip)
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, noblit(%rip)
	movl	$1, timingdemo(%rip)
	movl	$1, singletics(%rip)
	movq	-8(%rbp), %rax
	movq	%rax, defdemoname(%rip)
	movl	$5, gameaction(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE36:
	.size	G_TimeDemo, .-G_TimeDemo
	.section	.rodata
	.align 8
.LC20:
	.string	"timed %i gametics in %i realtics"
.LC21:
	.string	"Z_CT at g_game.c:%i"
.LC22:
	.string	"Demo %s recorded"
	.text
	.globl	G_CheckDemoStatus
	.type	G_CheckDemoStatus, @function
G_CheckDemoStatus:
.LFB37:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	timingdemo(%rip), %eax
	testl	%eax, %eax
	je	.L283
	call	I_GetTime@PLT
	movl	%eax, -4(%rbp)
	movl	starttime(%rip), %eax
	movl	-4(%rbp), %edx
	subl	%eax, %edx
	movl	gametic(%rip), %eax
	movl	%eax, %esi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L283:
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	je	.L284
	movl	singledemo(%rip), %eax
	testl	%eax, %eax
	je	.L285
	call	I_Quit@PLT
.L285:
	movq	demobuffer(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L286
	movl	$1663, %esi
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L286:
	movq	demobuffer(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	$0, demoplayback(%rip)
	movl	$0, netdemo(%rip)
	movl	$0, netgame(%rip)
	movl	$0, deathmatch(%rip)
	movl	$0, 12+playeringame(%rip)
	movl	12+playeringame(%rip), %eax
	movl	%eax, 8+playeringame(%rip)
	movl	8+playeringame(%rip), %eax
	movl	%eax, 4+playeringame(%rip)
	movl	$0, respawnparm(%rip)
	movl	$0, fastparm(%rip)
	movl	$0, nomonsters(%rip)
	movl	$0, consoleplayer(%rip)
	call	D_AdvanceDemo@PLT
	movl	$1, %eax
	jmp	.L287
.L284:
	movl	demorecording(%rip), %eax
	testl	%eax, %eax
	je	.L288
	movq	demo_p(%rip), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, demo_p(%rip)
	movb	$-128, (%rax)
	movq	demo_p(%rip), %rdx
	movq	demobuffer(%rip), %rax
	subq	%rax, %rdx
	movq	demobuffer(%rip), %rax
	movq	%rax, %rsi
	leaq	demoname(%rip), %rax
	movq	%rax, %rdi
	call	M_WriteFile@PLT
	movq	demobuffer(%rip), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
	movl	$0, demorecording(%rip)
	leaq	demoname(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L288:
	movl	$0, %eax
.L287:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE37:
	.size	G_CheckDemoStatus, .-G_CheckDemoStatus
	.local	turbomessage.0
	.comm	turbomessage.0,80,32
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
