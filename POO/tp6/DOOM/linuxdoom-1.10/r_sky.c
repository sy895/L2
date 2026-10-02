	.file	"r_sky.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.globl	skyflatnum
	.bss
	.align 4
	.type	skyflatnum, @object
	.size	skyflatnum, 4
skyflatnum:
	.zero	4
	.globl	skytexture
	.align 4
	.type	skytexture, @object
	.size	skytexture, 4
skytexture:
	.zero	4
	.globl	skytexturemid
	.align 4
	.type	skytexturemid, @object
	.size	skytexturemid, 4
skytexturemid:
	.zero	4
	.text
	.globl	R_InitSkyMap
	.type	R_InitSkyMap, @function
R_InitSkyMap:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$6553600, skytexturemid(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	R_InitSkyMap, .-R_InitSkyMap
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
