	.file	"p_inter.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: p_inter.c,v 1.4 1997/02/03 22:45:11 b1 Exp $"
	.globl	maxammo
	.data
	.align 16
	.type	maxammo, @object
	.size	maxammo, 16
maxammo:
	.long	200
	.long	50
	.long	300
	.long	50
	.globl	clipammo
	.align 16
	.type	clipammo, @object
	.size	clipammo, 16
clipammo:
	.long	10
	.long	4
	.long	20
	.long	1
	.section	.rodata
.LC0:
	.string	"P_GiveAmmo: bad type %i"
	.text
	.globl	P_GiveAmmo
	.type	P_GiveAmmo, @function
P_GiveAmmo:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	cmpl	$5, -28(%rbp)
	jne	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	cmpl	$4, -28(%rbp)
	jbe	.L4
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L4:
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %edx
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %ecx
	addq	$44, %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	%eax, %edx
	jne	.L5
	movl	$0, %eax
	jmp	.L3
.L5:
	cmpl	$0, -32(%rbp)
	je	.L6
	movl	-28(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	clipammo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	-32(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -32(%rbp)
	jmp	.L7
.L6:
	movl	-28(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	clipammo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -32(%rbp)
.L7:
	movl	gameskill(%rip), %eax
	testl	%eax, %eax
	je	.L8
	movl	gameskill(%rip), %eax
	cmpl	$4, %eax
	jne	.L9
.L8:
	sall	-32(%rbp)
.L9:
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %edx
	movl	-32(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %edx
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %ecx
	addq	$44, %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	%eax, %edx
	jle	.L10
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$44, %rdx
	movl	(%rax,%rdx,4), %edx
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %ecx
	addq	$40, %rcx
	movl	%edx, (%rax,%rcx,4)
.L10:
	cmpl	$0, -4(%rbp)
	je	.L11
	movl	$1, %eax
	jmp	.L3
.L11:
	cmpl	$3, -28(%rbp)
	je	.L12
	cmpl	$3, -28(%rbp)
	ja	.L24
	cmpl	$2, -28(%rbp)
	je	.L14
	cmpl	$2, -28(%rbp)
	ja	.L24
	cmpl	$0, -28(%rbp)
	je	.L15
	cmpl	$1, -28(%rbp)
	je	.L16
	jmp	.L24
.L15:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	jne	.L25
	movq	-24(%rbp), %rax
	movl	136(%rax), %eax
	testl	%eax, %eax
	je	.L18
	movq	-24(%rbp), %rax
	movl	$3, 120(%rax)
	jmp	.L25
.L18:
	movq	-24(%rbp), %rax
	movl	$1, 120(%rax)
	jmp	.L25
.L16:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	je	.L20
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$1, %eax
	jne	.L26
.L20:
	movq	-24(%rbp), %rax
	movl	132(%rax), %eax
	testl	%eax, %eax
	je	.L26
	movq	-24(%rbp), %rax
	movl	$2, 120(%rax)
	jmp	.L26
.L14:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	je	.L22
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$1, %eax
	jne	.L27
.L22:
	movq	-24(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	je	.L27
	movq	-24(%rbp), %rax
	movl	$5, 120(%rax)
	jmp	.L27
.L12:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	jne	.L24
	movq	-24(%rbp), %rax
	movl	140(%rax), %eax
	testl	%eax, %eax
	je	.L24
	movq	-24(%rbp), %rax
	movl	$4, 120(%rax)
.L24:
	nop
	jmp	.L19
.L25:
	nop
	jmp	.L19
.L26:
	nop
	jmp	.L19
.L27:
	nop
.L19:
	movl	$1, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_GiveAmmo, .-P_GiveAmmo
	.globl	P_GiveWeapon
	.type	P_GiveWeapon, @function
P_GiveWeapon:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L29
	movl	deathmatch(%rip), %eax
	cmpl	$2, %eax
	je	.L29
	cmpl	$0, -32(%rbp)
	jne	.L29
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$28, %rdx
	movl	12(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L30
	movl	$0, %eax
	jmp	.L31
.L30:
	movq	-24(%rbp), %rax
	movl	236(%rax), %eax
	leal	6(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 236(%rax)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$28, %rdx
	movl	$1, 12(%rax,%rdx,4)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L32
	movl	-28(%rbp), %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	-24(%rbp), %rax
	movl	$5, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	jmp	.L33
.L32:
	movl	-28(%rbp), %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	-24(%rbp), %rax
	movl	$2, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
.L33:
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 120(%rax)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	cmpq	%rax, -24(%rbp)
	jne	.L34
	movl	$33, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L34:
	movl	$0, %eax
	jmp	.L31
.L29:
	movl	-28(%rbp), %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	$5, %eax
	je	.L35
	cmpl	$0, -32(%rbp)
	je	.L36
	movl	-28(%rbp), %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	-24(%rbp), %rax
	movl	$1, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	movl	%eax, -8(%rbp)
	jmp	.L37
.L36:
	movl	-28(%rbp), %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movq	-24(%rbp), %rax
	movl	$2, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	movl	%eax, -8(%rbp)
	jmp	.L37
.L35:
	movl	$0, -8(%rbp)
.L37:
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$28, %rdx
	movl	12(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L38
	movl	$0, -4(%rbp)
	jmp	.L39
.L38:
	movl	$1, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	addq	$28, %rdx
	movl	$1, 12(%rax,%rdx,4)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 120(%rax)
.L39:
	cmpl	$0, -4(%rbp)
	jne	.L40
	cmpl	$0, -8(%rbp)
	je	.L41
.L40:
	movl	$1, %eax
	jmp	.L31
.L41:
	movl	$0, %eax
.L31:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_GiveWeapon, .-P_GiveWeapon
	.globl	P_GiveBody
	.type	P_GiveBody, @function
P_GiveBody:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	$99, %eax
	jle	.L44
	movl	$0, %eax
	jmp	.L45
.L44:
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movl	-12(%rbp), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	$100, %eax
	jle	.L46
	movq	-8(%rbp), %rax
	movl	$100, 36(%rax)
.L46:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movl	36(%rdx), %edx
	movl	%edx, 164(%rax)
	movl	$1, %eax
.L45:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_GiveBody, .-P_GiveBody
	.globl	P_GiveArmor
	.type	P_GiveArmor, @function
P_GiveArmor:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	-28(%rbp), %eax
	imull	$100, %eax, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jg	.L48
	movl	$0, %eax
	jmp	.L49
.L48:
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 44(%rax)
	movq	-24(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, 40(%rax)
	movl	$1, %eax
.L49:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_GiveArmor, .-P_GiveArmor
	.globl	P_GiveCard
	.type	P_GiveCard, @function
P_GiveCard:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	addq	$16, %rdx
	movl	8(%rax,%rdx,4), %eax
	testl	%eax, %eax
	jne	.L53
	movq	-8(%rbp), %rax
	movl	$6, 236(%rax)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	addq	$16, %rdx
	movl	$1, 8(%rax,%rdx,4)
	jmp	.L50
.L53:
	nop
.L50:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_GiveCard, .-P_GiveCard
	.globl	P_GivePower
	.type	P_GivePower, @function
P_GivePower:
.LFB5:
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
	cmpl	$0, -12(%rbp)
	jne	.L55
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$1050, (%rax,%rdx,4)
	movl	$1, %eax
	jmp	.L56
.L55:
	cmpl	$2, -12(%rbp)
	jne	.L57
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$2100, (%rax,%rdx,4)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	orl	$262144, %edx
	movl	%edx, 160(%rax)
	movl	$1, %eax
	jmp	.L56
.L57:
	cmpl	$5, -12(%rbp)
	jne	.L58
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$4200, (%rax,%rdx,4)
	movl	$1, %eax
	jmp	.L56
.L58:
	cmpl	$3, -12(%rbp)
	jne	.L59
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$2100, (%rax,%rdx,4)
	movl	$1, %eax
	jmp	.L56
.L59:
	cmpl	$1, -12(%rbp)
	jne	.L60
	movq	-8(%rbp), %rax
	movl	$100, %esi
	movq	%rax, %rdi
	call	P_GiveBody
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$1, (%rax,%rdx,4)
	movl	$1, %eax
	jmp	.L56
.L60:
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L61
	movl	$0, %eax
	jmp	.L56
.L61:
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	addq	$12, %rdx
	movl	$1, (%rax,%rdx,4)
	movl	$1, %eax
.L56:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_GivePower, .-P_GivePower
	.section	.rodata
.LC1:
	.string	"Picked up the armor."
.LC2:
	.string	"Picked up the MegaArmor!"
.LC3:
	.string	"Picked up a health bonus."
.LC4:
	.string	"Picked up an armor bonus."
.LC5:
	.string	"Supercharge!"
.LC6:
	.string	"MegaSphere!"
.LC7:
	.string	"Picked up a blue keycard."
.LC8:
	.string	"Picked up a yellow keycard."
.LC9:
	.string	"Picked up a red keycard."
.LC10:
	.string	"Picked up a blue skull key."
.LC11:
	.string	"Picked up a yellow skull key."
.LC12:
	.string	"Picked up a red skull key."
.LC13:
	.string	"Picked up a stimpack."
	.align 8
.LC14:
	.string	"Picked up a medikit that you REALLY need!"
.LC15:
	.string	"Picked up a medikit."
.LC16:
	.string	"Invulnerability!"
.LC17:
	.string	"Berserk!"
.LC18:
	.string	"Partial Invisibility"
.LC19:
	.string	"Radiation Shielding Suit"
.LC20:
	.string	"Computer Area Map"
.LC21:
	.string	"Light Amplification Visor"
.LC22:
	.string	"Picked up a clip."
.LC23:
	.string	"Picked up a box of bullets."
.LC24:
	.string	"Picked up a rocket."
.LC25:
	.string	"Picked up a box of rockets."
.LC26:
	.string	"Picked up an energy cell."
	.align 8
.LC27:
	.string	"Picked up an energy cell pack."
.LC28:
	.string	"Picked up 4 shotgun shells."
	.align 8
.LC29:
	.string	"Picked up a box of shotgun shells."
	.align 8
.LC30:
	.string	"Picked up a backpack full of ammo!"
	.align 8
.LC31:
	.string	"You got the BFG9000!  Oh, yes."
.LC32:
	.string	"You got the chaingun!"
.LC33:
	.string	"A chainsaw!  Find some meat!"
.LC34:
	.string	"You got the rocket launcher!"
.LC35:
	.string	"You got the plasma gun!"
.LC36:
	.string	"You got the shotgun!"
.LC37:
	.string	"You got the super shotgun!"
	.align 8
.LC38:
	.string	"P_SpecialThing: Unknown gettable thing"
	.text
	.globl	P_TouchSpecialThing
	.type	P_TouchSpecialThing, @function
P_TouchSpecialThing:
.LFB6:
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
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movq	-48(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	movl	%edx, -12(%rbp)
	movq	-48(%rbp), %rax
	movl	108(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jg	.L158
	cmpl	$-524288, -12(%rbp)
	jl	.L158
	movl	$32, -16(%rbp)
	movq	-48(%rbp), %rax
	movq	192(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-48(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jle	.L159
	movq	-40(%rbp), %rax
	movl	60(%rax), %eax
	subl	$55, %eax
	cmpl	$38, %eax
	ja	.L67
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L69(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L69(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L69:
	.long	.L104-.L69
	.long	.L103-.L69
	.long	.L67-.L69
	.long	.L67-.L69
	.long	.L67-.L69
	.long	.L102-.L69
	.long	.L101-.L69
	.long	.L100-.L69
	.long	.L99-.L69
	.long	.L98-.L69
	.long	.L97-.L69
	.long	.L96-.L69
	.long	.L95-.L69
	.long	.L94-.L69
	.long	.L93-.L69
	.long	.L92-.L69
	.long	.L91-.L69
	.long	.L90-.L69
	.long	.L89-.L69
	.long	.L88-.L69
	.long	.L87-.L69
	.long	.L86-.L69
	.long	.L85-.L69
	.long	.L84-.L69
	.long	.L83-.L69
	.long	.L82-.L69
	.long	.L81-.L69
	.long	.L80-.L69
	.long	.L79-.L69
	.long	.L78-.L69
	.long	.L77-.L69
	.long	.L76-.L69
	.long	.L75-.L69
	.long	.L74-.L69
	.long	.L73-.L69
	.long	.L72-.L69
	.long	.L71-.L69
	.long	.L70-.L69
	.long	.L68-.L69
	.text
.L104:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_GiveArmor
	testl	%eax, %eax
	je	.L160
	movq	-8(%rbp), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L103:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GiveArmor
	testl	%eax, %eax
	je	.L161
	movq	-8(%rbp), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L102:
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	$200, %eax
	jle	.L108
	movq	-8(%rbp), %rax
	movl	$200, 36(%rax)
.L108:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movl	36(%rdx), %edx
	movl	%edx, 164(%rax)
	movq	-8(%rbp), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L101:
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	$200, %eax
	jle	.L109
	movq	-8(%rbp), %rax
	movl	$200, 40(%rax)
.L109:
	movq	-8(%rbp), %rax
	movl	44(%rax), %eax
	testl	%eax, %eax
	jne	.L110
	movq	-8(%rbp), %rax
	movl	$1, 44(%rax)
.L110:
	movq	-8(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L92:
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	leal	100(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	$200, %eax
	jle	.L111
	movq	-8(%rbp), %rax
	movl	$200, 36(%rax)
.L111:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movl	36(%rdx), %edx
	movl	%edx, 164(%rax)
	movq	-8(%rbp), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L88:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L162
	movq	-8(%rbp), %rax
	movl	$200, 36(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movl	36(%rdx), %edx
	movl	%edx, 164(%rax)
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GiveArmor
	movq	-8(%rbp), %rax
	leaq	.LC6(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L100:
	movq	-8(%rbp), %rax
	movl	72(%rax), %eax
	testl	%eax, %eax
	jne	.L113
	movq	-8(%rbp), %rax
	leaq	.LC7(%rip), %rdx
	movq	%rdx, 224(%rax)
.L113:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_GiveCard
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L163
	jmp	.L106
.L98:
	movq	-8(%rbp), %rax
	movl	76(%rax), %eax
	testl	%eax, %eax
	jne	.L115
	movq	-8(%rbp), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rdx, 224(%rax)
.L115:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_GiveCard
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L164
	jmp	.L106
.L99:
	movq	-8(%rbp), %rax
	movl	80(%rax), %eax
	testl	%eax, %eax
	jne	.L117
	movq	-8(%rbp), %rax
	leaq	.LC9(%rip), %rdx
	movq	%rdx, 224(%rax)
.L117:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GiveCard
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L165
	jmp	.L106
.L97:
	movq	-8(%rbp), %rax
	movl	84(%rax), %eax
	testl	%eax, %eax
	jne	.L119
	movq	-8(%rbp), %rax
	leaq	.LC10(%rip), %rdx
	movq	%rdx, 224(%rax)
.L119:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	P_GiveCard
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L166
	jmp	.L106
.L95:
	movq	-8(%rbp), %rax
	movl	88(%rax), %eax
	testl	%eax, %eax
	jne	.L121
	movq	-8(%rbp), %rax
	leaq	.LC11(%rip), %rdx
	movq	%rdx, 224(%rax)
.L121:
	movq	-8(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	P_GiveCard
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L167
	jmp	.L106
.L96:
	movq	-8(%rbp), %rax
	movl	92(%rax), %eax
	testl	%eax, %eax
	jne	.L123
	movq	-8(%rbp), %rax
	leaq	.LC12(%rip), %rdx
	movq	%rdx, 224(%rax)
.L123:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	P_GiveCard
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L168
	jmp	.L106
.L94:
	movq	-8(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	P_GiveBody
	testl	%eax, %eax
	je	.L169
	movq	-8(%rbp), %rax
	leaq	.LC13(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L93:
	movq	-8(%rbp), %rax
	movl	$25, %esi
	movq	%rax, %rdi
	call	P_GiveBody
	testl	%eax, %eax
	je	.L170
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	$24, %eax
	jg	.L127
	movq	-8(%rbp), %rax
	leaq	.LC14(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L127:
	movq	-8(%rbp), %rax
	leaq	.LC15(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L91:
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_GivePower
	testl	%eax, %eax
	je	.L171
	movq	-8(%rbp), %rax
	leaq	.LC16(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L90:
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_GivePower
	testl	%eax, %eax
	je	.L172
	movq	-8(%rbp), %rax
	leaq	.LC17(%rip), %rdx
	movq	%rdx, 224(%rax)
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	testl	%eax, %eax
	je	.L131
	movq	-8(%rbp), %rax
	movl	$0, 120(%rax)
.L131:
	movl	$93, -16(%rbp)
	jmp	.L106
.L89:
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GivePower
	testl	%eax, %eax
	je	.L173
	movq	-8(%rbp), %rax
	leaq	.LC18(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L87:
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	P_GivePower
	testl	%eax, %eax
	je	.L174
	movq	-8(%rbp), %rax
	leaq	.LC19(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L86:
	movq	-8(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	P_GivePower
	testl	%eax, %eax
	je	.L175
	movq	-8(%rbp), %rax
	leaq	.LC20(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L85:
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	P_GivePower
	testl	%eax, %eax
	je	.L176
	movq	-8(%rbp), %rax
	leaq	.LC21(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$93, -16(%rbp)
	jmp	.L106
.L84:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$131072, %eax
	testl	%eax, %eax
	je	.L136
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	jne	.L137
	jmp	.L62
.L136:
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L177
.L137:
	movq	-8(%rbp), %rax
	leaq	.LC22(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L83:
	movq	-8(%rbp), %rax
	movl	$5, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L178
	movq	-8(%rbp), %rax
	leaq	.LC23(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L82:
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L179
	movq	-8(%rbp), %rax
	leaq	.LC24(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L81:
	movq	-8(%rbp), %rax
	movl	$5, %edx
	movl	$3, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L180
	movq	-8(%rbp), %rax
	leaq	.LC25(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L80:
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L181
	movq	-8(%rbp), %rax
	leaq	.LC26(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L79:
	movq	-8(%rbp), %rax
	movl	$5, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L182
	movq	-8(%rbp), %rax
	leaq	.LC27(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L78:
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L183
	movq	-8(%rbp), %rax
	leaq	.LC28(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L77:
	movq	-8(%rbp), %rax
	movl	$5, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	testl	%eax, %eax
	je	.L184
	movq	-8(%rbp), %rax
	leaq	.LC29(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L76:
	movq	-8(%rbp), %rax
	movl	96(%rax), %eax
	testl	%eax, %eax
	jne	.L145
	movl	$0, -20(%rbp)
	jmp	.L146
.L147:
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	$44, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	(%rax,%rax), %ecx
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	$44, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -20(%rbp)
.L146:
	cmpl	$3, -20(%rbp)
	jle	.L147
	movq	-8(%rbp), %rax
	movl	$1, 96(%rax)
.L145:
	movl	$0, -20(%rbp)
	jmp	.L148
.L149:
	movl	-20(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	$1, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_GiveAmmo
	addl	$1, -20(%rbp)
.L148:
	cmpl	$3, -20(%rbp)
	jle	.L149
	movq	-8(%rbp), %rax
	leaq	.LC30(%rip), %rdx
	movq	%rdx, 224(%rax)
	jmp	.L106
.L75:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$6, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L185
	movq	-8(%rbp), %rax
	leaq	.LC31(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L74:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$131072, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L186
	movq	-8(%rbp), %rax
	leaq	.LC32(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L73:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$7, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L187
	movq	-8(%rbp), %rax
	leaq	.LC33(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L72:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$4, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L188
	movq	-8(%rbp), %rax
	leaq	.LC34(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L71:
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$5, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L189
	movq	-8(%rbp), %rax
	leaq	.LC35(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L70:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$131072, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L190
	movq	-8(%rbp), %rax
	leaq	.LC36(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L68:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$131072, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	P_GiveWeapon
	testl	%eax, %eax
	je	.L191
	movq	-8(%rbp), %rax
	leaq	.LC37(%rip), %rdx
	movq	%rdx, 224(%rax)
	movl	$33, -16(%rbp)
	jmp	.L106
.L67:
	leaq	.LC38(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L106:
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$8388608, %eax
	testl	%eax, %eax
	je	.L157
	movq	-8(%rbp), %rax
	movl	212(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 212(%rax)
.L157:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	P_RemoveMobj@PLT
	movq	-8(%rbp), %rax
	movl	236(%rax), %eax
	leal	6(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 236(%rax)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	cmpq	%rax, -8(%rbp)
	jne	.L62
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	jmp	.L62
.L158:
	nop
	jmp	.L62
.L159:
	nop
	jmp	.L62
.L160:
	nop
	jmp	.L62
.L161:
	nop
	jmp	.L62
.L162:
	nop
	jmp	.L62
.L163:
	nop
	jmp	.L62
.L164:
	nop
	jmp	.L62
.L165:
	nop
	jmp	.L62
.L166:
	nop
	jmp	.L62
.L167:
	nop
	jmp	.L62
.L168:
	nop
	jmp	.L62
.L169:
	nop
	jmp	.L62
.L170:
	nop
	jmp	.L62
.L171:
	nop
	jmp	.L62
.L172:
	nop
	jmp	.L62
.L173:
	nop
	jmp	.L62
.L174:
	nop
	jmp	.L62
.L175:
	nop
	jmp	.L62
.L176:
	nop
	jmp	.L62
.L177:
	nop
	jmp	.L62
.L178:
	nop
	jmp	.L62
.L179:
	nop
	jmp	.L62
.L180:
	nop
	jmp	.L62
.L181:
	nop
	jmp	.L62
.L182:
	nop
	jmp	.L62
.L183:
	nop
	jmp	.L62
.L184:
	nop
	jmp	.L62
.L185:
	nop
	jmp	.L62
.L186:
	nop
	jmp	.L62
.L187:
	nop
	jmp	.L62
.L188:
	nop
	jmp	.L62
.L189:
	nop
	jmp	.L62
.L190:
	nop
	jmp	.L62
.L191:
	nop
.L62:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	P_TouchSpecialThing, .-P_TouchSpecialThing
	.globl	P_KillMobj
	.type	P_KillMobj, @function
P_KillMobj:
.LFB7:
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
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-16793605, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-32(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$18, %eax
	je	.L193
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	andb	$-3, %ah
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 160(%rax)
.L193:
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	orl	$1049600, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-32(%rbp), %rax
	movl	108(%rax), %eax
	sarl	$2, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 108(%rax)
	cmpq	$0, -24(%rbp)
	je	.L194
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L194
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4194304, %eax
	testl	%eax, %eax
	je	.L195
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	movl	208(%rax), %edx
	addl	$1, %edx
	movl	%edx, 208(%rax)
.L195:
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L197
	movq	-24(%rbp), %rax
	movq	192(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	192(%rdx), %rcx
	leaq	players(%rip), %rdx
	subq	%rdx, %rcx
	sarq	$6, %rcx
	movabsq	$-3689348814741910323, %rdx
	imulq	%rcx, %rdx
	leaq	24(%rdx), %rcx
	movl	4(%rax,%rcx,4), %ecx
	addl	$1, %ecx
	addq	$24, %rdx
	movl	%ecx, 4(%rax,%rdx,4)
	jmp	.L197
.L194:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L197
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4194304, %eax
	testl	%eax, %eax
	je	.L197
	movl	208+players(%rip), %eax
	addl	$1, %eax
	movl	%eax, 208+players(%rip)
.L197:
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L198
	cmpq	$0, -24(%rbp)
	jne	.L199
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	192(%rdx), %rcx
	leaq	players(%rip), %rdx
	subq	%rdx, %rcx
	sarq	$6, %rcx
	movabsq	$-3689348814741910323, %rdx
	imulq	%rcx, %rdx
	leaq	24(%rdx), %rcx
	movl	4(%rax,%rcx,4), %ecx
	addl	$1, %ecx
	addq	$24, %rdx
	movl	%ecx, 4(%rax,%rdx,4)
.L199:
	movq	-32(%rbp), %rax
	movl	160(%rax), %eax
	andl	$-3, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	movl	$1, 8(%rax)
	movq	-32(%rbp), %rax
	movq	192(%rax), %rax
	movq	%rax, %rdi
	call	P_DropWeapon@PLT
	movq	-32(%rbp), %rax
	movq	192(%rax), %rcx
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	cmpq	%rax, %rcx
	jne	.L198
	movl	automapactive(%rip), %eax
	testl	%eax, %eax
	je	.L198
	call	AM_Stop@PLT
.L198:
	movq	-32(%rbp), %rax
	movl	164(%rax), %edx
	movq	-32(%rbp), %rax
	movq	136(%rax), %rax
	movl	8(%rax), %eax
	negl	%eax
	cmpl	%eax, %edx
	jge	.L200
	movq	-32(%rbp), %rax
	movq	136(%rax), %rax
	movl	52(%rax), %eax
	testl	%eax, %eax
	je	.L200
	movq	-32(%rbp), %rax
	movq	136(%rax), %rax
	movl	52(%rax), %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L201
.L200:
	movq	-32(%rbp), %rax
	movq	136(%rax), %rax
	movl	48(%rax), %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
.L201:
	call	P_Random@PLT
	andl	$3, %eax
	movl	%eax, %ecx
	movq	-32(%rbp), %rax
	movl	144(%rax), %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movq	-32(%rbp), %rax
	movl	%edx, 144(%rax)
	movq	-32(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	jg	.L202
	movq	-32(%rbp), %rax
	movl	$1, 144(%rax)
.L202:
	movq	-32(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$23, %eax
	je	.L203
	cmpl	$23, %eax
	ja	.L209
	cmpl	$10, %eax
	je	.L205
	cmpl	$10, %eax
	ja	.L209
	cmpl	$1, %eax
	je	.L203
	cmpl	$2, %eax
	je	.L206
	jmp	.L209
.L203:
	movl	$63, -12(%rbp)
	jmp	.L207
.L206:
	movl	$77, -12(%rbp)
	jmp	.L207
.L205:
	movl	$73, -12(%rbp)
	nop
.L207:
	movq	-32(%rbp), %rax
	movl	28(%rax), %esi
	movq	-32(%rbp), %rax
	movl	24(%rax), %eax
	movl	-12(%rbp), %edx
	movl	%edx, %ecx
	movl	$-2147483648, %edx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	160(%rax), %eax
	orl	$131072, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 160(%rax)
	jmp	.L192
.L209:
	nop
.L192:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	P_KillMobj, .-P_KillMobj
	.globl	P_DamageMobj
	.type	P_DamageMobj, @function
P_DamageMobj:
.LFB8:
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
	movq	%rdx, -56(%rbp)
	movl	%ecx, -60(%rbp)
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4, %eax
	testl	%eax, %eax
	je	.L232
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jle	.L233
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	je	.L214
	movq	-40(%rbp), %rax
	movl	$0, 120(%rax)
	movq	-40(%rbp), %rax
	movl	120(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-40(%rbp), %rax
	movl	116(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 112(%rax)
.L214:
	movq	-40(%rbp), %rax
	movq	192(%rax), %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L215
	movl	gameskill(%rip), %eax
	testl	%eax, %eax
	jne	.L215
	sarl	-60(%rbp)
.L215:
	cmpq	$0, -48(%rbp)
	je	.L216
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$4096, %eax
	testl	%eax, %eax
	jne	.L216
	cmpq	$0, -56(%rbp)
	je	.L217
	movq	-56(%rbp), %rax
	movq	192(%rax), %rax
	testq	%rax, %rax
	je	.L217
	movq	-56(%rbp), %rax
	movq	192(%rax), %rax
	movl	116(%rax), %eax
	cmpl	$7, %eax
	je	.L216
.L217:
	movq	-40(%rbp), %rax
	movl	28(%rax), %ecx
	movq	-40(%rbp), %rax
	movl	24(%rax), %edx
	movq	-48(%rbp), %rax
	movl	28(%rax), %esi
	movq	-48(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -24(%rbp)
	movl	-60(%rbp), %eax
	imull	$819200, %eax, %eax
	movq	-40(%rbp), %rdx
	movq	136(%rdx), %rdx
	movl	72(%rdx), %edi
	cltd
	idivl	%edi
	movl	%eax, -16(%rbp)
	cmpl	$39, -60(%rbp)
	jg	.L218
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	cmpl	%eax, -60(%rbp)
	jle	.L218
	movq	-40(%rbp), %rax
	movl	32(%rax), %edx
	movq	-48(%rbp), %rax
	movl	32(%rax), %eax
	subl	%eax, %edx
	cmpl	$4194304, %edx
	jle	.L218
	call	P_Random@PLT
	andl	$1, %eax
	testl	%eax, %eax
	je	.L218
	addl	$-2147483648, -24(%rbp)
	sall	$2, -16(%rbp)
.L218:
	shrl	$19, -24(%rbp)
	movq	finecosine(%rip), %rax
	movl	-24(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-16(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-40(%rbp), %rdx
	movl	112(%rdx), %edx
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 112(%rax)
	movl	-24(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-16(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movq	-40(%rbp), %rdx
	movl	116(%rdx), %edx
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 116(%rax)
.L216:
	cmpq	$0, -8(%rbp)
	je	.L219
	movq	-40(%rbp), %rax
	movq	88(%rax), %rax
	movq	(%rax), %rax
	movzwl	14(%rax), %eax
	cmpw	$11, %ax
	jne	.L220
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	cmpl	%eax, -60(%rbp)
	jl	.L220
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	subl	$1, %eax
	movl	%eax, -60(%rbp)
.L220:
	cmpl	$999, -60(%rbp)
	jg	.L221
	movq	-8(%rbp), %rax
	movl	200(%rax), %eax
	andl	$2, %eax
	testl	%eax, %eax
	jne	.L234
	movq	-8(%rbp), %rax
	movl	48(%rax), %eax
	testl	%eax, %eax
	jne	.L234
.L221:
	movq	-8(%rbp), %rax
	movl	44(%rax), %eax
	testl	%eax, %eax
	je	.L223
	movq	-8(%rbp), %rax
	movl	44(%rax), %eax
	cmpl	$1, %eax
	jne	.L224
	movl	-60(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1431655766, %rdx, %rdx
	movq	%rdx, %rcx
	shrq	$32, %rcx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -20(%rbp)
	jmp	.L225
.L224:
	movl	-60(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -20(%rbp)
.L225:
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L226
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, 44(%rax)
.L226:
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	subl	-20(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movl	-20(%rbp), %eax
	subl	%eax, -60(%rbp)
.L223:
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	subl	-60(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	jns	.L227
	movq	-8(%rbp), %rax
	movl	$0, 36(%rax)
.L227:
	movq	-8(%rbp), %rax
	movq	-56(%rbp), %rdx
	movq	%rdx, 240(%rax)
	movq	-8(%rbp), %rax
	movl	232(%rax), %edx
	movl	-60(%rbp), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 232(%rax)
	movq	-8(%rbp), %rax
	movl	232(%rax), %eax
	cmpl	$100, %eax
	jle	.L228
	movq	-8(%rbp), %rax
	movl	$100, 232(%rax)
.L228:
	movl	-60(%rbp), %eax
	movl	$100, %edx
	cmpl	%edx, %eax
	cmovg	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	leaq	players(%rip), %rdx
	addq	%rdx, %rax
	cmpq	%rax, -8(%rbp)
	jne	.L219
	movl	-12(%rbp), %eax
	addl	$20, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movl	$10, %esi
	movl	$40, %edi
	call	I_Tactile@PLT
.L219:
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	subl	-60(%rbp), %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 164(%rax)
	movq	-40(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	jg	.L229
	movq	-40(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_KillMobj
	jmp	.L210
.L229:
	call	P_Random@PLT
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	32(%rax), %eax
	cmpl	%eax, %edx
	jge	.L230
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	andl	$16777216, %eax
	testl	%eax, %eax
	jne	.L230
	movq	-40(%rbp), %rax
	movl	160(%rax), %eax
	orl	$64, %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, 160(%rax)
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	28(%rax), %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
.L230:
	movq	-40(%rbp), %rax
	movl	$0, 184(%rax)
	movq	-40(%rbp), %rax
	movl	188(%rax), %eax
	testl	%eax, %eax
	je	.L231
	movq	-40(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$3, %eax
	jne	.L210
.L231:
	cmpq	$0, -56(%rbp)
	je	.L210
	movq	-56(%rbp), %rax
	cmpq	-40(%rbp), %rax
	je	.L210
	movq	-56(%rbp), %rax
	movl	128(%rax), %eax
	cmpl	$3, %eax
	je	.L210
	movq	-40(%rbp), %rax
	movq	-56(%rbp), %rdx
	movq	%rdx, 176(%rax)
	movq	-40(%rbp), %rax
	movl	$100, 188(%rax)
	movq	-40(%rbp), %rax
	movq	152(%rax), %rcx
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	4(%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	cmpq	%rax, %rcx
	jne	.L210
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	12(%rax), %eax
	testl	%eax, %eax
	je	.L210
	movq	-40(%rbp), %rax
	movq	136(%rax), %rax
	movl	12(%rax), %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	jmp	.L210
.L232:
	nop
	jmp	.L210
.L233:
	nop
	jmp	.L210
.L234:
	nop
.L210:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	P_DamageMobj, .-P_DamageMobj
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
