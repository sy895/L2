	.file	"doomstat.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.globl	gamemode
	.data
	.align 4
	.type	gamemode, @object
	.size	gamemode, 4
gamemode:
	.long	4
	.globl	gamemission
	.bss
	.align 4
	.type	gamemission, @object
	.size	gamemission, 4
gamemission:
	.zero	4
	.globl	language
	.align 4
	.type	language, @object
	.size	language, 4
language:
	.zero	4
	.globl	modifiedgame
	.align 4
	.type	modifiedgame, @object
	.size	modifiedgame, 4
modifiedgame:
	.zero	4
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
