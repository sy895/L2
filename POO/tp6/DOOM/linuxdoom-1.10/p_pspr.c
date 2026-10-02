	.file	"p_pspr.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: p_pspr.c,v 1.5 1997/02/03 22:45:12 b1 Exp $"
	.text
	.globl	P_SetPsprite
	.type	P_SetPsprite, @function
P_SetPsprite:
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
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	256(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, -16(%rbp)
.L6:
	cmpl	$0, -32(%rbp)
	jne	.L2
	movq	-16(%rbp), %rax
	movq	$0, (%rax)
	jmp	.L3
.L2:
	movl	-32(%rbp), %edx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	testq	%rax, %rax
	je	.L4
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 12(%rax)
	movq	-8(%rbp), %rax
	movq	48(%rax), %rax
	sall	$16, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, 16(%rax)
.L4:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L5
	movq	-8(%rbp), %rax
	movq	24(%rax), %rcx
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	*%rcx
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L7
.L5:
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %eax
	movl	%eax, -32(%rbp)
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	je	.L6
	jmp	.L8
.L7:
	nop
.L3:
.L8:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_SetPsprite, .-P_SetPsprite
	.globl	swingx
	.bss
	.align 4
	.type	swingx, @object
	.size	swingx, 4
swingx:
	.zero	4
	.globl	swingy
	.align 4
	.type	swingy, @object
	.size	swingy, 4
swingy:
	.zero	4
	.text
	.globl	P_CalcSwing
	.type	P_CalcSwing, @function
P_CalcSwing:
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
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -8(%rbp)
	movl	leveltime(%rip), %eax
	imull	$117, %eax, %eax
	andl	$8191, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-8(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	movl	%eax, swingx(%rip)
	movl	leveltime(%rip), %eax
	imull	$117, %eax, %eax
	addl	$4096, %eax
	andl	$8191, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	swingx(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	negl	%eax
	movl	%eax, swingy(%rip)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_CalcSwing, .-P_CalcSwing
	.globl	P_BringUpWeapon
	.type	P_BringUpWeapon, @function
P_BringUpWeapon:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	$10, %eax
	jne	.L11
	movq	-24(%rbp), %rax
	movl	116(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
.L11:
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	$7, %eax
	jne	.L12
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L12:
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	4+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	$10, 120(%rax)
	movq	-24(%rbp), %rax
	movl	$8388608, 280(%rax)
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	P_BringUpWeapon, .-P_BringUpWeapon
	.globl	P_CheckAmmo
	.type	P_CheckAmmo, @function
P_CheckAmmo:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$6, %eax
	jne	.L14
	movl	$40, -8(%rbp)
	jmp	.L15
.L14:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$8, %eax
	jne	.L16
	movl	$2, -8(%rbp)
	jmp	.L15
.L16:
	movl	$1, -8(%rbp)
.L15:
	cmpl	$5, -4(%rbp)
	je	.L17
	movq	-24(%rbp), %rax
	movl	-4(%rbp), %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	%eax, -8(%rbp)
	jg	.L18
.L17:
	movl	$1, %eax
	jmp	.L19
.L18:
	movq	-24(%rbp), %rax
	movl	144(%rax), %eax
	testl	%eax, %eax
	je	.L20
	movq	-24(%rbp), %rax
	movl	168(%rax), %eax
	testl	%eax, %eax
	je	.L20
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	je	.L20
	movq	-24(%rbp), %rax
	movl	$5, 120(%rax)
	jmp	.L21
.L20:
	movq	-24(%rbp), %rax
	movl	156(%rax), %eax
	testl	%eax, %eax
	je	.L22
	movq	-24(%rbp), %rax
	movl	164(%rax), %eax
	cmpl	$2, %eax
	jle	.L22
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L22
	movq	-24(%rbp), %rax
	movl	$8, 120(%rax)
	jmp	.L21
.L22:
	movq	-24(%rbp), %rax
	movl	136(%rax), %eax
	testl	%eax, %eax
	je	.L23
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	testl	%eax, %eax
	je	.L23
	movq	-24(%rbp), %rax
	movl	$3, 120(%rax)
	jmp	.L21
.L23:
	movq	-24(%rbp), %rax
	movl	132(%rax), %eax
	testl	%eax, %eax
	je	.L24
	movq	-24(%rbp), %rax
	movl	164(%rax), %eax
	testl	%eax, %eax
	je	.L24
	movq	-24(%rbp), %rax
	movl	$2, 120(%rax)
	jmp	.L21
.L24:
	movq	-24(%rbp), %rax
	movl	160(%rax), %eax
	testl	%eax, %eax
	je	.L25
	movq	-24(%rbp), %rax
	movl	$1, 120(%rax)
	jmp	.L21
.L25:
	movq	-24(%rbp), %rax
	movl	152(%rax), %eax
	testl	%eax, %eax
	je	.L26
	movq	-24(%rbp), %rax
	movl	$7, 120(%rax)
	jmp	.L21
.L26:
	movq	-24(%rbp), %rax
	movl	140(%rax), %eax
	testl	%eax, %eax
	je	.L27
	movq	-24(%rbp), %rax
	movl	172(%rax), %eax
	testl	%eax, %eax
	je	.L27
	movq	-24(%rbp), %rax
	movl	$4, 120(%rax)
	jmp	.L21
.L27:
	movq	-24(%rbp), %rax
	movl	148(%rax), %eax
	testl	%eax, %eax
	je	.L28
	movq	-24(%rbp), %rax
	movl	168(%rax), %eax
	cmpl	$40, %eax
	jle	.L28
	movl	gamemode(%rip), %eax
	testl	%eax, %eax
	je	.L28
	movq	-24(%rbp), %rax
	movl	$6, 120(%rax)
	jmp	.L21
.L28:
	movq	-24(%rbp), %rax
	movl	$0, 120(%rax)
.L21:
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	$10, %eax
	je	.L18
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	8+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movl	$0, %eax
.L19:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_CheckAmmo, .-P_CheckAmmo
	.globl	P_FireWeapon
	.type	P_FireWeapon, @function
P_FireWeapon:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckAmmo
	testl	%eax, %eax
	je	.L32
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$154, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	16+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	P_NoiseAlert@PLT
	jmp	.L29
.L32:
	nop
.L29:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	P_FireWeapon, .-P_FireWeapon
	.globl	P_DropWeapon
	.type	P_DropWeapon, @function
P_DropWeapon:
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
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	8+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_DropWeapon, .-P_DropWeapon
	.globl	A_WeaponReady
	.type	A_WeaponReady, @function
A_WeaponReady:
.LFB6:
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
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	152(%rax), %rdx
	leaq	8624+states(%rip), %rax
	cmpq	%rax, %rdx
	je	.L35
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	152(%rax), %rdx
	leaq	8680+states(%rip), %rax
	cmpq	%rax, %rdx
	jne	.L36
.L35:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$149, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
.L36:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$7, %eax
	jne	.L37
	movq	-32(%rbp), %rax
	movq	(%rax), %rdx
	leaq	3752+states(%rip), %rax
	cmpq	%rax, %rdx
	jne	.L37
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$11, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
.L37:
	movq	-24(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	$10, %eax
	jne	.L38
	movq	-24(%rbp), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	jne	.L39
.L38:
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	8+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	jmp	.L34
.L39:
	movq	-24(%rbp), %rax
	movzbl	19(%rax), %eax
	movzbl	%al, %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L41
	movq	-24(%rbp), %rax
	movl	192(%rax), %eax
	testl	%eax, %eax
	je	.L42
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$4, %eax
	je	.L43
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	cmpl	$6, %eax
	je	.L43
.L42:
	movq	-24(%rbp), %rax
	movl	$1, 192(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_FireWeapon
	jmp	.L34
.L41:
	movq	-24(%rbp), %rax
	movl	$0, 192(%rax)
.L43:
	movl	leveltime(%rip), %eax
	sall	$7, %eax
	andl	$8064, %eax
	movl	%eax, -8(%rbp)
	movq	finecosine(%rip), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	leal	65536(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 12(%rax)
	andl	$4095, -8(%rbp)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	finesine(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	FixedMul@PLT
	leal	2097152(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 16(%rax)
.L34:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	A_WeaponReady, .-A_WeaponReady
	.globl	A_ReFire
	.type	A_ReFire, @function
A_ReFire:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movzbl	19(%rax), %eax
	movzbl	%al, %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L45
	movq	-8(%rbp), %rax
	movl	120(%rax), %eax
	cmpl	$10, %eax
	jne	.L45
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	je	.L45
	movq	-8(%rbp), %rax
	movl	204(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 204(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_FireWeapon
	jmp	.L46
.L45:
	movq	-8(%rbp), %rax
	movl	$0, 204(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckAmmo
	nop
.L46:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	A_ReFire, .-A_ReFire
	.globl	A_CheckReload
	.type	A_CheckReload, @function
A_CheckReload:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_CheckAmmo
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	A_CheckReload, .-A_CheckReload
	.globl	A_Lower
	.type	A_Lower, @function
A_Lower:
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
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	leal	393216(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$8388607, %eax
	jle	.L53
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$1, %eax
	jne	.L51
	movq	-16(%rbp), %rax
	movl	$8388608, 16(%rax)
	jmp	.L48
.L51:
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	testl	%eax, %eax
	jne	.L52
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	jmp	.L48
.L52:
	movq	-8(%rbp), %rax
	movl	120(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 116(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_BringUpWeapon
	jmp	.L48
.L53:
	nop
.L48:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	A_Lower, .-A_Lower
	.globl	A_Raise
	.type	A_Raise, @function
A_Raise:
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
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	leal	-393216(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$2097152, %eax
	jg	.L57
	movq	-32(%rbp), %rax
	movl	$2097152, 16(%rax)
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	12+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	jmp	.L54
.L57:
	nop
.L54:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	A_Raise, .-A_Raise
	.globl	A_GunFlash
	.type	A_GunFlash, @function
A_GunFlash:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$155, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	20+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	A_GunFlash, .-A_GunFlash
	.globl	A_Punch
	.type	A_Punch, @function
A_Punch:
.LFB12:
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
	movq	%rsi, -48(%rbp)
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	1(%rdx), %eax
	addl	%eax, %eax
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movl	52(%rax), %eax
	testl	%eax, %eax
	je	.L60
	movl	-28(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -28(%rbp)
.L60:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	%eax, -24(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$18, %eax
	addl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %ecx
	movl	$4194304, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-28(%rbp), %ecx
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %esi
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$4194304, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	je	.L62
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	$83, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	linetarget(%rip), %rax
	movl	28(%rax), %ecx
	movq	linetarget(%rip), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movq	-40(%rbp), %rdi
	movq	(%rdi), %rbx
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, 56(%rbx)
.L62:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	A_Punch, .-A_Punch
	.globl	A_Saw
	.type	A_Saw, @function
A_Saw:
.LFB13:
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
	movq	%rsi, -48(%rbp)
	call	P_Random@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	1(%rdx), %eax
	addl	%eax, %eax
	movl	%eax, -28(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	%eax, -24(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$18, %eax
	addl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %ecx
	movl	$4194305, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-28(%rbp), %ecx
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %esi
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$4194305, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	jne	.L64
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	$12, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	jmp	.L63
.L64:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	$13, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	linetarget(%rip), %rax
	movl	28(%rax), %ecx
	movq	linetarget(%rip), %rax
	movl	24(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	28(%rax), %esi
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	24(%rax), %eax
	movl	%eax, %edi
	call	R_PointToAngle2@PLT
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	cmpl	$-2147483648, %edx
	jbe	.L66
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	cmpl	$-53687092, %edx
	ja	.L67
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	addl	$51130563, %edx
	movl	%edx, 56(%rax)
	jmp	.L68
.L67:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	subl	$53687091, %edx
	movl	%edx, 56(%rax)
	jmp	.L68
.L66:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	cmpl	$53687091, %edx
	jbe	.L69
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	subl	$51130563, %edx
	movl	%edx, 56(%rax)
	jmp	.L68
.L69:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addl	$53687091, %edx
	movl	%edx, 56(%rax)
.L68:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	160(%rax), %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	orb	$-128, %dl
	movl	%edx, 160(%rax)
.L63:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	A_Saw, .-A_Saw
	.globl	A_FireMissile
	.type	A_FireMissile, @function
A_FireMissile:
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
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	-1(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$33, %esi
	movq	%rax, %rdi
	call	P_SpawnPlayerMissile@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	A_FireMissile, .-A_FireMissile
	.globl	A_FireBFG
	.type	A_FireBFG, @function
A_FireBFG:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %edx
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %ecx
	movq	%rcx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	salq	$3, %rax
	movq	%rax, %rcx
	leaq	weaponinfo(%rip), %rax
	movl	(%rcx,%rax), %esi
	leal	-40(%rdx), %ecx
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	P_SpawnPlayerMissile@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	A_FireBFG, .-A_FireBFG
	.globl	A_FirePlasma
	.type	A_FirePlasma, @function
A_FirePlasma:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	-24(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	-1(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	20+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %ebx
	call	P_Random@PLT
	andl	$1, %eax
	addl	%ebx, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$34, %esi
	movq	%rax, %rdi
	call	P_SpawnPlayerMissile@PLT
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	A_FirePlasma, .-A_FirePlasma
	.globl	bulletslope
	.bss
	.align 4
	.type	bulletslope, @object
	.size	bulletslope, 4
bulletslope:
	.zero	4
	.text
	.globl	P_BulletSlope
	.type	P_BulletSlope, @function
P_BulletSlope:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, bulletslope(%rip)
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	jne	.L75
	addl	$67108864, -4(%rbp)
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, bulletslope(%rip)
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	jne	.L75
	subl	$134217728, -4(%rbp)
	movl	-4(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movl	%eax, bulletslope(%rip)
.L75:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	P_BulletSlope, .-P_BulletSlope
	.globl	P_GunShot
	.type	P_GunShot, @function
P_GunShot:
.LFB18:
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
	movl	%esi, -44(%rbp)
	call	P_Random@PLT
	movl	%eax, %ecx
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
	addl	$1, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movl	56(%rax), %eax
	movl	%eax, -24(%rbp)
	cmpl	$0, -44(%rbp)
	jne	.L77
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$18, %eax
	addl	%eax, -24(%rbp)
.L77:
	movl	bulletslope(%rip), %edx
	movl	-20(%rbp), %ecx
	movl	-24(%rbp), %esi
	movq	-40(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$134217728, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	P_GunShot, .-P_GunShot
	.globl	A_FirePistol
	.type	A_FirePistol, @function
A_FirePistol:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$155, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	-1(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	20+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	P_BulletSlope
	movq	-8(%rbp), %rax
	movl	204(%rax), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_GunShot
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	A_FirePistol, .-A_FirePistol
	.globl	A_FireShotgun
	.type	A_FireShotgun, @function
A_FireShotgun:
.LFB20:
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
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$155, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	-24(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	-1(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-24(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	20+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	P_BulletSlope
	movl	$0, -4(%rbp)
	jmp	.L80
.L81:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	P_GunShot
	addl	$1, -4(%rbp)
.L80:
	cmpl	$6, -4(%rbp)
	jle	.L81
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	A_FireShotgun, .-A_FireShotgun
	.globl	A_FireShotgun2
	.type	A_FireShotgun2, @function
A_FireShotgun2:
.LFB21:
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
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	$155, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %edx
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %ecx
	movq	%rcx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	salq	$3, %rax
	movq	%rax, %rcx
	leaq	weaponinfo(%rip), %rax
	movl	(%rcx,%rax), %esi
	leal	-2(%rdx), %ecx
	movq	-40(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-40(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	20+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	P_BulletSlope
	movl	$0, -28(%rbp)
	jmp	.L83
.L84:
	call	P_Random@PLT
	movl	%eax, %ecx
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
	addl	$1, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	56(%rax), %eax
	movl	%eax, -20(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	movl	%edx, %eax
	sall	$19, %eax
	addl	%eax, -20(%rbp)
	call	P_Random@PLT
	movl	%eax, %ebx
	call	P_Random@PLT
	subl	%eax, %ebx
	movl	%ebx, %edx
	sall	$5, %edx
	movl	bulletslope(%rip), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %ecx
	movl	-20(%rbp), %esi
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$134217728, %edx
	movq	%rax, %rdi
	call	P_LineAttack@PLT
	addl	$1, -28(%rbp)
.L83:
	cmpl	$19, -28(%rbp)
	jle	.L84
	nop
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	A_FireShotgun2, .-A_FireShotgun2
	.globl	A_FireCGun
	.type	A_FireCGun, @function
A_FireCGun:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L88
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$155, %esi
	movq	%rax, %rdi
	call	P_SetMobjState@PLT
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	-1(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	%esi, %edx
	addq	$40, %rdx
	movl	%ecx, (%rax,%rdx,4)
	movq	-16(%rbp), %rax
	movq	(%rax), %rcx
	movq	-8(%rbp), %rax
	movl	116(%rax), %eax
	movl	%eax, %edx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	leaq	20+weaponinfo(%rip), %rax
	movl	(%rdx,%rax), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rcx,%rax), %rdx
	leaq	2912+states(%rip), %rax
	subq	%rax, %rdx
	sarq	$3, %rdx
	movabsq	$7905747460161236407, %rax
	imulq	%rdx, %rax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	P_BulletSlope
	movq	-8(%rbp), %rax
	movl	204(%rax), %eax
	testl	%eax, %eax
	sete	%al
	movzbl	%al, %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_GunShot
	jmp	.L85
.L88:
	nop
.L85:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	A_FireCGun, .-A_FireCGun
	.globl	A_Light0
	.type	A_Light0, @function
A_Light0:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, 248(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	A_Light0, .-A_Light0
	.globl	A_Light1
	.type	A_Light1, @function
A_Light1:
.LFB24:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	$1, 248(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	A_Light1, .-A_Light1
	.globl	A_Light2
	.type	A_Light2, @function
A_Light2:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	$2, 248(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	A_Light2, .-A_Light2
	.globl	A_BFGSpray
	.type	A_BFGSpray, @function
A_BFGSpray:
.LFB26:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L93
.L98:
	movq	-24(%rbp), %rax
	movl	56(%rax), %eax
	movl	-16(%rbp), %edx
	imull	$26843545, %edx, %edx
	addl	%edx, %eax
	subl	$536870912, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	176(%rax), %rax
	movl	-4(%rbp), %ecx
	movl	$67108864, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_AimLineAttack@PLT
	movq	linetarget(%rip), %rax
	testq	%rax, %rax
	je	.L99
	movq	linetarget(%rip), %rax
	movl	32(%rax), %edx
	movq	linetarget(%rip), %rax
	movl	108(%rax), %eax
	sarl	$2, %eax
	addl	%eax, %edx
	movq	linetarget(%rip), %rax
	movl	28(%rax), %esi
	movq	linetarget(%rip), %rax
	movl	24(%rax), %eax
	movl	$42, %ecx
	movl	%eax, %edi
	call	P_SpawnMobj@PLT
	movl	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L96
.L97:
	call	P_Random@PLT
	andl	$7, %eax
	addl	$1, %eax
	addl	%eax, -8(%rbp)
	addl	$1, -12(%rbp)
.L96:
	cmpl	$14, -12(%rbp)
	jle	.L97
	movq	-24(%rbp), %rax
	movq	176(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	176(%rax), %rsi
	movq	linetarget(%rip), %rax
	movl	-8(%rbp), %ecx
	movq	%rax, %rdi
	call	P_DamageMobj@PLT
	jmp	.L95
.L99:
	nop
.L95:
	addl	$1, -16(%rbp)
.L93:
	cmpl	$39, -16(%rbp)
	jle	.L98
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	A_BFGSpray, .-A_BFGSpray
	.globl	A_BFGsound
	.type	A_BFGsound, @function
A_BFGsound:
.LFB27:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	$9, %esi
	movq	%rax, %rdi
	call	S_StartSound@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	A_BFGsound, .-A_BFGsound
	.globl	P_SetupPsprites
	.type	P_SetupPsprites, @function
P_SetupPsprites:
.LFB28:
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
	jmp	.L102
.L103:
	movq	-24(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	addq	$264, %rax
	movq	$0, (%rax)
	addl	$1, -4(%rbp)
.L102:
	cmpl	$1, -4(%rbp)
	jle	.L103
	movq	-24(%rbp), %rax
	movl	116(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 120(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	P_BringUpWeapon
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	P_SetupPsprites, .-P_SetupPsprites
	.globl	P_MovePsprites
	.type	P_MovePsprites, @function
P_MovePsprites:
.LFB29:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	addq	$264, %rax
	movq	%rax, -16(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L105
.L107:
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L106
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$-1, %eax
	je	.L106
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	leal	-1(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	jne	.L106
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movl	32(%rax), %edx
	movl	-20(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	P_SetPsprite
.L106:
	addl	$1, -20(%rbp)
	addq	$24, -16(%rbp)
.L105:
	cmpl	$1, -20(%rbp)
	jle	.L107
	movq	-40(%rbp), %rax
	movl	276(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 300(%rax)
	movq	-40(%rbp), %rax
	movl	280(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 304(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE29:
	.size	P_MovePsprites, .-P_MovePsprites
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
