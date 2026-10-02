	.file	"p_lights.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: p_lights.c,v 1.5 1997/02/03 22:45:11 b1 Exp $"
	.text
	.globl	T_FireFlicker
	.type	T_FireFlicker, @function
T_FireFlicker:
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
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	leal	-1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	jne	.L6
	call	P_Random@PLT
	andl	$3, %eax
	sall	$4, %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	cwtl
	subl	-4(%rbp), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	%eax, %edx
	jge	.L4
	movq	-24(%rbp), %rax
	movl	40(%rax), %edx
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	jmp	.L5
.L4:
	movq	-24(%rbp), %rax
	movl	36(%rax), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
.L5:
	movq	-24(%rbp), %rax
	movl	$4, 32(%rax)
	jmp	.L1
.L6:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	T_FireFlicker, .-T_FireFlicker
	.globl	P_SpawnFireFlicker
	.type	P_SpawnFireFlicker, @function
P_SpawnFireFlicker:
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
	movw	$0, 14(%rax)
	movl	$0, %edx
	movl	$51, %esi
	movl	$48, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-8(%rbp), %rax
	leaq	T_FireFlicker(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindMinSurroundingLight@PLT
	leal	16(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$4, 32(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	P_SpawnFireFlicker, .-P_SpawnFireFlicker
	.globl	T_LightFlash
	.type	T_LightFlash, @function
T_LightFlash:
.LFB2:
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
	movl	32(%rax), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	jne	.L12
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	%eax, %edx
	jne	.L11
	movq	-8(%rbp), %rax
	movl	40(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	call	P_Random@PLT
	movq	-8(%rbp), %rdx
	movl	48(%rdx), %edx
	andl	%edx, %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L8
.L11:
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	call	P_Random@PLT
	movq	-8(%rbp), %rdx
	movl	44(%rdx), %edx
	andl	%edx, %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L8
.L12:
	nop
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	T_LightFlash, .-T_LightFlash
	.globl	P_SpawnLightFlash
	.type	P_SpawnLightFlash, @function
P_SpawnLightFlash:
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
	movw	$0, 14(%rax)
	movl	$0, %edx
	movl	$51, %esi
	movl	$56, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-8(%rbp), %rax
	leaq	T_LightFlash(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindMinSurroundingLight@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 40(%rdx)
	movq	-8(%rbp), %rax
	movl	$64, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$7, 48(%rax)
	call	P_Random@PLT
	movq	-8(%rbp), %rdx
	movl	44(%rdx), %edx
	andl	%edx, %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	P_SpawnLightFlash, .-P_SpawnLightFlash
	.globl	T_StrobeFlash
	.type	T_StrobeFlash, @function
T_StrobeFlash:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	jne	.L18
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	%eax, %edx
	jne	.L17
	movq	-8(%rbp), %rax
	movl	40(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	movq	-8(%rbp), %rax
	movl	48(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L14
.L17:
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	movq	-8(%rbp), %rax
	movl	44(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L14
.L18:
	nop
.L14:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	T_StrobeFlash, .-T_StrobeFlash
	.globl	P_SpawnStrobeFlash
	.type	P_SpawnStrobeFlash, @function
P_SpawnStrobeFlash:
.LFB5:
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
	movl	$0, %edx
	movl	$51, %esi
	movl	$56, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 44(%rax)
	movq	-8(%rbp), %rax
	movl	$5, 48(%rax)
	movq	-8(%rbp), %rax
	leaq	T_StrobeFlash(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindMinSurroundingLight@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 36(%rdx)
	movq	-8(%rbp), %rax
	movl	36(%rax), %edx
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	%eax, %edx
	jne	.L20
	movq	-8(%rbp), %rax
	movl	$0, 36(%rax)
.L20:
	movq	-24(%rbp), %rax
	movw	$0, 14(%rax)
	cmpl	$0, -32(%rbp)
	jne	.L21
	call	P_Random@PLT
	andl	$7, %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 32(%rax)
	jmp	.L23
.L21:
	movq	-8(%rbp), %rax
	movl	$1, 32(%rax)
.L23:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	P_SpawnStrobeFlash, .-P_SpawnStrobeFlash
	.globl	EV_StartLightStrobing
	.type	EV_StartLightStrobing, @function
EV_StartLightStrobing:
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
	movl	$-1, -12(%rbp)
	jmp	.L25
.L28:
	movq	sectors(%rip), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	104(%rax), %rax
	testq	%rax, %rax
	jne	.L29
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movl	$35, %esi
	movq	%rax, %rdi
	call	P_SpawnStrobeFlash
	jmp	.L25
.L29:
	nop
.L25:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindSectorFromLineTag@PLT
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L28
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	EV_StartLightStrobing, .-EV_StartLightStrobing
	.globl	EV_TurnTagLightsOff
	.type	EV_TurnTagLightsOff, @function
EV_TurnTagLightsOff:
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
	movq	sectors(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$0, -32(%rbp)
	jmp	.L31
.L37:
	movq	-24(%rbp), %rax
	movzwl	16(%rax), %edx
	movq	-56(%rbp), %rax
	movzwl	28(%rax), %eax
	cmpw	%ax, %dx
	jne	.L32
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	movl	%eax, -28(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L33
.L36:
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L38
	movq	-8(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -28(%rbp)
	jle	.L35
	movq	-8(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	movl	%eax, -28(%rbp)
	jmp	.L35
.L38:
	nop
.L35:
	addl	$1, -36(%rbp)
.L33:
	movq	-24(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L36
	movl	-28(%rbp), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movw	%dx, 12(%rax)
.L32:
	addl	$1, -32(%rbp)
	subq	$-128, -24(%rbp)
.L31:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -32(%rbp)
	jl	.L37
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	EV_TurnTagLightsOff, .-EV_TurnTagLightsOff
	.globl	EV_LightTurnOn
	.type	EV_LightTurnOn, @function
EV_LightTurnOn:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movq	sectors(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$0, -32(%rbp)
	jmp	.L40
.L47:
	movq	-24(%rbp), %rax
	movzwl	16(%rax), %edx
	movq	-40(%rbp), %rax
	movzwl	28(%rax), %eax
	cmpw	%ax, %dx
	jne	.L41
	cmpl	$0, -44(%rbp)
	jne	.L42
	movl	$0, -28(%rbp)
	jmp	.L43
.L46:
	movq	-24(%rbp), %rax
	movq	120(%rax), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	getNextSector@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L48
	movq	-8(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	cmpl	%eax, -44(%rbp)
	jge	.L45
	movq	-8(%rbp), %rax
	movzwl	12(%rax), %eax
	cwtl
	movl	%eax, -44(%rbp)
	jmp	.L45
.L48:
	nop
.L45:
	addl	$1, -28(%rbp)
.L43:
	movq	-24(%rbp), %rax
	movl	112(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L46
.L42:
	movl	-44(%rbp), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movw	%dx, 12(%rax)
.L41:
	addl	$1, -32(%rbp)
	subq	$-128, -24(%rbp)
.L40:
	movl	numsectors(%rip), %eax
	cmpl	%eax, -32(%rbp)
	jl	.L47
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	EV_LightTurnOn, .-EV_LightTurnOn
	.globl	T_Glow
	.type	T_Glow, @function
T_Glow:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	cmpl	$-1, %eax
	je	.L50
	cmpl	$1, %eax
	je	.L51
	jmp	.L57
.L50:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	leal	-8(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	%eax, %edx
	jg	.L55
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	leal	8(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 40(%rax)
	jmp	.L55
.L51:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	leal	8(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	36(%rax), %eax
	cmpl	%eax, %edx
	jl	.L56
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movzwl	12(%rax), %eax
	leal	-8(%rax), %edx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movw	%dx, 12(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 40(%rax)
	jmp	.L56
.L55:
	nop
	jmp	.L57
.L56:
	nop
.L57:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	T_Glow, .-T_Glow
	.globl	P_SpawnGlowingLight
	.type	P_SpawnGlowingLight, @function
P_SpawnGlowingLight:
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
	movl	$0, %edx
	movl	$51, %esi
	movl	$48, %edi
	call	Z_Malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	P_AddThinker@PLT
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	P_FindMinSurroundingLight@PLT
	movq	-8(%rbp), %rdx
	movl	%eax, 32(%rdx)
	movq	-24(%rbp), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 36(%rax)
	movq	-8(%rbp), %rax
	leaq	T_Glow(%rip), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movl	$-1, 40(%rax)
	movq	-24(%rbp), %rax
	movw	$0, 14(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	P_SpawnGlowingLight, .-P_SpawnGlowingLight
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
