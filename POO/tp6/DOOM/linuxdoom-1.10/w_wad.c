	.file	"w_wad.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 48
rcsid:
	.string	"$Id: w_wad.c,v 1.5 1997/02/03 16:47:57 b1 Exp $"
	.globl	lumpinfo
	.bss
	.align 8
	.type	lumpinfo, @object
	.size	lumpinfo, 8
lumpinfo:
	.zero	8
	.globl	numlumps
	.align 4
	.type	numlumps, @object
	.size	numlumps, 4
numlumps:
	.zero	4
	.globl	lumpcache
	.align 8
	.type	lumpcache, @object
	.size	lumpcache, 8
lumpcache:
	.zero	8
	.text
	.globl	strupr
	.type	strupr, @function
strupr:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	jmp	.L2
.L3:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	toupper@PLT
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	addq	$1, -8(%rbp)
.L2:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	strupr, .-strupr
	.section	.rodata
.LC0:
	.string	"Error fstating"
	.text
	.globl	filelength
	.type	filelength, @function
filelength:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$176, %rsp
	movl	%edi, -164(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-160(%rbp), %rdx
	movl	-164(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	fstat@PLT
	cmpl	$-1, %eax
	jne	.L5
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L5:
	movq	-112(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	filelength, .-filelength
	.section	.rodata
.LC1:
	.string	"Filename base of %s >8 chars"
	.text
	.globl	ExtractFileBase
	.type	ExtractFileBase, @function
ExtractFileBase:
.LFB8:
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
	movq	%rax, %rdi
	call	strlen@PLT
	leaq	-1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L9
.L11:
	subq	$1, -8(%rbp)
.L9:
	movq	-8(%rbp), %rax
	cmpq	-24(%rbp), %rax
	je	.L10
	movq	-8(%rbp), %rax
	subq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$92, %al
	je	.L10
	movq	-8(%rbp), %rax
	subq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$47, %al
	jne	.L11
.L10:
	movq	-32(%rbp), %rax
	movl	$8, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	movl	$0, -12(%rbp)
	jmp	.L12
.L15:
	addl	$1, -12(%rbp)
	cmpl	$9, -12(%rbp)
	jne	.L13
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L13:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	toupper@PLT
	movl	%eax, %ecx
	movq	-32(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movl	%ecx, %edx
	movb	%dl, (%rax)
.L12:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L16
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$46, %al
	jne	.L15
.L16:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	ExtractFileBase, .-ExtractFileBase
	.globl	reloadlump
	.bss
	.align 4
	.type	reloadlump, @object
	.size	reloadlump, 4
reloadlump:
	.zero	4
	.globl	reloadname
	.align 8
	.type	reloadname, @object
	.size	reloadname, 8
reloadname:
	.zero	8
	.section	.rodata
.LC2:
	.string	" couldn't open %s\n"
.LC3:
	.string	" adding %s\n"
.LC4:
	.string	"wad"
.LC5:
	.string	"IWAD"
.LC6:
	.string	"PWAD"
	.align 8
.LC7:
	.string	"Wad file %s doesn't have IWAD or PWAD id\n"
.LC8:
	.string	"Couldn't realloc lumpinfo"
	.text
	.globl	W_AddFile
	.type	W_AddFile, @function
W_AddFile:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%rdi, -104(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-104(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$126, %al
	jne	.L18
	addq	$1, -104(%rbp)
	movq	-104(%rbp), %rax
	movq	%rax, reloadname(%rip)
	movl	numlumps(%rip), %eax
	movl	%eax, reloadlump(%rip)
.L18:
	movq	-104(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -80(%rbp)
	cmpl	$-1, -80(%rbp)
	jne	.L19
	movq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L17
.L19:
	movq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	numlumps(%rip), %eax
	movl	%eax, -76(%rbp)
	movq	-104(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	leaq	-3(%rax), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcasecmp@PLT
	testl	%eax, %eax
	je	.L21
	leaq	-32(%rbp), %rax
	movq	%rax, -56(%rbp)
	movl	$0, -32(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, %edi
	call	filelength
	movl	%eax, -28(%rbp)
	leaq	-32(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	ExtractFileBase
	movl	numlumps(%rip), %eax
	addl	$1, %eax
	movl	%eax, numlumps(%rip)
	jmp	.L22
.L21:
	leaq	-44(%rbp), %rcx
	movl	-80(%rbp), %eax
	movl	$12, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	leaq	-44(%rbp), %rax
	movl	$4, %edx
	leaq	.LC5(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncmp@PLT
	testl	%eax, %eax
	je	.L23
	leaq	-44(%rbp), %rax
	movl	$4, %edx
	leaq	.LC6(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncmp@PLT
	testl	%eax, %eax
	je	.L23
	movq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L23:
	movl	-40(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-40(%rbp), %eax
	cltq
	sall	$4, %eax
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	cltq
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L24:
	cmpq	%rdx, %rsp
	je	.L25
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L24
.L25:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L26
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L26:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -56(%rbp)
	movl	-36(%rbp), %eax
	movslq	%eax, %rcx
	movl	-80(%rbp), %eax
	movl	$0, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	lseek@PLT
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	movq	-56(%rbp), %rcx
	movl	-80(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	movl	-40(%rbp), %edx
	movl	numlumps(%rip), %eax
	addl	%edx, %eax
	movl	%eax, numlumps(%rip)
.L22:
	movl	numlumps(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	lumpinfo(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	realloc@PLT
	movq	%rax, lumpinfo(%rip)
	movq	lumpinfo(%rip), %rax
	testq	%rax, %rax
	jne	.L27
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L27:
	movq	lumpinfo(%rip), %rcx
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -64(%rbp)
	movq	reloadname(%rip), %rax
	testq	%rax, %rax
	jne	.L28
	movl	-80(%rbp), %eax
	jmp	.L29
.L28:
	movl	$-1, %eax
.L29:
	movl	%eax, -68(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -84(%rbp)
	jmp	.L30
.L31:
	movq	-64(%rbp), %rax
	movl	-68(%rbp), %edx
	movl	%edx, 8(%rax)
	movq	-56(%rbp), %rax
	movl	(%rax), %edx
	movq	-64(%rbp), %rax
	movl	%edx, 12(%rax)
	movq	-56(%rbp), %rax
	movl	4(%rax), %edx
	movq	-64(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-56(%rbp), %rax
	leaq	8(%rax), %rcx
	movq	-64(%rbp), %rax
	movl	$8, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncpy@PLT
	addl	$1, -84(%rbp)
	addq	$20, -64(%rbp)
	addq	$16, -56(%rbp)
.L30:
	movl	numlumps(%rip), %eax
	cmpl	%eax, -84(%rbp)
	jb	.L31
	movq	reloadname(%rip), %rax
	testq	%rax, %rax
	je	.L17
	movl	-80(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
.L17:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L33
	call	__stack_chk_fail@PLT
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	W_AddFile, .-W_AddFile
	.section	.rodata
.LC9:
	.string	"W_Reload: couldn't open %s"
	.text
	.globl	W_Reload
	.type	W_Reload, @function
W_Reload:
.LFB10:
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
	movq	reloadname(%rip), %rax
	testq	%rax, %rax
	je	.L45
	movq	reloadname(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -52(%rbp)
	cmpl	$-1, -52(%rbp)
	jne	.L37
	movq	reloadname(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L37:
	leaq	-20(%rbp), %rcx
	movl	-52(%rbp), %eax
	movl	$12, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	movl	-16(%rbp), %eax
	movl	%eax, -48(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-48(%rbp), %eax
	cltq
	sall	$4, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	cltq
	leaq	8(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L38:
	cmpq	%rdx, %rsp
	je	.L39
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L38
.L39:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L40
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L40:
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -32(%rbp)
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-52(%rbp), %eax
	movl	$0, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	lseek@PLT
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rcx
	movl	-52(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	movq	lumpinfo(%rip), %rcx
	movl	reloadlump(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -40(%rbp)
	movl	reloadlump(%rip), %eax
	movl	%eax, -56(%rbp)
	jmp	.L41
.L43:
	movq	lumpcache(%rip), %rax
	movl	-56(%rbp), %edx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L42
	movq	lumpcache(%rip), %rax
	movl	-56(%rbp), %edx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	Z_Free@PLT
.L42:
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 12(%rax)
	movq	-32(%rbp), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, 16(%rax)
	addl	$1, -56(%rbp)
	addq	$20, -40(%rbp)
	addq	$16, -32(%rbp)
.L41:
	movl	reloadlump(%rip), %edx
	movl	-48(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -56(%rbp)
	jb	.L43
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
	jmp	.L34
.L45:
	nop
.L34:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L44
	call	__stack_chk_fail@PLT
.L44:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	W_Reload, .-W_Reload
	.section	.rodata
.LC10:
	.string	"W_InitFiles: no files found"
.LC11:
	.string	"Couldn't allocate lumpcache"
	.text
	.globl	W_InitMultipleFiles
	.type	W_InitMultipleFiles, @function
W_InitMultipleFiles:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, numlumps(%rip)
	movl	$1, %edi
	call	malloc@PLT
	movq	%rax, lumpinfo(%rip)
	jmp	.L47
.L48:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	W_AddFile
	addq	$8, -24(%rbp)
.L47:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L48
	movl	numlumps(%rip), %eax
	testl	%eax, %eax
	jne	.L49
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L49:
	movl	numlumps(%rip), %eax
	cltq
	sall	$3, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, lumpcache(%rip)
	movq	lumpcache(%rip), %rax
	testq	%rax, %rax
	jne	.L50
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L50:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	lumpcache(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	W_InitMultipleFiles, .-W_InitMultipleFiles
	.globl	W_InitFile
	.type	W_InitFile, @function
W_InitFile:
.LFB12:
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
	movq	%rax, -32(%rbp)
	movq	$0, -24(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	W_InitMultipleFiles
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L52
	call	__stack_chk_fail@PLT
.L52:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	W_InitFile, .-W_InitFile
	.globl	W_NumLumps
	.type	W_NumLumps, @function
W_NumLumps:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	numlumps(%rip), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	W_NumLumps, .-W_NumLumps
	.globl	W_CheckNumForName
	.type	W_CheckNumForName, @function
W_CheckNumForName:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-56(%rbp), %rcx
	leaq	-20(%rbp), %rax
	movl	$8, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncpy@PLT
	movb	$0, -12(%rbp)
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
	call	strupr
	movl	-20(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -36(%rbp)
	movq	lumpinfo(%rip), %rcx
	movl	numlumps(%rip), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -32(%rbp)
	jmp	.L56
.L59:
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -40(%rbp)
	jne	.L56
	movq	-32(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jne	.L56
	movq	lumpinfo(%rip), %rax
	movq	-32(%rbp), %rdx
	subq	%rax, %rdx
	sarq	$2, %rdx
	movabsq	$-3689348814741910323, %rax
	imulq	%rdx, %rax
	jmp	.L60
.L56:
	movq	-32(%rbp), %rax
	leaq	-20(%rax), %rdx
	movq	%rdx, -32(%rbp)
	movq	lumpinfo(%rip), %rdx
	cmpq	%rdx, %rax
	jne	.L59
	movl	$-1, %eax
.L60:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L61
	call	__stack_chk_fail@PLT
.L61:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	W_CheckNumForName, .-W_CheckNumForName
	.section	.rodata
	.align 8
.LC12:
	.string	"W_GetNumForName: %s not found!"
	.text
	.globl	W_GetNumForName
	.type	W_GetNumForName, @function
W_GetNumForName:
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
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	W_CheckNumForName
	movl	%eax, -4(%rbp)
	cmpl	$-1, -4(%rbp)
	jne	.L63
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L63:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	W_GetNumForName, .-W_GetNumForName
	.section	.rodata
.LC13:
	.string	"W_LumpLength: %i >= numlumps"
	.text
	.globl	W_LumpLength
	.type	W_LumpLength, @function
W_LumpLength:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	numlumps(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L66
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L66:
	movq	lumpinfo(%rip), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	16(%rax), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	W_LumpLength, .-W_LumpLength
	.section	.rodata
.LC14:
	.string	"W_ReadLump: %i >= numlumps"
.LC15:
	.string	"W_ReadLump: couldn't open %s"
	.align 8
.LC16:
	.string	"W_ReadLump: only read %i of %i on lump %i"
	.text
	.globl	W_ReadLump
	.type	W_ReadLump, @function
W_ReadLump:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	numlumps(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L69
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L69:
	movq	lumpinfo(%rip), %rcx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$-1, %eax
	jne	.L70
	movq	reloadname(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -16(%rbp)
	cmpl	$-1, -16(%rbp)
	jne	.L71
	movq	reloadname(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
	jmp	.L71
.L70:
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, -16(%rbp)
.L71:
	movq	-8(%rbp), %rax
	movl	12(%rax), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movl	$0, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	lseek@PLT
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rcx
	movl	-16(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	movl	%eax, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jge	.L72
	movq	-8(%rbp), %rax
	movl	16(%rax), %edx
	movl	-20(%rbp), %ecx
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L72:
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	$-1, %eax
	jne	.L74
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	close@PLT
.L74:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	W_ReadLump, .-W_ReadLump
	.section	.rodata
	.align 8
.LC17:
	.string	"W_CacheLumpNum: %i >= numlumps"
.LC18:
	.string	"Z_CT at w_wad.c:%i"
	.text
	.globl	W_CacheLumpNum
	.type	W_CacheLumpNum, @function
W_CacheLumpNum:
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
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	-36(%rbp), %eax
	movl	numlumps(%rip), %edx
	cmpl	%edx, %eax
	jb	.L76
	movl	-36(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L76:
	movq	lumpcache(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L77
	movq	lumpcache(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	leaq	(%rax,%rdx), %rbx
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	W_LumpLength
	movl	%eax, %ecx
	movl	-40(%rbp), %eax
	movq	%rbx, %rdx
	movl	%eax, %esi
	movl	%ecx, %edi
	call	Z_Malloc@PLT
	movq	%rax, -24(%rbp)
	movq	lumpcache(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-36(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	W_ReadLump
	jmp	.L78
.L77:
	movq	lumpcache(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	subq	$40, %rax
	movl	20(%rax), %eax
	cmpl	$1919505, %eax
	je	.L79
	movl	$496, %esi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L79:
	movq	lumpcache(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-40(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	Z_ChangeTag2@PLT
.L78:
	movq	lumpcache(%rip), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	W_CacheLumpNum, .-W_CacheLumpNum
	.globl	W_CacheLumpName
	.type	W_CacheLumpName, @function
W_CacheLumpName:
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
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	W_GetNumForName
	movl	%eax, %edx
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	W_CacheLumpNum
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	W_CacheLumpName, .-W_CacheLumpName
	.globl	info
	.bss
	.align 32
	.type	info, @object
	.size	info, 100000
info:
	.zero	100000
	.globl	profilecount
	.align 4
	.type	profilecount, @object
	.size	profilecount, 4
profilecount:
	.zero	4
	.section	.rodata
.LC19:
	.string	"w"
.LC20:
	.string	"waddump.txt"
.LC21:
	.string	"%s "
.LC22:
	.string	"    %c"
	.text
	.globl	W_Profile
	.type	W_Profile, @function
W_Profile:
.LFB20:
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
	movl	$0, -56(%rbp)
	jmp	.L84
.L89:
	movq	lumpcache(%rip), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -40(%rbp)
	cmpq	$0, -40(%rbp)
	jne	.L85
	movb	$32, -57(%rbp)
	jmp	.L86
.L85:
	movq	-40(%rbp), %rax
	subq	$40, %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$99, %eax
	jg	.L87
	movb	$83, -57(%rbp)
	jmp	.L88
.L87:
	movb	$80, -57(%rbp)
.L88:
	movl	profilecount(%rip), %eax
	movsbl	-57(%rbp), %ecx
	movslq	%eax, %rsi
	movl	-56(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rsi, %rax
	leaq	0(,%rax,4), %rdx
	leaq	info(%rip), %rax
	movl	%ecx, (%rdx,%rax)
.L86:
	addl	$1, -56(%rbp)
.L84:
	movl	numlumps(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L89
	movl	profilecount(%rip), %eax
	addl	$1, %eax
	movl	%eax, profilecount(%rip)
	leaq	.LC19(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -48(%rbp)
	movb	$0, -9(%rbp)
	movl	$0, -56(%rbp)
	jmp	.L90
.L99:
	movq	lumpinfo(%rip), %rcx
	movl	-56(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movq	%rax, -17(%rbp)
	movl	$0, -52(%rbp)
	jmp	.L91
.L94:
	movl	-52(%rbp), %eax
	cltq
	movzbl	-17(%rbp,%rax), %eax
	testb	%al, %al
	je	.L101
	addl	$1, -52(%rbp)
.L91:
	cmpl	$7, -52(%rbp)
	jle	.L94
	jmp	.L95
.L101:
	nop
	jmp	.L95
.L96:
	movl	-52(%rbp), %eax
	cltq
	movb	$32, -17(%rbp,%rax)
	addl	$1, -52(%rbp)
.L95:
	cmpl	$7, -52(%rbp)
	jle	.L96
	leaq	-17(%rbp), %rdx
	movq	-48(%rbp), %rax
	leaq	.LC21(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movl	$0, -52(%rbp)
	jmp	.L97
.L98:
	movl	-52(%rbp), %eax
	movslq	%eax, %rcx
	movl	-56(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	info(%rip), %rax
	movl	(%rdx,%rax), %edx
	movq	-48(%rbp), %rax
	leaq	.LC22(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addl	$1, -52(%rbp)
.L97:
	movl	profilecount(%rip), %eax
	cmpl	%eax, -52(%rbp)
	jl	.L98
	movq	-48(%rbp), %rax
	movq	%rax, %rsi
	movl	$10, %edi
	call	fputc@PLT
	addl	$1, -56(%rbp)
.L90:
	movl	numlumps(%rip), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L99
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L100
	call	__stack_chk_fail@PLT
.L100:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	W_Profile, .-W_Profile
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
