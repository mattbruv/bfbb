.include "macros.inc"

.section .rodata   # 0x80252F68 - 0x80252F90

.global lbl_80252F68
lbl_80252F68:
	.incbin "baserom.dol", 0x24FF48, 0x28

.if 0

.section .text  # 0x8002FC88 - 0x8002FF80

.global XHUD_AnimTable_Idle__Fv
XHUD_AnimTable_Idle__Fv:
/* 8002FC88 0002CA88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FC8C 0002CA8C  7C 08 02 A6 */	mflr r0
/* 8002FC90 0002CA90  3C 60 80 25 */	lis r3, lbl_80252F68@ha
/* 8002FC94 0002CA94  38 80 00 00 */	li r4, 0
/* 8002FC98 0002CA98  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FC9C 0002CA9C  38 63 2F 68 */	addi r3, r3, lbl_80252F68@l
/* 8002FCA0 0002CAA0  38 A0 00 00 */	li r5, 0
/* 8002FCA4 0002CAA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002FCA8 0002CAA8  4B FD 6F C9 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8002FCAC 0002CAAC  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8002FCB0 0002CAB0  3C 80 80 25 */	lis r4, lbl_80252F68@ha
/* 8002FCB4 0002CAB4  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8002FCB8 0002CAB8  7C 7F 1B 78 */	mr r31, r3
/* 8002FCBC 0002CABC  90 01 00 08 */	stw r0, 8(r1)
/* 8002FCC0 0002CAC0  38 00 00 00 */	li r0, 0
/* 8002FCC4 0002CAC4  38 84 2F 68 */	addi r4, r4, lbl_80252F68@l
/* 8002FCC8 0002CAC8  38 A0 00 10 */	li r5, 0x10
/* 8002FCCC 0002CACC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002FCD0 0002CAD0  38 84 00 14 */	addi r4, r4, 0x14
/* 8002FCD4 0002CAD4  38 C0 00 01 */	li r6, 1
/* 8002FCD8 0002CAD8  38 E0 00 00 */	li r7, 0
/* 8002FCDC 0002CADC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8002FCE0 0002CAE0  39 00 00 00 */	li r8, 0
/* 8002FCE4 0002CAE4  39 20 00 00 */	li r9, 0
/* 8002FCE8 0002CAE8  39 40 00 00 */	li r10, 0
/* 8002FCEC 0002CAEC  C0 22 84 60 */	lfs f1, lbl_803CCDE0-_SDA2_BASE_(r2)
/* 8002FCF0 0002CAF0  C0 42 84 64 */	lfs f2, lbl_803CCDE4-_SDA2_BASE_(r2)
/* 8002FCF4 0002CAF4  4B FD 70 65 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8002FCF8 0002CAF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FCFC 0002CAFC  7F E3 FB 78 */	mr r3, r31
/* 8002FD00 0002CB00  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002FD04 0002CB04  7C 08 03 A6 */	mtlr r0
/* 8002FD08 0002CB08  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FD0C 0002CB0C  4E 80 00 20 */	blr 

load__Q24xhud12model_widgetFR5xBaseR9xDynAssetUl:
/* 8002FD10 0002CB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FD14 0002CB14  7C 08 02 A6 */	mflr r0
/* 8002FD18 0002CB18  38 A0 00 9C */	li r5, 0x9c
/* 8002FD1C 0002CB1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FD20 0002CB20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FD24 0002CB24  7C 9F 23 78 */	mr r31, r4
/* 8002FD28 0002CB28  93 C1 00 08 */	stw r30, 8(r1)
/* 8002FD2C 0002CB2C  7C 7E 1B 78 */	mr r30, r3
/* 8002FD30 0002CB30  4B FF E0 01 */	bl init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl
/* 8002FD34 0002CB34  38 9E 00 10 */	addi r4, r30, 0x10
/* 8002FD38 0002CB38  38 60 00 8C */	li r3, 0x8c
/* 8002FD3C 0002CB3C  4B FF F2 A5 */	bl __nw__FUlPv
/* 8002FD40 0002CB40  28 03 00 00 */	cmplwi r3, 0
/* 8002FD44 0002CB44  41 82 00 0C */	beq lbl_8002FD50
/* 8002FD48 0002CB48  7F E4 FB 78 */	mr r4, r31
/* 8002FD4C 0002CB4C  48 00 00 1D */	bl __ct__Q24xhud12model_widgetFRCQ24xhud11model_asset
lbl_8002FD50:
/* 8002FD50 0002CB50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FD54 0002CB54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FD58 0002CB58  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002FD5C 0002CB5C  7C 08 03 A6 */	mtlr r0
/* 8002FD60 0002CB60  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FD64 0002CB64  4E 80 00 20 */	blr 

.global __ct__Q24xhud12model_widgetFRCQ24xhud11model_asset
__ct__Q24xhud12model_widgetFRCQ24xhud11model_asset:
/* 8002FD68 0002CB68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FD6C 0002CB6C  7C 08 02 A6 */	mflr r0
/* 8002FD70 0002CB70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FD74 0002CB74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FD78 0002CB78  7C 9F 23 78 */	mr r31, r4
/* 8002FD7C 0002CB7C  93 C1 00 08 */	stw r30, 8(r1)
/* 8002FD80 0002CB80  7C 7E 1B 78 */	mr r30, r3
/* 8002FD84 0002CB84  4B FF DE A5 */	bl __ct__Q24xhud6widgetFRCQ24xhud5asset
/* 8002FD88 0002CB88  3C 80 80 28 */	lis r4, __vt__Q24xhud12model_widget@ha
/* 8002FD8C 0002CB8C  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8002FD90 0002CB90  38 84 D6 A0 */	addi r4, r4, __vt__Q24xhud12model_widget@l
/* 8002FD94 0002CB94  38 00 00 00 */	li r0, 0
/* 8002FD98 0002CB98  90 9E 00 74 */	stw r4, 0x74(r30)
/* 8002FD9C 0002CB9C  90 7E 00 84 */	stw r3, 0x84(r30)
/* 8002FDA0 0002CBA0  90 1E 00 88 */	stw r0, 0x88(r30)
/* 8002FDA4 0002CBA4  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8002FDA8 0002CBA8  4B FF E9 B5 */	bl load_model__4xhudFUi
/* 8002FDAC 0002CBAC  90 7E 00 88 */	stw r3, 0x88(r30)
/* 8002FDB0 0002CBB0  7F C3 F3 78 */	mr r3, r30
/* 8002FDB4 0002CBB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FDB8 0002CBB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FDBC 0002CBBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002FDC0 0002CBC0  7C 08 03 A6 */	mtlr r0
/* 8002FDC4 0002CBC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FDC8 0002CBC8  4E 80 00 20 */	blr 

.global destruct__Q24xhud12model_widgetFv
destruct__Q24xhud12model_widgetFv:
/* 8002FDCC 0002CBCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FDD0 0002CBD0  7C 08 02 A6 */	mflr r0
/* 8002FDD4 0002CBD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FDD8 0002CBD8  4B FF DF BD */	bl destruct__Q24xhud6widgetFv
/* 8002FDDC 0002CBDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FDE0 0002CBE0  7C 08 03 A6 */	mtlr r0
/* 8002FDE4 0002CBE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FDE8 0002CBE8  4E 80 00 20 */	blr 

destroy__Q24xhud12model_widgetFv:
/* 8002FDEC 0002CBEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FDF0 0002CBF0  7C 08 02 A6 */	mflr r0
/* 8002FDF4 0002CBF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FDF8 0002CBF8  4B FF FF D5 */	bl destruct__Q24xhud12model_widgetFv
/* 8002FDFC 0002CBFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FE00 0002CC00  7C 08 03 A6 */	mtlr r0
/* 8002FE04 0002CC04  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FE08 0002CC08  4E 80 00 20 */	blr 

.global type__Q24xhud12model_widgetCFv
type__Q24xhud12model_widgetCFv:
/* 8002FE0C 0002CC0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FE10 0002CC10  7C 08 02 A6 */	mflr r0
/* 8002FE14 0002CC14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FE18 0002CC18  88 0D 89 BC */	lbz r0, lbl_803CB2BC-_SDA_BASE_(r13)
/* 8002FE1C 0002CC1C  7C 00 07 75 */	extsb. r0, r0
/* 8002FE20 0002CC20  40 82 00 18 */	bne lbl_8002FE38
/* 8002FE24 0002CC24  48 00 01 4D */	bl type_name__Q24xhud11model_assetFv
/* 8002FE28 0002CC28  48 01 C3 ED */	bl xStrHash__FPCc
/* 8002FE2C 0002CC2C  90 6D 89 B8 */	stw r3, lbl_803CB2B8-_SDA_BASE_(r13)
/* 8002FE30 0002CC30  38 00 00 01 */	li r0, 1
/* 8002FE34 0002CC34  98 0D 89 BC */	stb r0, lbl_803CB2BC-_SDA_BASE_(r13)
lbl_8002FE38:
/* 8002FE38 0002CC38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FE3C 0002CC3C  80 6D 89 B8 */	lwz r3, lbl_803CB2B8-_SDA_BASE_(r13)
/* 8002FE40 0002CC40  7C 08 03 A6 */	mtlr r0
/* 8002FE44 0002CC44  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FE48 0002CC48  4E 80 00 20 */	blr 

is__Q24xhud12model_widgetCFUi:
/* 8002FE4C 0002CC4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FE50 0002CC50  7C 08 02 A6 */	mflr r0
/* 8002FE54 0002CC54  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FE58 0002CC58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002FE5C 0002CC5C  3B E0 00 00 */	li r31, 0
/* 8002FE60 0002CC60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002FE64 0002CC64  7C 9E 23 78 */	mr r30, r4
/* 8002FE68 0002CC68  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002FE6C 0002CC6C  7C 7D 1B 78 */	mr r29, r3
/* 8002FE70 0002CC70  4B FF FF 9D */	bl type__Q24xhud12model_widgetCFv
/* 8002FE74 0002CC74  7C 1E 18 40 */	cmplw r30, r3
/* 8002FE78 0002CC78  41 82 00 18 */	beq lbl_8002FE90
/* 8002FE7C 0002CC7C  7F A3 EB 78 */	mr r3, r29
/* 8002FE80 0002CC80  7F C4 F3 78 */	mr r4, r30
/* 8002FE84 0002CC84  4B FF E1 19 */	bl is__Q24xhud6widgetCFUi
/* 8002FE88 0002CC88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8002FE8C 0002CC8C  41 82 00 08 */	beq lbl_8002FE94
lbl_8002FE90:
/* 8002FE90 0002CC90  3B E0 00 01 */	li r31, 1
lbl_8002FE94:
/* 8002FE94 0002CC94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FE98 0002CC98  7F E3 FB 78 */	mr r3, r31
/* 8002FE9C 0002CC9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002FEA0 0002CCA0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002FEA4 0002CCA4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002FEA8 0002CCA8  7C 08 03 A6 */	mtlr r0
/* 8002FEAC 0002CCAC  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FEB0 0002CCB0  4E 80 00 20 */	blr 

update__Q24xhud12model_widgetFf:
/* 8002FEB4 0002CCB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FEB8 0002CCB8  7C 08 02 A6 */	mflr r0
/* 8002FEBC 0002CCBC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FEC0 0002CCC0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8002FEC4 0002CCC4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8002FEC8 0002CCC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FECC 0002CCCC  7C 7F 1B 78 */	mr r31, r3
/* 8002FED0 0002CCD0  FF E0 08 90 */	fmr f31, f1
/* 8002FED4 0002CCD4  4B FF DF 09 */	bl updater__Q24xhud6widgetFf
/* 8002FED8 0002CCD8  7F E3 FB 78 */	mr r3, r31
/* 8002FEDC 0002CCDC  4B FF EF E5 */	bl visible__Q24xhud6widgetCFv
/* 8002FEE0 0002CCE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8002FEE4 0002CCE4  41 82 00 30 */	beq lbl_8002FF14
/* 8002FEE8 0002CCE8  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8002FEEC 0002CCEC  C0 02 84 68 */	lfs f0, lbl_803CCDE8-_SDA2_BASE_(r2)
/* 8002FEF0 0002CCF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002FEF4 0002CCF4  4C 40 13 82 */	cror 2, 0, 2
/* 8002FEF8 0002CCF8  40 82 00 08 */	bne lbl_8002FF00
/* 8002FEFC 0002CCFC  48 00 00 18 */	b lbl_8002FF14
lbl_8002FF00:
/* 8002FF00 0002CD00  FC 20 F8 90 */	fmr f1, f31
/* 8002FF04 0002CD04  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8002FF08 0002CD08  48 00 45 C5 */	bl xModelUpdate__FP14xModelInstancef
/* 8002FF0C 0002CD0C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8002FF10 0002CD10  48 00 47 A1 */	bl xModelEval__FP14xModelInstance
lbl_8002FF14:
/* 8002FF14 0002CD14  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8002FF18 0002CD18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FF1C 0002CD1C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8002FF20 0002CD20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FF24 0002CD24  7C 08 03 A6 */	mtlr r0
/* 8002FF28 0002CD28  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FF2C 0002CD2C  4E 80 00 20 */	blr 

render__Q24xhud12model_widgetFv:
/* 8002FF30 0002CD30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FF34 0002CD34  7C 08 02 A6 */	mflr r0
/* 8002FF38 0002CD38  7C 64 1B 78 */	mr r4, r3
/* 8002FF3C 0002CD3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FF40 0002CD40  C0 02 84 64 */	lfs f0, lbl_803CCDE4-_SDA2_BASE_(r2)
/* 8002FF44 0002CD44  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8002FF48 0002CD48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002FF4C 0002CD4C  4C 40 13 82 */	cror 2, 0, 2
/* 8002FF50 0002CD50  41 82 00 10 */	beq lbl_8002FF60
/* 8002FF54 0002CD54  80 64 00 88 */	lwz r3, 0x88(r4)
/* 8002FF58 0002CD58  38 84 00 04 */	addi r4, r4, 4
/* 8002FF5C 0002CD5C  4B FF E9 1D */	bl render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context
lbl_8002FF60:
/* 8002FF60 0002CD60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FF64 0002CD64  7C 08 03 A6 */	mtlr r0
/* 8002FF68 0002CD68  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FF6C 0002CD6C  4E 80 00 20 */	blr 

.global type_name__Q24xhud11model_assetFv
type_name__Q24xhud11model_assetFv:
/* 8002FF70 0002CD70  3C 60 80 25 */	lis r3, lbl_80252F68@ha
/* 8002FF74 0002CD74  38 63 2F 68 */	addi r3, r3, lbl_80252F68@l
/* 8002FF78 0002CD78  38 63 00 1B */	addi r3, r3, 0x1b
/* 8002FF7C 0002CD7C  4E 80 00 20 */	blr 

.endif

.section .sbss
lbl_803CB2B8:
	.skip 0x4
lbl_803CB2BC:
	.skip 0x4

.section .sdata2
lbl_803CCDE0:
	.incbin "baserom.dol", 0x2B6680, 0x4
lbl_803CCDE4:
	.incbin "baserom.dol", 0x2B6684, 0x4
lbl_803CCDE8:
	.incbin "baserom.dol", 0x2B6688, 0x8
