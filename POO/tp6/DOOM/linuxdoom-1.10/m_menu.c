	.file	"m_menu.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_menu.c,v 1.7 1997/02/03 22:45:10 b1 Exp $"
	.globl	mouseSensitivity
	.bss
	.align 4
	.type	mouseSensitivity, @object
	.size	mouseSensitivity, 4
mouseSensitivity:
	.zero	4
	.globl	showMessages
	.align 4
	.type	showMessages, @object
	.size	showMessages, 4
showMessages:
	.zero	4
	.globl	detailLevel
	.align 4
	.type	detailLevel, @object
	.size	detailLevel, 4
detailLevel:
	.zero	4
	.globl	screenblocks
	.align 4
	.type	screenblocks, @object
	.size	screenblocks, 4
screenblocks:
	.zero	4
	.globl	screenSize
	.align 4
	.type	screenSize, @object
	.size	screenSize, 4
screenSize:
	.zero	4
	.globl	quickSaveSlot
	.align 4
	.type	quickSaveSlot, @object
	.size	quickSaveSlot, 4
quickSaveSlot:
	.zero	4
	.globl	messageToPrint
	.align 4
	.type	messageToPrint, @object
	.size	messageToPrint, 4
messageToPrint:
	.zero	4
	.globl	messageString
	.align 8
	.type	messageString, @object
	.size	messageString, 8
messageString:
	.zero	8
	.globl	messx
	.align 4
	.type	messx, @object
	.size	messx, 4
messx:
	.zero	4
	.globl	messy
	.align 4
	.type	messy, @object
	.size	messy, 4
messy:
	.zero	4
	.globl	messageLastMenuActive
	.align 4
	.type	messageLastMenuActive, @object
	.size	messageLastMenuActive, 4
messageLastMenuActive:
	.zero	4
	.globl	messageNeedsInput
	.align 4
	.type	messageNeedsInput, @object
	.size	messageNeedsInput, 4
messageNeedsInput:
	.zero	4
	.globl	messageRoutine
	.align 8
	.type	messageRoutine, @object
	.size	messageRoutine, 8
messageRoutine:
	.zero	8
	.globl	gammamsg
	.data
	.align 32
	.type	gammamsg, @object
	.size	gammamsg, 130
gammamsg:
	.string	"Gamma correction OFF"
	.zero	5
	.string	"Gamma correction level 1"
	.zero	1
	.string	"Gamma correction level 2"
	.zero	1
	.string	"Gamma correction level 3"
	.zero	1
	.string	"Gamma correction level 4"
	.zero	1
	.globl	saveStringEnter
	.bss
	.align 4
	.type	saveStringEnter, @object
	.size	saveStringEnter, 4
saveStringEnter:
	.zero	4
	.globl	saveSlot
	.align 4
	.type	saveSlot, @object
	.size	saveSlot, 4
saveSlot:
	.zero	4
	.globl	saveCharIndex
	.align 4
	.type	saveCharIndex, @object
	.size	saveCharIndex, 4
saveCharIndex:
	.zero	4
	.globl	saveOldString
	.align 16
	.type	saveOldString, @object
	.size	saveOldString, 24
saveOldString:
	.zero	24
	.globl	inhelpscreens
	.align 4
	.type	inhelpscreens, @object
	.size	inhelpscreens, 4
inhelpscreens:
	.zero	4
	.globl	menuactive
	.align 4
	.type	menuactive, @object
	.size	menuactive, 4
menuactive:
	.zero	4
	.globl	savegamestrings
	.align 32
	.type	savegamestrings, @object
	.size	savegamestrings, 240
savegamestrings:
	.zero	240
	.globl	endstring
	.align 32
	.type	endstring, @object
	.size	endstring, 160
endstring:
	.zero	160
	.globl	itemOn
	.align 2
	.type	itemOn, @object
	.size	itemOn, 2
itemOn:
	.zero	2
	.globl	skullAnimCounter
	.align 2
	.type	skullAnimCounter, @object
	.size	skullAnimCounter, 2
skullAnimCounter:
	.zero	2
	.globl	whichSkull
	.align 2
	.type	whichSkull, @object
	.size	whichSkull, 2
whichSkull:
	.zero	2
	.globl	skullName
	.data
	.align 16
	.type	skullName, @object
	.size	skullName, 18
skullName:
	.string	"M_SKULL1"
	.string	"M_SKULL2"
	.globl	currentMenu
	.bss
	.align 8
	.type	currentMenu, @object
	.size	currentMenu, 8
currentMenu:
	.zero	8
	.globl	main_e
	.align 4
	.type	main_e, @object
	.size	main_e, 4
main_e:
	.zero	4
	.globl	MainMenu
	.section	.data.rel.local,"aw"
	.align 32
	.type	MainMenu, @object
	.size	MainMenu, 192
MainMenu:
	.value	1
	.string	"M_NGAME"
	.zero	2
	.zero	4
	.quad	M_NewGame
	.byte	110
	.zero	7
	.value	1
	.string	"M_OPTION"
	.zero	1
	.zero	4
	.quad	M_Options
	.byte	111
	.zero	7
	.value	1
	.string	"M_LOADG"
	.zero	2
	.zero	4
	.quad	M_LoadGame
	.byte	108
	.zero	7
	.value	1
	.string	"M_SAVEG"
	.zero	2
	.zero	4
	.quad	M_SaveGame
	.byte	115
	.zero	7
	.value	1
	.string	"M_RDTHIS"
	.zero	1
	.zero	4
	.quad	M_ReadThis
	.byte	114
	.zero	7
	.value	1
	.string	"M_QUITG"
	.zero	2
	.zero	4
	.quad	M_QuitDOOM
	.byte	113
	.zero	7
	.globl	MainDef
	.align 32
	.type	MainDef, @object
	.size	MainDef, 40
MainDef:
	.value	6
	.zero	6
	.quad	0
	.quad	MainMenu
	.quad	M_DrawMainMenu
	.value	97
	.value	64
	.value	0
	.zero	2
	.globl	episodes_e
	.bss
	.align 4
	.type	episodes_e, @object
	.size	episodes_e, 4
episodes_e:
	.zero	4
	.globl	EpisodeMenu
	.section	.data.rel.local
	.align 32
	.type	EpisodeMenu, @object
	.size	EpisodeMenu, 128
EpisodeMenu:
	.value	1
	.string	"M_EPI1"
	.zero	3
	.zero	4
	.quad	M_Episode
	.byte	107
	.zero	7
	.value	1
	.string	"M_EPI2"
	.zero	3
	.zero	4
	.quad	M_Episode
	.byte	116
	.zero	7
	.value	1
	.string	"M_EPI3"
	.zero	3
	.zero	4
	.quad	M_Episode
	.byte	105
	.zero	7
	.value	1
	.string	"M_EPI4"
	.zero	3
	.zero	4
	.quad	M_Episode
	.byte	116
	.zero	7
	.globl	EpiDef
	.align 32
	.type	EpiDef, @object
	.size	EpiDef, 40
EpiDef:
	.value	4
	.zero	6
	.quad	MainDef
	.quad	EpisodeMenu
	.quad	M_DrawEpisode
	.value	48
	.value	63
	.value	0
	.zero	2
	.globl	newgame_e
	.bss
	.align 4
	.type	newgame_e, @object
	.size	newgame_e, 4
newgame_e:
	.zero	4
	.globl	NewGameMenu
	.section	.data.rel.local
	.align 32
	.type	NewGameMenu, @object
	.size	NewGameMenu, 160
NewGameMenu:
	.value	1
	.string	"M_JKILL"
	.zero	2
	.zero	4
	.quad	M_ChooseSkill
	.byte	105
	.zero	7
	.value	1
	.string	"M_ROUGH"
	.zero	2
	.zero	4
	.quad	M_ChooseSkill
	.byte	104
	.zero	7
	.value	1
	.string	"M_HURT"
	.zero	3
	.zero	4
	.quad	M_ChooseSkill
	.byte	104
	.zero	7
	.value	1
	.string	"M_ULTRA"
	.zero	2
	.zero	4
	.quad	M_ChooseSkill
	.byte	117
	.zero	7
	.value	1
	.string	"M_NMARE"
	.zero	2
	.zero	4
	.quad	M_ChooseSkill
	.byte	110
	.zero	7
	.globl	NewDef
	.align 32
	.type	NewDef, @object
	.size	NewDef, 40
NewDef:
	.value	5
	.zero	6
	.quad	EpiDef
	.quad	NewGameMenu
	.quad	M_DrawNewGame
	.value	48
	.value	63
	.value	2
	.zero	2
	.globl	options_e
	.bss
	.align 4
	.type	options_e, @object
	.size	options_e, 4
options_e:
	.zero	4
	.globl	OptionsMenu
	.section	.data.rel.local
	.align 32
	.type	OptionsMenu, @object
	.size	OptionsMenu, 256
OptionsMenu:
	.value	1
	.string	"M_ENDGAM"
	.zero	1
	.zero	4
	.quad	M_EndGame
	.byte	101
	.zero	7
	.value	1
	.string	"M_MESSG"
	.zero	2
	.zero	4
	.quad	M_ChangeMessages
	.byte	109
	.zero	7
	.value	1
	.string	"M_DETAIL"
	.zero	1
	.zero	4
	.quad	M_ChangeDetail
	.byte	103
	.zero	7
	.value	2
	.string	"M_SCRNSZ"
	.zero	1
	.zero	4
	.quad	M_SizeDisplay
	.byte	115
	.zero	7
	.value	-1
	.string	""
	.zero	9
	.zero	4
	.quad	0
	.zero	8
	.value	2
	.string	"M_MSENS"
	.zero	2
	.zero	4
	.quad	M_ChangeSensitivity
	.byte	109
	.zero	7
	.value	-1
	.string	""
	.zero	9
	.zero	4
	.quad	0
	.zero	8
	.value	1
	.string	"M_SVOL"
	.zero	3
	.zero	4
	.quad	M_Sound
	.byte	115
	.zero	7
	.globl	OptionsDef
	.align 32
	.type	OptionsDef, @object
	.size	OptionsDef, 40
OptionsDef:
	.value	8
	.zero	6
	.quad	MainDef
	.quad	OptionsMenu
	.quad	M_DrawOptions
	.value	60
	.value	37
	.value	0
	.zero	2
	.globl	read_e
	.bss
	.align 4
	.type	read_e, @object
	.size	read_e, 4
read_e:
	.zero	4
	.globl	ReadMenu1
	.section	.data.rel.local
	.align 32
	.type	ReadMenu1, @object
	.size	ReadMenu1, 32
ReadMenu1:
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_ReadThis2
	.byte	0
	.zero	7
	.globl	ReadDef1
	.align 32
	.type	ReadDef1, @object
	.size	ReadDef1, 40
ReadDef1:
	.value	1
	.zero	6
	.quad	MainDef
	.quad	ReadMenu1
	.quad	M_DrawReadThis1
	.value	280
	.value	185
	.value	0
	.zero	2
	.globl	read_e2
	.bss
	.align 4
	.type	read_e2, @object
	.size	read_e2, 4
read_e2:
	.zero	4
	.globl	ReadMenu2
	.section	.data.rel.local
	.align 32
	.type	ReadMenu2, @object
	.size	ReadMenu2, 32
ReadMenu2:
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_FinishReadThis
	.byte	0
	.zero	7
	.globl	ReadDef2
	.align 32
	.type	ReadDef2, @object
	.size	ReadDef2, 40
ReadDef2:
	.value	1
	.zero	6
	.quad	ReadDef1
	.quad	ReadMenu2
	.quad	M_DrawReadThis2
	.value	330
	.value	175
	.value	0
	.zero	2
	.globl	sound_e
	.bss
	.align 4
	.type	sound_e, @object
	.size	sound_e, 4
sound_e:
	.zero	4
	.globl	SoundMenu
	.section	.data.rel.local
	.align 32
	.type	SoundMenu, @object
	.size	SoundMenu, 128
SoundMenu:
	.value	2
	.string	"M_SFXVOL"
	.zero	1
	.zero	4
	.quad	M_SfxVol
	.byte	115
	.zero	7
	.value	-1
	.string	""
	.zero	9
	.zero	4
	.quad	0
	.zero	8
	.value	2
	.string	"M_MUSVOL"
	.zero	1
	.zero	4
	.quad	M_MusicVol
	.byte	109
	.zero	7
	.value	-1
	.string	""
	.zero	9
	.zero	4
	.quad	0
	.zero	8
	.globl	SoundDef
	.align 32
	.type	SoundDef, @object
	.size	SoundDef, 40
SoundDef:
	.value	4
	.zero	6
	.quad	OptionsDef
	.quad	SoundMenu
	.quad	M_DrawSound
	.value	80
	.value	64
	.value	0
	.zero	2
	.globl	load_e
	.bss
	.align 4
	.type	load_e, @object
	.size	load_e, 4
load_e:
	.zero	4
	.globl	LoadMenu
	.section	.data.rel.local
	.align 32
	.type	LoadMenu, @object
	.size	LoadMenu, 192
LoadMenu:
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_LoadSelect
	.byte	49
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_LoadSelect
	.byte	50
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_LoadSelect
	.byte	51
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_LoadSelect
	.byte	52
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_LoadSelect
	.byte	53
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_LoadSelect
	.byte	54
	.zero	7
	.globl	LoadDef
	.align 32
	.type	LoadDef, @object
	.size	LoadDef, 40
LoadDef:
	.value	6
	.zero	6
	.quad	MainDef
	.quad	LoadMenu
	.quad	M_DrawLoad
	.value	80
	.value	54
	.value	0
	.zero	2
	.globl	SaveMenu
	.align 32
	.type	SaveMenu, @object
	.size	SaveMenu, 192
SaveMenu:
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_SaveSelect
	.byte	49
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_SaveSelect
	.byte	50
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_SaveSelect
	.byte	51
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_SaveSelect
	.byte	52
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_SaveSelect
	.byte	53
	.zero	7
	.value	1
	.string	""
	.zero	9
	.zero	4
	.quad	M_SaveSelect
	.byte	54
	.zero	7
	.globl	SaveDef
	.align 32
	.type	SaveDef, @object
	.size	SaveDef, 40
SaveDef:
	.value	6
	.zero	6
	.quad	MainDef
	.quad	SaveMenu
	.quad	M_DrawSave
	.value	80
	.value	54
	.value	0
	.zero	2
	.section	.rodata
.LC0:
	.string	"-cdrom"
.LC1:
	.string	"c:\\doomdata\\doomsav%d.dsg"
.LC2:
	.string	"doomsav%d.dsg"
	.text
	.globl	M_ReadSaveStrings
	.type	M_ReadSaveStrings, @function
M_ReadSaveStrings:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$288, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -284(%rbp)
	jmp	.L2
.L7:
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L3
	movl	-284(%rbp), %edx
	leaq	-272(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L4
.L3:
	movl	-284(%rbp), %edx
	leaq	-272(%rbp), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L4:
	leaq	-272(%rbp), %rax
	movl	$438, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -280(%rbp)
	cmpl	$-1, -280(%rbp)
	jne	.L5
	movl	-284(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movabsq	$7814625484434599269, %rsi
	movq	%rsi, (%rax)
	movl	$7630700, 7(%rax)
	movl	-284(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	LoadMenu(%rip), %rax
	movw	$0, (%rdx,%rax)
	jmp	.L6
.L5:
	movl	-284(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	leaq	(%rax,%rdx), %rcx
	movl	-280(%rbp), %eax
	movl	$24, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	movl	%eax, -276(%rbp)
	movl	-280(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
	movl	-284(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	LoadMenu(%rip), %rax
	movw	$1, (%rdx,%rax)
.L6:
	addl	$1, -284(%rbp)
.L2:
	cmpl	$5, -284(%rbp)
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
.LFE6:
	.size	M_ReadSaveStrings, .-M_ReadSaveStrings
	.section	.rodata
.LC3:
	.string	"M_LOADG"
	.text
	.globl	M_DrawLoad
	.type	M_DrawLoad, @function
M_DrawLoad:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$101, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$28, %esi
	movl	$72, %edi
	call	V_DrawPatchDirect@PLT
	movl	$0, -4(%rbp)
	jmp	.L10
.L11:
	movzwl	34+LoadDef(%rip), %eax
	cwtl
	movl	-4(%rbp), %edx
	sall	$4, %edx
	addl	%eax, %edx
	movzwl	32+LoadDef(%rip), %eax
	cwtl
	movl	%edx, %esi
	movl	%eax, %edi
	call	M_DrawSaveLoadBorder
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rax, %rdx
	movzwl	34+LoadDef(%rip), %eax
	cwtl
	movl	-4(%rbp), %ecx
	sall	$4, %ecx
	addl	%eax, %ecx
	movzwl	32+LoadDef(%rip), %eax
	cwtl
	movl	%ecx, %esi
	movl	%eax, %edi
	call	M_WriteText
	addl	$1, -4(%rbp)
.L10:
	cmpl	$5, -4(%rbp)
	jle	.L11
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	M_DrawLoad, .-M_DrawLoad
	.section	.rodata
.LC4:
	.string	"M_LSLEFT"
.LC5:
	.string	"M_LSCNTR"
.LC6:
	.string	"M_LSRGHT"
	.text
	.globl	M_DrawSaveLoadBorder
	.type	M_DrawSaveLoadBorder, @function
M_DrawSaveLoadBorder:
.LFB8:
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
	movl	$101, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-24(%rbp), %eax
	leal	7(%rax), %esi
	movl	-20(%rbp), %eax
	subl	$8, %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	movl	$0, -4(%rbp)
	jmp	.L13
.L14:
	movl	$101, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-24(%rbp), %eax
	leal	7(%rax), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	addl	$8, -20(%rbp)
	addl	$1, -4(%rbp)
.L13:
	cmpl	$23, -4(%rbp)
	jle	.L14
	movl	$101, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-24(%rbp), %eax
	leal	7(%rax), %esi
	movl	-20(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	M_DrawSaveLoadBorder, .-M_DrawSaveLoadBorder
	.globl	M_LoadSelect
	.type	M_LoadSelect, @function
M_LoadSelect:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$288, %rsp
	movl	%edi, -276(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L16
	movl	-276(%rbp), %edx
	leaq	-272(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L17
.L16:
	movl	-276(%rbp), %edx
	leaq	-272(%rbp), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L17:
	leaq	-272(%rbp), %rax
	movq	%rax, %rdi
	call	G_LoadGame@PLT
	call	M_ClearMenus
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L18
	call	__stack_chk_fail@PLT
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	M_LoadSelect, .-M_LoadSelect
	.section	.rodata
	.align 8
.LC7:
	.string	"you can't do load while in a net game!\n\npress a key."
	.text
	.globl	M_LoadGame
	.type	M_LoadGame, @function
M_LoadGame:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L20
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L19
.L20:
	leaq	LoadDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	call	M_ReadSaveStrings
.L19:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	M_LoadGame, .-M_LoadGame
	.section	.rodata
.LC8:
	.string	"M_SAVEG"
.LC9:
	.string	"_"
	.text
	.globl	M_DrawSave
	.type	M_DrawSave, @function
M_DrawSave:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$101, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$28, %esi
	movl	$72, %edi
	call	V_DrawPatchDirect@PLT
	movl	$0, -4(%rbp)
	jmp	.L23
.L24:
	movzwl	34+LoadDef(%rip), %eax
	cwtl
	movl	-4(%rbp), %edx
	sall	$4, %edx
	addl	%eax, %edx
	movzwl	32+LoadDef(%rip), %eax
	cwtl
	movl	%edx, %esi
	movl	%eax, %edi
	call	M_DrawSaveLoadBorder
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rax, %rdx
	movzwl	34+LoadDef(%rip), %eax
	cwtl
	movl	-4(%rbp), %ecx
	sall	$4, %ecx
	addl	%eax, %ecx
	movzwl	32+LoadDef(%rip), %eax
	cwtl
	movl	%ecx, %esi
	movl	%eax, %edi
	call	M_WriteText
	addl	$1, -4(%rbp)
.L23:
	cmpl	$5, -4(%rbp)
	jle	.L24
	movl	saveStringEnter(%rip), %eax
	testl	%eax, %eax
	je	.L26
	movl	saveSlot(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	M_StringWidth
	movl	%eax, -4(%rbp)
	movzwl	34+LoadDef(%rip), %eax
	cwtl
	movl	saveSlot(%rip), %edx
	sall	$4, %edx
	leal	(%rax,%rdx), %ecx
	movzwl	32+LoadDef(%rip), %eax
	movswl	%ax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	leaq	.LC9(%rip), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	M_WriteText
.L26:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	M_DrawSave, .-M_DrawSave
	.globl	M_DoSave
	.type	M_DoSave, @function
M_DoSave:
.LFB12:
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
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	G_SaveGame@PLT
	call	M_ClearMenus
	movl	quickSaveSlot(%rip), %eax
	cmpl	$-2, %eax
	jne	.L29
	movl	-4(%rbp), %eax
	movl	%eax, quickSaveSlot(%rip)
.L29:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	M_DoSave, .-M_DoSave
	.section	.rodata
.LC10:
	.string	"empty slot"
	.text
	.globl	M_SaveSelect
	.type	M_SaveSelect, @function
M_SaveSelect:
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
	movl	$1, saveStringEnter(%rip)
	movl	-4(%rbp), %eax
	movl	%eax, saveSlot(%rip)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	saveOldString(%rip), %rax
	movq	%rax, %rdi
	call	strcpy@PLT
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	leaq	.LC10(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L31
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	savegamestrings(%rip), %rax
	movb	$0, (%rdx,%rax)
.L31:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movl	%eax, saveCharIndex(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	M_SaveSelect, .-M_SaveSelect
	.section	.rodata
	.align 8
.LC11:
	.string	"you can't save if you aren't playing!\n\npress a key."
	.text
	.globl	M_SaveGame
	.type	M_SaveGame, @function
M_SaveGame:
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
	movl	usergame(%rip), %eax
	testl	%eax, %eax
	jne	.L33
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L32
.L33:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L36
	leaq	SaveDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	call	M_ReadSaveStrings
	jmp	.L32
.L36:
	nop
.L32:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	M_SaveGame, .-M_SaveGame
	.globl	tempstring
	.bss
	.align 32
	.type	tempstring, @object
	.size	tempstring, 80
tempstring:
	.zero	80
	.text
	.globl	M_QuickSaveResponse
	.type	M_QuickSaveResponse, @function
M_QuickSaveResponse:
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
	cmpl	$121, -4(%rbp)
	jne	.L39
	movl	quickSaveSlot(%rip), %eax
	movl	%eax, %edi
	call	M_DoSave
	movl	$24, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L39:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	M_QuickSaveResponse, .-M_QuickSaveResponse
	.section	.rodata
	.align 8
.LC12:
	.string	"quicksave over your game named\n\n'%s'?\n\npress y or n."
	.text
	.globl	M_QuickSave
	.type	M_QuickSave, @function
M_QuickSave:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	usergame(%rip), %eax
	testl	%eax, %eax
	jne	.L41
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L40
.L41:
	movl	gamestate(%rip), %eax
	testl	%eax, %eax
	jne	.L45
	movl	quickSaveSlot(%rip), %eax
	testl	%eax, %eax
	jns	.L44
	call	M_StartControlPanel
	call	M_ReadSaveStrings
	leaq	SaveDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	movl	$-2, quickSaveSlot(%rip)
	jmp	.L40
.L44:
	movl	quickSaveSlot(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rax
	movq	%rax, %rsi
	leaq	tempstring(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	$1, %edx
	leaq	M_QuickSaveResponse(%rip), %rax
	movq	%rax, %rsi
	leaq	tempstring(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L40
.L45:
	nop
.L40:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	M_QuickSave, .-M_QuickSave
	.globl	M_QuickLoadResponse
	.type	M_QuickLoadResponse, @function
M_QuickLoadResponse:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$121, -4(%rbp)
	jne	.L48
	movl	quickSaveSlot(%rip), %eax
	movl	%eax, %edi
	call	M_LoadSelect
	movl	$24, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L48:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	M_QuickLoadResponse, .-M_QuickLoadResponse
	.section	.rodata
	.align 8
.LC13:
	.string	"you can't quickload during a netgame!\n\npress a key."
	.align 8
.LC14:
	.string	"you haven't picked a quicksave slot yet!\n\npress a key."
	.align 8
.LC15:
	.string	"do you want to quickload the game named\n\n'%s'?\n\npress y or n."
	.text
	.globl	M_QuickLoad
	.type	M_QuickLoad, @function
M_QuickLoad:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L50
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L49
.L50:
	movl	quickSaveSlot(%rip), %eax
	testl	%eax, %eax
	jns	.L52
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L49
.L52:
	movl	quickSaveSlot(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC15(%rip), %rax
	movq	%rax, %rsi
	leaq	tempstring(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	$1, %edx
	leaq	M_QuickLoadResponse(%rip), %rax
	movq	%rax, %rsi
	leaq	tempstring(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
.L49:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	M_QuickLoad, .-M_QuickLoad
	.section	.rodata
.LC16:
	.string	"HELP"
.LC17:
	.string	"HELP1"
	.text
	.globl	M_DrawReadThis1
	.type	M_DrawReadThis1, @function
M_DrawReadThis1:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, inhelpscreens(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	je	.L54
	cmpl	$3, %eax
	ja	.L58
	cmpl	$1, %eax
	jbe	.L54
	cmpl	$2, %eax
	jne	.L58
	movl	$101, %esi
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatchDirect@PLT
	jmp	.L56
.L54:
	movl	$101, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatchDirect@PLT
	jmp	.L56
.L58:
	nop
.L56:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	M_DrawReadThis1, .-M_DrawReadThis1
	.section	.rodata
.LC18:
	.string	"CREDIT"
.LC19:
	.string	"HELP2"
	.text
	.globl	M_DrawReadThis2
	.type	M_DrawReadThis2, @function
M_DrawReadThis2:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, inhelpscreens(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jbe	.L60
	subl	$2, %eax
	cmpl	$1, %eax
	ja	.L64
	movl	$101, %esi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatchDirect@PLT
	jmp	.L62
.L60:
	movl	$101, %esi
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatchDirect@PLT
	jmp	.L62
.L64:
	nop
.L62:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	M_DrawReadThis2, .-M_DrawReadThis2
	.section	.rodata
.LC20:
	.string	"M_SVOL"
	.text
	.globl	M_DrawSound
	.type	M_DrawSound, @function
M_DrawSound:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$101, %esi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$38, %esi
	movl	$60, %edi
	call	V_DrawPatchDirect@PLT
	movl	snd_SfxVolume(%rip), %edx
	movzwl	34+SoundDef(%rip), %eax
	cwtl
	leal	16(%rax), %esi
	movzwl	32+SoundDef(%rip), %eax
	cwtl
	movl	%edx, %ecx
	movl	$16, %edx
	movl	%eax, %edi
	call	M_DrawThermo
	movl	snd_MusicVolume(%rip), %edx
	movzwl	34+SoundDef(%rip), %eax
	cwtl
	leal	48(%rax), %esi
	movzwl	32+SoundDef(%rip), %eax
	cwtl
	movl	%edx, %ecx
	movl	$16, %edx
	movl	%eax, %edi
	call	M_DrawThermo
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	M_DrawSound, .-M_DrawSound
	.globl	M_Sound
	.type	M_Sound, @function
M_Sound:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	leaq	SoundDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	M_Sound, .-M_Sound
	.globl	M_SfxVol
	.type	M_SfxVol, @function
M_SfxVol:
.LFB23:
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
	je	.L68
	cmpl	$1, -4(%rbp)
	je	.L69
	jmp	.L70
.L68:
	movl	snd_SfxVolume(%rip), %eax
	testl	%eax, %eax
	je	.L73
	movl	snd_SfxVolume(%rip), %eax
	subl	$1, %eax
	movl	%eax, snd_SfxVolume(%rip)
	jmp	.L73
.L69:
	movl	snd_SfxVolume(%rip), %eax
	cmpl	$14, %eax
	jg	.L74
	movl	snd_SfxVolume(%rip), %eax
	addl	$1, %eax
	movl	%eax, snd_SfxVolume(%rip)
	jmp	.L74
.L73:
	nop
	jmp	.L70
.L74:
	nop
.L70:
	movl	snd_SfxVolume(%rip), %eax
	movl	%eax, %edi
	call	S_SetSfxVolume@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	M_SfxVol, .-M_SfxVol
	.globl	M_MusicVol
	.type	M_MusicVol, @function
M_MusicVol:
.LFB24:
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
	je	.L76
	cmpl	$1, -4(%rbp)
	je	.L77
	jmp	.L78
.L76:
	movl	snd_MusicVolume(%rip), %eax
	testl	%eax, %eax
	je	.L81
	movl	snd_MusicVolume(%rip), %eax
	subl	$1, %eax
	movl	%eax, snd_MusicVolume(%rip)
	jmp	.L81
.L77:
	movl	snd_MusicVolume(%rip), %eax
	cmpl	$14, %eax
	jg	.L82
	movl	snd_MusicVolume(%rip), %eax
	addl	$1, %eax
	movl	%eax, snd_MusicVolume(%rip)
	jmp	.L82
.L81:
	nop
	jmp	.L78
.L82:
	nop
.L78:
	movl	snd_MusicVolume(%rip), %eax
	movl	%eax, %edi
	call	S_SetMusicVolume@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	M_MusicVol, .-M_MusicVol
	.section	.rodata
.LC21:
	.string	"M_DOOM"
	.text
	.globl	M_DrawMainMenu
	.type	M_DrawMainMenu, @function
M_DrawMainMenu:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$101, %esi
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$2, %esi
	movl	$94, %edi
	call	V_DrawPatchDirect@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	M_DrawMainMenu, .-M_DrawMainMenu
	.section	.rodata
.LC22:
	.string	"M_NEWG"
.LC23:
	.string	"M_SKILL"
	.text
	.globl	M_DrawNewGame
	.type	M_DrawNewGame, @function
M_DrawNewGame:
.LFB26:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$101, %esi
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$14, %esi
	movl	$96, %edi
	call	V_DrawPatchDirect@PLT
	movl	$101, %esi
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$38, %esi
	movl	$54, %edi
	call	V_DrawPatchDirect@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	M_DrawNewGame, .-M_DrawNewGame
	.section	.rodata
	.align 8
.LC24:
	.string	"you can't start a new game\nwhile in a network game.\n\npress a key."
	.text
	.globl	M_NewGame
	.type	M_NewGame, @function
M_NewGame:
.LFB27:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L86
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L86
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L85
.L86:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L88
	leaq	NewDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	jmp	.L85
.L88:
	leaq	EpiDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
.L85:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	M_NewGame, .-M_NewGame
	.globl	epi
	.bss
	.align 4
	.type	epi, @object
	.size	epi, 4
epi:
	.zero	4
	.section	.rodata
.LC25:
	.string	"M_EPISOD"
	.text
	.globl	M_DrawEpisode
	.type	M_DrawEpisode, @function
M_DrawEpisode:
.LFB28:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$101, %esi
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$38, %esi
	movl	$54, %edi
	call	V_DrawPatchDirect@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	M_DrawEpisode, .-M_DrawEpisode
	.globl	M_VerifyNightmare
	.type	M_VerifyNightmare, @function
M_VerifyNightmare:
.LFB29:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$121, -4(%rbp)
	jne	.L93
	movl	epi(%rip), %eax
	addl	$1, %eax
	movl	$1, %edx
	movl	%eax, %esi
	movl	$4, %edi
	call	G_DeferedInitNew@PLT
	call	M_ClearMenus
	jmp	.L90
.L93:
	nop
.L90:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	M_VerifyNightmare, .-M_VerifyNightmare
	.section	.rodata
	.align 8
.LC26:
	.string	"are you sure? this skill level\nisn't even remotely fair.\n\npress y or n."
	.text
	.globl	M_ChooseSkill
	.type	M_ChooseSkill, @function
M_ChooseSkill:
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
	cmpl	$4, -4(%rbp)
	jne	.L95
	movl	$1, %edx
	leaq	M_VerifyNightmare(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L94
.L95:
	movl	epi(%rip), %eax
	leal	1(%rax), %ecx
	movl	-4(%rbp), %eax
	movl	$1, %edx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	G_DeferedInitNew@PLT
	call	M_ClearMenus
.L94:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE30:
	.size	M_ChooseSkill, .-M_ChooseSkill
	.section	.rodata
	.align 8
.LC27:
	.string	"this is the shareware version of doom.\n\nyou need to order the entire trilogy.\n\npress a key."
	.align 8
.LC28:
	.string	"M_Episode: 4th episode requires UltimateDOOM\n"
	.text
	.globl	M_Episode
	.type	M_Episode, @function
M_Episode:
.LFB31:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	jne	.L98
	cmpl	$0, -4(%rbp)
	je	.L98
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	leaq	ReadDef1(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	jmp	.L97
.L98:
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jne	.L100
	cmpl	$2, -4(%rbp)
	jle	.L100
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$45, %edx
	movl	$1, %esi
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	movl	$0, -4(%rbp)
.L100:
	movl	-4(%rbp), %eax
	movl	%eax, epi(%rip)
	leaq	NewDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
.L97:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE31:
	.size	M_Episode, .-M_Episode
	.globl	detailNames
	.data
	.align 16
	.type	detailNames, @object
	.size	detailNames, 18
detailNames:
	.string	"M_GDHIGH"
	.string	"M_GDLOW"
	.zero	1
	.globl	msgNames
	.align 16
	.type	msgNames, @object
	.size	msgNames, 18
msgNames:
	.string	"M_MSGOFF"
	.string	"M_MSGON"
	.zero	1
	.section	.rodata
.LC29:
	.string	"M_OPTTTL"
	.text
	.globl	M_DrawOptions
	.type	M_DrawOptions, @function
M_DrawOptions:
.LFB32:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$101, %esi
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$15, %esi
	movl	$108, %edi
	call	V_DrawPatchDirect@PLT
	movl	detailLevel(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	leaq	detailNames(%rip), %rdx
	addq	%rdx, %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movzwl	34+OptionsDef(%rip), %eax
	cwtl
	leal	32(%rax), %esi
	movzwl	32+OptionsDef(%rip), %eax
	cwtl
	addl	$175, %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	movl	showMessages(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	leaq	msgNames(%rip), %rdx
	addq	%rdx, %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movzwl	34+OptionsDef(%rip), %eax
	cwtl
	leal	16(%rax), %esi
	movzwl	32+OptionsDef(%rip), %eax
	cwtl
	addl	$120, %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	movl	mouseSensitivity(%rip), %edx
	movzwl	34+OptionsDef(%rip), %eax
	cwtl
	leal	96(%rax), %esi
	movzwl	32+OptionsDef(%rip), %eax
	cwtl
	movl	%edx, %ecx
	movl	$10, %edx
	movl	%eax, %edi
	call	M_DrawThermo
	movl	screenSize(%rip), %edx
	movzwl	34+OptionsDef(%rip), %eax
	cwtl
	leal	64(%rax), %esi
	movzwl	32+OptionsDef(%rip), %eax
	cwtl
	movl	%edx, %ecx
	movl	$9, %edx
	movl	%eax, %edi
	call	M_DrawThermo
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE32:
	.size	M_DrawOptions, .-M_DrawOptions
	.globl	M_Options
	.type	M_Options, @function
M_Options:
.LFB33:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	leaq	OptionsDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE33:
	.size	M_Options, .-M_Options
	.section	.rodata
.LC30:
	.string	"Messages OFF"
.LC31:
	.string	"Messages ON"
	.text
	.globl	M_ChangeMessages
	.type	M_ChangeMessages, @function
M_ChangeMessages:
.LFB34:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	movl	showMessages(%rip), %eax
	movl	$1, %edx
	subl	%eax, %edx
	movl	%edx, showMessages(%rip)
	movl	showMessages(%rip), %eax
	testl	%eax, %eax
	jne	.L104
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	224+players(%rip), %rax
	leaq	.LC30(%rip), %rdx
	movq	%rdx, (%rcx,%rax)
	jmp	.L105
.L104:
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	224+players(%rip), %rax
	leaq	.LC31(%rip), %rdx
	movq	%rdx, (%rcx,%rax)
.L105:
	movl	$1, message_dontfuckwithme(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE34:
	.size	M_ChangeMessages, .-M_ChangeMessages
	.globl	M_EndGameResponse
	.type	M_EndGameResponse, @function
M_EndGameResponse:
.LFB35:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$121, -4(%rbp)
	jne	.L109
	movq	currentMenu(%rip), %rax
	movzwl	itemOn(%rip), %edx
	movw	%dx, 36(%rax)
	call	M_ClearMenus
	call	D_StartTitle@PLT
	jmp	.L106
.L109:
	nop
.L106:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE35:
	.size	M_EndGameResponse, .-M_EndGameResponse
	.section	.rodata
	.align 8
.LC32:
	.string	"you can't end a netgame!\n\npress a key."
	.align 8
.LC33:
	.string	"are you sure you want to end the game?\n\npress y or n."
	.text
	.globl	M_EndGame
	.type	M_EndGame, @function
M_EndGame:
.LFB36:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	movl	usergame(%rip), %eax
	testl	%eax, %eax
	jne	.L111
	movl	$34, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L110
.L111:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L113
	movl	$0, %edx
	movl	$0, %esi
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	jmp	.L110
.L113:
	movl	$1, %edx
	leaq	M_EndGameResponse(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
.L110:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE36:
	.size	M_EndGame, .-M_EndGame
	.globl	M_ReadThis
	.type	M_ReadThis, @function
M_ReadThis:
.LFB37:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	leaq	ReadDef1(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE37:
	.size	M_ReadThis, .-M_ReadThis
	.globl	M_ReadThis2
	.type	M_ReadThis2, @function
M_ReadThis2:
.LFB38:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	leaq	ReadDef2(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE38:
	.size	M_ReadThis2, .-M_ReadThis2
	.globl	M_FinishReadThis
	.type	M_FinishReadThis, @function
M_FinishReadThis:
.LFB39:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	leaq	MainDef(%rip), %rax
	movq	%rax, %rdi
	call	M_SetupNextMenu
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE39:
	.size	M_FinishReadThis, .-M_FinishReadThis
	.globl	quitsounds
	.data
	.align 32
	.type	quitsounds, @object
	.size	quitsounds, 32
quitsounds:
	.long	57
	.long	26
	.long	27
	.long	31
	.long	35
	.long	36
	.long	38
	.long	52
	.globl	quitsounds2
	.align 32
	.type	quitsounds2, @object
	.size	quitsounds2, 32
quitsounds2:
	.long	80
	.long	93
	.long	95
	.long	31
	.long	56
	.long	72
	.long	78
	.long	52
	.text
	.globl	M_QuitResponse
	.type	M_QuitResponse, @function
M_QuitResponse:
.LFB40:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$121, -4(%rbp)
	jne	.L123
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L120
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L121
	movl	gametic(%rip), %eax
	sarl	$2, %eax
	andl	$7, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	quitsounds2(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L122
.L121:
	movl	gametic(%rip), %eax
	sarl	$2, %eax
	andl	$7, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	quitsounds(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L122:
	movl	$105, %edi
	call	I_WaitVBL@PLT
.L120:
	call	I_Quit@PLT
	jmp	.L117
.L123:
	nop
.L117:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE40:
	.size	M_QuitResponse, .-M_QuitResponse
	.section	.rodata
.LC34:
	.string	"%s\n\n(press y to quit)"
	.text
	.globl	M_QuitDOOM
	.type	M_QuitDOOM, @function
M_QuitDOOM:
.LFB41:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	language(%rip), %eax
	testl	%eax, %eax
	je	.L125
	movq	endmsg(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC34(%rip), %rax
	movq	%rax, %rsi
	leaq	endstring(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	jmp	.L126
.L125:
	movl	gametic(%rip), %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	1(%rdx), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	endmsg(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdx
	leaq	.LC34(%rip), %rax
	movq	%rax, %rsi
	leaq	endstring(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
.L126:
	movl	$1, %edx
	leaq	M_QuitResponse(%rip), %rax
	movq	%rax, %rsi
	leaq	endstring(%rip), %rax
	movq	%rax, %rdi
	call	M_StartMessage
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE41:
	.size	M_QuitDOOM, .-M_QuitDOOM
	.globl	M_ChangeSensitivity
	.type	M_ChangeSensitivity, @function
M_ChangeSensitivity:
.LFB42:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L128
	cmpl	$1, -4(%rbp)
	je	.L129
	jmp	.L135
.L128:
	movl	mouseSensitivity(%rip), %eax
	testl	%eax, %eax
	je	.L133
	movl	mouseSensitivity(%rip), %eax
	subl	$1, %eax
	movl	%eax, mouseSensitivity(%rip)
	jmp	.L133
.L129:
	movl	mouseSensitivity(%rip), %eax
	cmpl	$8, %eax
	jg	.L134
	movl	mouseSensitivity(%rip), %eax
	addl	$1, %eax
	movl	%eax, mouseSensitivity(%rip)
	jmp	.L134
.L133:
	nop
	jmp	.L135
.L134:
	nop
.L135:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE42:
	.size	M_ChangeSensitivity, .-M_ChangeSensitivity
	.section	.rodata
	.align 8
.LC35:
	.string	"M_ChangeDetail: low detail mode n.a.\n"
	.text
	.globl	M_ChangeDetail
	.type	M_ChangeDetail, @function
M_ChangeDetail:
.LFB43:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$0, -4(%rbp)
	movl	detailLevel(%rip), %eax
	movl	$1, %edx
	subl	%eax, %edx
	movl	%edx, detailLevel(%rip)
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$37, %edx
	movl	$1, %esi
	leaq	.LC35(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE43:
	.size	M_ChangeDetail, .-M_ChangeDetail
	.globl	M_SizeDisplay
	.type	M_SizeDisplay, @function
M_SizeDisplay:
.LFB44:
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
	je	.L139
	cmpl	$1, -4(%rbp)
	je	.L140
	jmp	.L141
.L139:
	movl	screenSize(%rip), %eax
	testl	%eax, %eax
	jle	.L144
	movl	screenblocks(%rip), %eax
	subl	$1, %eax
	movl	%eax, screenblocks(%rip)
	movl	screenSize(%rip), %eax
	subl	$1, %eax
	movl	%eax, screenSize(%rip)
	jmp	.L144
.L140:
	movl	screenSize(%rip), %eax
	cmpl	$7, %eax
	jg	.L145
	movl	screenblocks(%rip), %eax
	addl	$1, %eax
	movl	%eax, screenblocks(%rip)
	movl	screenSize(%rip), %eax
	addl	$1, %eax
	movl	%eax, screenSize(%rip)
	jmp	.L145
.L144:
	nop
	jmp	.L141
.L145:
	nop
.L141:
	movl	detailLevel(%rip), %edx
	movl	screenblocks(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	R_SetViewSize@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE44:
	.size	M_SizeDisplay, .-M_SizeDisplay
	.section	.rodata
.LC36:
	.string	"M_THERML"
.LC37:
	.string	"M_THERMM"
.LC38:
	.string	"M_THERMR"
.LC39:
	.string	"M_THERMO"
	.text
	.globl	M_DrawThermo
	.type	M_DrawThermo, @function
M_DrawThermo:
.LFB45:
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
	movl	%ecx, -32(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$101, %esi
	leaq	.LC36(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-24(%rbp), %esi
	movl	-8(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	addl	$8, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L147
.L148:
	movl	$101, %esi
	leaq	.LC37(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-24(%rbp), %esi
	movl	-8(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	addl	$8, -8(%rbp)
	addl	$1, -4(%rbp)
.L147:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L148
	movl	$101, %esi
	leaq	.LC38(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-24(%rbp), %esi
	movl	-8(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	movl	$101, %esi
	leaq	.LC39(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movl	-20(%rbp), %eax
	leal	8(%rax), %ecx
	movl	-32(%rbp), %eax
	sall	$3, %eax
	leal	(%rcx,%rax), %edi
	movl	-24(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %esi
	call	V_DrawPatchDirect@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE45:
	.size	M_DrawThermo, .-M_DrawThermo
	.section	.rodata
.LC40:
	.string	"M_CELL1"
	.text
	.globl	M_DrawEmptyCell
	.type	M_DrawEmptyCell, @function
M_DrawEmptyCell:
.LFB46:
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
	movl	$101, %esi
	leaq	.LC40(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movzwl	34(%rax), %eax
	cwtl
	movl	-12(%rbp), %ecx
	sall	$4, %ecx
	addl	%ecx, %eax
	leal	-1(%rax), %esi
	movq	-8(%rbp), %rax
	movzwl	32(%rax), %eax
	cwtl
	subl	$10, %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE46:
	.size	M_DrawEmptyCell, .-M_DrawEmptyCell
	.section	.rodata
.LC41:
	.string	"M_CELL2"
	.text
	.globl	M_DrawSelCell
	.type	M_DrawSelCell, @function
M_DrawSelCell:
.LFB47:
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
	movl	$101, %esi
	leaq	.LC41(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movzwl	34(%rax), %eax
	cwtl
	movl	-12(%rbp), %ecx
	sall	$4, %ecx
	addl	%ecx, %eax
	leal	-1(%rax), %esi
	movq	-8(%rbp), %rax
	movzwl	32(%rax), %eax
	cwtl
	subl	$10, %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE47:
	.size	M_DrawSelCell, .-M_DrawSelCell
	.globl	M_StartMessage
	.type	M_StartMessage, @function
M_StartMessage:
.LFB48:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	%edx, -20(%rbp)
	movl	menuactive(%rip), %eax
	movl	%eax, messageLastMenuActive(%rip)
	movl	$1, messageToPrint(%rip)
	movq	-8(%rbp), %rax
	movq	%rax, messageString(%rip)
	movq	-16(%rbp), %rax
	movq	%rax, messageRoutine(%rip)
	movl	-20(%rbp), %eax
	movl	%eax, messageNeedsInput(%rip)
	movl	$1, menuactive(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE48:
	.size	M_StartMessage, .-M_StartMessage
	.globl	M_StopMessage
	.type	M_StopMessage, @function
M_StopMessage:
.LFB49:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	messageLastMenuActive(%rip), %eax
	movl	%eax, menuactive(%rip)
	movl	$0, messageToPrint(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE49:
	.size	M_StopMessage, .-M_StopMessage
	.globl	M_StringWidth
	.type	M_StringWidth, @function
M_StringWidth:
.LFB50:
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
	movq	%rdi, -40(%rbp)
	movl	$0, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L155
.L159:
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	toupper@PLT
	subl	$33, %eax
	movl	%eax, -20(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L156
	cmpl	$62, -20(%rbp)
	jle	.L157
.L156:
	addl	$4, -24(%rbp)
	jmp	.L158
.L157:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	addl	%eax, -24(%rbp)
.L158:
	addl	$1, -28(%rbp)
.L155:
	movl	-28(%rbp), %eax
	movslq	%eax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	cmpq	%rax, %rbx
	jb	.L159
	movl	-24(%rbp), %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE50:
	.size	M_StringWidth, .-M_StringWidth
	.globl	M_StringHeight
	.type	M_StringHeight, @function
M_StringHeight:
.LFB51:
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
	movq	%rdi, -40(%rbp)
	movq	hu_font(%rip), %rax
	movzwl	2(%rax), %eax
	cwtl
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L162
.L164:
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$10, %al
	jne	.L163
	movl	-20(%rbp), %eax
	addl	%eax, -24(%rbp)
.L163:
	addl	$1, -28(%rbp)
.L162:
	movl	-28(%rbp), %eax
	movslq	%eax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	cmpq	%rax, %rbx
	jb	.L164
	movl	-24(%rbp), %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE51:
	.size	M_StringHeight, .-M_StringHeight
	.globl	M_WriteText
	.type	M_WriteText, @function
M_WriteText:
.LFB52:
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
	movq	%rdx, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -20(%rbp)
.L174:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	je	.L175
	cmpl	$10, -16(%rbp)
	jne	.L169
	movl	-36(%rbp), %eax
	movl	%eax, -24(%rbp)
	addl	$12, -20(%rbp)
	jmp	.L170
.L169:
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	toupper@PLT
	subl	$33, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	js	.L171
	cmpl	$62, -16(%rbp)
	jle	.L172
.L171:
	addl	$4, -24(%rbp)
	jmp	.L170
.L172:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -12(%rbp)
	movl	-24(%rbp), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L176
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	movl	-12(%rbp), %eax
	addl	%eax, -24(%rbp)
.L170:
	jmp	.L174
.L175:
	nop
	jmp	.L177
.L176:
	nop
.L177:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE52:
	.size	M_WriteText, .-M_WriteText
	.section	.rodata
.LC42:
	.string	"PLAYPAL"
	.text
	.globl	M_Responder
	.type	M_Responder, @function
M_Responder:
.LFB53:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$-1, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$3, %eax
	jne	.L179
	call	I_GetTime@PLT
	movl	%eax, %edx
	movl	joywait.7(%rip), %eax
	cmpl	%eax, %edx
	jle	.L179
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	$-1, %eax
	jne	.L180
	movl	$173, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, joywait.7(%rip)
	jmp	.L181
.L180:
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	$1, %eax
	jne	.L181
	movl	$175, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, joywait.7(%rip)
.L181:
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$-1, %eax
	jne	.L182
	movl	$172, -8(%rbp)
	call	I_GetTime@PLT
	addl	$2, %eax
	movl	%eax, joywait.7(%rip)
	jmp	.L183
.L182:
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$1, %eax
	jne	.L183
	movl	$174, -8(%rbp)
	call	I_GetTime@PLT
	addl	$2, %eax
	movl	%eax, joywait.7(%rip)
.L183:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L184
	movl	$13, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, joywait.7(%rip)
.L184:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L186
	movl	$127, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, joywait.7(%rip)
	jmp	.L186
.L179:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jne	.L187
	call	I_GetTime@PLT
	movl	%eax, %edx
	movl	mousewait.6(%rip), %eax
	cmpl	%eax, %edx
	jle	.L187
	movq	-24(%rbp), %rax
	movl	12(%rax), %edx
	movl	mousey.5(%rip), %eax
	addl	%edx, %eax
	movl	%eax, mousey.5(%rip)
	movl	lasty.4(%rip), %eax
	leal	-30(%rax), %edx
	movl	mousey.5(%rip), %eax
	cmpl	%eax, %edx
	jle	.L188
	movl	$175, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, mousewait.6(%rip)
	movl	lasty.4(%rip), %eax
	subl	$30, %eax
	movl	%eax, lasty.4(%rip)
	movl	lasty.4(%rip), %eax
	movl	%eax, mousey.5(%rip)
	jmp	.L189
.L188:
	movl	lasty.4(%rip), %eax
	leal	30(%rax), %edx
	movl	mousey.5(%rip), %eax
	cmpl	%eax, %edx
	jge	.L189
	movl	$173, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, mousewait.6(%rip)
	movl	lasty.4(%rip), %eax
	addl	$30, %eax
	movl	%eax, lasty.4(%rip)
	movl	lasty.4(%rip), %eax
	movl	%eax, mousey.5(%rip)
.L189:
	movq	-24(%rbp), %rax
	movl	8(%rax), %edx
	movl	mousex.3(%rip), %eax
	addl	%edx, %eax
	movl	%eax, mousex.3(%rip)
	movl	lastx.2(%rip), %eax
	leal	-30(%rax), %edx
	movl	mousex.3(%rip), %eax
	cmpl	%eax, %edx
	jle	.L190
	movl	$172, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, mousewait.6(%rip)
	movl	lastx.2(%rip), %eax
	subl	$30, %eax
	movl	%eax, lastx.2(%rip)
	movl	lastx.2(%rip), %eax
	movl	%eax, mousex.3(%rip)
	jmp	.L191
.L190:
	movl	lastx.2(%rip), %eax
	leal	30(%rax), %edx
	movl	mousex.3(%rip), %eax
	cmpl	%eax, %edx
	jge	.L191
	movl	$174, -8(%rbp)
	call	I_GetTime@PLT
	addl	$5, %eax
	movl	%eax, mousewait.6(%rip)
	movl	lastx.2(%rip), %eax
	addl	$30, %eax
	movl	%eax, lastx.2(%rip)
	movl	lastx.2(%rip), %eax
	movl	%eax, mousex.3(%rip)
.L191:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L192
	movl	$13, -8(%rbp)
	call	I_GetTime@PLT
	addl	$15, %eax
	movl	%eax, mousewait.6(%rip)
.L192:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L186
	movl	$127, -8(%rbp)
	call	I_GetTime@PLT
	addl	$15, %eax
	movl	%eax, mousewait.6(%rip)
	jmp	.L186
.L187:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L186
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, -8(%rbp)
.L186:
	cmpl	$-1, -8(%rbp)
	jne	.L194
	movl	$0, %eax
	jmp	.L195
.L194:
	movl	saveStringEnter(%rip), %eax
	testl	%eax, %eax
	je	.L196
	cmpl	$127, -8(%rbp)
	je	.L197
	cmpl	$127, -8(%rbp)
	jg	.L198
	cmpl	$13, -8(%rbp)
	je	.L199
	cmpl	$27, -8(%rbp)
	je	.L200
	jmp	.L198
.L197:
	movl	saveCharIndex(%rip), %eax
	testl	%eax, %eax
	jle	.L260
	movl	saveCharIndex(%rip), %eax
	subl	$1, %eax
	movl	%eax, saveCharIndex(%rip)
	movl	saveSlot(%rip), %eax
	movl	saveCharIndex(%rip), %edx
	movslq	%edx, %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rax,%rcx), %rdx
	leaq	savegamestrings(%rip), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	jmp	.L260
.L200:
	movl	$0, saveStringEnter(%rip)
	movl	saveSlot(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	leaq	saveOldString(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	jmp	.L202
.L199:
	movl	$0, saveStringEnter(%rip)
	movl	saveSlot(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	savegamestrings(%rip), %rax
	movzbl	(%rdx,%rax), %eax
	testb	%al, %al
	je	.L261
	movl	saveSlot(%rip), %eax
	movl	%eax, %edi
	call	M_DoSave
	jmp	.L261
.L198:
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	toupper@PLT
	movl	%eax, -8(%rbp)
	cmpl	$32, -8(%rbp)
	je	.L204
	cmpl	$32, -8(%rbp)
	jle	.L202
	cmpl	$95, -8(%rbp)
	jg	.L202
.L204:
	cmpl	$31, -8(%rbp)
	jle	.L262
	cmpl	$127, -8(%rbp)
	jg	.L262
	movl	saveCharIndex(%rip), %eax
	cmpl	$22, %eax
	jg	.L262
	movl	saveSlot(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	savegamestrings(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	M_StringWidth
	cmpl	$175, %eax
	jg	.L262
	movl	saveSlot(%rip), %esi
	movl	saveCharIndex(%rip), %eax
	leal	1(%rax), %edx
	movl	%edx, saveCharIndex(%rip)
	movl	-8(%rbp), %edx
	movl	%edx, %edi
	movslq	%eax, %rcx
	movslq	%esi, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rax,%rcx), %rdx
	leaq	savegamestrings(%rip), %rax
	addq	%rdx, %rax
	movb	%dil, (%rax)
	movl	saveSlot(%rip), %eax
	movl	saveCharIndex(%rip), %edx
	movslq	%edx, %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rax,%rcx), %rdx
	leaq	savegamestrings(%rip), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	jmp	.L262
.L260:
	nop
	jmp	.L202
.L261:
	nop
	jmp	.L202
.L262:
	nop
.L202:
	movl	$1, %eax
	jmp	.L195
.L196:
	movl	messageToPrint(%rip), %eax
	testl	%eax, %eax
	je	.L206
	movl	messageNeedsInput(%rip), %eax
	cmpl	$1, %eax
	jne	.L207
	cmpl	$32, -8(%rbp)
	je	.L207
	cmpl	$110, -8(%rbp)
	je	.L207
	cmpl	$121, -8(%rbp)
	je	.L207
	cmpl	$27, -8(%rbp)
	je	.L207
	movl	$0, %eax
	jmp	.L195
.L207:
	movl	messageLastMenuActive(%rip), %eax
	movl	%eax, menuactive(%rip)
	movl	$0, messageToPrint(%rip)
	movq	messageRoutine(%rip), %rax
	testq	%rax, %rax
	je	.L208
	movq	messageRoutine(%rip), %rdx
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	*%rdx
.L208:
	movl	$0, menuactive(%rip)
	movl	$24, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L206:
	movl	devparm(%rip), %eax
	testl	%eax, %eax
	je	.L209
	cmpl	$187, -8(%rbp)
	jne	.L209
	call	G_ScreenShot@PLT
	movl	$1, %eax
	jmp	.L195
.L209:
	movl	menuactive(%rip), %eax
	testl	%eax, %eax
	jne	.L210
	cmpl	$215, -8(%rbp)
	jg	.L210
	cmpl	$187, -8(%rbp)
	jge	.L211
	cmpl	$45, -8(%rbp)
	je	.L212
	cmpl	$61, -8(%rbp)
	je	.L213
	jmp	.L210
.L211:
	movl	-8(%rbp), %eax
	subl	$187, %eax
	cmpl	$28, %eax
	ja	.L210
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L215(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L215(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L215:
	.long	.L225-.L215
	.long	.L224-.L215
	.long	.L223-.L215
	.long	.L222-.L215
	.long	.L221-.L215
	.long	.L220-.L215
	.long	.L219-.L215
	.long	.L218-.L215
	.long	.L217-.L215
	.long	.L216-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L210-.L215
	.long	.L214-.L215
	.text
.L212:
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	jne	.L226
	movl	chat_on(%rip), %eax
	testl	%eax, %eax
	je	.L227
.L226:
	movl	$0, %eax
	jmp	.L195
.L227:
	movl	$0, %edi
	call	M_SizeDisplay
	movl	$22, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L213:
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	jne	.L228
	movl	chat_on(%rip), %eax
	testl	%eax, %eax
	je	.L229
.L228:
	movl	$0, %eax
	jmp	.L195
.L229:
	movl	$1, %edi
	call	M_SizeDisplay
	movl	$22, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L225:
	call	M_StartControlPanel
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L230
	leaq	ReadDef2(%rip), %rax
	movq	%rax, currentMenu(%rip)
	jmp	.L231
.L230:
	leaq	ReadDef1(%rip), %rax
	movq	%rax, currentMenu(%rip)
.L231:
	movw	$0, itemOn(%rip)
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L224:
	call	M_StartControlPanel
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %edi
	call	M_SaveGame
	movl	$1, %eax
	jmp	.L195
.L223:
	call	M_StartControlPanel
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %edi
	call	M_LoadGame
	movl	$1, %eax
	jmp	.L195
.L222:
	call	M_StartControlPanel
	leaq	SoundDef(%rip), %rax
	movq	%rax, currentMenu(%rip)
	movw	$0, itemOn(%rip)
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L221:
	movl	$0, %edi
	call	M_ChangeDetail
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L220:
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	call	M_QuickSave
	movl	$1, %eax
	jmp	.L195
.L219:
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %edi
	call	M_EndGame
	movl	$1, %eax
	jmp	.L195
.L218:
	movl	$0, %edi
	call	M_ChangeMessages
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L217:
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	call	M_QuickLoad
	movl	$1, %eax
	jmp	.L195
.L216:
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$0, %edi
	call	M_QuitDOOM
	movl	$1, %eax
	jmp	.L195
.L214:
	movl	usegamma(%rip), %eax
	addl	$1, %eax
	movl	%eax, usegamma(%rip)
	movl	usegamma(%rip), %eax
	cmpl	$4, %eax
	jle	.L232
	movl	$0, usegamma(%rip)
.L232:
	movl	usegamma(%rip), %eax
	movl	consoleplayer(%rip), %esi
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	gammamsg(%rip), %rdx
	leaq	(%rax,%rdx), %rcx
	movslq	%esi, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	224+players(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	movl	$101, %esi
	leaq	.LC42(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdi
	call	I_SetPalette@PLT
	movl	$1, %eax
	jmp	.L195
.L210:
	movl	menuactive(%rip), %eax
	testl	%eax, %eax
	jne	.L233
	cmpl	$27, -8(%rbp)
	jne	.L234
	call	M_StartControlPanel
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L234:
	movl	$0, %eax
	jmp	.L195
.L233:
	cmpl	$175, -8(%rbp)
	je	.L235
	cmpl	$175, -8(%rbp)
	jg	.L236
	cmpl	$174, -8(%rbp)
	je	.L237
	cmpl	$174, -8(%rbp)
	jg	.L236
	cmpl	$173, -8(%rbp)
	je	.L238
	cmpl	$173, -8(%rbp)
	jg	.L236
	cmpl	$172, -8(%rbp)
	je	.L239
	cmpl	$172, -8(%rbp)
	jg	.L236
	cmpl	$127, -8(%rbp)
	je	.L240
	cmpl	$127, -8(%rbp)
	jg	.L236
	cmpl	$13, -8(%rbp)
	je	.L241
	cmpl	$27, -8(%rbp)
	je	.L242
	jmp	.L236
.L235:
	movzwl	itemOn(%rip), %eax
	movswl	%ax, %edx
	movq	currentMenu(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	subl	$1, %eax
	cmpl	%eax, %edx
	jl	.L243
	movw	$0, itemOn(%rip)
	jmp	.L244
.L243:
	movzwl	itemOn(%rip), %eax
	addl	$1, %eax
	movw	%ax, itemOn(%rip)
.L244:
	movl	$19, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cmpw	$-1, %ax
	jne	.L245
	nop
	jmp	.L235
.L245:
	movl	$1, %eax
	jmp	.L195
.L238:
	movzwl	itemOn(%rip), %eax
	testw	%ax, %ax
	jne	.L246
	movq	currentMenu(%rip), %rax
	movzwl	(%rax), %eax
	subl	$1, %eax
	movw	%ax, itemOn(%rip)
	jmp	.L247
.L246:
	movzwl	itemOn(%rip), %eax
	subl	$1, %eax
	movw	%ax, itemOn(%rip)
.L247:
	movl	$19, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cmpw	$-1, %ax
	jne	.L248
	nop
	jmp	.L238
.L248:
	movl	$1, %eax
	jmp	.L195
.L239:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L249
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cmpw	$2, %ax
	jne	.L249
	movl	$22, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rax
	movl	$0, %edi
	call	*%rax
.L249:
	movl	$1, %eax
	jmp	.L195
.L237:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L250
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cmpw	$2, %ax
	jne	.L250
	movl	$22, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rax
	movl	$1, %edi
	call	*%rax
.L250:
	movl	$1, %eax
	jmp	.L195
.L241:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L251
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	testw	%ax, %ax
	je	.L251
	movq	currentMenu(%rip), %rax
	movzwl	itemOn(%rip), %edx
	movw	%dx, 36(%rax)
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cmpw	$2, %ax
	jne	.L252
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rax
	movl	$1, %edi
	call	*%rax
	movl	$22, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L251
.L252:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movzwl	itemOn(%rip), %edx
	movswq	%dx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	16(%rax), %rdx
	movzwl	itemOn(%rip), %eax
	cwtl
	movl	%eax, %edi
	call	*%rdx
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L251:
	movl	$1, %eax
	jmp	.L195
.L242:
	movq	currentMenu(%rip), %rax
	movzwl	itemOn(%rip), %edx
	movw	%dx, 36(%rax)
	call	M_ClearMenus
	movl	$24, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L240:
	movq	currentMenu(%rip), %rax
	movzwl	itemOn(%rip), %edx
	movw	%dx, 36(%rax)
	movq	currentMenu(%rip), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L253
	movq	currentMenu(%rip), %rax
	movq	8(%rax), %rax
	movq	%rax, currentMenu(%rip)
	movq	currentMenu(%rip), %rax
	movzwl	36(%rax), %eax
	movw	%ax, itemOn(%rip)
	movl	$23, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L253:
	movl	$1, %eax
	jmp	.L195
.L236:
	movzwl	itemOn(%rip), %eax
	cwtl
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.L254
.L256:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzbl	24(%rax), %eax
	movsbl	%al, %eax
	cmpl	%eax, -8(%rbp)
	jne	.L255
	movl	-4(%rbp), %eax
	movw	%ax, itemOn(%rip)
	movl	$19, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L255:
	addl	$1, -4(%rbp)
.L254:
	movq	currentMenu(%rip), %rax
	movzwl	(%rax), %eax
	cwtl
	cmpl	%eax, -4(%rbp)
	jl	.L256
	movl	$0, -4(%rbp)
	jmp	.L257
.L259:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzbl	24(%rax), %eax
	movsbl	%al, %eax
	cmpl	%eax, -8(%rbp)
	jne	.L258
	movl	-4(%rbp), %eax
	movw	%ax, itemOn(%rip)
	movl	$19, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	$1, %eax
	jmp	.L195
.L258:
	addl	$1, -4(%rbp)
.L257:
	movzwl	itemOn(%rip), %eax
	cwtl
	cmpl	%eax, -4(%rbp)
	jle	.L259
	nop
	movl	$0, %eax
.L195:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE53:
	.size	M_Responder, .-M_Responder
	.globl	M_StartControlPanel
	.type	M_StartControlPanel, @function
M_StartControlPanel:
.LFB54:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	menuactive(%rip), %eax
	testl	%eax, %eax
	jne	.L266
	movl	$1, menuactive(%rip)
	leaq	MainDef(%rip), %rax
	movq	%rax, currentMenu(%rip)
	movq	currentMenu(%rip), %rax
	movzwl	36(%rax), %eax
	movw	%ax, itemOn(%rip)
	jmp	.L263
.L266:
	nop
.L263:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE54:
	.size	M_StartControlPanel, .-M_StartControlPanel
	.globl	M_Drawer
	.type	M_Drawer, @function
M_Drawer:
.LFB55:
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
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$0, inhelpscreens(%rip)
	movl	messageToPrint(%rip), %eax
	testl	%eax, %eax
	je	.L268
	movl	$0, -68(%rbp)
	movq	messageString(%rip), %rax
	movq	%rax, %rdi
	call	M_StringHeight
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	addl	$100, %eax
	movw	%ax, y.1(%rip)
	jmp	.L269
.L275:
	movw	$0, -72(%rbp)
	jmp	.L270
.L273:
	movq	messageString(%rip), %rax
	movl	-68(%rbp), %edx
	movslq	%edx, %rcx
	movswq	-72(%rbp), %rdx
	addq	%rcx, %rdx
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$10, %al
	jne	.L271
	leaq	-64(%rbp), %rax
	movl	$40, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movswq	-72(%rbp), %rdx
	movq	messageString(%rip), %rcx
	movl	-68(%rbp), %eax
	cltq
	addq	%rax, %rcx
	leaq	-64(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncpy@PLT
	movswl	-72(%rbp), %eax
	addl	$1, %eax
	addl	%eax, -68(%rbp)
	jmp	.L272
.L271:
	movzwl	-72(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -72(%rbp)
.L270:
	movswq	-72(%rbp), %rbx
	movq	messageString(%rip), %rdx
	movl	-68(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	cmpq	%rax, %rbx
	jb	.L273
.L272:
	movswq	-72(%rbp), %rbx
	movq	messageString(%rip), %rdx
	movl	-68(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	cmpq	%rax, %rbx
	jne	.L274
	movq	messageString(%rip), %rdx
	movl	-68(%rbp), %eax
	cltq
	addq	%rax, %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movswl	-72(%rbp), %eax
	addl	%eax, -68(%rbp)
.L274:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	M_StringWidth
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	addw	$160, %ax
	movw	%ax, x.0(%rip)
	movzwl	y.1(%rip), %eax
	movswl	%ax, %ecx
	movzwl	x.0(%rip), %eax
	cwtl
	leaq	-64(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	M_WriteText
	movq	hu_font(%rip), %rax
	movzwl	2(%rax), %eax
	movl	%eax, %edx
	movzwl	y.1(%rip), %eax
	addl	%edx, %eax
	movw	%ax, y.1(%rip)
.L269:
	movq	messageString(%rip), %rdx
	movl	-68(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L275
	jmp	.L267
.L268:
	movl	menuactive(%rip), %eax
	testl	%eax, %eax
	je	.L284
	movq	currentMenu(%rip), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L278
	movq	currentMenu(%rip), %rax
	movq	24(%rax), %rdx
	movl	$0, %eax
	call	*%rdx
.L278:
	movq	currentMenu(%rip), %rax
	movzwl	32(%rax), %eax
	movw	%ax, x.0(%rip)
	movq	currentMenu(%rip), %rax
	movzwl	34(%rax), %eax
	movw	%ax, y.1(%rip)
	movq	currentMenu(%rip), %rax
	movzwl	(%rax), %eax
	movw	%ax, -70(%rbp)
	movw	$0, -72(%rbp)
	jmp	.L279
.L281:
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movswq	-72(%rbp), %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movzbl	2(%rax), %eax
	testb	%al, %al
	je	.L280
	movq	currentMenu(%rip), %rax
	movq	16(%rax), %rax
	movswq	-72(%rbp), %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$2, %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movzwl	y.1(%rip), %eax
	movswl	%ax, %esi
	movzwl	x.0(%rip), %eax
	cwtl
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
.L280:
	movzwl	y.1(%rip), %eax
	addl	$16, %eax
	movw	%ax, y.1(%rip)
	movzwl	-72(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -72(%rbp)
.L279:
	movzwl	-72(%rbp), %eax
	cmpw	-70(%rbp), %ax
	jl	.L281
	movzwl	whichSkull(%rip), %eax
	cwtl
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	leaq	skullName(%rip), %rdx
	addq	%rdx, %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rdx
	movq	currentMenu(%rip), %rax
	movzwl	34(%rax), %eax
	cwtl
	leal	-5(%rax), %ecx
	movzwl	itemOn(%rip), %eax
	cwtl
	sall	$4, %eax
	leal	(%rcx,%rax), %esi
	movzwl	x.0(%rip), %eax
	cwtl
	subl	$32, %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatchDirect@PLT
	jmp	.L267
.L284:
	nop
.L267:
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L283
	call	__stack_chk_fail@PLT
.L283:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE55:
	.size	M_Drawer, .-M_Drawer
	.globl	M_ClearMenus
	.type	M_ClearMenus, @function
M_ClearMenus:
.LFB56:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, menuactive(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE56:
	.size	M_ClearMenus, .-M_ClearMenus
	.globl	M_SetupNextMenu
	.type	M_SetupNextMenu, @function
M_SetupNextMenu:
.LFB57:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, currentMenu(%rip)
	movq	currentMenu(%rip), %rax
	movzwl	36(%rax), %eax
	movw	%ax, itemOn(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE57:
	.size	M_SetupNextMenu, .-M_SetupNextMenu
	.globl	M_Ticker
	.type	M_Ticker, @function
M_Ticker:
.LFB58:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movzwl	skullAnimCounter(%rip), %eax
	subl	$1, %eax
	movw	%ax, skullAnimCounter(%rip)
	movzwl	skullAnimCounter(%rip), %eax
	testw	%ax, %ax
	jg	.L289
	movzwl	whichSkull(%rip), %eax
	xorl	$1, %eax
	movw	%ax, whichSkull(%rip)
	movw	$8, skullAnimCounter(%rip)
.L289:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE58:
	.size	M_Ticker, .-M_Ticker
	.globl	M_Init
	.type	M_Init, @function
M_Init:
.LFB59:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	MainDef(%rip), %rax
	movq	%rax, currentMenu(%rip)
	movl	$0, menuactive(%rip)
	movq	currentMenu(%rip), %rax
	movzwl	36(%rax), %eax
	movw	%ax, itemOn(%rip)
	movw	$0, whichSkull(%rip)
	movw	$10, skullAnimCounter(%rip)
	movl	screenblocks(%rip), %eax
	subl	$3, %eax
	movl	%eax, screenSize(%rip)
	movl	$0, messageToPrint(%rip)
	movq	$0, messageString(%rip)
	movl	menuactive(%rip), %eax
	movl	%eax, messageLastMenuActive(%rip)
	movl	$-1, quickSaveSlot(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jbe	.L291
	cmpl	$2, %eax
	jne	.L294
	movq	160+MainMenu(%rip), %rax
	movq	168+MainMenu(%rip), %rdx
	movq	%rax, 128+MainMenu(%rip)
	movq	%rdx, 136+MainMenu(%rip)
	movq	176+MainMenu(%rip), %rax
	movq	184+MainMenu(%rip), %rdx
	movq	%rax, 144+MainMenu(%rip)
	movq	%rdx, 152+MainMenu(%rip)
	movzwl	MainDef(%rip), %eax
	subl	$1, %eax
	movw	%ax, MainDef(%rip)
	movzwl	34+MainDef(%rip), %eax
	addl	$8, %eax
	movw	%ax, 34+MainDef(%rip)
	leaq	MainDef(%rip), %rax
	movq	%rax, 8+NewDef(%rip)
	leaq	M_DrawReadThis1(%rip), %rax
	movq	%rax, 24+ReadDef1(%rip)
	movw	$330, 32+ReadDef1(%rip)
	movw	$165, 34+ReadDef1(%rip)
	leaq	M_FinishReadThis(%rip), %rax
	movq	%rax, 16+ReadMenu1(%rip)
	jmp	.L293
.L291:
	movzwl	EpiDef(%rip), %eax
	subl	$1, %eax
	movw	%ax, EpiDef(%rip)
	jmp	.L293
.L294:
	nop
.L293:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE59:
	.size	M_Init, .-M_Init
	.local	joywait.7
	.comm	joywait.7,4,4
	.local	mousewait.6
	.comm	mousewait.6,4,4
	.local	mousey.5
	.comm	mousey.5,4,4
	.local	lasty.4
	.comm	lasty.4,4,4
	.local	mousex.3
	.comm	mousex.3,4,4
	.local	lastx.2
	.comm	lastx.2,4,4
	.local	y.1
	.comm	y.1,2,2
	.local	x.0
	.comm	x.0,2,2
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
