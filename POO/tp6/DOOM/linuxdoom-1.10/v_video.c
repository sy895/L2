	.file	"v_video.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 50
rcsid:
	.string	"$Id: v_video.c,v 1.5 1997/02/03 22:45:13 b1 Exp $"
	.globl	screens
	.bss
	.align 32
	.type	screens, @object
	.size	screens, 40
screens:
	.zero	40
	.globl	dirtybox
	.align 16
	.type	dirtybox, @object
	.size	dirtybox, 16
dirtybox:
	.zero	16
	.globl	gammatable
	.data
	.align 32
	.type	gammatable, @object
	.size	gammatable, 1280
gammatable:
	.ascii	"\001\002\003\004\005\006\007\b\t\n\013\f\r\016\017\020\021\022"
	.ascii	"\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&"
	.ascii	"'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`a"
	.ascii	"bcdefghijklmnopqrstuvwxyz{|}~\177\200\200\201\202\203\204\205"
	.ascii	"\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224"
	.ascii	"\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243"
	.ascii	"\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262"
	.ascii	"\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301"
	.ascii	"\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320"
	.ascii	"\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337"
	.ascii	"\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356"
	.ascii	"\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375"
	.ascii	"\376\377"
	.ascii	"\002\004\005\007\b\n\013\f\016\017\020\022\023\024\025\027\030"
	.ascii	"\031\032\033\035\036\037 !\"$%&'()*,-./012346789:;<=>?@ABCEF"
	.ascii	"GHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\177"
	.ascii	"\200\201\201\202\203\204\205\206\207\210\211\212\213\214\215"
	.ascii	"\216\217\220\221\222\223\224\224\225\226\227\230\231\232\233"
	.ascii	"\234\235\236\237\240\241\242\243\243\244\245\246\247\250\251"
	.ascii	"\252\253\254\255\256\257\257\260\261\262\263\264\265\266\267"
	.ascii	"\270\271\272\272\273\274\275\276\277\300\301\302\303\304\304"
	.ascii	"\305\306\307\310\311\312\313\314\315\315\316\317\320\321\322"
	.ascii	"\323\324\325\326\326\327\330\331\332\333\334\335\336\336\337"
	.ascii	"\340\341\342\343\344\345\346\346\347\350\351\352\353\354\355"
	.ascii	"\355\356\357\360\361\362\363\364\365\365\366\367\370\371\372"
	.ascii	"\373\374\374\375\376\377"
	.ascii	"\004\007\t\013\r\017\021\023\025\026\030\032\033\035\036 !#$"
	.ascii	"&'(*+-./02346789;<=>?ABCDEFHIJKLMNOPRSTUVWXYZ[\\]^_`abdefghi"
	.ascii	"jklmnopqrrstuvwxyz{|}~\177\200\201\202\203\204\205\205\206\207"
	.ascii	"\210\211\212\213\214\215\216\217\220\220\221\222\223\224\225"
	.ascii	"\226\227\230\231\231\232\233\234\235\236\237\240\240\241\242"
	.ascii	"\243\244\245\246\246\247\250\251\252\253\254\254\255\256\257"
	.ascii	"\260\261\262\262\263\264\265\266\267\267\270\271\272\273\274"
	.ascii	"\274\275\276\277\300\301\301\302\303\304\305\305\306\307\310"
	.ascii	"\311\311\312\313\314\315\316\316\317\320\321\322\322\323\324"
	.ascii	"\325\325\326\327\330\331\331\332\333\334\335\335\336\337\340"
	.ascii	"\340\341\342\343\344\344\345\346\347\347\350\351\352\353\353"
	.ascii	"\354\355\356\356\357\360\361\361\362\363\364\364\365\366\367"
	.ascii	"\367\370\371\372\373\373\374\375\376\376\377"
	.ascii	"\b\f\020\023\026\030\033\035\037\"$&()+-/124579:<=?@ACDFGHJK"
	.ascii	"LMOPQRTUVWXZ[\\]^_`bcdefghijklmnopqrstuvwxyz{|}~\177\200\201"
	.ascii	"\202\203\204\205\206\207\207\210\211\212\213\214\215\216\217"
	.ascii	"\217\220\221\222\223\224\225\226\226\227\230\231\232\233\233"
	.ascii	"\234\235\236\237\240\240\241\242\243\244\245\245\246\247\250"
	.ascii	"\251\251\252\253\254\255\255\256\257\260\260\261\262\263\264"
	.ascii	"\264\265\266\267\267\270\271\272\272\273\274\275\275\276\277"
	.ascii	"\300\300\301\302\303\303\304\305\305\306\307\310\310\311\312"
	.ascii	"\312\313\314\315\315\316\317\317\320\321\322\322\323\324\324"
	.ascii	"\325\326\326\327\330\330\331\332\333\333\334\335\335\336\337"
	.ascii	"\337\340\341\341\342\343\343\344\345\345\346\347\347\350\351"
	.ascii	"\351\352\353\353\354\355\355\356\356\357\360\360\361\362\362"
	.ascii	"\363\364\364\365\366\366\367\367\370\371\371\372\373\373\374"
	.ascii	"\375\375\376\376\377"
	.ascii	"\020\027\034 $'*-02579<>@BDEGIKLNPQSTVWYZ\\]^`abdefgijklmnpq"
	.ascii	"rstuvwxyz{|}~\200\200\201\202\203\204\205\206\207\210\211\212"
	.ascii	"\213\214\215\216\217\217\220\221\222\223\224\225\226\226\227"
	.ascii	"\230\231\232\233\233\234\235\236\237\237\240\241\242\243\243"
	.ascii	"\244\245\246\246\247\250\251\251\252\253\254\254\255\256\257"
	.ascii	"\257\260\261\261\262\263\264\264\265\266\266\267\270\270\271"
	.ascii	"\272\273\273\274\275\275\276\277\277\300\301\301\302\303\303"
	.ascii	"\304\304\305\306\306\307\310\310\311\312\312\313\313\314\315"
	.ascii	"\315\316\317\317\320\320\321\322\322\323\323\324\325\325\326"
	.ascii	"\326\327\330\330\331\331\332\333\333\334\334\335\335\336\337"
	.ascii	"\337\340\340\341\341\342\343\343\344\344\345\345\346\346\347"
	.ascii	"\350\350\351\351\352\352\353\353\354\354\355\355\356\357\357"
	.ascii	"\360\360\361\361\362\362\363\363\364\364\365\365\366\366\367"
	.ascii	"\367\370\370\371\371\372\372\373\373\374\374\375\376\376\377"
	.ascii	"\377"
	.globl	usegamma
	.bss
	.align 4
	.type	usegamma, @object
	.size	usegamma, 4
usegamma:
	.zero	4
	.text
	.globl	V_MarkRect
	.type	V_MarkRect, @function
V_MarkRect:
.LFB0:
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
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	dirtybox(%rip), %rax
	movq	%rax, %rdi
	call	M_AddToBox@PLT
	movl	-8(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	leal	-1(%rax), %edx
	movl	-4(%rbp), %ecx
	movl	-12(%rbp), %eax
	addl	%ecx, %eax
	subl	$1, %eax
	movl	%eax, %esi
	leaq	dirtybox(%rip), %rax
	movq	%rax, %rdi
	call	M_AddToBox@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	V_MarkRect, .-V_MarkRect
	.section	.rodata
.LC0:
	.string	"Bad V_CopyRect"
	.text
	.globl	V_CopyRect
	.type	V_CopyRect, @function
V_CopyRect:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	%ecx, -32(%rbp)
	movl	%r8d, -36(%rbp)
	movl	%r9d, -40(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L3
	movl	-20(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L3
	cmpl	$0, -24(%rbp)
	js	.L3
	movl	-24(%rbp), %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	cmpl	$200, %eax
	jg	.L3
	cmpl	$0, -40(%rbp)
	js	.L3
	movl	-40(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L3
	cmpl	$0, 16(%rbp)
	js	.L3
	movl	16(%rbp), %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	cmpl	$200, %eax
	jg	.L3
	movl	-28(%rbp), %eax
	cmpl	$4, %eax
	ja	.L3
	movl	24(%rbp), %eax
	cmpl	$4, %eax
	jbe	.L4
.L3:
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L4:
	movl	-36(%rbp), %ecx
	movl	-32(%rbp), %edx
	movl	16(%rbp), %esi
	movl	-40(%rbp), %eax
	movl	%eax, %edi
	call	V_MarkRect
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-24(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movl	-20(%rbp), %eax
	cltq
	addq	%rdx, %rax
	addq	%rcx, %rax
	movq	%rax, -16(%rbp)
	movl	24(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	16(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movl	-40(%rbp), %eax
	cltq
	addq	%rdx, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L5
.L6:
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	addq	$320, -16(%rbp)
	addq	$320, -8(%rbp)
	subl	$1, -36(%rbp)
.L5:
	cmpl	$0, -36(%rbp)
	jg	.L6
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	V_CopyRect, .-V_CopyRect
	.section	.rodata
.LC1:
	.string	"Patch at %d,%d exceeds LFB\n"
	.align 8
.LC2:
	.string	"V_DrawPatch: bad patch (ignored)\n"
	.text
	.globl	V_DrawPatch
	.type	V_DrawPatch, @function
V_DrawPatch:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movl	%edi, -52(%rbp)
	movl	%esi, -56(%rbp)
	movl	%edx, -60(%rbp)
	movq	%rcx, -72(%rbp)
	movq	-72(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	%eax, -56(%rbp)
	movq	-72(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	subl	%eax, -52(%rbp)
	cmpl	$0, -52(%rbp)
	js	.L8
	movq	-72(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L8
	cmpl	$0, -56(%rbp)
	js	.L8
	movq	-72(%rbp), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	-56(%rbp), %eax
	addl	%edx, %eax
	cmpl	$200, %eax
	jg	.L8
	movl	-60(%rbp), %eax
	cmpl	$4, %eax
	jbe	.L9
.L8:
	movq	stderr(%rip), %rax
	movl	-56(%rbp), %ecx
	movl	-52(%rbp), %edx
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$33, %edx
	movl	$1, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	fwrite@PLT
	jmp	.L7
.L9:
	cmpl	$0, -60(%rbp)
	jne	.L11
	movq	-72(%rbp), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %ecx
	movq	-72(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-56(%rbp), %esi
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	V_MarkRect
.L11:
	movl	$0, -40(%rbp)
	movl	-60(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-56(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movl	-52(%rbp), %eax
	cltq
	addq	%rdx, %rax
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movq	-72(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -36(%rbp)
	jmp	.L12
.L17:
	movq	-72(%rbp), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	movl	8(%rax,%rdx,4), %eax
	movslq	%eax, %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	jmp	.L13
.L16:
	movq	-32(%rbp), %rax
	addq	$3, %rax
	movq	%rax, -8(%rbp)
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -44(%rbp)
	jmp	.L14
.L15:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	addq	$320, -16(%rbp)
.L14:
	movl	-44(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -44(%rbp)
	testl	%eax, %eax
	jne	.L15
	movq	-32(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	addq	$4, %rax
	addq	%rax, -32(%rbp)
.L13:
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L16
	addl	$1, -52(%rbp)
	addl	$1, -40(%rbp)
	addq	$1, -24(%rbp)
.L12:
	movl	-40(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L17
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	V_DrawPatch, .-V_DrawPatch
	.section	.rodata
	.align 8
.LC3:
	.string	"Patch origin %d,%d exceeds LFB\n"
	.align 8
.LC4:
	.string	"Bad V_DrawPatch in V_DrawPatchFlipped"
	.text
	.globl	V_DrawPatchFlipped
	.type	V_DrawPatchFlipped, @function
V_DrawPatchFlipped:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movl	%edi, -52(%rbp)
	movl	%esi, -56(%rbp)
	movl	%edx, -60(%rbp)
	movq	%rcx, -72(%rbp)
	movq	-72(%rbp), %rax
	movzwl	6(%rax), %eax
	cwtl
	subl	%eax, -56(%rbp)
	movq	-72(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	subl	%eax, -52(%rbp)
	cmpl	$0, -52(%rbp)
	js	.L19
	movq	-72(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L19
	cmpl	$0, -56(%rbp)
	js	.L19
	movq	-72(%rbp), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %edx
	movl	-56(%rbp), %eax
	addl	%edx, %eax
	cmpl	$200, %eax
	jg	.L19
	movl	-60(%rbp), %eax
	cmpl	$4, %eax
	jbe	.L20
.L19:
	movq	stderr(%rip), %rax
	movl	-56(%rbp), %ecx
	movl	-52(%rbp), %edx
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L20:
	cmpl	$0, -60(%rbp)
	jne	.L21
	movq	-72(%rbp), %rax
	movzwl	2(%rax), %eax
	movswl	%ax, %ecx
	movq	-72(%rbp), %rax
	movzwl	(%rax), %eax
	movswl	%ax, %edx
	movl	-56(%rbp), %esi
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	V_MarkRect
.L21:
	movl	$0, -40(%rbp)
	movl	-60(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-56(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movl	-52(%rbp), %eax
	cltq
	addq	%rdx, %rax
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movq	-72(%rbp), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -36(%rbp)
	jmp	.L22
.L27:
	movl	-36(%rbp), %eax
	subl	$1, %eax
	subl	-40(%rbp), %eax
	movl	%eax, %edx
	movq	-72(%rbp), %rax
	movslq	%edx, %rdx
	movl	8(%rax,%rdx,4), %eax
	movslq	%eax, %rdx
	movq	-72(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	jmp	.L23
.L26:
	movq	-32(%rbp), %rax
	addq	$3, %rax
	movq	%rax, -8(%rbp)
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -44(%rbp)
	jmp	.L24
.L25:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	addq	$320, -16(%rbp)
.L24:
	movl	-44(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -44(%rbp)
	testl	%eax, %eax
	jne	.L25
	movq	-32(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	addq	$4, %rax
	addq	%rax, -32(%rbp)
.L23:
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L26
	addl	$1, -52(%rbp)
	addl	$1, -40(%rbp)
	addq	$1, -24(%rbp)
.L22:
	movl	-40(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L27
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	V_DrawPatchFlipped, .-V_DrawPatchFlipped
	.globl	V_DrawPatchDirect
	.type	V_DrawPatchDirect, @function
V_DrawPatchDirect:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movq	%rcx, -24(%rbp)
	movq	-24(%rbp), %rcx
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %esi
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	V_DrawPatch
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	V_DrawPatchDirect, .-V_DrawPatchDirect
	.section	.rodata
.LC5:
	.string	"Bad V_DrawBlock"
	.text
	.globl	V_DrawBlock
	.type	V_DrawBlock, @function
V_DrawBlock:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	%ecx, -32(%rbp)
	movl	%r8d, -36(%rbp)
	movq	%r9, -48(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L30
	movl	-20(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L30
	cmpl	$0, -24(%rbp)
	js	.L30
	movl	-24(%rbp), %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	cmpl	$200, %eax
	jg	.L30
	movl	-28(%rbp), %eax
	cmpl	$4, %eax
	jbe	.L31
.L30:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L31:
	movl	-36(%rbp), %ecx
	movl	-32(%rbp), %edx
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	V_MarkRect
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-24(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movl	-20(%rbp), %eax
	cltq
	addq	%rdx, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L32
.L33:
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	-48(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movl	-32(%rbp), %eax
	cltq
	addq	%rax, -48(%rbp)
	addq	$320, -8(%rbp)
.L32:
	movl	-36(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -36(%rbp)
	testl	%eax, %eax
	jne	.L33
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	V_DrawBlock, .-V_DrawBlock
	.globl	V_GetBlock
	.type	V_GetBlock, @function
V_GetBlock:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	%ecx, -32(%rbp)
	movl	%r8d, -36(%rbp)
	movq	%r9, -48(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L35
	movl	-20(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L35
	cmpl	$0, -24(%rbp)
	js	.L35
	movl	-24(%rbp), %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	cmpl	$200, %eax
	jg	.L35
	movl	-28(%rbp), %eax
	cmpl	$4, %eax
	jbe	.L36
.L35:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	I_Error@PLT
.L36:
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	(%rdx,%rax), %rcx
	movl	-24(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movl	-20(%rbp), %eax
	cltq
	addq	%rdx, %rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L37
.L38:
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rcx
	movq	-48(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	addq	$320, -8(%rbp)
	movl	-32(%rbp), %eax
	cltq
	addq	%rax, -48(%rbp)
.L37:
	movl	-36(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -36(%rbp)
	testl	%eax, %eax
	jne	.L38
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	V_GetBlock, .-V_GetBlock
	.globl	V_Init
	.type	V_Init, @function
V_Init:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$256000, %edi
	call	I_AllocLow@PLT
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L40
.L41:
	movl	-12(%rbp), %eax
	imull	$64000, %eax, %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	screens(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -12(%rbp)
.L40:
	cmpl	$3, -12(%rbp)
	jle	.L41
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	V_Init, .-V_Init
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
