	.file	"d_net.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 48
rcsid:
	.string	"$Id: d_net.c,v 1.3 1997/02/03 22:01:47 b1 Exp $"
	.globl	doomcom
	.bss
	.align 8
	.type	doomcom, @object
	.size	doomcom, 8
doomcom:
	.zero	8
	.globl	netbuffer
	.align 8
	.type	netbuffer, @object
	.size	netbuffer, 8
netbuffer:
	.zero	8
	.globl	localcmds
	.align 32
	.type	localcmds, @object
	.size	localcmds, 96
localcmds:
	.zero	96
	.globl	netcmds
	.align 32
	.type	netcmds, @object
	.size	netcmds, 384
netcmds:
	.zero	384
	.globl	nettics
	.align 32
	.type	nettics, @object
	.size	nettics, 32
nettics:
	.zero	32
	.globl	nodeingame
	.align 32
	.type	nodeingame, @object
	.size	nodeingame, 32
nodeingame:
	.zero	32
	.globl	remoteresend
	.align 32
	.type	remoteresend, @object
	.size	remoteresend, 32
remoteresend:
	.zero	32
	.globl	resendto
	.align 32
	.type	resendto, @object
	.size	resendto, 32
resendto:
	.zero	32
	.globl	resendcount
	.align 32
	.type	resendcount, @object
	.size	resendcount, 32
resendcount:
	.zero	32
	.globl	nodeforplayer
	.align 16
	.type	nodeforplayer, @object
	.size	nodeforplayer, 16
nodeforplayer:
	.zero	16
	.globl	maketic
	.align 4
	.type	maketic, @object
	.size	maketic, 4
maketic:
	.zero	4
	.globl	lastnettic
	.align 4
	.type	lastnettic, @object
	.size	lastnettic, 4
lastnettic:
	.zero	4
	.globl	skiptics
	.align 4
	.type	skiptics, @object
	.size	skiptics, 4
skiptics:
	.zero	4
	.globl	ticdup
	.align 4
	.type	ticdup, @object
	.size	ticdup, 4
ticdup:
	.zero	4
	.globl	maxsend
	.align 4
	.type	maxsend, @object
	.size	maxsend, 4
maxsend:
	.zero	4
	.globl	reboundpacket
	.align 4
	.type	reboundpacket, @object
	.size	reboundpacket, 4
reboundpacket:
	.zero	4
	.globl	reboundstore
	.align 32
	.type	reboundstore, @object
	.size	reboundstore, 104
reboundstore:
	.zero	104
	.text
	.globl	NetbufferSize
	.type	NetbufferSize, @function
NetbufferSize:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	salq	$3, %rax
	addq	$8, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	NetbufferSize, .-NetbufferSize
	.globl	NetbufferChecksum
	.type	NetbufferChecksum, @function
NetbufferChecksum:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$19088743, -4(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	NetbufferChecksum, .-NetbufferChecksum
	.section	.rodata
	.align 8
.LC0:
	.string	"ExpandTics: strange value %i at maketic %i"
	.text
	.globl	ExpandTics
	.type	ExpandTics, @function
ExpandTics:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	maketic(%rip), %eax
	movzbl	%al, %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -4(%rbp)
	cmpl	$-64, -4(%rbp)
	jl	.L6
	cmpl	$64, -4(%rbp)
	jg	.L6
	movl	maketic(%rip), %eax
	movb	$0, %al
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	jmp	.L7
.L6:
	cmpl	$64, -4(%rbp)
	jle	.L8
	movl	maketic(%rip), %eax
	movb	$0, %al
	leal	-256(%rax), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	jmp	.L7
.L8:
	cmpl	$-64, -4(%rbp)
	jge	.L9
	movl	maketic(%rip), %eax
	movb	$0, %al
	leal	256(%rax), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	jmp	.L7
.L9:
	movl	maketic(%rip), %edx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	movl	$0, %eax
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	ExpandTics, .-ExpandTics
	.section	.rodata
	.align 8
.LC1:
	.string	"Tried to transmit to another node"
.LC2:
	.string	"send (%i + %i, R %i) [%i] "
.LC3:
	.string	"%i "
	.text
	.globl	HSendPacket
	.type	HSendPacket, @function
HSendPacket:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	call	NetbufferChecksum
	movl	%eax, %edx
	movl	-40(%rbp), %ecx
	movq	netbuffer(%rip), %rax
	orl	%ecx, %edx
	movl	%edx, (%rax)
	cmpl	$0, -36(%rbp)
	jne	.L11
	movq	netbuffer(%rip), %rax
	movq	(%rax), %rcx
	movq	8(%rax), %rbx
	movq	%rcx, reboundstore(%rip)
	movq	%rbx, 8+reboundstore(%rip)
	movq	16(%rax), %rcx
	movq	24(%rax), %rbx
	movq	%rcx, 16+reboundstore(%rip)
	movq	%rbx, 24+reboundstore(%rip)
	movq	32(%rax), %rcx
	movq	40(%rax), %rbx
	movq	%rcx, 32+reboundstore(%rip)
	movq	%rbx, 40+reboundstore(%rip)
	movq	48(%rax), %rcx
	movq	56(%rax), %rbx
	movq	%rcx, 48+reboundstore(%rip)
	movq	%rbx, 56+reboundstore(%rip)
	movq	64(%rax), %rcx
	movq	72(%rax), %rbx
	movq	%rcx, 64+reboundstore(%rip)
	movq	%rbx, 72+reboundstore(%rip)
	movq	80(%rax), %rcx
	movq	88(%rax), %rbx
	movq	%rcx, 80+reboundstore(%rip)
	movq	%rbx, 88+reboundstore(%rip)
	movq	96(%rax), %rax
	movq	%rax, 96+reboundstore(%rip)
	movl	$1, reboundpacket(%rip)
	jmp	.L10
.L11:
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L20
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L14
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L14:
	movq	doomcom(%rip), %rax
	movw	$1, 10(%rax)
	movq	doomcom(%rip), %rax
	movl	-36(%rbp), %edx
	movw	%dx, 12(%rax)
	call	NetbufferSize
	movl	%eax, %edx
	movq	doomcom(%rip), %rax
	movw	%dx, 14(%rax)
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L15
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$1073741824, %eax
	testl	%eax, %eax
	je	.L16
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	ExpandTics
	movl	%eax, -20(%rbp)
	jmp	.L17
.L16:
	movl	$-1, -20(%rbp)
.L17:
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	movswl	%ax, %r12d
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %ebx
	movq	netbuffer(%rip), %rax
	movzbl	5(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	ExpandTics
	movl	%eax, %edx
	movq	debugfile(%rip), %rax
	movl	-20(%rbp), %ecx
	movl	%r12d, %r9d
	movl	%ecx, %r8d
	movl	%ebx, %ecx
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movl	$0, -24(%rbp)
	jmp	.L18
.L19:
	movq	netbuffer(%rip), %rdx
	movl	-24(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movq	debugfile(%rip), %rax
	leaq	.LC3(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addl	$1, -24(%rbp)
.L18:
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	cwtl
	cmpl	%eax, -24(%rbp)
	jl	.L19
	movq	debugfile(%rip), %rax
	movq	%rax, %rsi
	movl	$10, %edi
	call	fputc@PLT
.L15:
	call	I_NetCmd@PLT
	jmp	.L10
.L20:
	nop
.L10:
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	HSendPacket, .-HSendPacket
	.section	.rodata
.LC4:
	.string	"bad packet length %i\n"
.LC5:
	.string	"bad packet checksum\n"
.LC6:
	.string	"setup packet\n"
.LC7:
	.string	"get %i = (%i + %i, R %i)[%i] "
	.text
	.globl	HGetPacket
	.type	HGetPacket, @function
HGetPacket:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movl	reboundpacket(%rip), %eax
	testl	%eax, %eax
	je	.L22
	movq	netbuffer(%rip), %rax
	movq	reboundstore(%rip), %rcx
	movq	8+reboundstore(%rip), %rbx
	movq	%rcx, (%rax)
	movq	%rbx, 8(%rax)
	movq	16+reboundstore(%rip), %rcx
	movq	24+reboundstore(%rip), %rbx
	movq	%rcx, 16(%rax)
	movq	%rbx, 24(%rax)
	movq	32+reboundstore(%rip), %rcx
	movq	40+reboundstore(%rip), %rbx
	movq	%rcx, 32(%rax)
	movq	%rbx, 40(%rax)
	movq	48+reboundstore(%rip), %rcx
	movq	56+reboundstore(%rip), %rbx
	movq	%rcx, 48(%rax)
	movq	%rbx, 56(%rax)
	movq	64+reboundstore(%rip), %rcx
	movq	72+reboundstore(%rip), %rbx
	movq	%rcx, 64(%rax)
	movq	%rbx, 72(%rax)
	movq	80+reboundstore(%rip), %rcx
	movq	88+reboundstore(%rip), %rbx
	movq	%rcx, 80(%rax)
	movq	%rbx, 88(%rax)
	movq	96+reboundstore(%rip), %rdx
	movq	%rdx, 96(%rax)
	movq	doomcom(%rip), %rax
	movw	$0, 12(%rax)
	movl	$0, reboundpacket(%rip)
	movl	$1, %eax
	jmp	.L23
.L22:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	jne	.L24
	movl	$0, %eax
	jmp	.L23
.L24:
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	je	.L25
	movl	$0, %eax
	jmp	.L23
.L25:
	movq	doomcom(%rip), %rax
	movw	$2, 10(%rax)
	call	I_NetCmd@PLT
	movq	doomcom(%rip), %rax
	movzwl	12(%rax), %eax
	cmpw	$-1, %ax
	jne	.L26
	movl	$0, %eax
	jmp	.L23
.L26:
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	movswl	%ax, %ebx
	call	NetbufferSize
	cmpl	%eax, %ebx
	je	.L27
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L28
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	movswl	%ax, %edx
	movq	debugfile(%rip), %rax
	leaq	.LC4(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
.L28:
	movl	$0, %eax
	jmp	.L23
.L27:
	call	NetbufferChecksum
	movq	netbuffer(%rip), %rdx
	movl	(%rdx), %edx
	andl	$268435455, %edx
	cmpl	%edx, %eax
	je	.L29
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L30
	movq	debugfile(%rip), %rax
	movq	%rax, %rcx
	movl	$20, %edx
	movl	$1, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
.L30:
	movl	$0, %eax
	jmp	.L23
.L29:
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L31
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$536870912, %eax
	testl	%eax, %eax
	je	.L32
	movq	debugfile(%rip), %rax
	movq	%rax, %rcx
	movl	$13, %edx
	movl	$1, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	jmp	.L31
.L32:
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$1073741824, %eax
	testl	%eax, %eax
	je	.L33
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	ExpandTics
	movl	%eax, -24(%rbp)
	jmp	.L34
.L33:
	movl	$-1, -24(%rbp)
.L34:
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	movswl	%ax, %ebx
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %r12d
	movq	netbuffer(%rip), %rax
	movzbl	5(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	ExpandTics
	movl	%eax, %ecx
	movq	doomcom(%rip), %rax
	movzwl	12(%rax), %eax
	movswl	%ax, %edx
	movq	debugfile(%rip), %rax
	movl	-24(%rbp), %esi
	subq	$8, %rsp
	pushq	%rbx
	movl	%esi, %r9d
	movl	%r12d, %r8d
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addq	$16, %rsp
	movl	$0, -20(%rbp)
	jmp	.L35
.L36:
	movq	netbuffer(%rip), %rdx
	movl	-20(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movq	debugfile(%rip), %rax
	leaq	.LC3(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addl	$1, -20(%rbp)
.L35:
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	cwtl
	cmpl	%eax, -20(%rbp)
	jl	.L36
	movq	debugfile(%rip), %rax
	movq	%rax, %rsi
	movl	$10, %edi
	call	fputc@PLT
.L31:
	movl	$1, %eax
.L23:
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	HGetPacket, .-HGetPacket
	.globl	exitmsg
	.bss
	.align 32
	.type	exitmsg, @object
	.size	exitmsg, 80
exitmsg:
	.zero	80
	.section	.rodata
.LC8:
	.string	"Killed by network driver"
.LC9:
	.string	"retransmit from %i\n"
	.align 8
.LC10:
	.string	"out of order packet (%i + %i)\n"
	.align 8
.LC11:
	.string	"missed tics from %i (%i - %i)\n"
	.text
	.globl	GetPackets
	.type	GetPackets, @function
GetPackets:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	jmp	.L38
.L55:
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$536870912, %eax
	testl	%eax, %eax
	jne	.L56
	movq	netbuffer(%rip), %rax
	movzbl	6(%rax), %eax
	movzbl	%al, %eax
	andb	$127, %al
	movl	%eax, -36(%rbp)
	movq	doomcom(%rip), %rax
	movzwl	12(%rax), %eax
	cwtl
	movl	%eax, -32(%rbp)
	movq	netbuffer(%rip), %rax
	movzbl	5(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	ExpandTics
	movl	%eax, -28(%rbp)
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jns	.L41
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L57
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	$0, (%rdx,%rax)
	movabsq	$3539955087266901072, %rax
	movabsq	$7526676561549159456, %rdx
	movq	%rax, exitmsg(%rip)
	movq	%rdx, 8+exitmsg(%rip)
	movabsq	$28549237757207912, %rax
	movq	%rax, 15+exitmsg(%rip)
	movzbl	7+exitmsg(%rip), %eax
	movl	%eax, %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	movb	%al, 7+exitmsg(%rip)
	movl	consoleplayer(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rcx
	leaq	224+players(%rip), %rax
	leaq	exitmsg(%rip), %rdx
	movq	%rdx, (%rcx,%rax)
	movl	demorecording(%rip), %eax
	testl	%eax, %eax
	je	.L58
	call	G_CheckDemoStatus@PLT
	jmp	.L58
.L41:
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$268435456, %eax
	testl	%eax, %eax
	je	.L44
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L44:
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	nodeforplayer(%rip), %rdx
	movl	-32(%rbp), %eax
	movl	%eax, (%rcx,%rdx)
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendcount(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jg	.L45
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$1073741824, %eax
	testl	%eax, %eax
	je	.L45
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, %edi
	call	ExpandTics
	movl	-32(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	resendto(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L46
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendto(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	debugfile(%rip), %rax
	leaq	.LC9(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
.L46:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendcount(%rip), %rax
	movl	$10, (%rdx,%rax)
	jmp	.L47
.L45:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendcount(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	-1(%rax), %ecx
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendcount(%rip), %rax
	movl	%ecx, (%rdx,%rax)
.L47:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -24(%rbp)
	je	.L59
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -24(%rbp)
	jge	.L49
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L60
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %ecx
	movq	debugfile(%rip), %rax
	movl	-28(%rbp), %edx
	leaq	.LC10(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	jmp	.L60
.L49:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -28(%rbp)
	jle	.L51
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L52
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %esi
	movq	debugfile(%rip), %rax
	movl	-28(%rbp), %ecx
	movl	-32(%rbp), %edx
	movl	%esi, %r8d
	leaq	.LC11(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
.L52:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	remoteresend(%rip), %rax
	movl	$1, (%rdx,%rax)
	jmp	.L38
.L51:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	remoteresend(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	netbuffer(%rip), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, -16(%rbp)
	jmp	.L53
.L54:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %ecx
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
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	netcmds(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	leal	1(%rax), %ecx
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, (%rax)
	addq	$8, -16(%rbp)
.L53:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L54
	jmp	.L38
.L56:
	nop
	jmp	.L38
.L57:
	nop
	jmp	.L38
.L58:
	nop
	jmp	.L38
.L59:
	nop
	jmp	.L38
.L60:
	nop
.L38:
	call	HGetPacket
	testl	%eax, %eax
	jne	.L55
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	GetPackets, .-GetPackets
	.globl	gametime
	.bss
	.align 4
	.type	gametime, @object
	.size	gametime, 4
gametime:
	.zero	4
	.section	.rodata
	.align 8
.LC12:
	.string	"NetUpdate: netbuffer->numtics > BACKUPTICS"
	.text
	.globl	NetUpdate
	.type	NetUpdate, @function
NetUpdate:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	call	I_GetTime@PLT
	movl	ticdup(%rip), %esi
	cltd
	idivl	%esi
	movl	%eax, -12(%rbp)
	movl	gametime(%rip), %eax
	movl	-12(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -24(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, gametime(%rip)
	cmpl	$0, -24(%rbp)
	jle	.L79
	movl	skiptics(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L64
	movl	skiptics(%rip), %eax
	subl	%eax, -24(%rbp)
	movl	$0, skiptics(%rip)
	jmp	.L65
.L64:
	movl	skiptics(%rip), %eax
	subl	-24(%rbp), %eax
	movl	%eax, skiptics(%rip)
	movl	$0, -24(%rbp)
.L65:
	movl	consoleplayer(%rip), %edx
	movq	netbuffer(%rip), %rax
	movb	%dl, 6(%rax)
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %edi
	cltd
	idivl	%edi
	movl	%eax, -8(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L66
.L69:
	call	I_StartTic@PLT
	call	D_ProcessEvents@PLT
	movl	maketic(%rip), %eax
	subl	-8(%rbp), %eax
	cmpl	$4, %eax
	jg	.L80
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
	movslq	%edx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	localcmds(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	G_BuildTiccmd@PLT
	movl	maketic(%rip), %eax
	addl	$1, %eax
	movl	%eax, maketic(%rip)
	addl	$1, -20(%rbp)
.L66:
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L69
	jmp	.L68
.L80:
	nop
.L68:
	movl	singletics(%rip), %eax
	testl	%eax, %eax
	jne	.L81
	movl	$0, -20(%rbp)
	jmp	.L72
.L78:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L73
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendto(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -4(%rbp)
	movq	netbuffer(%rip), %rax
	movl	-4(%rbp), %edx
	movb	%dl, 5(%rax)
	movl	maketic(%rip), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	subl	%ecx, %edx
	movb	%dl, 7(%rax)
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	cmpb	$12, %al
	jbe	.L74
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L74:
	movl	maketic(%rip), %edx
	movq	doomcom(%rip), %rax
	movzwl	20(%rax), %eax
	cwtl
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendto(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	$0, -16(%rbp)
	jmp	.L75
.L76:
	movl	-4(%rbp), %edx
	movl	-16(%rbp), %eax
	leal	(%rdx,%rax), %ecx
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
	movq	netbuffer(%rip), %rax
	movl	-16(%rbp), %ecx
	movslq	%ecx, %rcx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rsi
	leaq	localcmds(%rip), %rdx
	movq	(%rsi,%rdx), %rdx
	movq	%rdx, 8(%rax,%rcx,8)
	addl	$1, -16(%rbp)
.L75:
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	cmpl	%eax, -16(%rbp)
	jl	.L76
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	remoteresend(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L77
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	netbuffer(%rip), %rax
	movb	%dl, 4(%rax)
	movl	-20(%rbp), %eax
	movl	$1073741824, %esi
	movl	%eax, %edi
	call	HSendPacket
	jmp	.L73
.L77:
	movq	netbuffer(%rip), %rax
	movb	$0, 4(%rax)
	movl	-20(%rbp), %eax
	movl	$0, %esi
	movl	%eax, %edi
	call	HSendPacket
.L73:
	addl	$1, -20(%rbp)
.L72:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -20(%rbp)
	jl	.L78
	jmp	.L63
.L79:
	nop
.L63:
	call	GetPackets
	jmp	.L61
.L81:
	nop
.L61:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	NetUpdate, .-NetUpdate
	.section	.rodata
	.align 8
.LC13:
	.string	"Network game synchronization aborted."
	.text
	.globl	CheckAbort
	.type	CheckAbort, @function
CheckAbort:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	call	I_GetTime@PLT
	addl	$2, %eax
	movl	%eax, -12(%rbp)
	jmp	.L83
.L84:
	call	I_StartTic@PLT
.L83:
	call	I_GetTime@PLT
	cmpl	%eax, -12(%rbp)
	jg	.L84
	call	I_StartTic@PLT
	jmp	.L85
.L87:
	movl	eventtail(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	events(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L86
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	$27, %eax
	jne	.L86
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L86:
	movl	eventtail(%rip), %eax
	addl	$1, %eax
	movl	%eax, eventtail(%rip)
	movl	eventtail(%rip), %eax
	andl	$63, %eax
	movl	%eax, eventtail(%rip)
.L85:
	movl	eventtail(%rip), %edx
	movl	eventhead(%rip), %eax
	cmpl	%eax, %edx
	jne	.L87
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	CheckAbort, .-CheckAbort
	.section	.rodata
	.align 8
.LC14:
	.string	"listening for network start info..."
	.align 8
.LC15:
	.string	"Different DOOM versions cannot play a net game!"
.LC16:
	.string	"sending network start info..."
	.text
	.globl	D_ArbitrateNetStart
	.type	D_ArbitrateNetStart, @function
D_ArbitrateNetStart:
.LFB8:
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
	movl	$1, autostart(%rip)
	leaq	-48(%rbp), %rax
	movl	$32, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movq	doomcom(%rip), %rax
	movzwl	32(%rax), %eax
	testw	%ax, %ax
	je	.L89
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L94:
	call	CheckAbort
	call	HGetPacket
	testl	%eax, %eax
	je	.L110
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	andl	$536870912, %eax
	testl	%eax, %eax
	je	.L94
	movq	netbuffer(%rip), %rax
	movzbl	6(%rax), %eax
	cmpb	$110, %al
	je	.L92
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L92:
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movzbl	%al, %eax
	andl	$15, %eax
	movl	%eax, startskill(%rip)
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	shrb	$6, %al
	movzbl	%al, %eax
	movl	%eax, deathmatch(%rip)
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movzbl	%al, %eax
	andl	$32, %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	movl	%eax, nomonsters(%rip)
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movzbl	%al, %eax
	andl	$16, %eax
	testl	%eax, %eax
	setg	%al
	movzbl	%al, %eax
	movl	%eax, respawnparm(%rip)
	movq	netbuffer(%rip), %rax
	movzbl	5(%rax), %eax
	movzbl	%al, %eax
	andl	$63, %eax
	movl	%eax, startmap(%rip)
	movq	netbuffer(%rip), %rax
	movzbl	5(%rax), %eax
	shrb	$6, %al
	movzbl	%al, %eax
	movl	%eax, startepisode(%rip)
	jmp	.L88
.L110:
	nop
	jmp	.L94
.L89:
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L108:
	call	CheckAbort
	movl	$0, -52(%rbp)
	jmp	.L95
.L99:
	movl	startskill(%rip), %edx
	movq	netbuffer(%rip), %rax
	movb	%dl, 4(%rax)
	movl	deathmatch(%rip), %eax
	testl	%eax, %eax
	je	.L96
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %edx
	movl	deathmatch(%rip), %eax
	sall	$6, %eax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	orl	%ecx, %edx
	movb	%dl, 4(%rax)
.L96:
	movl	nomonsters(%rip), %eax
	testl	%eax, %eax
	je	.L97
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %edx
	movq	netbuffer(%rip), %rax
	orl	$32, %edx
	movb	%dl, 4(%rax)
.L97:
	movl	respawnparm(%rip), %eax
	testl	%eax, %eax
	je	.L98
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %edx
	movq	netbuffer(%rip), %rax
	orl	$16, %edx
	movb	%dl, 4(%rax)
.L98:
	movl	startepisode(%rip), %eax
	sall	$6, %eax
	movl	%eax, %edx
	movl	startmap(%rip), %eax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	addl	%ecx, %edx
	movb	%dl, 5(%rax)
	movq	netbuffer(%rip), %rax
	movb	$110, 6(%rax)
	movq	netbuffer(%rip), %rax
	movb	$0, 7(%rax)
	movl	-52(%rbp), %eax
	movl	$536870912, %esi
	movl	%eax, %edi
	call	HSendPacket
	addl	$1, -52(%rbp)
.L95:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -52(%rbp)
	jl	.L99
	movl	$10, -52(%rbp)
	jmp	.L100
.L103:
	movq	netbuffer(%rip), %rax
	movzbl	6(%rax), %eax
	movzbl	%al, %eax
	andl	$120, %eax
	testl	%eax, %eax
	jne	.L101
	movq	netbuffer(%rip), %rax
	movzbl	6(%rax), %eax
	movzbl	%al, %eax
	andl	$127, %eax
	cltq
	movl	$1, -48(%rbp,%rax,4)
.L101:
	subl	$1, -52(%rbp)
.L100:
	cmpl	$0, -52(%rbp)
	je	.L102
	call	HGetPacket
	testl	%eax, %eax
	jne	.L103
.L102:
	movl	$1, -52(%rbp)
	jmp	.L104
.L107:
	movl	-52(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	testl	%eax, %eax
	je	.L111
	addl	$1, -52(%rbp)
.L104:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -52(%rbp)
	jl	.L107
	jmp	.L106
.L111:
	nop
.L106:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -52(%rbp)
	jl	.L108
.L88:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L109
	call	__stack_chk_fail@PLT
.L109:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	D_ArbitrateNetStart, .-D_ArbitrateNetStart
	.section	.rodata
.LC17:
	.string	"Doomcom buffer invalid!"
	.align 8
.LC18:
	.string	"startskill %i  deathmatch: %i  startmap: %i  startepisode: %i\n"
.LC19:
	.string	"player %i of %i (%i nodes)\n"
	.text
	.globl	D_CheckNetGame
	.type	D_CheckNetGame, @function
D_CheckNetGame:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L113
.L114:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	remoteresend(%rip), %rax
	movl	$0, (%rdx,%rax)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	resendto(%rip), %rax
	movl	$0, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L113:
	cmpl	$7, -4(%rbp)
	jle	.L114
	call	I_InitNetwork@PLT
	movq	doomcom(%rip), %rax
	movq	(%rax), %rax
	cmpq	$305419896, %rax
	je	.L115
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L115:
	movq	doomcom(%rip), %rax
	addq	$40, %rax
	movq	%rax, netbuffer(%rip)
	movq	doomcom(%rip), %rax
	movzwl	32(%rax), %eax
	cwtl
	movl	%eax, displayplayer(%rip)
	movl	displayplayer(%rip), %eax
	movl	%eax, consoleplayer(%rip)
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L116
	call	D_ArbitrateNetStart
.L116:
	movl	startepisode(%rip), %esi
	movl	startmap(%rip), %ecx
	movl	deathmatch(%rip), %edx
	movl	startskill(%rip), %eax
	movl	%esi, %r8d
	movl	%eax, %esi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	doomcom(%rip), %rax
	movzwl	18(%rax), %eax
	cwtl
	movl	%eax, ticdup(%rip)
	movl	ticdup(%rip), %eax
	leal	(%rax,%rax), %edi
	movl	$12, %eax
	cltd
	idivl	%edi
	subl	$1, %eax
	movl	%eax, maxsend(%rip)
	movl	maxsend(%rip), %eax
	testl	%eax, %eax
	jg	.L117
	movl	$1, maxsend(%rip)
.L117:
	movl	$0, -4(%rbp)
	jmp	.L118
.L119:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	$1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L118:
	movq	doomcom(%rip), %rax
	movzwl	34(%rax), %eax
	cwtl
	cmpl	%eax, -4(%rbp)
	jl	.L119
	movl	$0, -4(%rbp)
	jmp	.L120
.L121:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	$1, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L120:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -4(%rbp)
	jl	.L121
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	movswl	%ax, %edx
	movq	doomcom(%rip), %rax
	movzwl	34(%rax), %eax
	cwtl
	movl	consoleplayer(%rip), %ecx
	leal	1(%rcx), %esi
	movl	%edx, %ecx
	movl	%eax, %edx
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	D_CheckNetGame, .-D_CheckNetGame
	.globl	D_QuitNetGame
	.type	D_QuitNetGame, @function
D_QuitNetGame:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L123
	movq	debugfile(%rip), %rax
	movq	%rax, %rdi
	call	fclose@PLT
.L123:
	movl	netgame(%rip), %eax
	testl	%eax, %eax
	je	.L132
	movl	usergame(%rip), %eax
	testl	%eax, %eax
	je	.L132
	movl	consoleplayer(%rip), %eax
	cmpl	$-1, %eax
	je	.L132
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L132
	movl	consoleplayer(%rip), %edx
	movq	netbuffer(%rip), %rax
	movb	%dl, 6(%rax)
	movq	netbuffer(%rip), %rax
	movb	$0, 7(%rax)
	movl	$0, -8(%rbp)
	jmp	.L127
.L131:
	movl	$1, -4(%rbp)
	jmp	.L128
.L130:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L129
	movl	-4(%rbp), %eax
	movl	$-2147483648, %esi
	movl	%eax, %edi
	call	HSendPacket
.L129:
	addl	$1, -4(%rbp)
.L128:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -4(%rbp)
	jl	.L130
	movl	$1, %edi
	call	I_WaitVBL@PLT
	addl	$1, -8(%rbp)
.L127:
	cmpl	$3, -8(%rbp)
	jle	.L131
	jmp	.L122
.L132:
	nop
.L122:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	D_QuitNetGame, .-D_QuitNetGame
	.globl	frametics
	.bss
	.align 16
	.type	frametics, @object
	.size	frametics, 16
frametics:
	.zero	16
	.globl	frameon
	.align 4
	.type	frameon, @object
	.size	frameon, 4
frameon:
	.zero	4
	.globl	frameskip
	.align 16
	.type	frameskip, @object
	.size	frameskip, 16
frameskip:
	.zero	16
	.globl	oldnettics
	.align 4
	.type	oldnettics, @object
	.size	oldnettics, 4
oldnettics:
	.zero	4
	.section	.rodata
	.align 8
.LC20:
	.string	"=======real: %i  avail: %i  game: %i\n"
.LC21:
	.string	"TryRunTics: lowtic < gametic"
.LC22:
	.string	"gametic>lowtic"
	.text
	.globl	TryRunTics
	.type	TryRunTics, @function
TryRunTics:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	call	I_GetTime@PLT
	movl	ticdup(%rip), %edi
	cltd
	idivl	%edi
	movl	%eax, -24(%rbp)
	movl	oldentertics.0(%rip), %eax
	movl	-24(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, -20(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, oldentertics.0(%rip)
	call	NetUpdate
	movl	$2147483647, -40(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L134
.L136:
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L135
	addl	$1, -32(%rbp)
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -40(%rbp)
	jle	.L135
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -40(%rbp)
.L135:
	addl	$1, -44(%rbp)
.L134:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -44(%rbp)
	jl	.L136
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %esi
	cltd
	idivl	%esi
	movl	%eax, %edx
	movl	-40(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -20(%rbp)
	jge	.L137
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -36(%rbp)
	jmp	.L138
.L137:
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jge	.L139
	movl	-20(%rbp), %eax
	movl	%eax, -36(%rbp)
	jmp	.L138
.L139:
	movl	-16(%rbp), %eax
	movl	%eax, -36(%rbp)
.L138:
	cmpl	$0, -36(%rbp)
	jg	.L140
	movl	$1, -36(%rbp)
.L140:
	movl	frameon(%rip), %eax
	addl	$1, %eax
	movl	%eax, frameon(%rip)
	movq	debugfile(%rip), %rax
	testq	%rax, %rax
	je	.L141
	movq	debugfile(%rip), %rax
	movl	-36(%rbp), %esi
	movl	-16(%rbp), %ecx
	movl	-20(%rbp), %edx
	movl	%esi, %r8d
	leaq	.LC20(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
.L141:
	movl	demoplayback(%rip), %eax
	testl	%eax, %eax
	jne	.L148
	movl	$0, -44(%rbp)
	jmp	.L143
.L146:
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	playeringame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L165
	addl	$1, -44(%rbp)
.L143:
	cmpl	$3, -44(%rbp)
	jle	.L146
	jmp	.L145
.L165:
	nop
.L145:
	movl	consoleplayer(%rip), %eax
	cmpl	%eax, -44(%rbp)
	je	.L148
	movl	nettics(%rip), %edx
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	nodeforplayer(%rip), %rax
	movl	(%rcx,%rax), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	nettics(%rip), %rax
	movl	(%rcx,%rax), %eax
	cmpl	%eax, %edx
	jg	.L147
	movl	gametime(%rip), %eax
	subl	$1, %eax
	movl	%eax, gametime(%rip)
.L147:
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeforplayer(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	oldnettics(%rip), %eax
	cmpl	%eax, %edx
	setl	%cl
	movl	frameon(%rip), %eax
	andl	$3, %eax
	movl	%eax, %edx
	movzbl	%cl, %eax
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	frameskip(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	movl	nettics(%rip), %eax
	movl	%eax, oldnettics(%rip)
	movl	frameskip(%rip), %eax
	testl	%eax, %eax
	je	.L148
	movl	4+frameskip(%rip), %eax
	testl	%eax, %eax
	je	.L148
	movl	8+frameskip(%rip), %eax
	testl	%eax, %eax
	je	.L148
	movl	12+frameskip(%rip), %eax
	testl	%eax, %eax
	je	.L148
	movl	$1, skiptics(%rip)
	jmp	.L148
.L154:
	call	NetUpdate
	movl	$2147483647, -40(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L149
.L151:
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nodeingame(%rip), %rax
	movl	(%rdx,%rax), %eax
	testl	%eax, %eax
	je	.L150
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, -40(%rbp)
	jle	.L150
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	nettics(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -40(%rbp)
.L150:
	addl	$1, -44(%rbp)
.L149:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -44(%rbp)
	jl	.L151
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %edi
	cltd
	idivl	%edi
	cmpl	%eax, -40(%rbp)
	jge	.L152
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L152:
	call	I_GetTime@PLT
	movl	ticdup(%rip), %esi
	cltd
	idivl	%esi
	subl	-24(%rbp), %eax
	cmpl	$19, %eax
	jle	.L148
	call	M_Ticker@PLT
	jmp	.L133
.L148:
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %edi
	cltd
	idivl	%edi
	movl	%eax, %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -40(%rbp)
	jl	.L154
	jmp	.L155
.L164:
	movl	$0, -44(%rbp)
	jmp	.L156
.L163:
	movl	gametic(%rip), %eax
	movl	ticdup(%rip), %esi
	cltd
	idivl	%esi
	cmpl	%eax, -40(%rbp)
	jge	.L157
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L157:
	movl	advancedemo(%rip), %eax
	testl	%eax, %eax
	je	.L158
	call	D_DoAdvanceDemo@PLT
.L158:
	call	M_Ticker@PLT
	call	G_Ticker@PLT
	movl	gametic(%rip), %eax
	addl	$1, %eax
	movl	%eax, gametic(%rip)
	movl	ticdup(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -44(%rbp)
	je	.L159
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
	movl	$0, -28(%rbp)
	jmp	.L160
.L162:
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,8), %rdx
	leaq	netcmds(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movb	$0, 6(%rax)
	movq	-8(%rbp), %rax
	movzbl	7(%rax), %eax
	testb	%al, %al
	jns	.L161
	movq	-8(%rbp), %rax
	movb	$0, 7(%rax)
.L161:
	addl	$1, -28(%rbp)
.L160:
	cmpl	$3, -28(%rbp)
	jle	.L162
.L159:
	addl	$1, -44(%rbp)
.L156:
	movl	ticdup(%rip), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L163
	call	NetUpdate
.L155:
	movl	-36(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -36(%rbp)
	testl	%eax, %eax
	jne	.L164
.L133:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	TryRunTics, .-TryRunTics
	.local	oldentertics.0
	.comm	oldentertics.0,4,4
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
