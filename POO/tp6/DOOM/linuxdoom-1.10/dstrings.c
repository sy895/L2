	.file	"dstrings.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 49
rcsid:
	.string	"$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $"
	.globl	endmsg
	.align 8
.LC0:
	.string	"are you sure you want to\nquit this great game?"
	.align 8
.LC1:
	.string	"please don't leave, there's more\ndemons to toast!"
	.align 8
.LC2:
	.string	"let's beat it -- this is turning\ninto a bloodbath!"
	.align 8
.LC3:
	.string	"i wouldn't leave if i were you.\ndos is much worse."
	.align 8
.LC4:
	.string	"you're trying to say you like dos\nbetter than me, right?"
	.align 8
.LC5:
	.string	"don't leave yet -- there's a\ndemon around that corner!"
	.align 8
.LC6:
	.string	"ya know, next time you come in here\ni'm gonna toast ya."
	.align 8
.LC7:
	.string	"go ahead and leave. see if i care.you want to quit?\nthen, thou hast lost an eighth!"
	.align 8
.LC8:
	.string	"don't go now, there's a \ndimensional shambler waiting\nat the dos prompt!"
	.align 8
.LC9:
	.string	"get outta here and go back\nto your boring programs."
	.align 8
.LC10:
	.string	"if i were your boss, i'd \n deathmatch ya in a minute!"
	.align 8
.LC11:
	.string	"look, bud. you leave now\nand you forfeit your body count!"
	.align 8
.LC12:
	.string	"just leave. when you come\nback, i'll be waiting with a bat."
	.align 8
.LC13:
	.string	"you're lucky i don't smack\nyou for thinking about leaving.fuck you, pussy!\nget the fuck out!"
	.align 8
.LC14:
	.string	"you quit and i'll jizz\nin your cystholes!"
	.align 8
.LC15:
	.string	"if you leave, i'll make\nthe lord drink my jizz."
	.align 8
.LC16:
	.string	"hey, ron! can we say\n'fuck' in the game?"
	.align 8
.LC17:
	.string	"i'd leave: this is just\nmore monsters and levels.\nwhat a load."
	.align 8
.LC18:
	.string	"suck it down, asshole!\nyou're a fucking wimp!"
	.align 8
.LC19:
	.string	"don't quit now! we're \nstill spending your money!"
	.align 8
.LC20:
	.string	"THIS IS NO MESSAGE!\nPage intentionally left blank."
	.section	.data.rel.local,"aw"
	.align 32
	.type	endmsg, @object
	.size	endmsg, 184
endmsg:
	.quad	.LC0
	.quad	.LC1
	.quad	.LC2
	.quad	.LC3
	.quad	.LC4
	.quad	.LC5
	.quad	.LC6
	.quad	.LC7
	.quad	.LC8
	.quad	.LC9
	.quad	.LC10
	.quad	.LC11
	.quad	.LC12
	.quad	.LC13
	.quad	.LC14
	.quad	.LC15
	.quad	.LC16
	.quad	.LC17
	.quad	.LC18
	.quad	.LC19
	.quad	.LC20
	.zero	16
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
