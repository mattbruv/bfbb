.include "macros.inc"

.section .text  # 0x80015B3C - 0x80015EA4

.global xCounter.add_tweaks__22_unnamed_xCounter_cpp_FR9_xCounter
xCounter.add_tweaks__22_unnamed_xCounter_cpp_FR9_xCounter:
/* 80015B3C 0001293C  4E 80 00 20 */	blr 

.global xCounterInit__Fv
xCounterInit__Fv:
/* 80015B40 00012940  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015B44 00012944  7C 08 02 A6 */	mflr r0
/* 80015B48 00012948  3C 60 80 25 */	lis r3, lbl_80252140@ha
/* 80015B4C 0001294C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015B50 00012950  38 63 21 40 */	addi r3, r3, lbl_80252140@l
/* 80015B54 00012954  48 00 03 4D */	bl xDebugRemoveTweak__FPCc
/* 80015B58 00012958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015B5C 0001295C  7C 08 03 A6 */	mtlr r0
/* 80015B60 00012960  38 21 00 10 */	addi r1, r1, 0x10
/* 80015B64 00012964  4E 80 00 20 */	blr 
/* 80015B68 00012968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015B6C 0001296C  7C 08 02 A6 */	mflr r0
/* 80015B70 00012970  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015B74 00012974  48 00 00 15 */	bl xCounterInit__FP5xBaseP13xCounterAsset
/* 80015B78 00012978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015B7C 0001297C  7C 08 03 A6 */	mtlr r0
/* 80015B80 00012980  38 21 00 10 */	addi r1, r1, 0x10
/* 80015B84 00012984  4E 80 00 20 */	blr 

.global xCounterInit__FP5xBaseP13xCounterAsset
xCounterInit__FP5xBaseP13xCounterAsset:
/* 80015B88 00012988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015B8C 0001298C  7C 08 02 A6 */	mflr r0
/* 80015B90 00012990  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015B94 00012994  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80015B98 00012998  7C 7F 1B 78 */	mr r31, r3
/* 80015B9C 0001299C  93 C1 00 08 */	stw r30, 8(r1)
/* 80015BA0 000129A0  7C 9E 23 78 */	mr r30, r4
/* 80015BA4 000129A4  4B FF 38 5D */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80015BA8 000129A8  3C 60 80 01 */	lis r3, lbl_80015D18@ha
/* 80015BAC 000129AC  38 03 5D 18 */	addi r0, r3, lbl_80015D18@l
/* 80015BB0 000129B0  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80015BB4 000129B4  93 DF 00 10 */	stw r30, 0x10(r31)
/* 80015BB8 000129B8  88 1F 00 05 */	lbz r0, 5(r31)
/* 80015BBC 000129BC  28 00 00 00 */	cmplwi r0, 0
/* 80015BC0 000129C0  41 82 00 14 */	beq lbl_80015BD4
/* 80015BC4 000129C4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80015BC8 000129C8  38 03 00 0C */	addi r0, r3, 0xc
/* 80015BCC 000129CC  90 1F 00 08 */	stw r0, 8(r31)
/* 80015BD0 000129D0  48 00 00 0C */	b lbl_80015BDC
lbl_80015BD4:
/* 80015BD4 000129D4  38 00 00 00 */	li r0, 0
/* 80015BD8 000129D8  90 1F 00 08 */	stw r0, 8(r31)
lbl_80015BDC:
/* 80015BDC 000129DC  38 80 00 00 */	li r4, 0
/* 80015BE0 000129E0  7F E3 FB 78 */	mr r3, r31
/* 80015BE4 000129E4  98 9F 00 16 */	stb r4, 0x16(r31)
/* 80015BE8 000129E8  A8 1E 00 08 */	lha r0, 8(r30)
/* 80015BEC 000129EC  B0 1F 00 14 */	sth r0, 0x14(r31)
/* 80015BF0 000129F0  98 9F 00 17 */	stb r4, 0x17(r31)
/* 80015BF4 000129F4  4B FF FF 49 */	bl xCounter.add_tweaks__22_unnamed_xCounter_cpp_FR9_xCounter
/* 80015BF8 000129F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015BFC 000129FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80015C00 00012A00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80015C04 00012A04  7C 08 03 A6 */	mtlr r0
/* 80015C08 00012A08  38 21 00 10 */	addi r1, r1, 0x10
/* 80015C0C 00012A0C  4E 80 00 20 */	blr 

.global xCounterReset__FP5xBase
xCounterReset__FP5xBase:
/* 80015C10 00012A10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015C14 00012A14  7C 08 02 A6 */	mflr r0
/* 80015C18 00012A18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015C1C 00012A1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80015C20 00012A20  7C 7F 1B 78 */	mr r31, r3
/* 80015C24 00012A24  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80015C28 00012A28  4B FF 37 D9 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80015C2C 00012A2C  88 1F 00 05 */	lbz r0, 5(r31)
/* 80015C30 00012A30  28 00 00 00 */	cmplwi r0, 0
/* 80015C34 00012A34  41 82 00 14 */	beq lbl_80015C48
/* 80015C38 00012A38  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80015C3C 00012A3C  38 03 00 0C */	addi r0, r3, 0xc
/* 80015C40 00012A40  90 1F 00 08 */	stw r0, 8(r31)
/* 80015C44 00012A44  48 00 00 0C */	b lbl_80015C50
lbl_80015C48:
/* 80015C48 00012A48  38 00 00 00 */	li r0, 0
/* 80015C4C 00012A4C  90 1F 00 08 */	stw r0, 8(r31)
lbl_80015C50:
/* 80015C50 00012A50  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80015C54 00012A54  38 00 00 00 */	li r0, 0
/* 80015C58 00012A58  A8 63 00 08 */	lha r3, 8(r3)
/* 80015C5C 00012A5C  B0 7F 00 14 */	sth r3, 0x14(r31)
/* 80015C60 00012A60  98 1F 00 16 */	stb r0, 0x16(r31)
/* 80015C64 00012A64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80015C68 00012A68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015C6C 00012A6C  7C 08 03 A6 */	mtlr r0
/* 80015C70 00012A70  38 21 00 10 */	addi r1, r1, 0x10
/* 80015C74 00012A74  4E 80 00 20 */	blr 

.global xCounterSave__FP9_xCounterP7xSerial
xCounterSave__FP9_xCounterP7xSerial:
/* 80015C78 00012A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015C7C 00012A7C  7C 08 02 A6 */	mflr r0
/* 80015C80 00012A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015C84 00012A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80015C88 00012A88  7C 9F 23 78 */	mr r31, r4
/* 80015C8C 00012A8C  93 C1 00 08 */	stw r30, 8(r1)
/* 80015C90 00012A90  7C 7E 1B 78 */	mr r30, r3
/* 80015C94 00012A94  4B FF 37 B9 */	bl xBaseSave__FP5xBaseP7xSerial
/* 80015C98 00012A98  88 9E 00 16 */	lbz r4, 0x16(r30)
/* 80015C9C 00012A9C  7F E3 FB 78 */	mr r3, r31
/* 80015CA0 00012AA0  48 02 D3 CD */	bl Write__7xSerialFUc
/* 80015CA4 00012AA4  A8 9E 00 14 */	lha r4, 0x14(r30)
/* 80015CA8 00012AA8  7F E3 FB 78 */	mr r3, r31
/* 80015CAC 00012AAC  48 02 D3 F1 */	bl Write__7xSerialFs
/* 80015CB0 00012AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015CB4 00012AB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80015CB8 00012AB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80015CBC 00012ABC  7C 08 03 A6 */	mtlr r0
/* 80015CC0 00012AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80015CC4 00012AC4  4E 80 00 20 */	blr 

.global xCounterLoad__FP9_xCounterP7xSerial
xCounterLoad__FP9_xCounterP7xSerial:
/* 80015CC8 00012AC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015CCC 00012ACC  7C 08 02 A6 */	mflr r0
/* 80015CD0 00012AD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015CD4 00012AD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80015CD8 00012AD8  7C 9F 23 78 */	mr r31, r4
/* 80015CDC 00012ADC  93 C1 00 08 */	stw r30, 8(r1)
/* 80015CE0 00012AE0  7C 7E 1B 78 */	mr r30, r3
/* 80015CE4 00012AE4  4B FF 37 B9 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 80015CE8 00012AE8  7F E3 FB 78 */	mr r3, r31
/* 80015CEC 00012AEC  38 9E 00 16 */	addi r4, r30, 0x16
/* 80015CF0 00012AF0  48 02 D6 0D */	bl Read__7xSerialFPUc
/* 80015CF4 00012AF4  7F E3 FB 78 */	mr r3, r31
/* 80015CF8 00012AF8  38 9E 00 14 */	addi r4, r30, 0x14
/* 80015CFC 00012AFC  48 02 D6 29 */	bl Read__7xSerialFPs
/* 80015D00 00012B00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015D04 00012B04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80015D08 00012B08  83 C1 00 08 */	lwz r30, 8(r1)
/* 80015D0C 00012B0C  7C 08 03 A6 */	mtlr r0
/* 80015D10 00012B10  38 21 00 10 */	addi r1, r1, 0x10
/* 80015D14 00012B14  4E 80 00 20 */	blr 
lbl_80015D18:
/* 80015D18 00012B18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015D1C 00012B1C  7C 08 02 A6 */	mflr r0
/* 80015D20 00012B20  2C 05 00 0C */	cmpwi r5, 0xc
/* 80015D24 00012B24  7C 83 23 78 */	mr r3, r4
/* 80015D28 00012B28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015D2C 00012B2C  41 82 00 24 */	beq lbl_80015D50
/* 80015D30 00012B30  40 80 00 14 */	bge lbl_80015D44
/* 80015D34 00012B34  2C 05 00 0A */	cmpwi r5, 0xa
/* 80015D38 00012B38  41 82 00 D0 */	beq lbl_80015E08
/* 80015D3C 00012B3C  40 80 00 80 */	bge lbl_80015DBC
/* 80015D40 00012B40  48 00 01 0C */	b lbl_80015E4C
lbl_80015D44:
/* 80015D44 00012B44  2C 05 00 14 */	cmpwi r5, 0x14
/* 80015D48 00012B48  41 82 00 D8 */	beq lbl_80015E20
/* 80015D4C 00012B4C  48 00 01 00 */	b lbl_80015E4C
lbl_80015D50:
/* 80015D50 00012B50  88 03 00 16 */	lbz r0, 0x16(r3)
/* 80015D54 00012B54  28 00 00 01 */	cmplwi r0, 1
/* 80015D58 00012B58  41 82 01 34 */	beq lbl_80015E8C
/* 80015D5C 00012B5C  88 03 00 17 */	lbz r0, 0x17(r3)
/* 80015D60 00012B60  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80015D64 00012B64  41 82 00 10 */	beq lbl_80015D74
/* 80015D68 00012B68  A8 03 00 14 */	lha r0, 0x14(r3)
/* 80015D6C 00012B6C  2C 00 00 02 */	cmpwi r0, 2
/* 80015D70 00012B70  41 82 01 1C */	beq lbl_80015E8C
lbl_80015D74:
/* 80015D74 00012B74  A8 83 00 14 */	lha r4, 0x14(r3)
/* 80015D78 00012B78  38 04 FF FF */	addi r0, r4, -1
/* 80015D7C 00012B7C  B0 03 00 14 */	sth r0, 0x14(r3)
/* 80015D80 00012B80  A8 A3 00 14 */	lha r5, 0x14(r3)
/* 80015D84 00012B84  7C A0 07 35 */	extsh. r0, r5
/* 80015D88 00012B88  40 82 00 14 */	bne lbl_80015D9C
/* 80015D8C 00012B8C  7C 64 1B 78 */	mr r4, r3
/* 80015D90 00012B90  38 A0 00 14 */	li r5, 0x14
/* 80015D94 00012B94  48 00 99 4D */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80015D98 00012B98  48 00 00 F4 */	b lbl_80015E8C
lbl_80015D9C:
/* 80015D9C 00012B9C  7C A0 07 35 */	extsh. r0, r5
/* 80015DA0 00012BA0  40 81 00 EC */	ble lbl_80015E8C
/* 80015DA4 00012BA4  2C 05 00 14 */	cmpwi r5, 0x14
/* 80015DA8 00012BA8  41 81 00 E4 */	bgt lbl_80015E8C
/* 80015DAC 00012BAC  7C 64 1B 78 */	mr r4, r3
/* 80015DB0 00012BB0  38 A5 01 91 */	addi r5, r5, 0x191
/* 80015DB4 00012BB4  48 00 99 2D */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80015DB8 00012BB8  48 00 00 D4 */	b lbl_80015E8C
lbl_80015DBC:
/* 80015DBC 00012BBC  88 03 00 16 */	lbz r0, 0x16(r3)
/* 80015DC0 00012BC0  28 00 00 01 */	cmplwi r0, 1
/* 80015DC4 00012BC4  41 82 00 C8 */	beq lbl_80015E8C
/* 80015DC8 00012BC8  A8 A3 00 14 */	lha r5, 0x14(r3)
/* 80015DCC 00012BCC  38 05 00 01 */	addi r0, r5, 1
/* 80015DD0 00012BD0  B0 03 00 14 */	sth r0, 0x14(r3)
/* 80015DD4 00012BD4  A8 A3 00 14 */	lha r5, 0x14(r3)
/* 80015DD8 00012BD8  7C A0 07 35 */	extsh. r0, r5
/* 80015DDC 00012BDC  40 82 00 10 */	bne lbl_80015DEC
/* 80015DE0 00012BE0  38 A0 00 14 */	li r5, 0x14
/* 80015DE4 00012BE4  48 00 98 FD */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80015DE8 00012BE8  48 00 00 A4 */	b lbl_80015E8C
lbl_80015DEC:
/* 80015DEC 00012BEC  7C A0 07 35 */	extsh. r0, r5
/* 80015DF0 00012BF0  40 81 00 9C */	ble lbl_80015E8C
/* 80015DF4 00012BF4  2C 05 00 14 */	cmpwi r5, 0x14
/* 80015DF8 00012BF8  41 81 00 94 */	bgt lbl_80015E8C
/* 80015DFC 00012BFC  38 A5 01 91 */	addi r5, r5, 0x191
/* 80015E00 00012C00  48 00 98 E1 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80015E04 00012C04  48 00 00 88 */	b lbl_80015E8C
lbl_80015E08:
/* 80015E08 00012C08  38 00 00 00 */	li r0, 0
/* 80015E0C 00012C0C  98 03 00 16 */	stb r0, 0x16(r3)
/* 80015E10 00012C10  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80015E14 00012C14  A8 04 00 08 */	lha r0, 8(r4)
/* 80015E18 00012C18  B0 03 00 14 */	sth r0, 0x14(r3)
/* 80015E1C 00012C1C  48 00 00 70 */	b lbl_80015E8C
lbl_80015E20:
/* 80015E20 00012C20  88 03 00 17 */	lbz r0, 0x17(r3)
/* 80015E24 00012C24  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80015E28 00012C28  41 82 00 10 */	beq lbl_80015E38
/* 80015E2C 00012C2C  A8 03 00 14 */	lha r0, 0x14(r3)
/* 80015E30 00012C30  2C 00 00 02 */	cmpwi r0, 2
/* 80015E34 00012C34  41 82 00 58 */	beq lbl_80015E8C
lbl_80015E38:
/* 80015E38 00012C38  38 80 00 00 */	li r4, 0
/* 80015E3C 00012C3C  38 00 00 01 */	li r0, 1
/* 80015E40 00012C40  B0 83 00 14 */	sth r4, 0x14(r3)
/* 80015E44 00012C44  98 03 00 16 */	stb r0, 0x16(r3)
/* 80015E48 00012C48  48 00 00 44 */	b lbl_80015E8C
lbl_80015E4C:
/* 80015E4C 00012C4C  88 03 00 16 */	lbz r0, 0x16(r3)
/* 80015E50 00012C50  28 00 00 01 */	cmplwi r0, 1
/* 80015E54 00012C54  41 82 00 38 */	beq lbl_80015E8C
/* 80015E58 00012C58  28 05 01 92 */	cmplwi r5, 0x192
/* 80015E5C 00012C5C  41 80 00 30 */	blt lbl_80015E8C
/* 80015E60 00012C60  28 05 01 A5 */	cmplwi r5, 0x1a5
/* 80015E64 00012C64  41 81 00 28 */	bgt lbl_80015E8C
/* 80015E68 00012C68  88 03 00 17 */	lbz r0, 0x17(r3)
/* 80015E6C 00012C6C  38 85 FE 6F */	addi r4, r5, -401
/* 80015E70 00012C70  7C 84 07 34 */	extsh r4, r4
/* 80015E74 00012C74  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80015E78 00012C78  41 82 00 10 */	beq lbl_80015E88
/* 80015E7C 00012C7C  A8 03 00 14 */	lha r0, 0x14(r3)
/* 80015E80 00012C80  2C 00 00 02 */	cmpwi r0, 2
/* 80015E84 00012C84  41 82 00 08 */	beq lbl_80015E8C
lbl_80015E88:
/* 80015E88 00012C88  B0 83 00 14 */	sth r4, 0x14(r3)
lbl_80015E8C:
/* 80015E8C 00012C8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015E90 00012C90  38 60 00 01 */	li r3, 1
/* 80015E94 00012C94  7C 08 03 A6 */	mtlr r0
/* 80015E98 00012C98  38 21 00 10 */	addi r1, r1, 0x10
/* 80015E9C 00012C9C  4E 80 00 20 */	blr 

.global xDebugRemoveTweak__FPCc
xDebugRemoveTweak__FPCc:
/* 80015EA0 00012CA0  4E 80 00 20 */	blr 
