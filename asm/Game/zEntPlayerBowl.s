.include "macros.inc"

.section .text  # 0x80066210 - 0x80090E88

BbowlCheck__FP15xAnimTransitionP11xAnimSinglePv:
/* 800690E0 00065EE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800690E4 00065EE4  7C 08 02 A6 */	mflr r0
/* 800690E8 00065EE8  3C 60 80 3C */	lis r3, globals@ha
/* 800690EC 00065EEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800690F0 00065EF0  38 63 05 58 */	addi r3, r3, globals@l
/* 800690F4 00065EF4  80 03 1A FC */	lwz r0, 0x1afc(r3)
/* 800690F8 00065EF8  2C 00 00 00 */	cmpwi r0, 0
/* 800690FC 00065EFC  41 82 00 0C */	beq lbl_80069108
/* 80069100 00065F00  38 60 00 00 */	li r3, 0
/* 80069104 00065F04  48 00 00 54 */	b lbl_80069158
lbl_80069108:
/* 80069108 00065F08  48 0C 46 71 */	bl zEntTeleportBox_playerIn__Fv
/* 8006910C 00065F0C  2C 03 00 00 */	cmpwi r3, 0
/* 80069110 00065F10  41 82 00 0C */	beq lbl_8006911C
/* 80069114 00065F14  38 60 00 00 */	li r3, 0
/* 80069118 00065F18  48 00 00 40 */	b lbl_80069158
lbl_8006911C:
/* 8006911C 00065F1C  3C 60 80 3C */	lis r3, globals@ha
/* 80069120 00065F20  38 A0 00 00 */	li r5, 0
/* 80069124 00065F24  38 83 05 58 */	addi r4, r3, globals@l
/* 80069128 00065F28  80 04 17 88 */	lwz r0, 0x1788(r4)
/* 8006912C 00065F2C  28 00 00 00 */	cmplwi r0, 0
/* 80069130 00065F30  40 82 00 24 */	bne lbl_80069154
/* 80069134 00065F34  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 80069138 00065F38  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8006913C 00065F3C  54 00 03 9D */	rlwinm. r0, r0, 0, 0xe, 0xe
/* 80069140 00065F40  41 82 00 14 */	beq lbl_80069154
/* 80069144 00065F44  88 04 09 BD */	lbz r0, 0x9bd(r4)
/* 80069148 00065F48  28 00 00 00 */	cmplwi r0, 0
/* 8006914C 00065F4C  41 82 00 08 */	beq lbl_80069154
/* 80069150 00065F50  38 A0 00 01 */	li r5, 1
lbl_80069154:
/* 80069154 00065F54  54 A3 06 3E */	clrlwi r3, r5, 0x18
lbl_80069158:
/* 80069158 00065F58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006915C 00065F5C  7C 08 03 A6 */	mtlr r0
/* 80069160 00065F60  38 21 00 10 */	addi r1, r1, 0x10
/* 80069164 00065F64  4E 80 00 20 */	blr 

.section .rodata
lbl_80255F00:
	.incbin "baserom.dol", 0x252EE0, 0x58
lbl_80255F58:
	.incbin "baserom.dol", 0x252F38, 0x84
lbl_80255FDC:
	.incbin "baserom.dol", 0x252FBC, 0x100
lbl_802560DC:
	.incbin "baserom.dol", 0x2530BC, 0xC
lbl_802560E8:
	.incbin "baserom.dol", 0x2530C8, 0xC
.global offsetChuck$localstatic4$get_reticle_bound__FR5xVec3Rf
offsetChuck$localstatic4$get_reticle_bound__FR5xVec3Rf:
	.incbin "baserom.dol", 0x2530D4, 0xC
lbl_80256100:
	.incbin "baserom.dol", 0x2530E0, 0xC
lbl_8025610C:
	.incbin "baserom.dol", 0x2530EC, 0xC
lbl_80256118:
	.incbin "baserom.dol", 0x2530F8, 0x37C8

.section .data

.global sPlayerSnd
sPlayerSnd:
	.incbin "baserom.dol", 0x289990, 0x468
.global sPlayerSndID
sPlayerSndID:
	.incbin "baserom.dol", 0x289DF8, 0xFD8
lbl_8028DDF0:
	.incbin "baserom.dol", 0x28ADD0, 0x3DC
lbl_8028E1CC:
	.incbin "baserom.dol", 0x28B1AC, 0x34
lbl_8028E200:
	.incbin "baserom.dol", 0x28B1E0, 0x2A0
lbl_8028E4A0:
	.incbin "baserom.dol", 0x28B480, 0xC
lbl_8028E4AC:
	.incbin "baserom.dol", 0x28B48C, 0xC
lbl_8028E4B8:
	.incbin "baserom.dol", 0x28B498, 0x30
lbl_8028E4E8:
	.incbin "baserom.dol", 0x28B4C8, 0x20
lbl_8028E508:
	.incbin "baserom.dol", 0x28B4E8, 0x50
lbl_8028E558:
	.incbin "baserom.dol", 0x28B538, 0xC8
/* SPECULATION: link order */
.global sEventTable
sEventTable:
	.incbin "baserom.dol", 0x28B600, 0x878

.section .bss
lbl_802DE3D0:
	.skip 0x24
lbl_802DE3F4:
	.skip 0xBC
lbl_802DE4B0:
	.skip 0xBC
lbl_802DE56C:
	.skip 0x158
lbl_802DE6C4:
	.skip 0x40
lbl_802DE704:
	.skip 0x24
lbl_802DE728:
	.skip 0xC
lbl_802DE734:
	.skip 0xC
lbl_802DE740:
	.skip 0xC
lbl_802DE74C:
	.skip 0xCE4

.section .sbss
lbl_803CB5A0:
	.skip 0x4
lbl_803CB5A4:
	.skip 0x4
lbl_803CB5A8:
	.skip 0x4
lbl_803CB5AC:
	.skip 0x4
lbl_803CB5B0:
	.skip 0x4
/* SPECULATION: link order */
.global gSpongeBall
gSpongeBall:
	.skip 0x4
.global sCurrentStreamSndID
sCurrentStreamSndID:
	.skip 0x4
lbl_803CB5BC:
	.skip 0x4
lbl_803CB5C0:
	.skip 0x4
lbl_803CB5C4:
	.skip 0x4
lbl_803CB5C8:
	.skip 0x4
/* SPECULATION: link order */
.global startJump
startJump:
	.skip 0x4
/* SPECULATION: link order */
.global startDouble
startDouble:
	.skip 0x4
/* SPECULATION: link order */
.global startBounce
startBounce:
	.skip 0x4
lbl_803CB5D8:
	.skip 0x4
lbl_803CB5DC:
	.skip 0x4
lbl_803CB5E0:
	.skip 0x4
lbl_803CB5E4:
	.skip 0x4
lbl_803CB5E8:
	.skip 0x4
/* SPECULATION: link order */
.global surfSlickRatio
surfSlickRatio:
	.skip 0x4
lbl_803CB5F0:
	.skip 0x4
lbl_803CB5F4:
	.skip 0x4
lbl_803CB5F8:
	.skip 0x4
lbl_803CB5FC:
	.skip 0x4
lbl_803CB600:
	.skip 0x4
lbl_803CB604:
	.skip 0x4
lbl_803CB608:
	.skip 0x4
lbl_803CB60C:
	.skip 0x4
lbl_803CB610:
	.skip 0x4
lbl_803CB614:
	.skip 0x4
lbl_803CB618:
	.skip 0x4
lbl_803CB61C:
	.skip 0x4
lbl_803CB620:
	.skip 0x4
lbl_803CB624:
	.skip 0x4
/* SPECULATION: link order */
.global boulderVehicle
boulderVehicle:
	.skip 0x4
lbl_803CB62C:
	.skip 0x4
lbl_803CB630:
	.skip 0x4
lbl_803CB634:
	.skip 0x4
lbl_803CB638:
	.skip 0x4
lbl_803CB63C:
	.skip 0x4
lbl_803CB640:
	.skip 0x4
lbl_803CB644:
	.skip 0x4
lbl_803CB648:
	.skip 0x4
lbl_803CB64C:
	.skip 0x4
lbl_803CB650:
	.skip 0x4
lbl_803CB654:
	.skip 0x4
/* SPECULATION: link order */
.global gReticleTarget
gReticleTarget:
	.skip 0x4
lbl_803CB65C:
	.skip 0x4
/* SPECULATION: link order */
.global gCurrentPlayer
gCurrentPlayer:
	.skip 0x4
/* SPECULATION: link order */
.global floor_safe_tmr
floor_safe_tmr:
	.skip 0x4
lbl_803CB668:
	.skip 0x4
lbl_803CB66C:
	.skip 0x4
lbl_803CB670:
	.skip 0x4
lbl_803CB674:
	.skip 0x4
lbl_803CB678:
	.skip 0x4
lbl_803CB67C:
	.skip 0x4
lbl_803CB680:
	.skip 0x4
lbl_803CB684:
	.skip 0x4
lbl_803CB688:
	.skip 0x4
lbl_803CB68C:
	.skip 0x4
lbl_803CB690:
	.skip 0x4
lbl_803CB694:
	.skip 0x4
lbl_803CB698:
	.skip 0x4
lbl_803CB69C:
	.skip 0x4
lbl_803CB6A0:
	.skip 0x4
lbl_803CB6A4:
	.skip 0x4
lbl_803CB6A8:
	.skip 0x4
lbl_803CB6AC:
	.skip 0x4
/* SPECULATION: link order */
.global player_hit
player_hit:
	.skip 0x4
lbl_803CB6B4:
	.skip 0x4
lbl_803CB6B8:
	.skip 0x4
lbl_803CB6BC:
	.skip 0x4
lbl_803CB6C0:
	.skip 0x4
lbl_803CB6C4:
	.skip 0x4
.global sShouldBubbleBowl
sShouldBubbleBowl:
	.skip 0x4
lbl_803CB6CC:
	.skip 0x4
lbl_803CB6D0:
	.skip 0x4
/* SPECULATION: link order */
.global gWaitingToAutoSave
gWaitingToAutoSave:
	.skip 0x4
lbl_803CB6D8:
	.skip 0x4
lbl_803CB6DC:
	.skip 0x4
lbl_803CB6E0:
	.skip 0x4
lbl_803CB6E4:
	.skip 0x4
lbl_803CB6E8:
	.skip 0x4
lbl_803CB6EC:
	.skip 0x4
lbl_803CB6F0:
	.skip 0x4
lbl_803CB6F4:
	.skip 0x4
lbl_803CB6F8:
	.skip 0x4
lbl_803CB6FC:
	.skip 0x4
lbl_803CB700:
	.skip 0x4
/* SPECULATION: link order */
.global sandyHitMax
sandyHitMax:
	.skip 0x4
/* SPECULATION: link order */
.global patrickHitMax
patrickHitMax:
	.skip 0x4
/* SPECULATION: link order */
.global gEmitBFX
gEmitBFX:
	.skip 0x4
lbl_803CB710:
	.skip 0x4
lbl_803CB714:
	.skip 0x4
lbl_803CB718:
	.skip 0x4
lbl_803CB71C:
	.skip 0x4
lbl_803CB720:
	.skip 0x4
/* SPECULATION: link order */
.global sRingDelay
sRingDelay:
	.skip 0x4
lbl_803CB728:
	.skip 0x4
lbl_803CB72C:
	.skip 0x1
lbl_803CB72D:
	.skip 0x1
lbl_803CB72E:
	.skip 0x2
lbl_803CB730:
	.skip 0x4
lbl_803CB734:
	.skip 0x4
lbl_803CB738:
	.skip 0x4
lbl_803CB73C:
	.skip 0x4
lbl_803CB740:
	.skip 0x4
lbl_803CB744:
	.skip 0x4
lbl_803CB748:
	.skip 0x4
lbl_803CB74C:
	.skip 0x4
lbl_803CB750:
	.skip 0x4
lbl_803CB754:
	.skip 0x4
lbl_803CB758:
	.skip 0x4
lbl_803CB75C:
	.skip 0x4
lbl_803CB760:
	.skip 0x8

.section .sbss2
lbl_803D0838:
	.skip 0x4
lbl_803D083C:
	.skip 0x4
/* SPECULATION: link order */
.global lbl_803D0840
lbl_803D0840:
	.skip 0x4
lbl_803D0844:
	.skip 0x4
/* SPECULATION: link order */
.global lbl_803D0848
lbl_803D0848:
	.skip 0x4
lbl_803D084C:
	.skip 0x4

.section .sdata
lbl_803CAA98:
	.incbin "baserom.dol", 0x2B5B58, 0x4
lbl_803CAA9C:
	.incbin "baserom.dol", 0x2B5B5C, 0x4
lbl_803CAAA0:
	.incbin "baserom.dol", 0x2B5B60, 0x4
lbl_803CAAA4:
	.incbin "baserom.dol", 0x2B5B64, 0x4
lbl_803CAAA8:
	.incbin "baserom.dol", 0x2B5B68, 0x4
lbl_803CAAAC:
	.incbin "baserom.dol", 0x2B5B6C, 0x4
lbl_803CAAB0:
	.incbin "baserom.dol", 0x2B5B70, 0x4
lbl_803CAAB4:
	.incbin "baserom.dol", 0x2B5B74, 0x4
lbl_803CAAB8:
	.incbin "baserom.dol", 0x2B5B78, 0x4
lbl_803CAABC:
	.incbin "baserom.dol", 0x2B5B7C, 0x4
lbl_803CAAC0:
	.incbin "baserom.dol", 0x2B5B80, 0x4
lbl_803CAAC4:
	.incbin "baserom.dol", 0x2B5B84, 0x4
lbl_803CAAC8:
	.incbin "baserom.dol", 0x2B5B88, 0x4
lbl_803CAACC:
	.incbin "baserom.dol", 0x2B5B8C, 0x4
lbl_803CAAD0:
	.incbin "baserom.dol", 0x2B5B90, 0x4
lbl_803CAAD4:
	.incbin "baserom.dol", 0x2B5B94, 0x4
/* SPECULATION: link order */
.global default_player_radius
default_player_radius:
	.incbin "baserom.dol", 0x2B5B98, 0x4
/* SPECULATION: link order */
.global lastgCurrentPlayer
lastgCurrentPlayer:
	.incbin "baserom.dol", 0x2B5B9C, 0x4
lbl_803CAAE0:
	.incbin "baserom.dol", 0x2B5BA0, 0x4
lbl_803CAAE4:
	.incbin "baserom.dol", 0x2B5BA4, 0x4

.global sBubbleBowlLastWindupTime
sBubbleBowlLastWindupTime:
	.incbin "baserom.dol", 0x2B5BA8, 0x4

lbl_803CAAEC:
	.incbin "baserom.dol", 0x2B5BAC, 0x4
lbl_803CAAF0:
	.incbin "baserom.dol", 0x2B5BB0, 0x4
lbl_803CAAF4:
	.incbin "baserom.dol", 0x2B5BB4, 0x4

.section .sdata2
lbl_803CD580:
	.incbin "baserom.dol", 0x2B6E20, 0x4
lbl_803CD584:
	.incbin "baserom.dol", 0x2B6E24, 0x4
lbl_803CD588:
	.incbin "baserom.dol", 0x2B6E28, 0x4
lbl_803CD58C:
	.incbin "baserom.dol", 0x2B6E2C, 0x4
lbl_803CD590:
	.incbin "baserom.dol", 0x2B6E30, 0x8
lbl_803CD598:
	.incbin "baserom.dol", 0x2B6E38, 0x8
lbl_803CD5A0:
	.incbin "baserom.dol", 0x2B6E40, 0x8
lbl_803CD5A8:
	.incbin "baserom.dol", 0x2B6E48, 0x8
lbl_803CD5B0:
	.incbin "baserom.dol", 0x2B6E50, 0x4
lbl_803CD5B4:
	.incbin "baserom.dol", 0x2B6E54, 0x4
lbl_803CD5B8:
	.incbin "baserom.dol", 0x2B6E58, 0x4
lbl_803CD5BC:
	.incbin "baserom.dol", 0x2B6E5C, 0x4
lbl_803CD5C0:
	.incbin "baserom.dol", 0x2B6E60, 0x4
lbl_803CD5C4:
	.incbin "baserom.dol", 0x2B6E64, 0x4
lbl_803CD5C8:
	.incbin "baserom.dol", 0x2B6E68, 0x4
lbl_803CD5CC:
	.incbin "baserom.dol", 0x2B6E6C, 0x4
lbl_803CD5D0:
	.incbin "baserom.dol", 0x2B6E70, 0x4
lbl_803CD5D4:
	.incbin "baserom.dol", 0x2B6E74, 0x4
lbl_803CD5D8:
	.incbin "baserom.dol", 0x2B6E78, 0x4
lbl_803CD5DC:
	.incbin "baserom.dol", 0x2B6E7C, 0x4
lbl_803CD5E0:
	.incbin "baserom.dol", 0x2B6E80, 0x4
lbl_803CD5E4:
	.incbin "baserom.dol", 0x2B6E84, 0x4
lbl_803CD5E8:
	.incbin "baserom.dol", 0x2B6E88, 0x4
lbl_803CD5EC:
	.incbin "baserom.dol", 0x2B6E8C, 0x4
lbl_803CD5F0:
	.incbin "baserom.dol", 0x2B6E90, 0x4
lbl_803CD5F4:
	.incbin "baserom.dol", 0x2B6E94, 0x4
lbl_803CD5F8:
	.incbin "baserom.dol", 0x2B6E98, 0x4
lbl_803CD5FC:
	.incbin "baserom.dol", 0x2B6E9C, 0x4
lbl_803CD600:
	.incbin "baserom.dol", 0x2B6EA0, 0x4
lbl_803CD604:
	.incbin "baserom.dol", 0x2B6EA4, 0x4
lbl_803CD608:
	.incbin "baserom.dol", 0x2B6EA8, 0x4
lbl_803CD60C:
	.incbin "baserom.dol", 0x2B6EAC, 0x4
lbl_803CD610:
	.incbin "baserom.dol", 0x2B6EB0, 0x4
lbl_803CD614:
	.incbin "baserom.dol", 0x2B6EB4, 0x4
lbl_803CD618:
	.incbin "baserom.dol", 0x2B6EB8, 0x4
lbl_803CD61C:
	.incbin "baserom.dol", 0x2B6EBC, 0x4
lbl_803CD620:
	.incbin "baserom.dol", 0x2B6EC0, 0x4
lbl_803CD624:
	.incbin "baserom.dol", 0x2B6EC4, 0x4
lbl_803CD628:
	.incbin "baserom.dol", 0x2B6EC8, 0x4
lbl_803CD62C:
	.incbin "baserom.dol", 0x2B6ECC, 0x4
lbl_803CD630:
	.incbin "baserom.dol", 0x2B6ED0, 0x4
lbl_803CD634:
	.incbin "baserom.dol", 0x2B6ED4, 0x4
lbl_803CD638:
	.incbin "baserom.dol", 0x2B6ED8, 0x4
lbl_803CD63C:
	.incbin "baserom.dol", 0x2B6EDC, 0x4
lbl_803CD640:
	.incbin "baserom.dol", 0x2B6EE0, 0x4
lbl_803CD644:
	.incbin "baserom.dol", 0x2B6EE4, 0x4
lbl_803CD648:
	.incbin "baserom.dol", 0x2B6EE8, 0x4
lbl_803CD64C:
	.incbin "baserom.dol", 0x2B6EEC, 0x4
lbl_803CD650:
	.incbin "baserom.dol", 0x2B6EF0, 0x4
lbl_803CD654:
	.incbin "baserom.dol", 0x2B6EF4, 0x4
lbl_803CD658:
	.incbin "baserom.dol", 0x2B6EF8, 0x4
lbl_803CD65C:
	.incbin "baserom.dol", 0x2B6EFC, 0x4
lbl_803CD660:
	.incbin "baserom.dol", 0x2B6F00, 0x4
lbl_803CD664:
	.incbin "baserom.dol", 0x2B6F04, 0x4
lbl_803CD668:
	.incbin "baserom.dol", 0x2B6F08, 0x4
lbl_803CD66C:
	.incbin "baserom.dol", 0x2B6F0C, 0x4
lbl_803CD670:
	.incbin "baserom.dol", 0x2B6F10, 0x4
lbl_803CD674:
	.incbin "baserom.dol", 0x2B6F14, 0x4
lbl_803CD678:
	.incbin "baserom.dol", 0x2B6F18, 0x4
lbl_803CD67C:
	.incbin "baserom.dol", 0x2B6F1C, 0x4
lbl_803CD680:
	.incbin "baserom.dol", 0x2B6F20, 0x4
lbl_803CD684:
	.incbin "baserom.dol", 0x2B6F24, 0x4
lbl_803CD688:
	.incbin "baserom.dol", 0x2B6F28, 0x4
lbl_803CD68C:
	.incbin "baserom.dol", 0x2B6F2C, 0x4
lbl_803CD690:
	.incbin "baserom.dol", 0x2B6F30, 0x4
lbl_803CD694:
	.incbin "baserom.dol", 0x2B6F34, 0x4
lbl_803CD698:
	.incbin "baserom.dol", 0x2B6F38, 0x4
lbl_803CD69C:
	.incbin "baserom.dol", 0x2B6F3C, 0x4
lbl_803CD6A0:
	.incbin "baserom.dol", 0x2B6F40, 0x4
lbl_803CD6A4:
	.incbin "baserom.dol", 0x2B6F44, 0x4
lbl_803CD6A8:
	.incbin "baserom.dol", 0x2B6F48, 0x4
lbl_803CD6AC:
	.incbin "baserom.dol", 0x2B6F4C, 0x4
lbl_803CD6B0:
	.incbin "baserom.dol", 0x2B6F50, 0x4
lbl_803CD6B4:
	.incbin "baserom.dol", 0x2B6F54, 0x4
lbl_803CD6B8:
	.incbin "baserom.dol", 0x2B6F58, 0x4
lbl_803CD6BC:
	.incbin "baserom.dol", 0x2B6F5C, 0x4
lbl_803CD6C0:
	.incbin "baserom.dol", 0x2B6F60, 0x4
lbl_803CD6C4:
	.incbin "baserom.dol", 0x2B6F64, 0x4
lbl_803CD6C8:
	.incbin "baserom.dol", 0x2B6F68, 0x4
lbl_803CD6CC:
	.incbin "baserom.dol", 0x2B6F6C, 0x4
lbl_803CD6D0:
	.incbin "baserom.dol", 0x2B6F70, 0x4
lbl_803CD6D4:
	.incbin "baserom.dol", 0x2B6F74, 0x4
lbl_803CD6D8:
	.incbin "baserom.dol", 0x2B6F78, 0x4
lbl_803CD6DC:
	.incbin "baserom.dol", 0x2B6F7C, 0x4
lbl_803CD6E0:
	.incbin "baserom.dol", 0x2B6F80, 0x4
lbl_803CD6E4:
	.incbin "baserom.dol", 0x2B6F84, 0x4
lbl_803CD6E8:
	.incbin "baserom.dol", 0x2B6F88, 0x4
lbl_803CD6EC:
	.incbin "baserom.dol", 0x2B6F8C, 0x4
lbl_803CD6F0:
	.incbin "baserom.dol", 0x2B6F90, 0x4
lbl_803CD6F4:
	.incbin "baserom.dol", 0x2B6F94, 0x4
lbl_803CD6F8:
	.incbin "baserom.dol", 0x2B6F98, 0x4
lbl_803CD6FC:
	.incbin "baserom.dol", 0x2B6F9C, 0x4
lbl_803CD700:
	.incbin "baserom.dol", 0x2B6FA0, 0x4
lbl_803CD704:
	.incbin "baserom.dol", 0x2B6FA4, 0x4
lbl_803CD708:
	.incbin "baserom.dol", 0x2B6FA8, 0x4
lbl_803CD70C:
	.incbin "baserom.dol", 0x2B6FAC, 0x4
lbl_803CD710:
	.incbin "baserom.dol", 0x2B6FB0, 0x4
lbl_803CD714:
	.incbin "baserom.dol", 0x2B6FB4, 0x4
lbl_803CD718:
	.incbin "baserom.dol", 0x2B6FB8, 0x4
lbl_803CD71C:
	.incbin "baserom.dol", 0x2B6FBC, 0x4
lbl_803CD720:
	.incbin "baserom.dol", 0x2B6FC0, 0x4
lbl_803CD724:
	.incbin "baserom.dol", 0x2B6FC4, 0x4
lbl_803CD728:
	.incbin "baserom.dol", 0x2B6FC8, 0x4
lbl_803CD72C:
	.incbin "baserom.dol", 0x2B6FCC, 0x4
lbl_803CD730:
	.incbin "baserom.dol", 0x2B6FD0, 0x4
lbl_803CD734:
	.incbin "baserom.dol", 0x2B6FD4, 0x4
lbl_803CD738:
	.incbin "baserom.dol", 0x2B6FD8, 0x4
lbl_803CD73C:
	.incbin "baserom.dol", 0x2B6FDC, 0x4
lbl_803CD740:
	.incbin "baserom.dol", 0x2B6FE0, 0x4
lbl_803CD744:
	.incbin "baserom.dol", 0x2B6FE4, 0x4
lbl_803CD748:
	.incbin "baserom.dol", 0x2B6FE8, 0x4
lbl_803CD74C:
	.incbin "baserom.dol", 0x2B6FEC, 0x4
lbl_803CD750:
	.incbin "baserom.dol", 0x2B6FF0, 0x4
lbl_803CD754:
	.incbin "baserom.dol", 0x2B6FF4, 0x4
lbl_803CD758:
	.incbin "baserom.dol", 0x2B6FF8, 0x4
lbl_803CD75C:
	.incbin "baserom.dol", 0x2B6FFC, 0x4
lbl_803CD760:
	.incbin "baserom.dol", 0x2B7000, 0x4
lbl_803CD764:
	.incbin "baserom.dol", 0x2B7004, 0x4
lbl_803CD768:
	.incbin "baserom.dol", 0x2B7008, 0x4
lbl_803CD76C:
	.incbin "baserom.dol", 0x2B700C, 0x4
lbl_803CD770:
	.incbin "baserom.dol", 0x2B7010, 0x4
lbl_803CD774:
	.incbin "baserom.dol", 0x2B7014, 0x4
lbl_803CD778:
	.incbin "baserom.dol", 0x2B7018, 0x4
lbl_803CD77C:
	.incbin "baserom.dol", 0x2B701C, 0x4
lbl_803CD780:
	.incbin "baserom.dol", 0x2B7020, 0x4
lbl_803CD784:
	.incbin "baserom.dol", 0x2B7024, 0x4
lbl_803CD788:
	.incbin "baserom.dol", 0x2B7028, 0x4
lbl_803CD78C:
	.incbin "baserom.dol", 0x2B702C, 0x4
lbl_803CD790:
	.incbin "baserom.dol", 0x2B7030, 0x4
lbl_803CD794:
	.incbin "baserom.dol", 0x2B7034, 0x4
lbl_803CD798:
	.incbin "baserom.dol", 0x2B7038, 0x4
lbl_803CD79C:
	.incbin "baserom.dol", 0x2B703C, 0x4
lbl_803CD7A0:
	.incbin "baserom.dol", 0x2B7040, 0x4
lbl_803CD7A4:
	.incbin "baserom.dol", 0x2B7044, 0x4
lbl_803CD7A8:
	.incbin "baserom.dol", 0x2B7048, 0x4
lbl_803CD7AC:
	.incbin "baserom.dol", 0x2B704C, 0x4
lbl_803CD7B0:
	.incbin "baserom.dol", 0x2B7050, 0x4
lbl_803CD7B4:
	.incbin "baserom.dol", 0x2B7054, 0x4
lbl_803CD7B8:
	.incbin "baserom.dol", 0x2B7058, 0x4
lbl_803CD7BC:
	.incbin "baserom.dol", 0x2B705C, 0x4
lbl_803CD7C0:
	.incbin "baserom.dol", 0x2B7060, 0x4
lbl_803CD7C4:
	.incbin "baserom.dol", 0x2B7064, 0x4
lbl_803CD7C8:
	.incbin "baserom.dol", 0x2B7068, 0x4
lbl_803CD7CC:
	.incbin "baserom.dol", 0x2B706C, 0x4
lbl_803CD7D0:
	.incbin "baserom.dol", 0x2B7070, 0x4
lbl_803CD7D4:
	.incbin "baserom.dol", 0x2B7074, 0x4
lbl_803CD7D8:
	.incbin "baserom.dol", 0x2B7078, 0x4
lbl_803CD7DC:
	.incbin "baserom.dol", 0x2B707C, 0x4
lbl_803CD7E0:
	.incbin "baserom.dol", 0x2B7080, 0x4
lbl_803CD7E4:
	.incbin "baserom.dol", 0x2B7084, 0x4
lbl_803CD7E8:
	.incbin "baserom.dol", 0x2B7088, 0x4
lbl_803CD7EC:
	.incbin "baserom.dol", 0x2B708C, 0x4
lbl_803CD7F0:
	.incbin "baserom.dol", 0x2B7090, 0x8
lbl_803CD7F8:
	.incbin "baserom.dol", 0x2B7098, 0x8
lbl_803CD800:
	.incbin "baserom.dol", 0x2B70A0, 0x4
lbl_803CD804:
	.incbin "baserom.dol", 0x2B70A4, 0x4
lbl_803CD808:
	.incbin "baserom.dol", 0x2B70A8, 0x4
lbl_803CD80C:
	.incbin "baserom.dol", 0x2B70AC, 0x4
lbl_803CD810:
	.incbin "baserom.dol", 0x2B70B0, 0x4
lbl_803CD814:
	.incbin "baserom.dol", 0x2B70B4, 0x4
lbl_803CD818:
	.incbin "baserom.dol", 0x2B70B8, 0x4
lbl_803CD81C:
	.incbin "baserom.dol", 0x2B70BC, 0x4
lbl_803CD820:
	.incbin "baserom.dol", 0x2B70C0, 0x4
lbl_803CD824:
	.incbin "baserom.dol", 0x2B70C4, 0x4
lbl_803CD828:
	.incbin "baserom.dol", 0x2B70C8, 0x4
lbl_803CD82C:
	.incbin "baserom.dol", 0x2B70CC, 0x4
lbl_803CD830:
	.incbin "baserom.dol", 0x2B70D0, 0x4
lbl_803CD834:
	.incbin "baserom.dol", 0x2B70D4, 0x4
lbl_803CD838:
	.incbin "baserom.dol", 0x2B70D8, 0x4
lbl_803CD83C:
	.incbin "baserom.dol", 0x2B70DC, 0x4
lbl_803CD840:
	.incbin "baserom.dol", 0x2B70E0, 0x4
lbl_803CD844:
	.incbin "baserom.dol", 0x2B70E4, 0x4
lbl_803CD848:
	.incbin "baserom.dol", 0x2B70E8, 0x4
lbl_803CD84C:
	.incbin "baserom.dol", 0x2B70EC, 0x4
lbl_803CD850:
	.incbin "baserom.dol", 0x2B70F0, 0x4
lbl_803CD854:
	.incbin "baserom.dol", 0x2B70F4, 0x4
lbl_803CD858:
	.incbin "baserom.dol", 0x2B70F8, 0x4
lbl_803CD85C:
	.incbin "baserom.dol", 0x2B70FC, 0x4
lbl_803CD860:
	.incbin "baserom.dol", 0x2B7100, 0x4
lbl_803CD864:
	.incbin "baserom.dol", 0x2B7104, 0x4
lbl_803CD868:
	.incbin "baserom.dol", 0x2B7108, 0x4
lbl_803CD86C:
	.incbin "baserom.dol", 0x2B710C, 0x4
lbl_803CD870:
	.incbin "baserom.dol", 0x2B7110, 0x4
lbl_803CD874:
	.incbin "baserom.dol", 0x2B7114, 0x4
/* SPECULATION: link order */
.global lbl_803CD878
lbl_803CD878:
	.incbin "baserom.dol", 0x2B7118, 0x4
lbl_803CD87C:
	.incbin "baserom.dol", 0x2B711C, 0x4
/* SPECULATION: link order */
.global lbl_803CD880
lbl_803CD880:
	.incbin "baserom.dol", 0x2B7120, 0x4
lbl_803CD884:
	.incbin "baserom.dol", 0x2B7124, 0x4
lbl_803CD888:
	.incbin "baserom.dol", 0x2B7128, 0x4
lbl_803CD88C:
	.incbin "baserom.dol", 0x2B712C, 0x4
lbl_803CD890:
	.incbin "baserom.dol", 0x2B7130, 0x4
lbl_803CD894:
	.incbin "baserom.dol", 0x2B7134, 0x4
lbl_803CD898:
	.incbin "baserom.dol", 0x2B7138, 0x4
lbl_803CD89C:
	.incbin "baserom.dol", 0x2B713C, 0x4
lbl_803CD8A0:
	.incbin "baserom.dol", 0x2B7140, 0x4
lbl_803CD8A4:
	.incbin "baserom.dol", 0x2B7144, 0x4
lbl_803CD8A8:
	.incbin "baserom.dol", 0x2B7148, 0x4
lbl_803CD8AC:
	.incbin "baserom.dol", 0x2B714C, 0x4
lbl_803CD8B0:
	.incbin "baserom.dol", 0x2B7150, 0x4
lbl_803CD8B4:
	.incbin "baserom.dol", 0x2B7154, 0x4
lbl_803CD8B8:
	.incbin "baserom.dol", 0x2B7158, 0x4
lbl_803CD8BC:
	.incbin "baserom.dol", 0x2B715C, 0x4
lbl_803CD8C0:
	.incbin "baserom.dol", 0x2B7160, 0x4
lbl_803CD8C4:
	.incbin "baserom.dol", 0x2B7164, 0x4
lbl_803CD8C8:
	.incbin "baserom.dol", 0x2B7168, 0x4
lbl_803CD8CC:
	.incbin "baserom.dol", 0x2B716C, 0x4
lbl_803CD8D0:
	.incbin "baserom.dol", 0x2B7170, 0x4
lbl_803CD8D4:
	.incbin "baserom.dol", 0x2B7174, 0x4
lbl_803CD8D8:
	.incbin "baserom.dol", 0x2B7178, 0x4
lbl_803CD8DC:
	.incbin "baserom.dol", 0x2B717C, 0x4
lbl_803CD8E0:
	.incbin "baserom.dol", 0x2B7180, 0x4
lbl_803CD8E4:
	.incbin "baserom.dol", 0x2B7184, 0x4
lbl_803CD8E8:
	.incbin "baserom.dol", 0x2B7188, 0x4
lbl_803CD8EC:
	.incbin "baserom.dol", 0x2B718C, 0x4
lbl_803CD8F0:
	.incbin "baserom.dol", 0x2B7190, 0x4
lbl_803CD8F4:
	.incbin "baserom.dol", 0x2B7194, 0x4
lbl_803CD8F8:
	.incbin "baserom.dol", 0x2B7198, 0x4
lbl_803CD8FC:
	.incbin "baserom.dol", 0x2B719C, 0x4
lbl_803CD900:
	.incbin "baserom.dol", 0x2B71A0, 0x4
lbl_803CD904:
	.incbin "baserom.dol", 0x2B71A4, 0x4
lbl_803CD908:
	.incbin "baserom.dol", 0x2B71A8, 0x4
lbl_803CD90C:
	.incbin "baserom.dol", 0x2B71AC, 0x4
lbl_803CD910:
	.incbin "baserom.dol", 0x2B71B0, 0x4
lbl_803CD914:
	.incbin "baserom.dol", 0x2B71B4, 0x4
lbl_803CD918:
	.incbin "baserom.dol", 0x2B71B8, 0x4
lbl_803CD91C:
	.incbin "baserom.dol", 0x2B71BC, 0x4
lbl_803CD920:
	.incbin "baserom.dol", 0x2B71C0, 0x4
lbl_803CD924:
	.incbin "baserom.dol", 0x2B71C4, 0x4
lbl_803CD928:
	.incbin "baserom.dol", 0x2B71C8, 0x4
lbl_803CD92C:
	.incbin "baserom.dol", 0x2B71CC, 0x4
lbl_803CD930:
	.incbin "baserom.dol", 0x2B71D0, 0x8