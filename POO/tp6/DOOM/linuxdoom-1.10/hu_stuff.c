	.file	"hu_stuff.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: hu_stuff.c,v 1.4 1997/02/03 16:47:52 b1 Exp $"
	.globl	chat_macros
.LC0:
	.string	"No"
.LC1:
	.string	"I'm ready to kick butt!"
.LC2:
	.string	"I'm OK."
.LC3:
	.string	"I'm not looking too good!"
.LC4:
	.string	"Help!"
.LC5:
	.string	"You suck!"
.LC6:
	.string	"Next time, scumbag..."
.LC7:
	.string	"Come here!"
.LC8:
	.string	"I'll take care of it."
.LC9:
	.string	"Yes"
	.section	.data.rel.local,"aw"
	.align 32
	.type	chat_macros, @object
	.size	chat_macros, 80
chat_macros:
	.quad	.LC0
	.quad	.LC1
	.quad	.LC2
	.quad	.LC3
	.quad	.LC4
	.quad	.LC5
	.quad	.LC6
	.quad	.LC7
	.quad	.LC8
	.quad	.LC9
	.globl	player_names
	.section	.rodata
.LC10:
	.string	"Green: "
.LC11:
	.string	"Indigo: "
.LC12:
	.string	"Brown: "
.LC13:
	.string	"Red: "
	.section	.data.rel.local
	.align 32
	.type	player_names, @object
	.size	player_names, 32
player_names:
	.quad	.LC10
	.quad	.LC11
	.quad	.LC12
	.quad	.LC13
	.globl	chat_char
	.bss
	.type	chat_char, @object
	.size	chat_char, 1
chat_char:
	.zero	1
	.local	plr
	.comm	plr,8,8
	.globl	hu_font
	.align 32
	.type	hu_font, @object
	.size	hu_font, 504
hu_font:
	.zero	504
	.local	w_title
	.comm	w_title,112,32
	.globl	chat_on
	.align 4
	.type	chat_on, @object
	.size	chat_on, 4
chat_on:
	.zero	4
	.local	w_chat
	.comm	w_chat,136,32
	.local	always_off
	.comm	always_off,4,4
	.local	chat_dest
	.comm	chat_dest,4,1
	.local	w_inputbuffer
	.comm	w_inputbuffer,544,32
	.local	message_on
	.comm	message_on,4,4
	.globl	message_dontfuckwithme
	.align 4
	.type	message_dontfuckwithme, @object
	.size	message_dontfuckwithme, 4
message_dontfuckwithme:
	.zero	4
	.local	message_nottobefuckedwith
	.comm	message_nottobefuckedwith,4,4
	.local	w_message
	.comm	w_message,472,32
	.local	message_counter
	.comm	message_counter,4,4
	.local	headsupactive
	.comm	headsupactive,4,4
	.globl	mapnames
	.section	.rodata
.LC14:
	.string	"E1M1: Hangar"
.LC15:
	.string	"E1M2: Nuclear Plant"
.LC16:
	.string	"E1M3: Toxin Refinery"
.LC17:
	.string	"E1M4: Command Control"
.LC18:
	.string	"E1M5: Phobos Lab"
.LC19:
	.string	"E1M6: Central Processing"
.LC20:
	.string	"E1M7: Computer Station"
.LC21:
	.string	"E1M8: Phobos Anomaly"
.LC22:
	.string	"E1M9: Military Base"
.LC23:
	.string	"E2M1: Deimos Anomaly"
.LC24:
	.string	"E2M2: Containment Area"
.LC25:
	.string	"E2M3: Refinery"
.LC26:
	.string	"E2M4: Deimos Lab"
.LC27:
	.string	"E2M5: Command Center"
.LC28:
	.string	"E2M6: Halls of the Damned"
.LC29:
	.string	"E2M7: Spawning Vats"
.LC30:
	.string	"E2M8: Tower of Babel"
.LC31:
	.string	"E2M9: Fortress of Mystery"
.LC32:
	.string	"E3M1: Hell Keep"
.LC33:
	.string	"E3M2: Slough of Despair"
.LC34:
	.string	"E3M3: Pandemonium"
.LC35:
	.string	"E3M4: House of Pain"
.LC36:
	.string	"E3M5: Unholy Cathedral"
.LC37:
	.string	"E3M6: Mt. Erebus"
.LC38:
	.string	"E3M7: Limbo"
.LC39:
	.string	"E3M8: Dis"
.LC40:
	.string	"E3M9: Warrens"
.LC41:
	.string	"E4M1: Hell Beneath"
.LC42:
	.string	"E4M2: Perfect Hatred"
.LC43:
	.string	"E4M3: Sever The Wicked"
.LC44:
	.string	"E4M4: Unruly Evil"
.LC45:
	.string	"E4M5: They Will Repent"
.LC46:
	.string	"E4M6: Against Thee Wickedly"
.LC47:
	.string	"E4M7: And Hell Followed"
.LC48:
	.string	"E4M8: Unto The Cruel"
.LC49:
	.string	"E4M9: Fear"
.LC50:
	.string	"NEWLEVEL"
	.section	.data.rel.local
	.align 32
	.type	mapnames, @object
	.size	mapnames, 360
mapnames:
	.quad	.LC14
	.quad	.LC15
	.quad	.LC16
	.quad	.LC17
	.quad	.LC18
	.quad	.LC19
	.quad	.LC20
	.quad	.LC21
	.quad	.LC22
	.quad	.LC23
	.quad	.LC24
	.quad	.LC25
	.quad	.LC26
	.quad	.LC27
	.quad	.LC28
	.quad	.LC29
	.quad	.LC30
	.quad	.LC31
	.quad	.LC32
	.quad	.LC33
	.quad	.LC34
	.quad	.LC35
	.quad	.LC36
	.quad	.LC37
	.quad	.LC38
	.quad	.LC39
	.quad	.LC40
	.quad	.LC41
	.quad	.LC42
	.quad	.LC43
	.quad	.LC44
	.quad	.LC45
	.quad	.LC46
	.quad	.LC47
	.quad	.LC48
	.quad	.LC49
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.quad	.LC50
	.globl	mapnames2
	.section	.rodata
.LC51:
	.string	"level 1: entryway"
.LC52:
	.string	"level 2: underhalls"
.LC53:
	.string	"level 3: the gantlet"
.LC54:
	.string	"level 4: the focus"
.LC55:
	.string	"level 5: the waste tunnels"
.LC56:
	.string	"level 6: the crusher"
.LC57:
	.string	"level 7: dead simple"
.LC58:
	.string	"level 8: tricks and traps"
.LC59:
	.string	"level 9: the pit"
.LC60:
	.string	"level 10: refueling base"
.LC61:
	.string	"level 11: 'o' of destruction!"
.LC62:
	.string	"level 12: the factory"
.LC63:
	.string	"level 13: downtown"
.LC64:
	.string	"level 14: the inmost dens"
.LC65:
	.string	"level 15: industrial zone"
.LC66:
	.string	"level 16: suburbs"
.LC67:
	.string	"level 17: tenements"
.LC68:
	.string	"level 18: the courtyard"
.LC69:
	.string	"level 19: the citadel"
.LC70:
	.string	"level 20: gotcha!"
.LC71:
	.string	"level 21: nirvana"
.LC72:
	.string	"level 22: the catacombs"
.LC73:
	.string	"level 23: barrels o' fun"
.LC74:
	.string	"level 24: the chasm"
.LC75:
	.string	"level 25: bloodfalls"
.LC76:
	.string	"level 26: the abandoned mines"
.LC77:
	.string	"level 27: monster condo"
.LC78:
	.string	"level 28: the spirit world"
.LC79:
	.string	"level 29: the living end"
.LC80:
	.string	"level 30: icon of sin"
.LC81:
	.string	"level 31: wolfenstein"
.LC82:
	.string	"level 32: grosse"
	.section	.data.rel.local
	.align 32
	.type	mapnames2, @object
	.size	mapnames2, 256
mapnames2:
	.quad	.LC51
	.quad	.LC52
	.quad	.LC53
	.quad	.LC54
	.quad	.LC55
	.quad	.LC56
	.quad	.LC57
	.quad	.LC58
	.quad	.LC59
	.quad	.LC60
	.quad	.LC61
	.quad	.LC62
	.quad	.LC63
	.quad	.LC64
	.quad	.LC65
	.quad	.LC66
	.quad	.LC67
	.quad	.LC68
	.quad	.LC69
	.quad	.LC70
	.quad	.LC71
	.quad	.LC72
	.quad	.LC73
	.quad	.LC74
	.quad	.LC75
	.quad	.LC76
	.quad	.LC77
	.quad	.LC78
	.quad	.LC79
	.quad	.LC80
	.quad	.LC81
	.quad	.LC82
	.globl	mapnamesp
	.section	.rodata
.LC83:
	.string	"level 1: congo"
.LC84:
	.string	"level 2: well of souls"
.LC85:
	.string	"level 3: aztec"
.LC86:
	.string	"level 4: caged"
.LC87:
	.string	"level 5: ghost town"
.LC88:
	.string	"level 6: baron's lair"
.LC89:
	.string	"level 7: caughtyard"
.LC90:
	.string	"level 8: realm"
.LC91:
	.string	"level 9: abattoire"
.LC92:
	.string	"level 10: onslaught"
.LC93:
	.string	"level 11: hunted"
.LC94:
	.string	"level 12: speed"
.LC95:
	.string	"level 13: the crypt"
.LC96:
	.string	"level 14: genesis"
.LC97:
	.string	"level 15: the twilight"
.LC98:
	.string	"level 16: the omen"
.LC99:
	.string	"level 17: compound"
.LC100:
	.string	"level 18: neurosphere"
.LC101:
	.string	"level 19: nme"
.LC102:
	.string	"level 20: the death domain"
.LC103:
	.string	"level 21: slayer"
.LC104:
	.string	"level 22: impossible mission"
.LC105:
	.string	"level 23: tombstone"
.LC106:
	.string	"level 24: the final frontier"
	.align 8
.LC107:
	.string	"level 25: the temple of darkness"
.LC108:
	.string	"level 26: bunker"
.LC109:
	.string	"level 27: anti-christ"
.LC110:
	.string	"level 28: the sewers"
.LC111:
	.string	"level 29: odyssey of noises"
.LC112:
	.string	"level 30: the gateway of hell"
.LC113:
	.string	"level 31: cyberden"
.LC114:
	.string	"level 32: go 2 it"
	.section	.data.rel.local
	.align 32
	.type	mapnamesp, @object
	.size	mapnamesp, 256
mapnamesp:
	.quad	.LC83
	.quad	.LC84
	.quad	.LC85
	.quad	.LC86
	.quad	.LC87
	.quad	.LC88
	.quad	.LC89
	.quad	.LC90
	.quad	.LC91
	.quad	.LC92
	.quad	.LC93
	.quad	.LC94
	.quad	.LC95
	.quad	.LC96
	.quad	.LC97
	.quad	.LC98
	.quad	.LC99
	.quad	.LC100
	.quad	.LC101
	.quad	.LC102
	.quad	.LC103
	.quad	.LC104
	.quad	.LC105
	.quad	.LC106
	.quad	.LC107
	.quad	.LC108
	.quad	.LC109
	.quad	.LC110
	.quad	.LC111
	.quad	.LC112
	.quad	.LC113
	.quad	.LC114
	.globl	mapnamest
	.section	.rodata
.LC115:
	.string	"level 1: system control"
.LC116:
	.string	"level 2: human bbq"
.LC117:
	.string	"level 3: power control"
.LC118:
	.string	"level 4: wormhole"
.LC119:
	.string	"level 5: hanger"
.LC120:
	.string	"level 6: open season"
.LC121:
	.string	"level 7: prison"
.LC122:
	.string	"level 8: metal"
.LC123:
	.string	"level 9: stronghold"
.LC124:
	.string	"level 10: redemption"
.LC125:
	.string	"level 11: storage facility"
.LC126:
	.string	"level 12: crater"
.LC127:
	.string	"level 13: nukage processing"
.LC128:
	.string	"level 14: steel works"
.LC129:
	.string	"level 15: dead zone"
.LC130:
	.string	"level 16: deepest reaches"
.LC131:
	.string	"level 17: processing area"
.LC132:
	.string	"level 18: mill"
.LC133:
	.string	"level 19: shipping/respawning"
.LC134:
	.string	"level 20: central processing"
	.align 8
.LC135:
	.string	"level 21: administration center"
.LC136:
	.string	"level 22: habitat"
	.align 8
.LC137:
	.string	"level 23: lunar mining project"
.LC138:
	.string	"level 24: quarry"
.LC139:
	.string	"level 25: baron's den"
.LC140:
	.string	"level 26: ballistyx"
.LC141:
	.string	"level 27: mount pain"
.LC142:
	.string	"level 28: heck"
.LC143:
	.string	"level 29: river styx"
.LC144:
	.string	"level 30: last call"
.LC145:
	.string	"level 31: pharaoh"
.LC146:
	.string	"level 32: caribbean"
	.section	.data.rel.local
	.align 32
	.type	mapnamest, @object
	.size	mapnamest, 256
mapnamest:
	.quad	.LC115
	.quad	.LC116
	.quad	.LC117
	.quad	.LC118
	.quad	.LC119
	.quad	.LC120
	.quad	.LC121
	.quad	.LC122
	.quad	.LC123
	.quad	.LC124
	.quad	.LC125
	.quad	.LC126
	.quad	.LC127
	.quad	.LC128
	.quad	.LC129
	.quad	.LC130
	.quad	.LC131
	.quad	.LC132
	.quad	.LC133
	.quad	.LC134
	.quad	.LC135
	.quad	.LC136
	.quad	.LC137
	.quad	.LC138
	.quad	.LC139
	.quad	.LC140
	.quad	.LC141
	.quad	.LC142
	.quad	.LC143
	.quad	.LC144
	.quad	.LC145
	.quad	.LC146
	.globl	shiftxform
	.bss
	.align 8
	.type	shiftxform, @object
	.size	shiftxform, 8
shiftxform:
	.zero	8
	.globl	french_shiftxform
	.section	.rodata
	.align 32
	.type	french_shiftxform, @object
	.size	french_shiftxform, 128
french_shiftxform:
	.string	""
	.ascii	"\001\002\003\004\005\006\007\b\t\n\013\f\r\016\017\020\021\022"
	.ascii	"\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&"
	.ascii	"\"()*+?_>?0123456789/.<+>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[!]\"_'"
	.ascii	"ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~\177"
	.globl	english_shiftxform
	.align 32
	.type	english_shiftxform, @object
	.size	english_shiftxform, 128
english_shiftxform:
	.string	""
	.ascii	"\001\002\003\004\005\006\007\b\t\n\013\f\r\016\017\020\021\022"
	.ascii	"\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&"
	.ascii	"\"()*+<_>?)!@#$%^&*(::<+>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[!]\"_'"
	.ascii	"ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~\177"
	.globl	frenchKeyMap
	.data
	.align 32
	.type	frenchKeyMap, @object
	.size	frenchKeyMap, 128
frenchKeyMap:
	.string	""
	.ascii	"\001\002\003\004\005\006\007\b\t\n\013\f\r\016\017\020\021\022"
	.ascii	"\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&"
	.ascii	"%()*+;-:!0123456789:M<=>?@QBCDEFGHIJKL,NOPARSTUVZXYW^\\$^_@Q"
	.ascii	"BCDEFGHIJKL,NOPARSTUVZXYW^\\$^\177"
	.text
	.globl	ForeignTranslation
	.type	ForeignTranslation, @function
ForeignTranslation:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	movzbl	-4(%rbp), %eax
	testb	%al, %al
	js	.L2
	movzbl	-4(%rbp), %eax
	cltq
	leaq	frenchKeyMap(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	jmp	.L4
.L2:
	movzbl	-4(%rbp), %eax
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	ForeignTranslation, .-ForeignTranslation
	.section	.rodata
.LC147:
	.string	"STCFN%.3d"
	.text
	.globl	HU_Init
	.type	HU_Init, @function
HU_Init:
.LFB1:
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
	leaq	french_shiftxform(%rip), %rax
	movq	%rax, shiftxform(%rip)
	movl	$33, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L6
.L7:
	movl	-24(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -24(%rbp)
	leaq	-17(%rbp), %rcx
	movl	%eax, %edx
	leaq	.LC147(%rip), %rax
	movq	%rax, %rsi
	movq	%rcx, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-17(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	hu_font(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -28(%rbp)
.L6:
	cmpl	$62, -28(%rbp)
	jle	.L7
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	HU_Init, .-HU_Init
	.globl	HU_Stop
	.type	HU_Stop, @function
HU_Stop:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, headsupactive(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	HU_Stop, .-HU_Stop
	.globl	HU_Start
	.type	HU_Start, @function
HU_Start:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	headsupactive(%rip), %eax
	testl	%eax, %eax
	je	.L11
	call	HU_Stop
.L11:
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, plr(%rip)
	movl	$0, message_on(%rip)
	movl	$0, message_dontfuckwithme(%rip)
	movl	$0, message_nottobefuckedwith(%rip)
	movl	$0, chat_on(%rip)
	subq	$8, %rsp
	leaq	message_on(%rip), %rax
	pushq	%rax
	movl	$33, %r9d
	leaq	hu_font(%rip), %r8
	movl	$1, %ecx
	movl	$0, %edx
	movl	$0, %esi
	leaq	w_message(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_initSText@PLT
	addq	$16, %rsp
	movq	hu_font(%rip), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	$167, %eax
	subl	%edx, %eax
	movl	$33, %r8d
	leaq	hu_font(%rip), %rdx
	movq	%rdx, %rcx
	movl	%eax, %edx
	movl	$0, %esi
	leaq	w_title(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_initTextLine@PLT
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jbe	.L12
	cmpl	$3, %eax
	jne	.L13
.L12:
	movl	gameepisode(%rip), %eax
	leal	-1(%rax), %edx
	movl	%edx, %eax
	sall	$3, %eax
	addl	%eax, %edx
	movl	gamemap(%rip), %eax
	addl	%edx, %eax
	subl	$1, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	mapnames(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L14
.L13:
	movl	gamemap(%rip), %eax
	subl	$1, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	mapnames2(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -8(%rbp)
	nop
.L14:
	jmp	.L15
.L16:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	w_title(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_addCharToTextLine@PLT
.L15:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L16
	movq	hu_font(%rip), %rax
	movzwl	2(%rax), %eax
	cwtl
	addl	$1, %eax
	leaq	chat_on(%rip), %r9
	movl	$33, %r8d
	leaq	hu_font(%rip), %rdx
	movq	%rdx, %rcx
	movl	%eax, %edx
	movl	$0, %esi
	leaq	w_chat(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_initIText@PLT
	movl	$0, -12(%rbp)
	jmp	.L17
.L18:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$4, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	w_inputbuffer(%rip), %rdx
	addq	%rdx, %rax
	leaq	always_off(%rip), %r9
	movl	$0, %r8d
	movl	$0, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	HUlib_initIText@PLT
	addl	$1, -12(%rbp)
.L17:
	cmpl	$3, -12(%rbp)
	jle	.L18
	movl	$1, headsupactive(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	HU_Start, .-HU_Start
	.globl	HU_Drawer
	.type	HU_Drawer, @function
HU_Drawer:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	w_message(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_drawSText@PLT
	leaq	w_chat(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_drawIText@PLT
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L21
	movl	$0, %esi
	leaq	w_title(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_drawTextLine@PLT
.L21:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	HU_Drawer, .-HU_Drawer
	.globl	HU_Erase
	.type	HU_Erase, @function
HU_Erase:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	w_message(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_eraseSText@PLT
	leaq	w_chat(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_eraseIText@PLT
	leaq	w_title(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_eraseTextLine@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	HU_Erase, .-HU_Erase
	.globl	HU_Ticker
	.type	HU_Ticker, @function
HU_Ticker:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	message_counter(%rip), %eax
	testl	%eax, %eax
	je	.L24
	movl	message_counter(%rip), %eax
	subl	$1, %eax
	movl	%eax, message_counter(%rip)
	movl	message_counter(%rip), %eax
	testl	%eax, %eax
	jne	.L24
	movl	$0, message_on(%rip)
	movl	$0, message_nottobefuckedwith(%rip)
.L24:
	movl	showMessages(%rip), %eax
	testl	%eax, %eax
	jne	.L25
	movl	message_dontfuckwithme(%rip), %eax
	testl	%eax, %eax
	je	.L26
.L25:
	movq	plr(%rip), %rax
	movq	224(%rax), %rax
	testq	%rax, %rax
	je	.L27
	movl	message_nottobefuckedwith(%rip), %eax
	testl	%eax, %eax
	je	.L28
.L27:
	movq	plr(%rip), %rax
	movq	224(%rax), %rax
	testq	%rax, %rax
	je	.L26
	movl	message_dontfuckwithme(%rip), %eax
	testl	%eax, %eax
	je	.L26
.L28:
	movq	plr(%rip), %rax
	movq	224(%rax), %rax
	movq	%rax, %rdx
	movl	$0, %esi
	leaq	w_message(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_addMessageToSText@PLT
	movq	plr(%rip), %rax
	movq	$0, 224(%rax)
	movl	$1, message_on(%rip)
	movl	$140, message_counter(%rip)
	movl	message_dontfuckwithme(%rip), %eax
	movl	%eax, message_nottobefuckedwith(%rip)
	movl	$0, message_dontfuckwithme(%rip)
.L26:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L40
	movl	$0, -8(%rbp)
	jmp	.L30
.L39:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L41
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, -8(%rbp)
	je	.L32
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	18+players(%rip), %rax
	movzbl	(%rdx,%rax), %eax
	movb	%al, -9(%rbp)
	cmpb	$0, -9(%rbp)
	je	.L32
	cmpb	$5, -9(%rbp)
	jg	.L33
	movl	-8(%rbp), %eax
	cltq
	leaq	chat_dest(%rip), %rcx
	movzbl	-9(%rbp), %edx
	movb	%dl, (%rax,%rcx)
	jmp	.L34
.L33:
	cmpb	$96, -9(%rbp)
	jle	.L35
	cmpb	$122, -9(%rbp)
	jg	.L35
	movq	shiftxform(%rip), %rdx
	movzbl	-9(%rbp), %eax
	movzbl	%al, %eax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
.L35:
	movzbl	-9(%rbp), %eax
	movzbl	%al, %ecx
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$4, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	w_inputbuffer(%rip), %rdx
	addq	%rdx, %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	HUlib_keyInIText@PLT
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L34
	cmpb	$13, -9(%rbp)
	jne	.L34
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$4, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	104+w_inputbuffer(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L36
	movl	-8(%rbp), %eax
	cltq
	leaq	chat_dest(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %edx
	movl	consoleplayer(%rip), %eax
	addl	$1, %eax
	cmpl	%eax, %edx
	je	.L37
	movl	-8(%rbp), %eax
	cltq
	leaq	chat_dest(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$5, %al
	jne	.L36
.L37:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$4, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	16(%rax), %rdx
	leaq	w_inputbuffer(%rip), %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	leaq	player_names(%rip), %rax
	movq	(%rcx,%rax), %rax
	movq	%rax, %rsi
	leaq	w_message(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_addMessageToSText@PLT
	movl	$1, message_nottobefuckedwith(%rip)
	movl	$1, message_on(%rip)
	movl	$140, message_counter(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L38
	movl	$108, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L36
.L38:
	movl	$87, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L36:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$4, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	w_inputbuffer(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	HUlib_resetIText@PLT
.L34:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	18+players(%rip), %rax
	movb	$0, (%rdx,%rax)
	jmp	.L32
.L41:
	nop
.L32:
	addl	$1, -8(%rbp)
.L30:
	cmpl	$3, -8(%rbp)
	jle	.L39
.L40:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	HU_Ticker, .-HU_Ticker
	.local	chatchars
	.comm	chatchars,128,32
	.local	head
	.comm	head,4,4
	.local	tail
	.comm	tail,4,4
	.section	.rodata
.LC148:
	.string	"[Message unsent]"
	.text
	.globl	HU_queueChatChar
	.type	HU_queueChatChar, @function
HU_queueChatChar:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	movl	head(%rip), %eax
	addl	$1, %eax
	andl	$127, %eax
	movl	%eax, %edx
	movl	tail(%rip), %eax
	cmpl	%eax, %edx
	jne	.L43
	movq	plr(%rip), %rax
	leaq	.LC148(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L45
.L43:
	movl	head(%rip), %eax
	cltq
	leaq	chatchars(%rip), %rcx
	movzbl	-4(%rbp), %edx
	movb	%dl, (%rax,%rcx)
	movl	head(%rip), %eax
	addl	$1, %eax
	andl	$127, %eax
	movl	%eax, head(%rip)
.L45:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	HU_queueChatChar, .-HU_queueChatChar
	.globl	HU_dequeueChatChar
	.type	HU_dequeueChatChar, @function
HU_dequeueChatChar:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	head(%rip), %edx
	movl	tail(%rip), %eax
	cmpl	%eax, %edx
	je	.L47
	movl	tail(%rip), %eax
	cltq
	leaq	chatchars(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movb	%al, -1(%rbp)
	movl	tail(%rip), %eax
	addl	$1, %eax
	andl	$127, %eax
	movl	%eax, tail(%rip)
	jmp	.L48
.L47:
	movb	$0, -1(%rbp)
.L48:
	movzbl	-1(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	HU_dequeueChatChar, .-HU_dequeueChatChar
	.section	.rodata
.LC149:
	.string	"You mumble to yourself"
.LC150:
	.string	"Who's there?"
.LC151:
	.string	"You scare yourself"
.LC152:
	.string	"You start to rave"
.LC153:
	.string	"You've lost it..."
	.text
	.globl	HU_Responder
	.type	HU_Responder, @function
HU_Responder:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -12(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L51
.L52:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	addl	$1, -16(%rbp)
.L51:
	cmpl	$3, -16(%rbp)
	jle	.L52
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$182, %eax
	jne	.L53
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, shiftdown.4(%rip)
	movl	$0, %eax
	jmp	.L54
.L53:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$184, %eax
	je	.L55
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$184, %eax
	jne	.L56
.L55:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, altdown.3(%rip)
	movl	$0, %eax
	jmp	.L54
.L56:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L57
	movl	$0, %eax
	jmp	.L54
.L57:
	movl	chat_on(%rip), %eax
	testl	%eax, %eax
	jne	.L58
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$13, %eax
	jne	.L59
	movl	$1, message_on(%rip)
	movl	$140, message_counter(%rip)
	movl	$1, -20(%rbp)
	jmp	.L70
.L59:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L61
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$116, %eax
	jne	.L61
	movl	$1, chat_on(%rip)
	movl	chat_on(%rip), %eax
	movl	%eax, -20(%rbp)
	leaq	w_chat(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_resetIText@PLT
	movl	$5, %edi
	call	HU_queueChatChar
	jmp	.L70
.L61:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L70
	cmpl	$2, -12(%rbp)
	jle	.L70
	movl	$0, -16(%rbp)
	jmp	.L62
.L69:
	movq	-40(%rbp), %rax
	movl	4(%rax), %edx
	movl	-16(%rbp), %eax
	cltq
	leaq	destination_keys.2(%rip), %rcx
	movzbl	(%rax,%rcx), %eax
	movsbl	%al, %eax
	cmpl	%eax, %edx
	jne	.L63
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L64
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, -16(%rbp)
	je	.L64
	movl	$1, chat_on(%rip)
	movl	chat_on(%rip), %eax
	movl	%eax, -20(%rbp)
	leaq	w_chat(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_resetIText@PLT
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	HU_queueChatChar
	jmp	.L70
.L64:
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, -16(%rbp)
	jne	.L63
	movl	num_nobrainers.1(%rip), %eax
	addl	$1, %eax
	movl	%eax, num_nobrainers.1(%rip)
	movl	num_nobrainers.1(%rip), %eax
	cmpl	$2, %eax
	jg	.L65
	movq	plr(%rip), %rax
	leaq	.LC149(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L63
.L65:
	movl	num_nobrainers.1(%rip), %eax
	cmpl	$5, %eax
	jg	.L66
	movq	plr(%rip), %rax
	leaq	.LC150(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L63
.L66:
	movl	num_nobrainers.1(%rip), %eax
	cmpl	$8, %eax
	jg	.L67
	movq	plr(%rip), %rax
	leaq	.LC151(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L63
.L67:
	movl	num_nobrainers.1(%rip), %eax
	cmpl	$31, %eax
	jg	.L68
	movq	plr(%rip), %rax
	leaq	.LC152(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L63
.L68:
	movq	plr(%rip), %rax
	leaq	.LC153(%rip), %rdx
	movq	%rdx, 224(%rax)
.L63:
	addl	$1, -16(%rbp)
.L62:
	cmpl	$3, -16(%rbp)
	jle	.L69
	jmp	.L70
.L58:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movb	%al, -21(%rbp)
	movl	altdown.3(%rip), %eax
	testl	%eax, %eax
	je	.L71
	subb	$48, -21(%rbp)
	cmpb	$9, -21(%rbp)
	jbe	.L72
	movl	$0, %eax
	jmp	.L54
.L72:
	movzbl	-21(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	chat_macros(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$13, %edi
	call	HU_queueChatChar
	jmp	.L73
.L74:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	HU_queueChatChar
.L73:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L74
	movl	$13, %edi
	call	HU_queueChatChar
	movl	$0, chat_on(%rip)
	movzbl	-21(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	chat_macros(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rsi
	leaq	lastmessage.0(%rip), %rax
	movq	%rax, %rdi
	call	strcpy@PLT
	movq	plr(%rip), %rax
	leaq	lastmessage.0(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$1, -20(%rbp)
	jmp	.L70
.L71:
	movzbl	-21(%rbp), %eax
	movl	%eax, %edi
	call	ForeignTranslation
	movb	%al, -21(%rbp)
	movl	shiftdown.4(%rip), %eax
	testl	%eax, %eax
	jne	.L75
	cmpb	$96, -21(%rbp)
	jbe	.L76
	cmpb	$122, -21(%rbp)
	ja	.L76
.L75:
	movq	shiftxform(%rip), %rdx
	movzbl	-21(%rbp), %eax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movb	%al, -21(%rbp)
.L76:
	movzbl	-21(%rbp), %eax
	movl	%eax, %esi
	leaq	w_chat(%rip), %rax
	movq	%rax, %rdi
	call	HUlib_keyInIText@PLT
	movl	%eax, -20(%rbp)
	cmpl	$0, -20(%rbp)
	je	.L77
	movzbl	-21(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	HU_queueChatChar
.L77:
	cmpb	$13, -21(%rbp)
	jne	.L78
	movl	$0, chat_on(%rip)
	movl	104+w_chat(%rip), %eax
	testl	%eax, %eax
	je	.L70
	leaq	20+w_chat(%rip), %rax
	movq	%rax, %rsi
	leaq	lastmessage.0(%rip), %rax
	movq	%rax, %rdi
	call	strcpy@PLT
	movq	plr(%rip), %rax
	leaq	lastmessage.0(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L70
.L78:
	cmpb	$27, -21(%rbp)
	jne	.L70
	movl	$0, chat_on(%rip)
.L70:
	movl	-20(%rbp), %eax
.L54:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	HU_Responder, .-HU_Responder
	.local	shiftdown.4
	.comm	shiftdown.4,4,4
	.local	altdown.3
	.comm	altdown.3,4,4
	.data
	.type	destination_keys.2, @object
	.size	destination_keys.2, 4
destination_keys.2:
	.ascii	"gibr"
	.local	num_nobrainers.1
	.comm	num_nobrainers.1,4,4
	.local	lastmessage.0
	.comm	lastmessage.0,81,32
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
