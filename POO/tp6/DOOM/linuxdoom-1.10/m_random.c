	.file	"m_random.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: m_random.c,v 1.1 1997/02/03 22:45:11 b1 Exp $"
	.globl	rndtable
	.data
	.align 32
	.type	rndtable, @object
	.size	rndtable, 256
rndtable:
	.string	""
	.string	"\bm\334\336\361\225kK\370\376\214\020BJ\025\323/P\362\232\033\315\200\241YM$_nU0\324\214\323\371\026O\3102\034\2744\214\312xD\221>F\270\276[\305\230\340\225h\031\262\374\266\312\266\215\305\004Q\265\362\221*'\343\234\306\341\301\333]z\257\371"
	.ascii	"\257\217F\357.\366\2435\243m\250\207\002\353\031\\\024\221\212"
	.ascii	"ME\246N\260\255\324\246q^\241)2\3571o\244F<\002%\253K\210\234"
	.ascii	"\0138*\222\212\345I\222M=b\304\207j?\305\303V`\313qe\252\367"
	.ascii	"\265qP\372l\007\377\355\201\342Okp\246g\361\030\337\357x\306"
	.ascii	":<R\200\003\270B\217\340\221\340Q\316\243-?Z\250r;!\237_\034"
	.ascii	"\213{b}\304\017F\302\3756\016m\342G\021\241]\272W\364\212\024"
	.ascii	"4{\373\032$\021.4\347\350L\037\335T%\330\245\324j\305\362b+'"
	.ascii	"\257\376\221\276Tv\336\273\210x\243\354\371"
	.globl	rndindex
	.bss
	.align 4
	.type	rndindex, @object
	.size	rndindex, 4
rndindex:
	.zero	4
	.globl	prndindex
	.align 4
	.type	prndindex, @object
	.size	prndindex, 4
prndindex:
	.zero	4
	.text
	.globl	P_Random
	.type	P_Random, @function
P_Random:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	prndindex(%rip), %eax
	addl	$1, %eax
	movzbl	%al, %eax
	movl	%eax, prndindex(%rip)
	movl	prndindex(%rip), %eax
	cltq
	leaq	rndtable(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	P_Random, .-P_Random
	.globl	M_Random
	.type	M_Random, @function
M_Random:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	rndindex(%rip), %eax
	addl	$1, %eax
	movzbl	%al, %eax
	movl	%eax, rndindex(%rip)
	movl	rndindex(%rip), %eax
	cltq
	leaq	rndtable(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	M_Random, .-M_Random
	.globl	M_ClearRandom
	.type	M_ClearRandom, @function
M_ClearRandom:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, prndindex(%rip)
	movl	prndindex(%rip), %eax
	movl	%eax, rndindex(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	M_ClearRandom, .-M_ClearRandom
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
