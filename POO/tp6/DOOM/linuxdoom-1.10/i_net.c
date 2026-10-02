	.file	"i_net.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.globl	DOOMPORT
	.data
	.align 4
	.type	DOOMPORT, @object
	.size	DOOMPORT, 4
DOOMPORT:
	.long	5029
	.globl	sendsocket
	.bss
	.align 4
	.type	sendsocket, @object
	.size	sendsocket, 4
sendsocket:
	.zero	4
	.globl	insocket
	.align 4
	.type	insocket, @object
	.size	insocket, 4
insocket:
	.zero	4
	.globl	sendaddress
	.align 32
	.type	sendaddress, @object
	.size	sendaddress, 128
sendaddress:
	.zero	128
	.globl	netget
	.align 8
	.type	netget, @object
	.size	netget, 8
netget:
	.zero	8
	.globl	netsend
	.align 8
	.type	netsend, @object
	.size	netsend, 8
netsend:
	.zero	8
	.section	.rodata
.LC0:
	.string	"can't create socket: %s"
	.text
	.globl	UDPsocket
	.type	UDPsocket, @function
UDPsocket:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$17, %edx
	movl	$2, %esi
	movl	$2, %edi
	call	socket@PLT
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L2
	call	__errno_location@PLT
	movl	(%rax), %eax
	movl	%eax, %edi
	call	strerror@PLT
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L2:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	UDPsocket, .-UDPsocket
	.section	.rodata
.LC1:
	.string	"BindToPort: bind: %s"
	.text
	.globl	BindToLocalPort
	.type	BindToLocalPort, @function
BindToLocalPort:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movl	%esi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-32(%rbp), %rax
	movl	$16, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movw	$2, -32(%rbp)
	movl	$0, -28(%rbp)
	movl	-56(%rbp), %eax
	movw	%ax, -30(%rbp)
	leaq	-32(%rbp), %rcx
	movl	-52(%rbp), %eax
	movl	$16, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	bind@PLT
	movl	%eax, -36(%rbp)
	cmpl	$-1, -36(%rbp)
	jne	.L7
	call	__errno_location@PLT
	movl	(%rax), %eax
	movl	%eax, %edi
	call	strerror@PLT
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L7:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	BindToLocalPort, .-BindToLocalPort
	.globl	PacketSend
	.type	PacketSend, @function
PacketSend:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	sall	$24, %eax
	movl	%eax, %edx
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	sall	$8, %eax
	andl	$16711680, %eax
	orl	%eax, %edx
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, %eax
	shrq	$8, %rax
	andl	$65280, %eax
	orl	%eax, %edx
	movq	netbuffer(%rip), %rax
	movl	(%rax), %eax
	shrl	$24, %eax
	orl	%edx, %eax
	movl	%eax, -112(%rbp)
	movq	netbuffer(%rip), %rax
	movzbl	6(%rax), %eax
	movb	%al, -106(%rbp)
	movq	netbuffer(%rip), %rax
	movzbl	4(%rax), %eax
	movb	%al, -108(%rbp)
	movq	netbuffer(%rip), %rax
	movzbl	5(%rax), %eax
	movb	%al, -107(%rbp)
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movb	%al, -105(%rbp)
	movl	$0, -116(%rbp)
	jmp	.L9
.L10:
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	8(%rax,%rdx,8), %edx
	movl	-116(%rbp), %eax
	cltq
	movb	%dl, -104(%rbp,%rax,8)
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	9(%rax,%rdx,8), %edx
	movl	-116(%rbp), %eax
	cltq
	movb	%dl, -103(%rbp,%rax,8)
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzwl	10(%rax,%rdx,8), %eax
	sall	$8, %eax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzwl	10(%rax,%rdx,8), %eax
	shrw	$8, %ax
	orl	%eax, %ecx
	movl	%ecx, %edx
	movl	-116(%rbp), %eax
	cltq
	movw	%dx, -102(%rbp,%rax,8)
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzwl	12(%rax,%rdx,8), %eax
	sall	$8, %eax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzwl	12(%rax,%rdx,8), %eax
	shrw	$8, %ax
	orl	%eax, %ecx
	movl	%ecx, %edx
	movl	-116(%rbp), %eax
	cltq
	movw	%dx, -100(%rbp,%rax,8)
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	14(%rax,%rdx,8), %edx
	movl	-116(%rbp), %eax
	cltq
	movb	%dl, -98(%rbp,%rax,8)
	movq	netbuffer(%rip), %rax
	movl	-116(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	15(%rax,%rdx,8), %edx
	movl	-116(%rbp), %eax
	cltq
	movb	%dl, -97(%rbp,%rax,8)
	addl	$1, -116(%rbp)
.L9:
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	cmpl	%eax, -116(%rbp)
	jl	.L10
	movq	doomcom(%rip), %rax
	movzwl	12(%rax), %eax
	cwtl
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	sendaddress(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	movq	doomcom(%rip), %rax
	movzwl	14(%rax), %eax
	movswq	%ax, %rdx
	movl	sendsocket(%rip), %eax
	leaq	-112(%rbp), %rsi
	movl	$16, %r9d
	movq	%rcx, %r8
	movl	$0, %ecx
	movl	%eax, %edi
	call	sendto@PLT
	movl	%eax, -116(%rbp)
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	PacketSend, .-PacketSend
	.section	.rodata
.LC2:
	.string	"GetPacket: %s"
.LC3:
	.string	"len=%d:p=[0x%x 0x%x] \n"
	.text
	.globl	PacketGet
	.type	PacketGet, @function
PacketGet:
.LFB9:
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
	movl	$16, -140(%rbp)
	movl	insocket(%rip), %eax
	leaq	-140(%rbp), %rcx
	leaq	-128(%rbp), %rdx
	leaq	-112(%rbp), %rsi
	movq	%rcx, %r9
	movq	%rdx, %r8
	movl	$0, %ecx
	movl	$104, %edx
	movl	%eax, %edi
	call	recvfrom@PLT
	movl	%eax, -132(%rbp)
	cmpl	$-1, -132(%rbp)
	jne	.L13
	call	__errno_location@PLT
	movl	(%rax), %eax
	cmpl	$11, %eax
	je	.L14
	call	__errno_location@PLT
	movl	(%rax), %eax
	movl	%eax, %edi
	call	strerror@PLT
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L14:
	movq	doomcom(%rip), %rax
	movw	$-1, 12(%rax)
	jmp	.L12
.L13:
	movl	first.0(%rip), %eax
	testl	%eax, %eax
	je	.L16
	leaq	-112(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %ecx
	leaq	-112(%rbp), %rax
	movl	(%rax), %edx
	movl	-132(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L16:
	movl	$0, first.0(%rip)
	movl	$0, -136(%rbp)
	jmp	.L17
.L20:
	movl	-124(%rbp), %edx
	movl	-136(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rcx
	leaq	4+sendaddress(%rip), %rax
	movl	(%rcx,%rax), %eax
	cmpl	%eax, %edx
	je	.L26
	addl	$1, -136(%rbp)
.L17:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -136(%rbp)
	jl	.L20
	jmp	.L19
.L26:
	nop
.L19:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cmpl	%eax, -136(%rbp)
	jne	.L21
	movq	doomcom(%rip), %rax
	movw	$-1, 12(%rax)
	jmp	.L12
.L21:
	movq	doomcom(%rip), %rax
	movl	-136(%rbp), %edx
	movw	%dx, 12(%rax)
	movq	doomcom(%rip), %rax
	movl	-132(%rbp), %edx
	movw	%dx, 14(%rax)
	movl	-112(%rbp), %eax
	sall	$24, %eax
	movl	%eax, %edx
	movl	-112(%rbp), %eax
	sall	$8, %eax
	andl	$16711680, %eax
	orl	%eax, %edx
	movl	-112(%rbp), %eax
	movl	%eax, %eax
	shrq	$8, %rax
	andl	$65280, %eax
	movl	%edx, %ecx
	orl	%eax, %ecx
	movl	-112(%rbp), %eax
	shrl	$24, %eax
	movl	%eax, %edx
	movq	netbuffer(%rip), %rax
	orl	%ecx, %edx
	movl	%edx, (%rax)
	movq	netbuffer(%rip), %rax
	movzbl	-106(%rbp), %edx
	movb	%dl, 6(%rax)
	movq	netbuffer(%rip), %rax
	movzbl	-108(%rbp), %edx
	movb	%dl, 4(%rax)
	movq	netbuffer(%rip), %rax
	movzbl	-107(%rbp), %edx
	movb	%dl, 5(%rax)
	movq	netbuffer(%rip), %rax
	movzbl	-105(%rbp), %edx
	movb	%dl, 7(%rax)
	movl	$0, -132(%rbp)
	jmp	.L22
.L23:
	movq	netbuffer(%rip), %rax
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-104(%rbp,%rdx,8), %ecx
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movb	%cl, 8(%rax,%rdx,8)
	movq	netbuffer(%rip), %rax
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-103(%rbp,%rdx,8), %ecx
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movb	%cl, 9(%rax,%rdx,8)
	movl	-132(%rbp), %eax
	cltq
	movzwl	-102(%rbp,%rax,8), %eax
	sall	$8, %eax
	movl	%eax, %edx
	movl	-132(%rbp), %eax
	cltq
	movzwl	-102(%rbp,%rax,8), %eax
	shrw	$8, %ax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	orl	%edx, %ecx
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movw	%cx, 10(%rax,%rdx,8)
	movl	-132(%rbp), %eax
	cltq
	movzwl	-100(%rbp,%rax,8), %eax
	sall	$8, %eax
	movl	%eax, %edx
	movl	-132(%rbp), %eax
	cltq
	movzwl	-100(%rbp,%rax,8), %eax
	shrw	$8, %ax
	movl	%eax, %ecx
	movq	netbuffer(%rip), %rax
	orl	%edx, %ecx
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movw	%cx, 12(%rax,%rdx,8)
	movq	netbuffer(%rip), %rax
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-98(%rbp,%rdx,8), %ecx
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movb	%cl, 14(%rax,%rdx,8)
	movq	netbuffer(%rip), %rax
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-97(%rbp,%rdx,8), %ecx
	movl	-132(%rbp), %edx
	movslq	%edx, %rdx
	movb	%cl, 15(%rax,%rdx,8)
	addl	$1, -132(%rbp)
.L22:
	movq	netbuffer(%rip), %rax
	movzbl	7(%rax), %eax
	movzbl	%al, %eax
	cmpl	%eax, -132(%rbp)
	jl	.L23
.L12:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L25
	call	__stack_chk_fail@PLT
.L25:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	PacketGet, .-PacketGet
	.section	.rodata
	.align 8
.LC4:
	.string	"GetLocalAddress : gethostname: errno %d"
	.align 8
.LC5:
	.string	"GetLocalAddress : gethostbyname: couldn't get local host"
	.text
	.globl	GetLocalAddress
	.type	GetLocalAddress, @function
GetLocalAddress:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$1056, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-1040(%rbp), %rax
	movl	$1024, %esi
	movq	%rax, %rdi
	call	gethostname@PLT
	movl	%eax, -1052(%rbp)
	cmpl	$-1, -1052(%rbp)
	jne	.L28
	call	__errno_location@PLT
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L28:
	leaq	-1040(%rbp), %rax
	movq	%rax, %rdi
	call	gethostbyname@PLT
	movq	%rax, -1048(%rbp)
	cmpq	$0, -1048(%rbp)
	jne	.L29
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L29:
	movq	-1048(%rbp), %rax
	movq	24(%rax), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L31
	call	__stack_chk_fail@PLT
.L31:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	GetLocalAddress, .-GetLocalAddress
	.section	.rodata
.LC6:
	.string	"-dup"
.LC7:
	.string	"-extratic"
.LC8:
	.string	"-port"
.LC9:
	.string	"using alternate port %i\n"
.LC10:
	.string	"-net"
	.align 8
.LC11:
	.string	"gethostbyname: couldn't find %s"
	.text
	.globl	I_InitNetwork
	.type	I_InitNetwork, @function
I_InitNetwork:
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
	movl	$1, -44(%rbp)
	movl	$144, %edi
	call	malloc@PLT
	movq	%rax, doomcom(%rip)
	movq	doomcom(%rip), %rax
	movl	$144, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -40(%rbp)
	cmpl	$0, -40(%rbp)
	je	.L33
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -40(%rbp)
	jge	.L33
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cbtw
	leal	-48(%rax), %edx
	movq	doomcom(%rip), %rax
	movw	%dx, 18(%rax)
	movq	doomcom(%rip), %rax
	movzwl	18(%rax), %eax
	testw	%ax, %ax
	jg	.L34
	movq	doomcom(%rip), %rax
	movw	$1, 18(%rax)
.L34:
	movq	doomcom(%rip), %rax
	movzwl	18(%rax), %eax
	cmpw	$9, %ax
	jle	.L36
	movq	doomcom(%rip), %rax
	movw	$9, 18(%rax)
	jmp	.L36
.L33:
	movq	doomcom(%rip), %rax
	movw	$1, 18(%rax)
.L36:
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	testl	%eax, %eax
	je	.L37
	movq	doomcom(%rip), %rax
	movw	$1, 20(%rax)
	jmp	.L38
.L37:
	movq	doomcom(%rip), %rax
	movw	$0, 20(%rax)
.L38:
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -36(%rbp)
	cmpl	$0, -36(%rbp)
	je	.L39
	movl	myargc(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -36(%rbp)
	jge	.L39
	movq	myargv(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, DOOMPORT(%rip)
	movl	DOOMPORT(%rip), %eax
	movl	%eax, %esi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L39:
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	M_CheckParm@PLT
	movl	%eax, -40(%rbp)
	cmpl	$0, -40(%rbp)
	jne	.L40
	movl	$0, netgame(%rip)
	movq	doomcom(%rip), %rax
	movq	$305419896, (%rax)
	movq	doomcom(%rip), %rax
	movw	$1, 16(%rax)
	movq	doomcom(%rip), %rdx
	movzwl	16(%rax), %eax
	movw	%ax, 34(%rdx)
	movq	doomcom(%rip), %rax
	movw	$0, 22(%rax)
	movq	doomcom(%rip), %rax
	movw	$0, 32(%rax)
	jmp	.L32
.L40:
	leaq	PacketSend(%rip), %rax
	movq	%rax, netsend(%rip)
	leaq	PacketGet(%rip), %rax
	movq	%rax, netget(%rip)
	movl	$1, netgame(%rip)
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cbtw
	leal	-49(%rax), %edx
	movq	doomcom(%rip), %rax
	movw	%dx, 32(%rax)
	movq	doomcom(%rip), %rax
	movw	$1, 16(%rax)
	addl	$1, -40(%rbp)
	jmp	.L42
.L47:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	sendaddress(%rip), %rax
	movw	$2, (%rdx,%rax)
	movl	DOOMPORT(%rip), %eax
	sall	$8, %eax
	movl	%eax, %edx
	movl	DOOMPORT(%rip), %eax
	shrw	$8, %ax
	orl	%eax, %edx
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	movl	%edx, %ecx
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	2+sendaddress(%rip), %rax
	movw	%cx, (%rdx,%rax)
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$46, %al
	jne	.L43
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	addq	$1, %rax
	movq	doomcom(%rip), %rdx
	movzwl	16(%rdx), %edx
	movswl	%dx, %ebx
	movq	%rax, %rdi
	call	inet_addr@PLT
	movslq	%ebx, %rdx
	movq	%rdx, %rcx
	salq	$4, %rcx
	leaq	4+sendaddress(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	jmp	.L44
.L43:
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	gethostbyname@PLT
	movq	%rax, -32(%rbp)
	cmpq	$0, -32(%rbp)
	jne	.L45
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L45:
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	movq	(%rax), %rax
	movl	(%rax), %edx
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %eax
	cwtl
	movl	%edx, %ecx
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	4+sendaddress(%rip), %rax
	movl	%ecx, (%rdx,%rax)
.L44:
	movq	doomcom(%rip), %rax
	movzwl	16(%rax), %edx
	addl	$1, %edx
	movw	%dx, 16(%rax)
.L42:
	addl	$1, -40(%rbp)
	movl	myargc(%rip), %eax
	cmpl	%eax, -40(%rbp)
	jge	.L46
	movq	myargv(%rip), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$45, %al
	jne	.L47
.L46:
	movq	doomcom(%rip), %rax
	movq	$305419896, (%rax)
	movq	doomcom(%rip), %rdx
	movq	doomcom(%rip), %rax
	movzwl	16(%rdx), %edx
	movw	%dx, 34(%rax)
	call	UDPsocket
	movl	%eax, insocket(%rip)
	movl	DOOMPORT(%rip), %eax
	sall	$8, %eax
	movl	%eax, %edx
	movl	DOOMPORT(%rip), %eax
	shrw	$8, %ax
	orl	%edx, %eax
	movzwl	%ax, %edx
	movl	insocket(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	BindToLocalPort
	movl	insocket(%rip), %eax
	leaq	-44(%rbp), %rdx
	movl	$21537, %esi
	movl	%eax, %edi
	movl	$0, %eax
	call	ioctl@PLT
	call	UDPsocket
	movl	%eax, sendsocket(%rip)
.L32:
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L48
	call	__stack_chk_fail@PLT
.L48:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	I_InitNetwork, .-I_InitNetwork
	.section	.rodata
.LC12:
	.string	"Bad net cmd: %i\n"
	.text
	.globl	I_NetCmd
	.type	I_NetCmd, @function
I_NetCmd:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	doomcom(%rip), %rax
	movzwl	10(%rax), %eax
	cmpw	$1, %ax
	jne	.L50
	movq	netsend(%rip), %rax
	call	*%rax
	jmp	.L53
.L50:
	movq	doomcom(%rip), %rax
	movzwl	10(%rax), %eax
	cmpw	$2, %ax
	jne	.L52
	movq	netget(%rip), %rax
	call	*%rax
	jmp	.L53
.L52:
	movq	doomcom(%rip), %rax
	movzwl	10(%rax), %eax
	cwtl
	movl	%eax, %esi
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L53:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	I_NetCmd, .-I_NetCmd
	.data
	.align 4
	.type	first.0, @object
	.size	first.0, 4
first.0:
	.long	1
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
