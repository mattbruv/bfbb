.include "macros.inc"

.if 0

.section .text  # 0x8010F150 - 0x8010F2D0

.global __nw__10RyzMemDataFUliP10RyzMemGrow
__nw__10RyzMemDataFUliP10RyzMemGrow:
/* 8010F150 0010BF50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F154 0010BF54  7C 08 02 A6 */	mflr r0
/* 8010F158 0010BF58  28 05 00 00 */	cmplwi r5, 0
/* 8010F15C 0010BF5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F160 0010BF60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F164 0010BF64  3B E0 00 01 */	li r31, 1
/* 8010F168 0010BF68  93 C1 00 08 */	stw r30, 8(r1)
/* 8010F16C 0010BF6C  7C 7E 1B 78 */	mr r30, r3
/* 8010F170 0010BF70  40 82 00 0C */	bne lbl_8010F17C
/* 8010F174 0010BF74  3B E0 00 00 */	li r31, 0
/* 8010F178 0010BF78  48 00 00 18 */	b lbl_8010F190
lbl_8010F17C:
/* 8010F17C 0010BF7C  7C A3 2B 78 */	mr r3, r5
/* 8010F180 0010BF80  48 00 01 45 */	bl IsEnabled__10RyzMemGrowFv
/* 8010F184 0010BF84  2C 03 00 00 */	cmpwi r3, 0
/* 8010F188 0010BF88  40 82 00 08 */	bne lbl_8010F190
/* 8010F18C 0010BF8C  3B E0 00 00 */	li r31, 0
lbl_8010F190:
/* 8010F190 0010BF90  2C 1F 00 00 */	cmpwi r31, 0
/* 8010F194 0010BF94  41 82 00 18 */	beq lbl_8010F1AC
/* 8010F198 0010BF98  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8010F19C 0010BF9C  7F C4 F3 78 */	mr r4, r30
/* 8010F1A0 0010BFA0  4B F2 46 C5 */	bl xMemGrowAlloc__FUiUi
/* 8010F1A4 0010BFA4  7C 7F 1B 78 */	mr r31, r3
/* 8010F1A8 0010BFA8  48 00 00 18 */	b lbl_8010F1C0
lbl_8010F1AC:
/* 8010F1AC 0010BFAC  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8010F1B0 0010BFB0  7F C4 F3 78 */	mr r4, r30
/* 8010F1B4 0010BFB4  38 A0 00 00 */	li r5, 0
/* 8010F1B8 0010BFB8  4B F2 47 89 */	bl xMemAlloc__FUiUii
/* 8010F1BC 0010BFBC  7C 7F 1B 78 */	mr r31, r3
lbl_8010F1C0:
/* 8010F1C0 0010BFC0  7F E3 FB 78 */	mr r3, r31
/* 8010F1C4 0010BFC4  38 80 00 00 */	li r4, 0
/* 8010F1C8 0010BFC8  38 A0 00 04 */	li r5, 4
/* 8010F1CC 0010BFCC  4B EF 42 8D */	bl memset
/* 8010F1D0 0010BFD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F1D4 0010BFD4  7F E3 FB 78 */	mr r3, r31
/* 8010F1D8 0010BFD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F1DC 0010BFDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010F1E0 0010BFE0  7C 08 03 A6 */	mtlr r0
/* 8010F1E4 0010BFE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F1E8 0010BFE8  4E 80 00 20 */	blr 

.endif

