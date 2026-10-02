	.file	"f_finale.c"
	.text
	.section	.rodata
	.align 32
	.type	rcsid, @object
	.size	rcsid, 51
rcsid:
	.string	"$Id: f_finale.c,v 1.5 1997/02/03 21:26:34 b1 Exp $"
	.globl	finalestage
	.bss
	.align 4
	.type	finalestage, @object
	.size	finalestage, 4
finalestage:
	.zero	4
	.globl	finalecount
	.align 4
	.type	finalecount, @object
	.size	finalecount, 4
finalecount:
	.zero	4
	.globl	e1text
	.section	.rodata
	.align 8
.LC0:
	.ascii	"Once you beat the big badasses and\nclean out the moon base "
	.ascii	"you're supposed\nto win, aren't you? Aren't you? Where's\nyo"
	.ascii	"ur fat reward and ticket home? What\nthe hell is this? It's "
	.ascii	"not supp"
	.string	"osed to\nend this way!\n\nIt stinks like rotten meat, but looks\nlike the lost Deimos base.  Looks like\nyou're stuck on The Shores of Hell.\nThe only way out is through.\n\nTo continue the DOOM experience, play\nThe Shores of Hell and its amazing\nsequel, Inferno!\n"
	.section	.data.rel.local,"aw"
	.align 8
	.type	e1text, @object
	.size	e1text, 8
e1text:
	.quad	.LC0
	.globl	e2text
	.section	.rodata
	.align 8
.LC1:
	.ascii	"You've done it! The hideous cyber-\ndemon lord that ruled th"
	.ascii	"e lost Deimos\nmoon base has been slain and you\nare triumph"
	.ascii	"ant! But ... where are\nyou? You clamber to the edge of the\n"
	.ascii	"moon and look down to see the awfu"
	.string	"l\ntruth.\n\nDeimos floats above Hell itself!\nYou've never heard of anyone escaping\nfrom Hell, but you'll make the bastards\nsorry they ever heard of you! Quickly,\nyou rappel down to  the surface of\nHell.\n\nNow, it's on to the final chapter of\nDOOM! -- Inferno."
	.section	.data.rel.local
	.align 8
	.type	e2text, @object
	.size	e2text, 8
e2text:
	.quad	.LC1
	.globl	e3text
	.section	.rodata
	.align 8
.LC2:
	.ascii	"The loathsome spiderdemon that\nmasterminded the invasion of"
	.ascii	" the moon\nbases and caused so much death has had\nits ass k"
	.ascii	"icked for all time.\n\nA hidden doorway opens and you enter."
	.ascii	"\nYou've proven too tough for Hell to\ncontain, and now Hell"
	.ascii	" at"
	.string	" last plays\nfair -- for you emerge from the door\nto see the green fields of Earth!\nHome at last.\n\nYou wonder what's been happening on\nEarth while you were battling evil\nunleashed. It's good that no Hell-\nspawn could have come through that\ndoor with you ..."
	.section	.data.rel.local
	.align 8
	.type	e3text, @object
	.size	e3text, 8
e3text:
	.quad	.LC2
	.globl	e4text
	.section	.rodata
	.align 8
.LC3:
	.ascii	"the spider mastermind must have sent forth\nits legions of h"
	.ascii	"ellspawn before your\nfinal confrontation with that terrible"
	.ascii	"\nbeast from hell.  but you stepped forward\nand brought for"
	.ascii	"th eternal damnation and\nsuffering upon the horde as a true"
	.ascii	" hero\nwould "
	.string	"in the face of something so evil.\n\nbesides, someone was gonna pay for what\nhappened to daisy, your pet rabbit.\n\nbut now, you see spread before you more\npotential pain and gibbitude as a nation\nof demons run amok among our cities.\n\nnext stop, hell on earth!"
	.section	.data.rel.local
	.align 8
	.type	e4text, @object
	.size	e4text, 8
e4text:
	.quad	.LC3
	.globl	c1text
	.section	.rodata
	.align 8
.LC4:
	.ascii	"YOU HAVE ENTERED DEEPLY INTO THE INFESTED\nSTARPORT. BUT SOM"
	.ascii	"ETHING IS WRONG. THE\nMONSTERS HAVE BROUGHT THEIR OWN REALIT"
	.ascii	"Y\nWITH THEM, AND THE STARPORT'S"
	.string	" TECHNOLOGY\nIS BEING SUBVERTED BY THEIR PRESENCE.\n\nAHEAD, YOU SEE AN OUTPOST OF HELL, A\nFORTIFIED ZONE. IF YOU CAN GET PAST IT,\nYOU CAN PENETRATE INTO THE HAUNTED HEART\nOF THE STARBASE AND FIND THE CONTROLLING\nSWITCH WHICH HOLDS EARTH'S POPULATION\nHOSTAGE."
	.section	.data.rel.local
	.align 8
	.type	c1text, @object
	.size	c1text, 8
c1text:
	.quad	.LC4
	.globl	c2text
	.section	.rodata
	.align 8
.LC5:
	.ascii	"YOU HAVE WON! YOUR VICTORY HAS ENABLED\nHUMANKIND TO EVACUAT"
	.ascii	"E EARTH AND ESCAPE\nTHE NIGHTMARE.  NOW YOU ARE THE ONLY\nHU"
	.ascii	"MAN LEFT ON THE FACE OF THE PLANET.\nCANNIBAL MUTATIONS, CAR"
	.ascii	"NIVOROUS ALIENS,\nAND EVIL SPIRITS ARE YOUR ONLY NEIGHBORS.\n"
	.ascii	"YOU SIT BACK AND WAIT FOR DEATH, CONTENT\nTHAT YOU HAVE SAVE"
	.ascii	"D YOUR SPECIES.\n\nBUT THEN, EARTH CONTROL BEAMS DOWN A\nMES"
	.ascii	"SAGE FROM "
	.string	"SPACE: \"SENSORS HAVE LOCATED\nTHE SOURCE OF THE ALIEN INVASION. IF YOU\nGO THERE, YOU MAY BE ABLE TO BLOCK THEIR\nENTRY.  THE ALIEN BASE IS IN THE HEART OF\nYOUR OWN HOME CITY, NOT FAR FROM THE\nSTARPORT.\" SLOWLY AND PAINFULLY YOU GET\nUP AND RETURN TO THE FRAY."
	.section	.data.rel.local
	.align 8
	.type	c2text, @object
	.size	c2text, 8
c2text:
	.quad	.LC5
	.globl	c3text
	.section	.rodata
	.align 8
.LC6:
	.ascii	"YOU ARE AT THE CORRUPT HEART OF THE CITY,\nSURROUNDED BY "
	.string	"THE CORPSES OF YOUR ENEMIES.\nYOU SEE NO WAY TO DESTROY THE CREATURES'\nENTRYWAY ON THIS SIDE, SO YOU CLENCH YOUR\nTEETH AND PLUNGE THROUGH IT.\n\nTHERE MUST BE A WAY TO CLOSE IT ON THE\nOTHER SIDE. WHAT DO YOU CARE IF YOU'VE\nGOT TO GO THROUGH HELL TO GET TO IT?"
	.section	.data.rel.local
	.align 8
	.type	c3text, @object
	.size	c3text, 8
c3text:
	.quad	.LC6
	.globl	c4text
	.section	.rodata
	.align 8
.LC7:
	.ascii	"THE HORRENDOUS VISAGE OF THE BIGGEST\nDEMON YOU'VE EVER SEEN"
	.ascii	" CRUMBLES BEFORE\nYOU, AFTER YOU PUMP YOUR ROCKETS INTO\nHIS"
	.ascii	" EXPOSED BRAIN. THE MONSTER SHRIVELS\nUP AND DIES, ITS THRAS"
	.ascii	"HING LIMBS\nDEVASTATING UNTOLD MILES OF HELL'S\nSURFACE.\n\n"
	.ascii	"YOU'VE"
	.string	" DONE IT. THE INVASION IS OVER.\nEARTH IS SAVED. HELL IS A WRECK. YOU\nWONDER WHERE BAD FOLKS WILL GO WHEN THEY\nDIE, NOW. WIPING THE SWEAT FROM YOUR\nFOREHEAD YOU BEGIN THE LONG TREK BACK\nHOME. REBUILDING EARTH OUGHT TO BE A\nLOT MORE FUN THAN RUINING IT WAS.\n"
	.section	.data.rel.local
	.align 8
	.type	c4text, @object
	.size	c4text, 8
c4text:
	.quad	.LC7
	.globl	c5text
	.section	.rodata
	.align 8
.LC8:
	.string	"CONGRATULATIONS, YOU'VE FOUND THE SECRET\nLEVEL! LOOKS LIKE IT'S BEEN BUILT BY\nHUMANS, RATHER THAN DEMONS. YOU WONDER\nWHO THE INMATES OF THIS CORNER OF HELL\nWILL BE."
	.section	.data.rel.local
	.align 8
	.type	c5text, @object
	.size	c5text, 8
c5text:
	.quad	.LC8
	.globl	c6text
	.section	.rodata
	.align 8
.LC9:
	.string	"CONGRATULATIONS, YOU'VE FOUND THE\nSUPER SECRET LEVEL!  YOU'D BETTER\nBLAZE THROUGH THIS ONE!\n"
	.section	.data.rel.local
	.align 8
	.type	c6text, @object
	.size	c6text, 8
c6text:
	.quad	.LC9
	.globl	p1text
	.section	.rodata
	.align 8
.LC10:
	.ascii	"You gloat over the steaming carcass of the\nGuardian.  With "
	.ascii	"its death, you've wrested\nthe Accelerator from the stinking"
	.ascii	" claws\nof Hell.  You relax and glance around the\nroom.  Da"
	.ascii	"m"
	.string	"n!  There was supposed to be at\nleast one working prototype, but you can't\nsee it. The demons must have taken it.\n\nYou must find the prototype, or all your\nstruggles will have been wasted. Keep\nmoving, keep fighting, keep killing.\nOh yes, keep living, too."
	.section	.data.rel.local
	.align 8
	.type	p1text, @object
	.size	p1text, 8
p1text:
	.quad	.LC10
	.globl	p2text
	.section	.rodata
	.align 8
.LC11:
	.string	"Even the deadly Arch-Vile labyrinth could\nnot stop you, and you've gotten to the\nprototype Accelerator which is soon\nefficiently and permanently deactivated.\n\nYou're good at that kind of thing."
	.section	.data.rel.local
	.align 8
	.type	p2text, @object
	.size	p2text, 8
p2text:
	.quad	.LC11
	.globl	p3text
	.section	.rodata
	.align 8
.LC12:
	.ascii	"You've bashed and battered your way into\nthe heart of the d"
	.ascii	"evil-hive.  T"
	.string	"ime for a\nSearch-and-Destroy mission, aimed at the\nGatekeeper, whose foul offspring is\ncascading to Earth.  Yeah, he's bad. But\nyou know who's worse!\n\nGrinning evilly, you check your gear, and\nget ready to give the bastard a little Hell\nof your own making!"
	.section	.data.rel.local
	.align 8
	.type	p3text, @object
	.size	p3text, 8
p3text:
	.quad	.LC12
	.globl	p4text
	.section	.rodata
	.align 8
.LC13:
	.ascii	"The Gatekeeper's evil face is splattered\nall over the place"
	.ascii	".  As its tattered corpse\ncollapses, an inverted Gate forms"
	.ascii	" and\nsucks down the shards of the last\nprototype Accelerat"
	.ascii	"or, not to mention the\nfew r"
	.string	"emaining demons.  You're done. Hell\nhas gone back to pounding bad dead folks \ninstead of good live ones.  Remember to\ntell your grandkids to put a rocket\nlauncher in your coffin. If you go to Hell\nwhen you die, you'll need it for some\nfinal cleaning-up ..."
	.section	.data.rel.local
	.align 8
	.type	p4text, @object
	.size	p4text, 8
p4text:
	.quad	.LC13
	.globl	p5text
	.section	.rodata
	.align 8
.LC14:
	.string	"You've found the second-hardest level we\ngot. Hope you have a saved game a level or\ntwo previous.  If not, be prepared to die\naplenty. For master marines only."
	.section	.data.rel.local
	.align 8
	.type	p5text, @object
	.size	p5text, 8
p5text:
	.quad	.LC14
	.globl	p6text
	.section	.rodata
	.align 8
.LC15:
	.string	"Betcha wondered just what WAS the hardest\nlevel we had ready for ya?  Now you know.\nNo one gets out alive."
	.section	.data.rel.local
	.align 8
	.type	p6text, @object
	.size	p6text, 8
p6text:
	.quad	.LC15
	.globl	t1text
	.section	.rodata
	.align 8
.LC16:
	.ascii	"You've fought your way out of the infested\nexperimental lab"
	.ascii	"s.   It seems that UAC has\nonce again gulped it down.  With"
	.ascii	" their\nhigh tur"
	.string	"nover, it must be hard for poor\nold UAC to buy corporate health insurance\nnowadays..\n\nAhead lies the military complex, now\nswarming with diseased horrors hot to get\ntheir teeth into you. With luck, the\ncomplex still has some warlike ordnance\nlaying around."
	.section	.data.rel.local
	.align 8
	.type	t1text, @object
	.size	t1text, 8
t1text:
	.quad	.LC16
	.globl	t2text
	.section	.rodata
	.align 8
.LC17:
	.ascii	"You hear the grinding of heavy machinery\nahead.  You s"
	.string	"ure hope they're not stamping\nout new hellspawn, but you're ready to\nream out a whole herd if you have to.\nThey might be planning a blood feast, but\nyou feel about as mean as two thousand\nmaniacs packed into one mad killer.\n\nYou don't plan to go down easy."
	.section	.data.rel.local
	.align 8
	.type	t2text, @object
	.size	t2text, 8
t2text:
	.quad	.LC17
	.globl	t3text
	.section	.rodata
	.align 8
.LC18:
	.ascii	"The vista opening ahead looks real damn\nfamiliar. Sme"
	.string	"lls familiar, too -- like\nfried excrement. You didn't like this\nplace before, and you sure as hell ain't\nplanning to like it now. The more you\nbrood on it, the madder you get.\nHefting your gun, an evil grin trickles\nonto your face. Time to take some names."
	.section	.data.rel.local
	.align 8
	.type	t3text, @object
	.size	t3text, 8
t3text:
	.quad	.LC18
	.globl	t4text
	.section	.rodata
	.align 8
.LC19:
	.ascii	"Suddenly, all is silent, from one horizon\nto the other. The"
	.ascii	" agonizing echo of Hell\nfades away, the nightmare sky turns"
	.ascii	" to\nblue, t"
	.string	"he heaps of monster corpses start \nto evaporate along with the evil stench \nthat filled the air. Jeeze, maybe you've\ndone it. Have you really won?\n\nSomething rumbles in the distance.\nA blue light begins to glow inside the\nruined skull of the demon-spitter."
	.section	.data.rel.local
	.align 8
	.type	t4text, @object
	.size	t4text, 8
t4text:
	.quad	.LC19
	.globl	t5text
	.section	.rodata
	.align 8
.LC20:
	.string	"What now? Looks totally different. Kind\nof like King Tut's condo. Well,\nwhatever's here can't be any worse\nthan usual. Can it?  Or maybe it's best\nto let sleeping gods lie.."
	.section	.data.rel.local
	.align 8
	.type	t5text, @object
	.size	t5text, 8
t5text:
	.quad	.LC20
	.globl	t6text
	.section	.rodata
	.align 8
.LC21:
	.ascii	"Time for a vacation. You've burst the\nbowels of hell and by"
	.ascii	" golly you're ready\nfor a break. You m"
	.string	"utter to yourself,\nMaybe someone else can kick Hell's ass\nnext time around. Ahead lies a quiet town,\nwith peaceful flowing water, quaint\nbuildings, and presumably no Hellspawn.\n\nAs you step off the transport, you hear\nthe stomp of a cyberdemon's iron shoe."
	.section	.data.rel.local
	.align 8
	.type	t6text, @object
	.size	t6text, 8
t6text:
	.quad	.LC21
	.globl	finaletext
	.bss
	.align 8
	.type	finaletext, @object
	.size	finaletext, 8
finaletext:
	.zero	8
	.globl	finaleflat
	.align 8
	.type	finaleflat, @object
	.size	finaleflat, 8
finaleflat:
	.zero	8
	.section	.rodata
.LC22:
	.string	"FLOOR4_8"
.LC23:
	.string	"SFLR6_1"
.LC24:
	.string	"MFLR8_4"
.LC25:
	.string	"MFLR8_3"
.LC26:
	.string	"SLIME16"
.LC27:
	.string	"RROCK14"
.LC28:
	.string	"RROCK07"
.LC29:
	.string	"RROCK17"
.LC30:
	.string	"RROCK13"
.LC31:
	.string	"RROCK19"
.LC32:
	.string	"F_SKY1"
	.text
	.globl	F_StartFinale
	.type	F_StartFinale, @function
F_StartFinale:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, gameaction(%rip)
	movl	$2, gamestate(%rip)
	movl	$0, viewactive(%rip)
	movl	$0, automapactive(%rip)
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	je	.L2
	cmpl	$3, %eax
	ja	.L3
	cmpl	$1, %eax
	jbe	.L2
	cmpl	$2, %eax
	je	.L4
	jmp	.L3
.L2:
	movl	$1, %esi
	movl	$31, %edi
	call	S_ChangeMusic@PLT
	movl	gameepisode(%rip), %eax
	cmpl	$4, %eax
	je	.L5
	cmpl	$4, %eax
	jg	.L21
	cmpl	$3, %eax
	je	.L7
	cmpl	$3, %eax
	jg	.L21
	cmpl	$1, %eax
	je	.L8
	cmpl	$2, %eax
	je	.L9
	jmp	.L21
.L8:
	leaq	.LC22(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	e1text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L10
.L9:
	leaq	.LC23(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	e2text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L10
.L7:
	leaq	.LC24(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	e3text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L10
.L5:
	leaq	.LC25(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	e4text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L10
.L21:
	nop
.L10:
	jmp	.L11
.L4:
	movl	$1, %esi
	movl	$65, %edi
	call	S_ChangeMusic@PLT
	movl	gamemap(%rip), %eax
	subl	$6, %eax
	cmpl	$25, %eax
	ja	.L22
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L14(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L14(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L14:
	.long	.L19-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L18-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L17-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L16-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L22-.L14
	.long	.L15-.L14
	.long	.L13-.L14
	.text
.L19:
	leaq	.LC26(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c1text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L20
.L18:
	leaq	.LC27(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c2text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L20
.L16:
	leaq	.LC28(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c3text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L20
.L15:
	leaq	.LC29(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c4text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L20
.L17:
	leaq	.LC30(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c5text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L20
.L13:
	leaq	.LC31(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c6text(%rip), %rax
	movq	%rax, finaletext(%rip)
	jmp	.L20
.L22:
	nop
.L20:
	jmp	.L11
.L3:
	movl	$1, %esi
	movl	$65, %edi
	call	S_ChangeMusic@PLT
	leaq	.LC32(%rip), %rax
	movq	%rax, finaleflat(%rip)
	movq	c1text(%rip), %rax
	movq	%rax, finaletext(%rip)
	nop
.L11:
	movl	$0, finalestage(%rip)
	movl	$0, finalecount(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	F_StartFinale, .-F_StartFinale
	.globl	F_Responder
	.type	F_Responder, @function
F_Responder:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	finalestage(%rip), %eax
	cmpl	$2, %eax
	jne	.L24
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	F_CastResponder
	jmp	.L25
.L24:
	movl	$0, %eax
.L25:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	F_Responder, .-F_Responder
	.globl	F_Ticker
	.type	F_Ticker, @function
F_Ticker:
.LFB2:
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
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	jne	.L27
	movl	finalecount(%rip), %eax
	cmpl	$50, %eax
	jle	.L27
	movl	$0, -20(%rbp)
	jmp	.L28
.L31:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$6, %rax
	movq	%rax, %rdx
	leaq	19+players(%rip), %rax
	movzbl	(%rdx,%rax), %eax
	testb	%al, %al
	jne	.L36
	addl	$1, -20(%rbp)
.L28:
	cmpl	$3, -20(%rbp)
	jle	.L31
	jmp	.L30
.L36:
	nop
.L30:
	cmpl	$3, -20(%rbp)
	jg	.L27
	movl	gamemap(%rip), %eax
	cmpl	$30, %eax
	jne	.L32
	call	F_StartCast
	jmp	.L27
.L32:
	movl	$8, gameaction(%rip)
.L27:
	movl	finalecount(%rip), %eax
	addl	$1, %eax
	movl	%eax, finalecount(%rip)
	movl	finalestage(%rip), %eax
	cmpl	$2, %eax
	jne	.L33
	call	F_CastTicker
	jmp	.L26
.L33:
	movl	gamemode(%rip), %eax
	cmpl	$2, %eax
	je	.L37
	movl	finalestage(%rip), %eax
	testl	%eax, %eax
	jne	.L26
	movl	finalecount(%rip), %eax
	movslq	%eax, %rbx
	movq	finaletext(%rip), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	addq	$250, %rax
	cmpq	%rbx, %rax
	jnb	.L26
	movl	$0, finalecount(%rip)
	movl	$1, finalestage(%rip)
	movl	$-1, wipegamestate(%rip)
	movl	gameepisode(%rip), %eax
	cmpl	$3, %eax
	jne	.L26
	movl	$30, %edi
	call	S_StartMusic@PLT
	jmp	.L26
.L37:
	nop
.L26:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	F_Ticker, .-F_Ticker
	.globl	F_TextWrite
	.type	F_TextWrite, @function
F_TextWrite:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	finaleflat(%rip), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -8(%rbp)
	movq	screens(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$0, -48(%rbp)
	jmp	.L39
.L42:
	movl	$0, -52(%rbp)
	jmp	.L40
.L41:
	movl	-48(%rbp), %eax
	sall	$6, %eax
	cltq
	andl	$4032, %eax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-24(%rbp), %rax
	movl	$64, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	addq	$64, -24(%rbp)
	addl	$1, -52(%rbp)
.L40:
	cmpl	$4, -52(%rbp)
	jle	.L41
	addl	$1, -48(%rbp)
.L39:
	cmpl	$199, -48(%rbp)
	jle	.L42
	movl	$200, %ecx
	movl	$320, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_MarkRect@PLT
	movl	$10, -40(%rbp)
	movl	$10, -36(%rbp)
	movq	finaletext(%rip), %rax
	movq	%rax, -16(%rbp)
	movl	finalecount(%rip), %eax
	subl	$10, %eax
	movslq	%eax, %rdx
	imulq	$1431655766, %rdx, %rdx
	movq	%rdx, %rcx
	shrq	$32, %rcx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -44(%rbp)
	cmpl	$0, -44(%rbp)
	jns	.L44
	movl	$0, -44(%rbp)
	jmp	.L44
.L52:
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, -32(%rbp)
	cmpl	$0, -32(%rbp)
	je	.L53
	cmpl	$10, -32(%rbp)
	jne	.L47
	movl	$10, -40(%rbp)
	addl	$11, -36(%rbp)
	jmp	.L48
.L47:
	movl	-32(%rbp), %eax
	movl	%eax, %edi
	call	toupper@PLT
	subl	$33, %eax
	movl	%eax, -32(%rbp)
	cmpl	$0, -32(%rbp)
	js	.L49
	cmpl	$63, -32(%rbp)
	jle	.L50
.L49:
	addl	$4, -40(%rbp)
	jmp	.L48
.L50:
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -28(%rbp)
	movl	-40(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	cmpl	$320, %eax
	jg	.L54
	movl	-32(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-36(%rbp), %esi
	movl	-40(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	-28(%rbp), %eax
	addl	%eax, -40(%rbp)
.L48:
	subl	$1, -44(%rbp)
.L44:
	cmpl	$0, -44(%rbp)
	jne	.L52
	jmp	.L55
.L53:
	nop
	jmp	.L55
.L54:
	nop
.L55:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	F_TextWrite, .-F_TextWrite
	.globl	castorder
	.section	.rodata
.LC33:
	.string	"ZOMBIEMAN"
.LC34:
	.string	"SHOTGUN GUY"
.LC35:
	.string	"HEAVY WEAPON DUDE"
.LC36:
	.string	"IMP"
.LC37:
	.string	"DEMON"
.LC38:
	.string	"LOST SOUL"
.LC39:
	.string	"CACODEMON"
.LC40:
	.string	"HELL KNIGHT"
.LC41:
	.string	"BARON OF HELL"
.LC42:
	.string	"ARACHNOTRON"
.LC43:
	.string	"PAIN ELEMENTAL"
.LC44:
	.string	"REVENANT"
.LC45:
	.string	"MANCUBUS"
.LC46:
	.string	"ARCH-VILE"
.LC47:
	.string	"THE SPIDER MASTERMIND"
.LC48:
	.string	"THE CYBERDEMON"
.LC49:
	.string	"OUR HERO"
	.section	.data.rel.local
	.align 32
	.type	castorder, @object
	.size	castorder, 288
castorder:
	.quad	.LC33
	.long	1
	.zero	4
	.quad	.LC34
	.long	2
	.zero	4
	.quad	.LC35
	.long	10
	.zero	4
	.quad	.LC36
	.long	11
	.zero	4
	.quad	.LC37
	.long	12
	.zero	4
	.quad	.LC38
	.long	18
	.zero	4
	.quad	.LC39
	.long	14
	.zero	4
	.quad	.LC40
	.long	17
	.zero	4
	.quad	.LC41
	.long	15
	.zero	4
	.quad	.LC42
	.long	20
	.zero	4
	.quad	.LC43
	.long	22
	.zero	4
	.quad	.LC44
	.long	5
	.zero	4
	.quad	.LC45
	.long	8
	.zero	4
	.quad	.LC46
	.long	3
	.zero	4
	.quad	.LC47
	.long	19
	.zero	4
	.quad	.LC48
	.long	21
	.zero	4
	.quad	.LC49
	.long	0
	.zero	4
	.quad	0
	.long	0
	.zero	4
	.globl	castnum
	.bss
	.align 4
	.type	castnum, @object
	.size	castnum, 4
castnum:
	.zero	4
	.globl	casttics
	.align 4
	.type	casttics, @object
	.size	casttics, 4
casttics:
	.zero	4
	.globl	caststate
	.align 8
	.type	caststate, @object
	.size	caststate, 8
caststate:
	.zero	8
	.globl	castdeath
	.align 4
	.type	castdeath, @object
	.size	castdeath, 4
castdeath:
	.zero	4
	.globl	castframes
	.align 4
	.type	castframes, @object
	.size	castframes, 4
castframes:
	.zero	4
	.globl	castonmelee
	.align 4
	.type	castonmelee, @object
	.size	castonmelee, 4
castonmelee:
	.zero	4
	.globl	castattacking
	.align 4
	.type	castattacking, @object
	.size	castattacking, 4
castattacking:
	.zero	4
	.text
	.globl	F_StartCast
	.type	F_StartCast, @function
F_StartCast:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$-1, wipegamestate(%rip)
	movl	$0, castnum(%rip)
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	12+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
	movq	caststate(%rip), %rax
	movq	16(%rax), %rax
	movl	%eax, casttics(%rip)
	movl	$0, castdeath(%rip)
	movl	$2, finalestage(%rip)
	movl	$0, castframes(%rip)
	movl	$0, castonmelee(%rip)
	movl	$0, castattacking(%rip)
	movl	$1, %esi
	movl	$63, %edi
	call	S_ChangeMusic@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	F_StartCast, .-F_StartCast
	.globl	F_CastTicker
	.type	F_CastTicker, @function
F_CastTicker:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	casttics(%rip), %eax
	subl	$1, %eax
	movl	%eax, casttics(%rip)
	movl	casttics(%rip), %eax
	testl	%eax, %eax
	jg	.L93
	movq	caststate(%rip), %rax
	movq	16(%rax), %rax
	cmpq	$-1, %rax
	je	.L60
	movq	caststate(%rip), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	jne	.L61
.L60:
	movl	castnum(%rip), %eax
	addl	$1, %eax
	movl	%eax, castnum(%rip)
	movl	$0, castdeath(%rip)
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	castorder(%rip), %rax
	movq	(%rdx,%rax), %rax
	testq	%rax, %rax
	jne	.L62
	movl	$0, castnum(%rip)
.L62:
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	16+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	testl	%eax, %eax
	je	.L63
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	16+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L63:
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	12+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
	movl	$0, castframes(%rip)
	jmp	.L64
.L61:
	movq	caststate(%rip), %rdx
	leaq	8624+states(%rip), %rax
	cmpq	%rax, %rdx
	je	.L94
	movq	caststate(%rip), %rax
	movl	32(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
	movl	castframes(%rip), %eax
	addl	$1, %eax
	movl	%eax, castframes(%rip)
	cmpl	$710, -4(%rbp)
	je	.L67
	cmpl	$710, -4(%rbp)
	jg	.L68
	cmpl	$689, -4(%rbp)
	je	.L69
	cmpl	$689, -4(%rbp)
	jg	.L68
	cmpl	$687, -4(%rbp)
	je	.L69
	cmpl	$687, -4(%rbp)
	jg	.L68
	cmpl	$685, -4(%rbp)
	je	.L69
	cmpl	$685, -4(%rbp)
	jg	.L68
	cmpl	$648, -4(%rbp)
	je	.L70
	cmpl	$648, -4(%rbp)
	jg	.L68
	cmpl	$617, -4(%rbp)
	jg	.L68
	cmpl	$616, -4(%rbp)
	jge	.L71
	cmpl	$590, -4(%rbp)
	je	.L72
	cmpl	$590, -4(%rbp)
	jg	.L68
	cmpl	$567, -4(%rbp)
	je	.L73
	cmpl	$567, -4(%rbp)
	jg	.L68
	cmpl	$538, -4(%rbp)
	je	.L73
	cmpl	$538, -4(%rbp)
	jg	.L68
	cmpl	$505, -4(%rbp)
	je	.L73
	cmpl	$505, -4(%rbp)
	jg	.L68
	cmpl	$486, -4(%rbp)
	je	.L74
	cmpl	$486, -4(%rbp)
	jg	.L68
	cmpl	$454, -4(%rbp)
	je	.L75
	cmpl	$454, -4(%rbp)
	jg	.L68
	cmpl	$419, -4(%rbp)
	jg	.L68
	cmpl	$417, -4(%rbp)
	jge	.L76
	cmpl	$383, -4(%rbp)
	jg	.L68
	cmpl	$336, -4(%rbp)
	jge	.L77
	cmpl	$256, -4(%rbp)
	je	.L78
	cmpl	$256, -4(%rbp)
	jg	.L68
	cmpl	$218, -4(%rbp)
	je	.L79
	cmpl	$218, -4(%rbp)
	jg	.L68
	cmpl	$154, -4(%rbp)
	je	.L80
	cmpl	$185, -4(%rbp)
	je	.L81
	jmp	.L68
.L77:
	movl	-4(%rbp), %eax
	subl	$336, %eax
	cmpl	$47, %eax
	ja	.L68
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L83(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L83(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L83:
	.long	.L86-.L83
	.long	.L68-.L83
	.long	.L85-.L83
	.long	.L68-.L83
	.long	.L84-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L82-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L82-.L83
	.long	.L68-.L83
	.long	.L68-.L83
	.long	.L82-.L83
	.text
.L80:
	movl	$4, -8(%rbp)
	jmp	.L87
.L81:
	movl	$1, -8(%rbp)
	jmp	.L87
.L79:
	movl	$2, -8(%rbp)
	jmp	.L87
.L78:
	movl	$54, -8(%rbp)
	jmp	.L87
.L86:
	movl	$56, -8(%rbp)
	jmp	.L87
.L85:
	movl	$53, -8(%rbp)
	jmp	.L87
.L84:
	movl	$107, -8(%rbp)
	jmp	.L87
.L82:
	movl	$16, -8(%rbp)
	jmp	.L87
.L76:
	movl	$2, -8(%rbp)
	jmp	.L87
.L75:
	movl	$55, -8(%rbp)
	jmp	.L87
.L74:
	movl	$52, -8(%rbp)
	jmp	.L87
.L73:
	movl	$16, -8(%rbp)
	jmp	.L87
.L72:
	movl	$51, -8(%rbp)
	jmp	.L87
.L71:
	movl	$2, -8(%rbp)
	jmp	.L87
.L70:
	movl	$8, -8(%rbp)
	jmp	.L87
.L69:
	movl	$14, -8(%rbp)
	jmp	.L87
.L67:
	movl	$51, -8(%rbp)
	jmp	.L87
.L68:
	movl	$0, -8(%rbp)
	nop
.L87:
	cmpl	$0, -8(%rbp)
	je	.L64
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L64:
	movl	castframes(%rip), %eax
	cmpl	$12, %eax
	jne	.L88
	movl	$1, castattacking(%rip)
	movl	castonmelee(%rip), %eax
	testl	%eax, %eax
	je	.L89
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	40+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
	jmp	.L90
.L89:
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	44+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
.L90:
	movl	castonmelee(%rip), %eax
	xorl	$1, %eax
	movl	%eax, castonmelee(%rip)
	movq	caststate(%rip), %rdx
	leaq	states(%rip), %rax
	cmpq	%rax, %rdx
	jne	.L88
	movl	castonmelee(%rip), %eax
	testl	%eax, %eax
	je	.L91
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	40+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
	jmp	.L88
.L91:
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	44+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
.L88:
	movl	castattacking(%rip), %eax
	testl	%eax, %eax
	je	.L92
	movl	castframes(%rip), %eax
	cmpl	$24, %eax
	je	.L95
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	12+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rax, %rdx
	movq	caststate(%rip), %rax
	cmpq	%rax, %rdx
	jne	.L92
	jmp	.L95
.L94:
	nop
	jmp	.L66
.L95:
	nop
.L66:
	movl	$0, castattacking(%rip)
	movl	$0, castframes(%rip)
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	12+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
.L92:
	movq	caststate(%rip), %rax
	movq	16(%rax), %rax
	movl	%eax, casttics(%rip)
	movl	casttics(%rip), %eax
	cmpl	$-1, %eax
	jne	.L57
	movl	$15, casttics(%rip)
	jmp	.L57
.L93:
	nop
.L57:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	F_CastTicker, .-F_CastTicker
	.globl	F_CastResponder
	.type	F_CastResponder, @function
F_CastResponder:
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
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L97
	movl	$0, %eax
	jmp	.L98
.L97:
	movl	castdeath(%rip), %eax
	testl	%eax, %eax
	je	.L99
	movl	$1, %eax
	jmp	.L98
.L99:
	movl	$1, castdeath(%rip)
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	48+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$3, %rax
	leaq	states(%rip), %rdx
	addq	%rdx, %rax
	movq	%rax, caststate(%rip)
	movq	caststate(%rip), %rax
	movq	16(%rax), %rax
	movl	%eax, casttics(%rip)
	movl	$0, castframes(%rip)
	movl	$0, castattacking(%rip)
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	56+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	testl	%eax, %eax
	je	.L100
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+castorder(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %eax
	imulq	$92, %rax, %rax
	leaq	56+mobjinfo(%rip), %rdx
	movl	(%rax,%rdx), %eax
	movl	%eax, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
.L100:
	movl	$1, %eax
.L98:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	F_CastResponder, .-F_CastResponder
	.globl	F_CastPrint
	.type	F_CastPrint, @function
F_CastPrint:
.LFB7:
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
	movq	%rax, -8(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L102
.L108:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	je	.L116
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	toupper@PLT
	subl	$33, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	js	.L105
	cmpl	$63, -16(%rbp)
	jle	.L106
.L105:
	addl	$4, -20(%rbp)
	jmp	.L102
.L106:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	addl	%eax, -20(%rbp)
.L102:
	cmpq	$0, -8(%rbp)
	jne	.L108
	jmp	.L104
.L116:
	nop
.L104:
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	addl	$160, %eax
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L109
.L115:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	je	.L117
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	toupper@PLT
	subl	$33, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	js	.L112
	cmpl	$63, -16(%rbp)
	jle	.L113
.L112:
	addl	$4, -24(%rbp)
	jmp	.L109
.L113:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, -12(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	hu_font(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-24(%rbp), %eax
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	$180, %esi
	movl	%eax, %edi
	call	V_DrawPatch@PLT
	movl	-12(%rbp), %eax
	addl	%eax, -24(%rbp)
.L109:
	cmpq	$0, -8(%rbp)
	jne	.L115
	jmp	.L118
.L117:
	nop
.L118:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	F_CastPrint, .-F_CastPrint
	.section	.rodata
.LC50:
	.string	"BOSSBACK"
	.text
	.globl	F_CastDrawer
	.type	F_CastDrawer, @function
F_CastDrawer:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$101, %esi
	leaq	.LC50(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	movl	castnum(%rip), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	castorder(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rdi
	call	F_CastPrint
	movq	sprites(%rip), %rdx
	movq	caststate(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, %eax
	salq	$4, %rax
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rcx
	movq	caststate(%rip), %rax
	movq	8(%rax), %rax
	andl	$32767, %eax
	movq	%rax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	subq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movzwl	4(%rax), %eax
	cwtl
	movl	%eax, -32(%rbp)
	movq	-16(%rbp), %rax
	movzbl	20(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -28(%rbp)
	movl	firstspritelump(%rip), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	$101, %esi
	movl	%eax, %edi
	call	W_CacheLumpNum@PLT
	movq	%rax, -8(%rbp)
	cmpl	$0, -28(%rbp)
	je	.L120
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$170, %esi
	movl	$160, %edi
	call	V_DrawPatchFlipped@PLT
	jmp	.L122
.L120:
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$170, %esi
	movl	$160, %edi
	call	V_DrawPatch@PLT
.L122:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	F_CastDrawer, .-F_CastDrawer
	.globl	F_DrawPatchCol
	.type	F_DrawPatchCol, @function
F_DrawPatchCol:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -52(%rbp)
	movq	%rsi, -64(%rbp)
	movl	%edx, -56(%rbp)
	movq	-64(%rbp), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	movl	8(%rax,%rdx,4), %eax
	movslq	%eax, %rdx
	movq	-64(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -32(%rbp)
	movq	screens(%rip), %rdx
	movl	-52(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L124
.L127:
	movq	-32(%rbp), %rax
	addq	$3, %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$6, %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	jmp	.L125
.L126:
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	addq	$320, -16(%rbp)
.L125:
	movl	-36(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -36(%rbp)
	testl	%eax, %eax
	jne	.L126
	movq	-32(%rbp), %rax
	movzbl	1(%rax), %eax
	movzbl	%al, %eax
	addq	$4, %rax
	addq	%rax, -32(%rbp)
.L124:
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$-1, %al
	jne	.L127
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	F_DrawPatchCol, .-F_DrawPatchCol
	.section	.rodata
.LC51:
	.string	"PFUB2"
.LC52:
	.string	"PFUB1"
.LC53:
	.string	"END0"
.LC54:
	.string	"END%i"
	.text
	.globl	F_BunnyScroll
	.type	F_BunnyScroll, @function
F_BunnyScroll:
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
	movl	$50, %esi
	leaq	.LC51(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -40(%rbp)
	movl	$50, %esi
	leaq	.LC52(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, -32(%rbp)
	movl	$200, %ecx
	movl	$320, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_MarkRect@PLT
	movl	finalecount(%rip), %eax
	subl	$230, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	negl	%eax
	addl	$320, %eax
	movl	%eax, -52(%rbp)
	cmpl	$320, -52(%rbp)
	jle	.L129
	movl	$320, -52(%rbp)
.L129:
	cmpl	$0, -52(%rbp)
	jns	.L130
	movl	$0, -52(%rbp)
.L130:
	movl	$0, -48(%rbp)
	jmp	.L131
.L134:
	movl	-48(%rbp), %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	cmpl	$319, %eax
	jg	.L132
	movl	-48(%rbp), %edx
	movl	-52(%rbp), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rcx
	movl	-48(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	F_DrawPatchCol
	jmp	.L133
.L132:
	movl	-48(%rbp), %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	leal	-320(%rax), %edx
	movq	-32(%rbp), %rcx
	movl	-48(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	F_DrawPatchCol
.L133:
	addl	$1, -48(%rbp)
.L131:
	cmpl	$319, -48(%rbp)
	jle	.L134
	movl	finalecount(%rip), %eax
	cmpl	$1129, %eax
	jle	.L142
	movl	finalecount(%rip), %eax
	cmpl	$1179, %eax
	jg	.L137
	movl	$101, %esi
	leaq	.LC53(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$68, %esi
	movl	$108, %edi
	call	V_DrawPatch@PLT
	movl	$0, laststage.0(%rip)
	jmp	.L128
.L137:
	movl	finalecount(%rip), %eax
	subl	$1180, %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	movl	%edx, %ecx
	sarl	%ecx
	cltd
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	%eax, -44(%rbp)
	cmpl	$6, -44(%rbp)
	jle	.L138
	movl	$6, -44(%rbp)
.L138:
	movl	laststage.0(%rip), %eax
	cmpl	%eax, -44(%rbp)
	jle	.L139
	movl	$1, %esi
	movl	$0, %edi
	call	S_StartSound@PLT
	movl	-44(%rbp), %eax
	movl	%eax, laststage.0(%rip)
.L139:
	movl	-44(%rbp), %edx
	leaq	-18(%rbp), %rax
	leaq	.LC54(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf@PLT
	leaq	-18(%rbp), %rax
	movl	$101, %esi
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$68, %esi
	movl	$108, %edi
	call	V_DrawPatch@PLT
	jmp	.L128
.L142:
	nop
.L128:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L141
	call	__stack_chk_fail@PLT
.L141:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	F_BunnyScroll, .-F_BunnyScroll
	.section	.rodata
.LC55:
	.string	"CREDIT"
.LC56:
	.string	"HELP2"
.LC57:
	.string	"VICTORY2"
.LC58:
	.string	"ENDPIC"
	.text
	.globl	F_Drawer
	.type	F_Drawer, @function
F_Drawer:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	finalestage(%rip), %eax
	cmpl	$2, %eax
	jne	.L144
	call	F_CastDrawer
	jmp	.L143
.L144:
	movl	finalestage(%rip), %eax
	testl	%eax, %eax
	jne	.L146
	call	F_TextWrite
	jmp	.L143
.L146:
	movl	gameepisode(%rip), %eax
	cmpl	$4, %eax
	je	.L147
	cmpl	$4, %eax
	jg	.L143
	cmpl	$3, %eax
	je	.L148
	cmpl	$3, %eax
	jg	.L143
	cmpl	$1, %eax
	je	.L149
	cmpl	$2, %eax
	je	.L150
	jmp	.L143
.L149:
	movl	gamemode(%rip), %eax
	cmpl	$3, %eax
	jne	.L151
	movl	$101, %esi
	leaq	.LC55(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	jmp	.L143
.L151:
	movl	$101, %esi
	leaq	.LC56(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	jmp	.L143
.L150:
	movl	$101, %esi
	leaq	.LC57(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	jmp	.L143
.L148:
	call	F_BunnyScroll
	jmp	.L143
.L147:
	movl	$101, %esi
	leaq	.LC58(%rip), %rax
	movq	%rax, %rdi
	call	W_CacheLumpName@PLT
	movq	%rax, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movl	$0, %edi
	call	V_DrawPatch@PLT
	nop
.L143:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	F_Drawer, .-F_Drawer
	.local	laststage.0
	.comm	laststage.0,4,4
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
