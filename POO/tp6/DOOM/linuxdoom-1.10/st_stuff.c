	.file	"st_stuff.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: st_stuff.c,v 1.6 1997/02/03 22:45:13 b1 Exp $"
	.local	plyr
	.comm	plyr,8,8
	.local	st_firsttime
	.comm	st_firsttime,4,4
	.data
	.align 4
	.type	veryfirsttime, @object
	.size	veryfirsttime, 4
veryfirsttime:
	.long	1
	.local	lu_palette
	.comm	lu_palette,4,4
	.local	st_clock
	.comm	st_clock,4,4
	.local	st_msgcounter
	.comm	st_msgcounter,4,4
	.local	st_chatstate
	.comm	st_chatstate,4,4
	.local	st_gamestate
	.comm	st_gamestate,4,4
	.local	st_statusbaron
	.comm	st_statusbaron,4,4
	.local	st_chat
	.comm	st_chat,4,4
	.local	st_oldchat
	.comm	st_oldchat,4,4
	.local	st_cursoron
	.comm	st_cursoron,4,4
	.local	st_notdeathmatch
	.comm	st_notdeathmatch,4,4
	.local	st_armson
	.comm	st_armson,4,4
	.local	st_fragson
	.comm	st_fragson,4,4
	.local	sbar
	.comm	sbar,8,8
	.local	tallnum
	.comm	tallnum,80,32
	.local	tallpercent
	.comm	tallpercent,8,8
	.local	shortnum
	.comm	shortnum,80,32
	.local	keys
	.comm	keys,48,32
	.local	faces
	.comm	faces,336,32
	.local	faceback
	.comm	faceback,8,8
	.local	armsbg
	.comm	armsbg,8,8
	.local	arms
	.comm	arms,96,32
	.local	w_ready
	.comm	w_ready,48,32
	.local	w_frags
	.comm	w_frags,48,32
	.local	w_health
	.comm	w_health,56,32
	.local	w_armsbg
	.comm	w_armsbg,48,32
	.local	w_arms
	.comm	w_arms,288,32
	.local	w_faces
	.comm	w_faces,48,32
	.local	w_keyboxes
	.comm	w_keyboxes,144,32
	.local	w_armor
	.comm	w_armor,56,32
	.local	w_ammo
	.comm	w_ammo,192,32
	.local	w_maxammo
	.comm	w_maxammo,192,32
	.local	st_fragscount
	.comm	st_fragscount,4,4
	.align 4
	.type	st_oldhealth, @object
	.size	st_oldhealth, 4
st_oldhealth:
	.long	-1
	.local	oldweaponsowned
	.comm	oldweaponsowned,36,32
	.local	st_facecount
	.comm	st_facecount,4,4
	.local	st_faceindex
	.comm	st_faceindex,4,4
	.local	keyboxes
	.comm	keyboxes,12,8
	.local	st_randomnumber
	.comm	st_randomnumber,4,4
	.globl	cheat_mus_seq
	.align 8
	.type	cheat_mus_seq, @object
	.size	cheat_mus_seq, 9
cheat_mus_seq:
	.string	"\262&\266\256\352\001"
	.string	""
	.ascii	"\377"
	.globl	cheat_choppers_seq
	.align 8
	.type	cheat_choppers_seq, @object
	.size	cheat_choppers_seq, 11
cheat_choppers_seq:
	.ascii	"\262&\3422\366**\246j\352\377"
	.globl	cheat_god_seq
	.type	cheat_god_seq, @object
	.size	cheat_god_seq, 6
cheat_god_seq:
	.ascii	"\262&&\252&\377"
	.globl	cheat_ammo_seq
	.type	cheat_ammo_seq, @object
	.size	cheat_ammo_seq, 6
cheat_ammo_seq:
	.ascii	"\262&\362f\242\377"
	.globl	cheat_ammonokey_seq
	.type	cheat_ammonokey_seq, @object
	.size	cheat_ammonokey_seq, 5
cheat_ammonokey_seq:
	.ascii	"\262&f\242\377"
	.globl	cheat_noclip_seq
	.align 8
	.type	cheat_noclip_seq, @object
	.size	cheat_noclip_seq, 11
cheat_noclip_seq:
	.ascii	"\262&\352*\262\352*\366*&\377"
	.globl	cheat_commercial_noclip_seq
	.type	cheat_commercial_noclip_seq, @object
	.size	cheat_commercial_noclip_seq, 7
cheat_commercial_noclip_seq:
	.ascii	"\262&\3426\262*\377"
	.globl	cheat_powerup_seq
	.align 32
	.type	cheat_powerup_seq, @object
	.size	cheat_powerup_seq, 70
cheat_powerup_seq:
	.ascii	"\262&b\2462\3666&n\377"
	.ascii	"\262&b\2462\3666&\352\377"
	.ascii	"\262&b\2462\3666&\262\377"
	.ascii	"\262&b\2462\3666&j\377"
	.ascii	"\262&b\2462\3666&\242\377"
	.ascii	"\262&b\2462\3666&6\377"
	.string	"\262&b\2462\3666&\377"
	.globl	cheat_clev_seq
	.align 8
	.type	cheat_clev_seq, @object
	.size	cheat_clev_seq, 10
cheat_clev_seq:
	.string	"\262&\3426\246n\001"
	.string	""
	.ascii	"\377"
	.globl	cheat_mypos_seq
	.align 8
	.type	cheat_mypos_seq, @object
	.size	cheat_mypos_seq, 8
cheat_mypos_seq:
	.ascii	"\262&\266\272*\366\352\377"
	.globl	cheat_mus
	.section	.data.rel.local,"aw"
	.align 16
	.type	cheat_mus, @object
	.size	cheat_mus, 16
cheat_mus:
	.quad	cheat_mus_seq
	.quad	0
	.globl	cheat_god
	.align 16
	.type	cheat_god, @object
	.size	cheat_god, 16
cheat_god:
	.quad	cheat_god_seq
	.quad	0
	.globl	cheat_ammo
	.align 16
	.type	cheat_ammo, @object
	.size	cheat_ammo, 16
cheat_ammo:
	.quad	cheat_ammo_seq
	.quad	0
	.globl	cheat_ammonokey
	.align 16
	.type	cheat_ammonokey, @object
	.size	cheat_ammonokey, 16
cheat_ammonokey:
	.quad	cheat_ammonokey_seq
	.quad	0
	.globl	cheat_noclip
	.align 16
	.type	cheat_noclip, @object
	.size	cheat_noclip, 16
cheat_noclip:
	.quad	cheat_noclip_seq
	.quad	0
	.globl	cheat_commercial_noclip
	.align 16
	.type	cheat_commercial_noclip, @object
	.size	cheat_commercial_noclip, 16
cheat_commercial_noclip:
	.quad	cheat_commercial_noclip_seq
	.quad	0
	.globl	cheat_powerup
	.align 32
	.type	cheat_powerup, @object
	.size	cheat_powerup, 112
cheat_powerup:
	.quad	cheat_powerup_seq
	.quad	0
	.quad	cheat_powerup_seq+10
	.quad	0
	.quad	cheat_powerup_seq+20
	.quad	0
	.quad	cheat_powerup_seq+30
	.quad	0
	.quad	cheat_powerup_seq+40
	.quad	0
	.quad	cheat_powerup_seq+50
	.quad	0
	.quad	cheat_powerup_seq+60
	.quad	0
	.globl	cheat_choppers
	.align 16
	.type	cheat_choppers, @object
	.size	cheat_choppers, 16
cheat_choppers:
	.quad	cheat_choppers_seq
	.quad	0
	.globl	cheat_clev
	.align 16
	.type	cheat_clev, @object
	.size	cheat_clev, 16
cheat_clev:
	.quad	cheat_clev_seq
	.quad	0
	.globl	cheat_mypos
	.align 16
	.type	cheat_mypos, @object
	.size	cheat_mypos, 16
cheat_mypos:
	.quad	cheat_mypos_seq
	.quad	0
	.text
	.globl	ST_refreshBackground
	.type	ST_refreshBackground, @function
ST_refreshBackground:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	st_statusbaron(%rip), %eax
	testl	%eax, %eax
	je	.L4
	movq	sbar(%rip), %rax
	movq	%rax, %rcx
	movl	$4, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L3
	movq	faceback(%rip), %rax
	movq	%rax, %rcx
	movl	$4, %edx
	movl	$0, %esi
	movl	$143, %edi
	call	V_DrawPatch@PLT
.L3:
	pushq	$0
	pushq	$168
	movl	$0, %r9d
	movl	$32, %r8d
	movl	$320, %ecx
	movl	$4, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_CopyRect@PLT
	addq	$16, %rsp
.L4:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	ST_refreshBackground, .-ST_refreshBackground
	.section	.rodata
.LC0:
	.string	"Degreelessness Mode On"
.LC1:
	.string	"Degreelessness Mode Off"
.LC2:
	.string	"Ammo (no keys) Added"
.LC3:
	.string	"Very Happy Ammo Added"
.LC4:
	.string	"Music Change"
.LC5:
	.string	"IMPOSSIBLE SELECTION"
.LC6:
	.string	"No Clipping Mode ON"
.LC7:
	.string	"No Clipping Mode OFF"
.LC8:
	.string	"Power-up Toggled"
	.align 8
.LC9:
	.string	"inVuln, Str, Inviso, Rad, Allmap, or Lite-amp"
.LC10:
	.string	"... doesn't suck - GM"
.LC11:
	.string	"ang=0x%x;x,y=(0x%x,0x%x)"
.LC12:
	.string	"Changing Level..."
	.text
	.globl	ST_Responder
	.type	ST_Responder, @function
ST_Responder:
.LFB1:
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
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L6
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movw	$0, %ax
	cmpl	$1634533376, %eax
	jne	.L6
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$1634559232, %eax
	je	.L7
	cmpl	$1634564096, %eax
	je	.L8
	jmp	.L10
.L7:
	movl	$0, st_gamestate(%rip)
	movl	$1, st_firsttime(%rip)
	jmp	.L9
.L8:
	movl	$1, st_gamestate(%rip)
	nop
.L9:
	jmp	.L10
.L6:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L10
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L11
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_god(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L12
	movq	plyr(%rip), %rax
	movl	200(%rax), %edx
	movq	plyr(%rip), %rax
	xorl	$2, %edx
	movl	%edx, 200(%rax)
	movq	plyr(%rip), %rax
	movl	200(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L13
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L14
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	movl	$100, 164(%rax)
.L14:
	movq	plyr(%rip), %rax
	movl	$100, 36(%rax)
	movq	plyr(%rip), %rax
	leaq	.LC0(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L13:
	movq	plyr(%rip), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L12:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_ammonokey(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L16
	movq	plyr(%rip), %rax
	movl	$200, 40(%rax)
	movq	plyr(%rip), %rax
	movl	$2, 44(%rax)
	movl	$0, -28(%rbp)
	jmp	.L17
.L18:
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	addq	$28, %rdx
	movl	$1, 12(%rax,%rdx,4)
	addl	$1, -28(%rbp)
.L17:
	cmpl	$8, -28(%rbp)
	jle	.L18
	movl	$0, -28(%rbp)
	jmp	.L19
.L20:
	movq	plyr(%rip), %rdx
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$44, %rcx
	movl	(%rdx,%rcx,4), %edx
	movl	-28(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$40, %rcx
	movl	%edx, (%rax,%rcx,4)
	addl	$1, -28(%rbp)
.L19:
	cmpl	$3, -28(%rbp)
	jle	.L20
	movq	plyr(%rip), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L16:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_ammo(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L21
	movq	plyr(%rip), %rax
	movl	$200, 40(%rax)
	movq	plyr(%rip), %rax
	movl	$2, 44(%rax)
	movl	$0, -28(%rbp)
	jmp	.L22
.L23:
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	addq	$28, %rdx
	movl	$1, 12(%rax,%rdx,4)
	addl	$1, -28(%rbp)
.L22:
	cmpl	$8, -28(%rbp)
	jle	.L23
	movl	$0, -28(%rbp)
	jmp	.L24
.L25:
	movq	plyr(%rip), %rdx
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$44, %rcx
	movl	(%rdx,%rcx,4), %edx
	movl	-28(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$40, %rcx
	movl	%edx, (%rax,%rcx,4)
	addl	$1, -28(%rbp)
.L24:
	cmpl	$3, -28(%rbp)
	jle	.L25
	movl	$0, -28(%rbp)
	jmp	.L26
.L27:
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	addq	$16, %rdx
	movl	$1, 8(%rax,%rdx,4)
	addl	$1, -28(%rbp)
.L26:
	cmpl	$5, -28(%rbp)
	jle	.L27
	movq	plyr(%rip), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L21:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_mus(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L28
	movq	plyr(%rip), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, 224(%rax)
	leaq	-11(%rbp), %rax
	movq	%rax, %rsi
	leaq	cheat_mus(%rip), %rax
	movq	%rax, %rdi
	call	cht_GetParam@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L29
	movzbl	-11(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	leal	33(%rax), %edx
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	addl	%edx, %eax
	subl	$49, %eax
	movl	%eax, -16(%rbp)
	movzbl	-11(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	addl	%edx, %eax
	cmpl	$83, %eax
	jle	.L30
	movq	plyr(%rip), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L30:
	movl	-16(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	S_ChangeMusic@PLT
	jmp	.L15
.L29:
	movzbl	-11(%rbp), %eax
	movsbl	%al, %eax
	leal	-49(%rax), %edx
	movl	%edx, %eax
	sall	$3, %eax
	addl	%edx, %eax
	leal	1(%rax), %edx
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	subl	$49, %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
	movzbl	-11(%rbp), %eax
	movsbl	%al, %eax
	leal	-49(%rax), %edx
	movl	%edx, %eax
	sall	$3, %eax
	addl	%eax, %edx
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	addl	%edx, %eax
	cmpl	$80, %eax
	jle	.L32
	movq	plyr(%rip), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L32:
	movl	-16(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	S_ChangeMusic@PLT
	jmp	.L15
.L28:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_noclip(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	jne	.L33
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_commercial_noclip(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L15
.L33:
	movq	plyr(%rip), %rax
	movl	200(%rax), %edx
	movq	plyr(%rip), %rax
	xorl	$1, %edx
	movl	%edx, 200(%rax)
	movq	plyr(%rip), %rax
	movl	200(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L34
	movq	plyr(%rip), %rax
	leaq	.LC6(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L15
.L34:
	movq	plyr(%rip), %rax
	leaq	.LC7(%rip), %rdx
	movq	%rdx, 224(%rax)
.L15:
	movl	$0, -28(%rbp)
	jmp	.L35
.L40:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	movq	%rdx, %rcx
	salq	$4, %rcx
	leaq	cheat_powerup(%rip), %rdx
	addq	%rcx, %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L36
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	(%rax,%rdx,4), %eax
	testl	%eax, %eax
	jne	.L37
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_GivePower@PLT
	jmp	.L38
.L37:
	cmpl	$1, -28(%rbp)
	je	.L39
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$1, (%rax,%rdx,4)
	jmp	.L38
.L39:
	movq	plyr(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$0, (%rax,%rdx,4)
.L38:
	movq	plyr(%rip), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rdx, 224(%rax)
.L36:
	addl	$1, -28(%rbp)
.L35:
	cmpl	$5, -28(%rbp)
	jle	.L40
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	96+cheat_powerup(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L41
	movq	plyr(%rip), %rax
	leaq	.LC9(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L11
.L41:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_choppers(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L42
	movq	plyr(%rip), %rax
	movl	$1, 152(%rax)
	movq	plyr(%rip), %rax
	movl	$1, 48(%rax)
	movq	plyr(%rip), %rax
	leaq	.LC10(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L11
.L42:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_mypos(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L11
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	28(%rax), %esi
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	players(%rip), %rax
	movq	(%rdx,%rax), %rax
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
	movl	56(%rax), %eax
	movl	%esi, %r8d
	movl	%eax, %edx
	leaq	.LC11(%rip), %rax
	movq	%rax, %rsi
	leaq	buf.5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movq	plyr(%rip), %rax
	leaq	buf.5(%rip), %rdx
	movq	%rdx, 224(%rax)
.L11:
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	cheat_clev(%rip), %rax
	movq	%rax, %rdi
	call	cht_CheckCheat@PLT
	testl	%eax, %eax
	je	.L10
	leaq	-11(%rbp), %rax
	movq	%rax, %rsi
	leaq	cheat_clev(%rip), %rax
	movq	%rax, %rdi
	call	cht_GetParam@PLT
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L43
	movl	$0, -24(%rbp)
	movzbl	-11(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	addl	%edx, %eax
	subl	$48, %eax
	movl	%eax, -20(%rbp)
	jmp	.L44
.L43:
	movzbl	-11(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -24(%rbp)
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -20(%rbp)
.L44:
	cmpl	$0, -24(%rbp)
	jg	.L45
	movl	$0, %eax
	jmp	.L56
.L45:
	cmpl	$0, -20(%rbp)
	jg	.L47
	movl	$0, %eax
	jmp	.L56
.L47:
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L48
	cmpl	$4, -24(%rbp)
	jg	.L49
	cmpl	$9, -20(%rbp)
	jle	.L48
.L49:
	movl	$0, %eax
	jmp	.L56
.L48:
	movl	gamemode(%rip), %eax
	cmpl	$1, %eax
	jne	.L50
	cmpl	$3, -24(%rbp)
	jg	.L51
	cmpl	$9, -20(%rbp)
	jle	.L50
.L51:
	movl	$0, %eax
	jmp	.L56
.L50:
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	jne	.L52
	cmpl	$1, -24(%rbp)
	jg	.L53
	cmpl	$9, -20(%rbp)
	jle	.L52
.L53:
	movl	$0, %eax
	jmp	.L56
.L52:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L54
	cmpl	$1, -24(%rbp)
	jg	.L55
	cmpl	$34, -20(%rbp)
	jle	.L54
.L55:
	movl	$0, %eax
	jmp	.L56
.L54:
	movq	plyr(%rip), %rax
	leaq	.LC12(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	gameskill(%rip), %eax
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %ecx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	G_DeferedInitNew@PLT
.L10:
	movl	$0, %eax
.L56:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L57
	call	__stack_chk_fail@PLT
.L57:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	ST_Responder, .-ST_Responder
	.globl	ST_calcPainOffset
	.type	ST_calcPainOffset, @function
ST_calcPainOffset:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	plyr(%rip), %rax
	movl	36(%rax), %eax
	movl	$100, %edx
	cmpl	%edx, %eax
	cmovg	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	oldhealth.4(%rip), %eax
	cmpl	%eax, -4(%rbp)
	je	.L59
	movl	$100, %eax
	subl	-4(%rbp), %eax
	movl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	movslq	%eax, %rdx
	imulq	$680390859, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$4, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	leal	0(,%rdx,8), %eax
	movl	%eax, lastcalc.3(%rip)
	movl	-4(%rbp), %eax
	movl	%eax, oldhealth.4(%rip)
.L59:
	movl	lastcalc.3(%rip), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	ST_calcPainOffset, .-ST_calcPainOffset
	.globl	ST_updateFaceWidget
	.type	ST_updateFaceWidget, @function
ST_updateFaceWidget:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	priority.2(%rip), %eax
	cmpl	$9, %eax
	jg	.L62
	movq	plyr(%rip), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	jne	.L62
	movl	$9, priority.2(%rip)
	movl	$41, st_faceindex(%rip)
	movl	$1, st_facecount(%rip)
.L62:
	movl	priority.2(%rip), %eax
	cmpl	$8, %eax
	jg	.L63
	movq	plyr(%rip), %rax
	movl	236(%rax), %eax
	testl	%eax, %eax
	je	.L63
	movl	$0, -8(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L64
.L66:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	oldweaponsowned(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	plyr(%rip), %rax
	movl	-16(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$28, %rcx
	movl	12(%rax,%rcx,4), %eax
	cmpl	%eax, %edx
	je	.L65
	movl	$1, -8(%rbp)
	movq	plyr(%rip), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	addq	$28, %rdx
	movl	12(%rax,%rdx,4), %eax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	oldweaponsowned(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
.L65:
	addl	$1, -16(%rbp)
.L64:
	cmpl	$8, -16(%rbp)
	jle	.L66
	cmpl	$0, -8(%rbp)
	je	.L63
	movl	$8, priority.2(%rip)
	movl	$70, st_facecount(%rip)
	call	ST_calcPainOffset
	addl	$6, %eax
	movl	%eax, st_faceindex(%rip)
.L63:
	movl	priority.2(%rip), %eax
	cmpl	$7, %eax
	jg	.L67
	movq	plyr(%rip), %rax
	movl	232(%rax), %eax
	testl	%eax, %eax
	je	.L67
	movq	plyr(%rip), %rax
	movq	240(%rax), %rax
	testq	%rax, %rax
	je	.L67
	movq	plyr(%rip), %rax
	movq	240(%rax), %rdx
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	je	.L67
	movl	$7, priority.2(%rip)
	movq	plyr(%rip), %rax
	movl	36(%rax), %edx
	movl	st_oldhealth(%rip), %eax
	subl	%eax, %edx
	cmpl	$20, %edx
	jle	.L68
	movl	$35, st_facecount(%rip)
	call	ST_calcPainOffset
	addl	$5, %eax
	movl	%eax, st_faceindex(%rip)
	jmp	.L67
.L68:
	movq	plyr(%rip), %rax
	movq	240(%rax), %rax
	movl	28(%rax), %ecx
	movq	plyr(%rip), %rax
	movq	240(%rax), %rax
	movl	24(%rax), %edx
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	movl	28(%rax), %esi
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -4(%rbp)
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	cmpl	-4(%rbp), %eax
	jnb	.L69
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	-4(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	cmpl	$-2147483648, -12(%rbp)
	seta	%al
	movzbl	%al, %eax
	movl	%eax, -16(%rbp)
	jmp	.L70
.L69:
	movq	plyr(%rip), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	subl	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
	cmpl	$-2147483648, -12(%rbp)
	setbe	%al
	movzbl	%al, %eax
	movl	%eax, -16(%rbp)
.L70:
	movl	$35, st_facecount(%rip)
	call	ST_calcPainOffset
	movl	%eax, st_faceindex(%rip)
	cmpl	$536870911, -12(%rbp)
	ja	.L71
	movl	st_faceindex(%rip), %eax
	addl	$7, %eax
	movl	%eax, st_faceindex(%rip)
	jmp	.L67
.L71:
	cmpl	$0, -16(%rbp)
	je	.L72
	movl	st_faceindex(%rip), %eax
	addl	$3, %eax
	movl	%eax, st_faceindex(%rip)
	jmp	.L67
.L72:
	movl	st_faceindex(%rip), %eax
	addl	$4, %eax
	movl	%eax, st_faceindex(%rip)
.L67:
	movl	priority.2(%rip), %eax
	cmpl	$6, %eax
	jg	.L73
	movq	plyr(%rip), %rax
	movl	232(%rax), %eax
	testl	%eax, %eax
	je	.L73
	movq	plyr(%rip), %rax
	movl	36(%rax), %edx
	movl	st_oldhealth(%rip), %eax
	subl	%eax, %edx
	cmpl	$20, %edx
	jle	.L74
	movl	$7, priority.2(%rip)
	movl	$35, st_facecount(%rip)
	call	ST_calcPainOffset
	addl	$5, %eax
	movl	%eax, st_faceindex(%rip)
	jmp	.L73
.L74:
	movl	$6, priority.2(%rip)
	movl	$35, st_facecount(%rip)
	call	ST_calcPainOffset
	addl	$7, %eax
	movl	%eax, st_faceindex(%rip)
.L73:
	movl	priority.2(%rip), %eax
	cmpl	$5, %eax
	jg	.L75
	movq	plyr(%rip), %rax
	movl	192(%rax), %eax
	testl	%eax, %eax
	je	.L76
	movl	lastattackdown.1(%rip), %eax
	cmpl	$-1, %eax
	jne	.L77
	movl	$70, lastattackdown.1(%rip)
	jmp	.L75
.L77:
	movl	lastattackdown.1(%rip), %eax
	subl	$1, %eax
	movl	%eax, lastattackdown.1(%rip)
	movl	lastattackdown.1(%rip), %eax
	testl	%eax, %eax
	jne	.L75
	movl	$5, priority.2(%rip)
	call	ST_calcPainOffset
	addl	$7, %eax
	movl	%eax, st_faceindex(%rip)
	movl	$1, st_facecount(%rip)
	movl	$1, lastattackdown.1(%rip)
	jmp	.L75
.L76:
	movl	$-1, lastattackdown.1(%rip)
.L75:
	movl	priority.2(%rip), %eax
	cmpl	$4, %eax
	jg	.L78
	movq	plyr(%rip), %rax
	movl	200(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	jne	.L79
	movq	plyr(%rip), %rax
	movl	48(%rax), %eax
	testl	%eax, %eax
	je	.L78
.L79:
	movl	$4, priority.2(%rip)
	movl	$40, st_faceindex(%rip)
	movl	$1, st_facecount(%rip)
.L78:
	movl	st_facecount(%rip), %eax
	testl	%eax, %eax
	jne	.L80
	call	ST_calcPainOffset
	movl	%eax, %esi
	movl	st_randomnumber(%rip), %ecx
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
	leal	(%rsi,%rdx), %eax
	movl	%eax, st_faceindex(%rip)
	movl	$17, st_facecount(%rip)
	movl	$0, priority.2(%rip)
.L80:
	movl	st_facecount(%rip), %eax
	subl	$1, %eax
	movl	%eax, st_facecount(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	ST_updateFaceWidget, .-ST_updateFaceWidget
	.globl	ST_updateWidgets
	.type	ST_updateWidgets, @function
ST_updateWidgets:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	plyr(%rip), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$5, %eax
	jne	.L82
	leaq	largeammo.0(%rip), %rax
	movq	%rax, 16+w_ready(%rip)
	jmp	.L83
.L82:
	movq	plyr(%rip), %rdx
	movq	plyr(%rip), %rax
	movl	116(%rax), %eax
	movl	%eax, %ecx
	movq	%rcx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	salq	$3, %rax
	movq	%rax, %rcx
	leaq	weaponinfo(%rip), %rax
	movl	(%rcx,%rax), %eax
	movl	%eax, %eax
	addq	$40, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, 16+w_ready(%rip)
.L83:
	movq	plyr(%rip), %rax
	movl	116(%rax), %eax
	movl	%eax, 40+w_ready(%rip)
	movl	$0, -4(%rbp)
	jmp	.L84
.L88:
	movq	plyr(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$16, %rdx
	movl	8(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L85
	movl	-4(%rbp), %eax
	jmp	.L86
.L85:
	movl	$-1, %eax
.L86:
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	keyboxes(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movq	plyr(%rip), %rax
	movl	-4(%rbp), %edx
	addl	$3, %edx
	movslq	%edx, %rdx
	addq	$16, %rdx
	movl	8(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L87
	movl	-4(%rbp), %eax
	leal	3(%rax), %ecx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	keyboxes(%rip), %rax
	movl	%ecx, (%rdx,%rax)
.L87:
	addl	$1, -4(%rbp)
.L84:
	cmpl	$2, -4(%rbp)
	jle	.L88
	call	ST_updateFaceWidget
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, st_notdeathmatch(%rip)
	movl	st_statusbaron(%rip), %eax
	testl	%eax, %eax
	je	.L89
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	jne	.L89
	movl	$1, %eax
	jmp	.L90
.L89:
	movl	$0, %eax
.L90:
	movl	%eax, st_armson(%rip)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L91
	movl	st_statusbaron(%rip), %eax
	testl	%eax, %eax
	je	.L91
	movl	$1, %eax
	jmp	.L92
.L91:
	movl	$0, %eax
.L92:
	movl	%eax, st_fragson(%rip)
	movl	$0, st_fragscount(%rip)
	movl	$0, -4(%rbp)
	jmp	.L93
.L96:
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, -4(%rbp)
	je	.L94
	movq	plyr(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$24, %rdx
	movl	4(%rax,%rdx,4), %edx
	movl	st_fragscount(%rip), %eax
	addl	%edx, %eax
	movl	%eax, st_fragscount(%rip)
	jmp	.L95
.L94:
	movl	st_fragscount(%rip), %edx
	movq	plyr(%rip), %rax
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$24, %rcx
	movl	4(%rax,%rcx,4), %eax
	subl	%eax, %edx
	movl	%edx, st_fragscount(%rip)
.L95:
	addl	$1, -4(%rbp)
.L93:
	cmpl	$3, -4(%rbp)
	jle	.L96
	movl	st_msgcounter(%rip), %eax
	subl	$1, %eax
	movl	%eax, st_msgcounter(%rip)
	movl	st_msgcounter(%rip), %eax
	testl	%eax, %eax
	jne	.L98
	movl	st_oldchat(%rip), %eax
	movl	%eax, st_chat(%rip)
.L98:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	ST_updateWidgets, .-ST_updateWidgets
	.globl	ST_Ticker
	.type	ST_Ticker, @function
ST_Ticker:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	st_clock(%rip), %eax
	addl	$1, %eax
	movl	%eax, st_clock(%rip)
	call	M_Random@PLT
	movl	%eax, st_randomnumber(%rip)
	call	ST_updateWidgets
	movq	plyr(%rip), %rax
	movl	36(%rax), %eax
	movl	%eax, st_oldhealth(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	ST_Ticker, .-ST_Ticker
	.local	st_palette
	.comm	st_palette,4,4
	.globl	ST_doPaletteStuff
	.type	ST_doPaletteStuff, @function
ST_doPaletteStuff:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	plyr(%rip), %rax
	movl	232(%rax), %eax
	movl	%eax, -16(%rbp)
	movq	plyr(%rip), %rax
	movl	52(%rax), %eax
	testl	%eax, %eax
	je	.L101
	movq	plyr(%rip), %rax
	movl	52(%rax), %eax
	sarl	$6, %eax
	movl	%eax, %edx
	movl	$12, %eax
	subl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L101
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
.L101:
	cmpl	$0, -16(%rbp)
	je	.L102
	movl	-16(%rbp), %eax
	addl	$7, %eax
	sarl	$3, %eax
	movl	%eax, -20(%rbp)
	cmpl	$7, -20(%rbp)
	jle	.L103
	movl	$7, -20(%rbp)
.L103:
	addl	$1, -20(%rbp)
	jmp	.L104
.L102:
	movq	plyr(%rip), %rax
	movl	236(%rax), %eax
	testl	%eax, %eax
	je	.L105
	movq	plyr(%rip), %rax
	movl	236(%rax), %eax
	addl	$7, %eax
	sarl	$3, %eax
	movl	%eax, -20(%rbp)
	cmpl	$3, -20(%rbp)
	jle	.L106
	movl	$3, -20(%rbp)
.L106:
	addl	$9, -20(%rbp)
	jmp	.L104
.L105:
	movq	plyr(%rip), %rax
	movl	60(%rax), %eax
	cmpl	$128, %eax
	jg	.L107
	movq	plyr(%rip), %rax
	movl	60(%rax), %eax
	andl	$8, %eax
	testl	%eax, %eax
	je	.L108
.L107:
	movl	$13, -20(%rbp)
	jmp	.L104
.L108:
	movl	$0, -20(%rbp)
.L104:
	movl	st_palette(%rip), %eax
	cmpl	%eax, -20(%rbp)
	je	.L110
	movl	-20(%rbp), %eax
	movl	%eax, st_palette(%rip)
	movl	lu_palette(%rip), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, %rcx
	movl	-20(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$8, %eax
	cltq
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	I_SetPalette@PLT
.L110:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	ST_doPaletteStuff, .-ST_doPaletteStuff
	.globl	ST_drawWidgets
	.type	ST_drawWidgets, @function
ST_drawWidgets:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	st_statusbaron(%rip), %eax
	testl	%eax, %eax
	je	.L112
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	jne	.L112
	movl	$1, %eax
	jmp	.L113
.L112:
	movl	$0, %eax
.L113:
	movl	%eax, st_armson(%rip)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L114
	movl	st_statusbaron(%rip), %eax
	testl	%eax, %eax
	je	.L114
	movl	$1, %eax
	jmp	.L115
.L114:
	movl	$0, %eax
.L115:
	movl	%eax, st_fragson(%rip)
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	w_ready(%rip), %rax
	movq	%rax, %rdi
	call	STlib_updateNum@PLT
	movl	$0, -4(%rbp)
	jmp	.L116
.L117:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	leaq	w_ammo(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	STlib_updateNum@PLT
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	leaq	w_maxammo(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	STlib_updateNum@PLT
	addl	$1, -4(%rbp)
.L116:
	cmpl	$3, -4(%rbp)
	jle	.L117
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	w_health(%rip), %rax
	movq	%rax, %rdi
	call	STlib_updatePercent@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	w_armor(%rip), %rax
	movq	%rax, %rdi
	call	STlib_updatePercent@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	w_armsbg(%rip), %rax
	movq	%rax, %rdi
	call	STlib_updateBinIcon@PLT
	movl	$0, -4(%rbp)
	jmp	.L118
.L119:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	leaq	w_arms(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	STlib_updateMultIcon@PLT
	addl	$1, -4(%rbp)
.L118:
	cmpl	$5, -4(%rbp)
	jle	.L119
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	w_faces(%rip), %rax
	movq	%rax, %rdi
	call	STlib_updateMultIcon@PLT
	movl	$0, -4(%rbp)
	jmp	.L120
.L121:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	leaq	w_keyboxes(%rip), %rdx
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	STlib_updateMultIcon@PLT
	addl	$1, -4(%rbp)
.L120:
	cmpl	$2, -4(%rbp)
	jle	.L121
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	w_frags(%rip), %rax
	movq	%rax, %rdi
	call	STlib_updateNum@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	ST_drawWidgets, .-ST_drawWidgets
	.globl	ST_doRefresh
	.type	ST_doRefresh, @function
ST_doRefresh:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, st_firsttime(%rip)
	call	ST_refreshBackground
	movl	$1, %edi
	call	ST_drawWidgets
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	ST_doRefresh, .-ST_doRefresh
	.globl	ST_diffDraw
	.type	ST_diffDraw, @function
ST_diffDraw:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %edi
	call	ST_drawWidgets
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	ST_diffDraw, .-ST_diffDraw
	.globl	ST_Drawer
	.type	ST_Drawer, @function
ST_Drawer:
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
	movl	%esi, -8(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L125
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L126
.L125:
	movl	$1, %eax
	jmp	.L127
.L126:
	movl	$0, %eax
.L127:
	movl	%eax, st_statusbaron(%rip)
	movl	st_firsttime(%rip), %eax
	testl	%eax, %eax
	jne	.L128
	cmpl	$0, -8(%rbp)
	je	.L129
.L128:
	movl	$1, %eax
	jmp	.L130
.L129:
	movl	$0, %eax
.L130:
	movl	%eax, st_firsttime(%rip)
	call	ST_doPaletteStuff
	movl	st_firsttime(%rip), %eax
	testl	%eax, %eax
	je	.L131
	call	ST_doRefresh
	jmp	.L133
.L131:
	call	ST_diffDraw
.L133:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	ST_Drawer, .-ST_Drawer
	.section	.rodata
.LC13:
	.string	"STTNUM%d"
.LC14:
	.string	"STYSNUM%d"
.LC15:
	.string	"STTPRCNT"
.LC16:
	.string	"STKEYS%d"
.LC17:
	.string	"STARMS"
.LC18:
	.string	"STGNUM%d"
.LC19:
	.string	"STFB%d"
.LC20:
	.string	"STBAR"
.LC21:
	.string	"STFST%d%d"
.LC22:
	.string	"STFTR%d0"
.LC23:
	.string	"STFTL%d0"
.LC24:
	.string	"STFOUCH%d"
.LC25:
	.string	"STFEVL%d"
.LC26:
	.string	"STFKILL%d"
.LC27:
	.string	"STFGOD0"
.LC28:
	.string	"STFDEAD0"
	.text
	.globl	ST_loadGraphics
	.type	ST_loadGraphics, @function
ST_loadGraphics:
.LFB11:
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
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$0, -48(%rbp)
	jmp	.L135
.L136:
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC13(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	tallnum(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC14(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	shortnum(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -48(%rbp)
.L135:
	cmpl	$9, -48(%rbp)
	jle	.L136
	movl	$1, %esi
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, tallpercent(%rip)
	movl	$0, -48(%rbp)
	jmp	.L137
.L138:
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC16(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	keys(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -48(%rbp)
.L137:
	cmpl	$5, -48(%rbp)
	jle	.L138
	movl	$1, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, armsbg(%rip)
	movl	$0, -48(%rbp)
	jmp	.L139
.L140:
	movl	-48(%rbp), %eax
	leal	2(%rax), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC18(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	movq	%rdx, %rcx
	salq	$4, %rcx
	leaq	arms(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-48(%rbp), %eax
	addl	$2, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	shortnum(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	movq	%rdx, %rcx
	salq	$4, %rcx
	leaq	8+arms(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -48(%rbp)
.L139:
	cmpl	$5, -48(%rbp)
	jle	.L140
	movl	consoleplayer(%rip), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC19(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, faceback(%rip)
	movl	$1, %esi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, sbar(%rip)
	movl	$0, -40(%rbp)
	movl	$0, -48(%rbp)
	jmp	.L141
.L144:
	movl	$0, -44(%rbp)
	jmp	.L142
.L143:
	movl	-44(%rbp), %ecx
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC21(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -44(%rbp)
.L142:
	cmpl	$2, -44(%rbp)
	jle	.L143
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC22(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC23(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC24(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC25(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-48(%rbp), %edx
	leaq	-33(%rbp), %rax
	leaq	.LC26(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	leaq	-33(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	addl	$1, -48(%rbp)
.L141:
	cmpl	$4, -48(%rbp)
	jle	.L144
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	movl	$1, %esi
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	movl	-40(%rbp), %ebx
	leal	1(%rbx), %eax
	movl	%eax, -40(%rbp)
	movl	$1, %esi
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movslq	%ebx, %rdx
	leaq	0(,%rdx,8), %rcx
	leaq	faces(%rip), %rdx
	movq	%rax, (%rcx,%rdx)
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L145
	call	__stack_chk_fail@PLT
.L145:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	ST_loadGraphics, .-ST_loadGraphics
	.section	.rodata
.LC29:
	.string	"PLAYPAL"
	.text
	.globl	ST_loadData
	.type	ST_loadData, @function
ST_loadData:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	W_GetNumForName@PLT
	movl	%eax, lu_palette(%rip)
	call	ST_loadGraphics
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	ST_loadData, .-ST_loadData
	.section	.rodata
.LC30:
	.string	"Z_CT at st_stuff.c:%i"
	.text
	.globl	ST_unloadGraphics
	.type	ST_unloadGraphics, @function
ST_unloadGraphics:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L148
.L151:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	tallnum(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L149
	movl	$1215, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L149:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	tallnum(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	shortnum(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L150
	movl	$1216, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L150:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	shortnum(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -4(%rbp)
.L148:
	cmpl	$9, -4(%rbp)
	jle	.L151
	movq	tallpercent(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L152
	movl	$1219, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L152:
	movq	tallpercent(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	armsbg(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L153
	movl	$1222, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L153:
	movq	armsbg(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	$0, -4(%rbp)
	jmp	.L154
.L156:
	movl	-4(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	arms(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L155
	movl	$1226, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L155:
	movl	-4(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	arms(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -4(%rbp)
.L154:
	cmpl	$5, -4(%rbp)
	jle	.L156
	movl	$0, -4(%rbp)
	jmp	.L157
.L159:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	keys(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L158
	movl	$1230, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L158:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	keys(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -4(%rbp)
.L157:
	cmpl	$5, -4(%rbp)
	jle	.L159
	movq	sbar(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L160
	movl	$1232, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L160:
	movq	sbar(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movq	faceback(%rip), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L161
	movl	$1233, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L161:
	movq	faceback(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	movl	$0, -4(%rbp)
	jmp	.L162
.L164:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	faces(%rip), %rax
	movq	(%rdx,%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L163
	movl	$1236, %esi
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L163:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	faces(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
	addl	$1, -4(%rbp)
.L162:
	cmpl	$41, -4(%rbp)
	jle	.L164
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	ST_unloadGraphics, .-ST_unloadGraphics
	.globl	ST_unloadData
	.type	ST_unloadData, @function
ST_unloadData:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	ST_unloadGraphics
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	ST_unloadData, .-ST_unloadData
	.globl	ST_initData
	.type	ST_initData, @function
ST_initData:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, st_firsttime(%rip)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, plyr(%rip)
	movl	$0, st_clock(%rip)
	movl	$0, st_chatstate(%rip)
	movl	$1, st_gamestate(%rip)
	movl	$1, st_statusbaron(%rip)
	movl	$0, st_chat(%rip)
	movl	st_chat(%rip), %eax
	movl	%eax, st_oldchat(%rip)
	movl	$0, st_cursoron(%rip)
	movl	$0, st_faceindex(%rip)
	movl	$-1, st_palette(%rip)
	movl	$-1, st_oldhealth(%rip)
	movl	$0, -4(%rbp)
	jmp	.L167
.L168:
	movq	plyr(%rip), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$28, %rdx
	movl	12(%rax,%rdx,4), %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	oldweaponsowned(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -4(%rbp)
.L167:
	cmpl	$8, -4(%rbp)
	jle	.L168
	movl	$0, -4(%rbp)
	jmp	.L169
.L170:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	keyboxes(%rip), %rax
	movl	$-1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L169:
	cmpl	$2, -4(%rbp)
	jle	.L170
	call	STlib_init@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	ST_initData, .-ST_initData
	.globl	ST_createWidgets
	.type	ST_createWidgets, @function
ST_createWidgets:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	plyr(%rip), %rdx
	movq	plyr(%rip), %rax
	movl	116(%rax), %eax
	movl	%eax, %ecx
	movq	%rcx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	salq	$3, %rax
	movq	%rax, %rcx
	leaq	weaponinfo(%rip), %rax
	movl	(%rcx,%rax), %eax
	movl	%eax, %eax
	addq	$40, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	tallnum(%rip), %rax
	movq	%rax, %rcx
	movl	$171, %edx
	movl	$44, %esi
	leaq	w_ready(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	movl	116(%rax), %eax
	movl	%eax, 40+w_ready(%rip)
	movq	tallpercent(%rip), %rax
	movq	plyr(%rip), %rdx
	addq	$36, %rdx
	subq	$8, %rsp
	pushq	%rax
	leaq	st_statusbaron(%rip), %r9
	movq	%rdx, %r8
	leaq	tallnum(%rip), %rax
	movq	%rax, %rcx
	movl	$171, %edx
	movl	$90, %esi
	leaq	w_health(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initPercent@PLT
	addq	$16, %rsp
	movq	armsbg(%rip), %rax
	leaq	st_statusbaron(%rip), %r9
	leaq	st_notdeathmatch(%rip), %r8
	movq	%rax, %rcx
	movl	$168, %edx
	movl	$104, %esi
	leaq	w_armsbg(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initBinIcon@PLT
	movl	$0, -4(%rbp)
	jmp	.L172
.L173:
	movq	plyr(%rip), %rax
	movl	-4(%rbp), %edx
	addl	$1, %edx
	movslq	%edx, %rdx
	addq	$28, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	leaq	12(%rax), %r8
	movl	-4(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	arms(%rip), %rax
	leaq	(%rdx,%rax), %r10
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1431655766, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	leal	172(%rax), %edi
	movl	-4(%rbp), %ecx
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
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$2, %eax
	leal	111(%rax), %esi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	leaq	w_arms(%rip), %rdx
	addq	%rdx, %rax
	leaq	st_armson(%rip), %r9
	movq	%r10, %rcx
	movl	%edi, %edx
	movq	%rax, %rdi
	call	STlib_initMultIcon@PLT
	addl	$1, -4(%rbp)
.L172:
	cmpl	$5, -4(%rbp)
	jle	.L173
	subq	$8, %rsp
	pushq	$2
	leaq	st_fragson(%rip), %r9
	leaq	st_fragscount(%rip), %r8
	leaq	tallnum(%rip), %rax
	movq	%rax, %rcx
	movl	$171, %edx
	movl	$138, %esi
	leaq	w_frags(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	leaq	st_statusbaron(%rip), %r9
	leaq	st_faceindex(%rip), %r8
	leaq	faces(%rip), %rax
	movq	%rax, %rcx
	movl	$168, %edx
	movl	$143, %esi
	leaq	w_faces(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initMultIcon@PLT
	movq	tallpercent(%rip), %rax
	movq	plyr(%rip), %rdx
	addq	$40, %rdx
	subq	$8, %rsp
	pushq	%rax
	leaq	st_statusbaron(%rip), %r9
	movq	%rdx, %r8
	leaq	tallnum(%rip), %rax
	movq	%rax, %rcx
	movl	$171, %edx
	movl	$221, %esi
	leaq	w_armor(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initPercent@PLT
	addq	$16, %rsp
	leaq	st_statusbaron(%rip), %r9
	leaq	keyboxes(%rip), %r8
	leaq	keys(%rip), %rax
	movq	%rax, %rcx
	movl	$171, %edx
	movl	$239, %esi
	leaq	w_keyboxes(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initMultIcon@PLT
	leaq	st_statusbaron(%rip), %r9
	leaq	4+keyboxes(%rip), %r8
	leaq	keys(%rip), %rax
	movq	%rax, %rcx
	movl	$181, %edx
	movl	$239, %esi
	leaq	48+w_keyboxes(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initMultIcon@PLT
	leaq	st_statusbaron(%rip), %r9
	leaq	8+keyboxes(%rip), %r8
	leaq	keys(%rip), %rax
	movq	%rax, %rcx
	movl	$191, %edx
	movl	$239, %esi
	leaq	96+w_keyboxes(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initMultIcon@PLT
	movq	plyr(%rip), %rax
	addq	$160, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$173, %edx
	movl	$288, %esi
	leaq	w_ammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$164, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$179, %edx
	movl	$288, %esi
	leaq	48+w_ammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$168, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$191, %edx
	movl	$288, %esi
	leaq	96+w_ammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$172, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$185, %edx
	movl	$288, %esi
	leaq	144+w_ammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$176, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$173, %edx
	movl	$314, %esi
	leaq	w_maxammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$180, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$179, %edx
	movl	$314, %esi
	leaq	48+w_maxammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$184, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$191, %edx
	movl	$314, %esi
	leaq	96+w_maxammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	movq	plyr(%rip), %rax
	addq	$188, %rax
	subq	$8, %rsp
	pushq	$3
	leaq	st_statusbaron(%rip), %r9
	movq	%rax, %r8
	leaq	shortnum(%rip), %rax
	movq	%rax, %rcx
	movl	$185, %edx
	movl	$314, %esi
	leaq	144+w_maxammo(%rip), %rax
	movq	%rax, %rdi
	call	STlib_initNum@PLT
	addq	$16, %rsp
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	ST_createWidgets, .-ST_createWidgets
	.data
	.align 4
	.type	st_stopped, @object
	.size	st_stopped, 4
st_stopped:
	.long	1
	.text
	.globl	ST_Start
	.type	ST_Start, @function
ST_Start:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	st_stopped(%rip), %eax
	testl	%eax, %eax
	jne	.L175
	call	ST_Stop
.L175:
	call	ST_initData
	call	ST_createWidgets
	movl	$0, st_stopped(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	ST_Start, .-ST_Start
	.globl	ST_Stop
	.type	ST_Stop, @function
ST_Stop:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	st_stopped(%rip), %eax
	testl	%eax, %eax
	jne	.L179
	movl	lu_palette(%rip), %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, %rdi
	call	I_SetPalette@PLT
	movl	$1, st_stopped(%rip)
	jmp	.L176
.L179:
	nop
.L176:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	ST_Stop, .-ST_Stop
	.globl	ST_Init
	.type	ST_Init, @function
ST_Init:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, veryfirsttime(%rip)
	call	ST_loadData
	movl	$0, %edx
	movl	$1, %esi
	movl	$10240, %edi
	call	Z_Malloc@PLT
	movq	%rax, 32+screens(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	ST_Init, .-ST_Init
	.local	buf.5
	.comm	buf.5,52,32
	.data
	.align 4
	.type	oldhealth.4, @object
	.size	oldhealth.4, 4
oldhealth.4:
	.long	-1
	.local	lastcalc.3
	.comm	lastcalc.3,4,4
	.local	priority.2
	.comm	priority.2,4,4
	.align 4
	.type	lastattackdown.1, @object
	.size	lastattackdown.1, 4
lastattackdown.1:
	.long	-1
	.align 4
	.type	largeammo.0, @object
	.size	largeammo.0, 4
largeammo.0:
	.long	1994
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
