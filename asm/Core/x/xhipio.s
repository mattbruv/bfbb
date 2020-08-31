.include "macros.inc"

.section .text  # 0x8002CF70 - 0x8002D98C

.global get_HIPLFuncs__Fv
get_HIPLFuncs__Fv:
/* 8002CF70 00029D70  3C 60 80 28 */	lis r3, lbl_8027D5E0@ha
/* 8002CF74 00029D74  38 63 D5 E0 */	addi r3, r3, lbl_8027D5E0@l
/* 8002CF78 00029D78  4E 80 00 20 */	blr 
/* 8002CF7C 00029D7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002CF80 00029D80  7C 08 02 A6 */	mflr r0
/* 8002CF84 00029D84  38 C0 00 00 */	li r6, 0
/* 8002CF88 00029D88  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002CF8C 00029D8C  38 00 00 08 */	li r0, 8
/* 8002CF90 00029D90  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8002CF94 00029D94  7C 7C 1B 78 */	mr r28, r3
/* 8002CF98 00029D98  7C 9D 23 78 */	mr r29, r4
/* 8002CF9C 00029D9C  7C BE 2B 78 */	mr r30, r5
/* 8002CFA0 00029DA0  3B E0 00 00 */	li r31, 0
/* 8002CFA4 00029DA4  3B 60 FF FF */	li r27, -1
/* 8002CFA8 00029DA8  38 60 00 01 */	li r3, 1
/* 8002CFAC 00029DAC  80 8D 89 90 */	lwz r4, lbl_803CB290-_SDA_BASE_(r13)
/* 8002CFB0 00029DB0  7C 09 03 A6 */	mtctr r0
lbl_8002CFB4:
/* 8002CFB4 00029DB4  7C 65 30 30 */	slw r5, r3, r6
/* 8002CFB8 00029DB8  7C 80 28 39 */	and. r0, r4, r5
/* 8002CFBC 00029DBC  40 82 00 28 */	bne lbl_8002CFE4
/* 8002CFC0 00029DC0  80 0D 89 90 */	lwz r0, lbl_803CB290-_SDA_BASE_(r13)
/* 8002CFC4 00029DC4  3C 60 80 28 */	lis r3, lbl_8027D0A0@ha
/* 8002CFC8 00029DC8  1C 86 00 A8 */	mulli r4, r6, 0xa8
/* 8002CFCC 00029DCC  7C DB 33 78 */	mr r27, r6
/* 8002CFD0 00029DD0  7C 05 2B 78 */	or r5, r0, r5
/* 8002CFD4 00029DD4  38 03 D0 A0 */	addi r0, r3, lbl_8027D0A0@l
/* 8002CFD8 00029DD8  90 AD 89 90 */	stw r5, lbl_803CB290-_SDA_BASE_(r13)
/* 8002CFDC 00029DDC  7F E0 22 14 */	add r31, r0, r4
/* 8002CFE0 00029DE0  48 00 00 0C */	b lbl_8002CFEC
lbl_8002CFE4:
/* 8002CFE4 00029DE4  38 C6 00 01 */	addi r6, r6, 1
/* 8002CFE8 00029DE8  42 00 FF CC */	bdnz lbl_8002CFB4
lbl_8002CFEC:
/* 8002CFEC 00029DEC  28 1F 00 00 */	cmplwi r31, 0
/* 8002CFF0 00029DF0  41 82 01 10 */	beq lbl_8002D100
/* 8002CFF4 00029DF4  7F E3 FB 78 */	mr r3, r31
/* 8002CFF8 00029DF8  38 80 00 00 */	li r4, 0
/* 8002CFFC 00029DFC  38 A0 00 A8 */	li r5, 0xa8
/* 8002D000 00029E00  4B FD 64 59 */	bl memset
/* 8002D004 00029E04  93 7F 00 04 */	stw r27, 4(r31)
/* 8002D008 00029E08  38 80 FF FF */	li r4, -1
/* 8002D00C 00029E0C  38 00 00 00 */	li r0, 0
/* 8002D010 00029E10  7F 83 E3 78 */	mr r3, r28
/* 8002D014 00029E14  90 9F 00 20 */	stw r4, 0x20(r31)
/* 8002D018 00029E18  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8002D01C 00029E1C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8002D020 00029E20  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8002D024 00029E24  90 1F 00 08 */	stw r0, 8(r31)
/* 8002D028 00029E28  90 9F 00 0C */	stw r4, 0xc(r31)
/* 8002D02C 00029E2C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8002D030 00029E30  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8002D034 00029E34  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8002D038 00029E38  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8002D03C 00029E3C  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8002D040 00029E40  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8002D044 00029E44  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8002D048 00029E48  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 8002D04C 00029E4C  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8002D050 00029E50  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8002D054 00029E54  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8002D058 00029E58  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8002D05C 00029E5C  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8002D060 00029E60  90 1F 00 54 */	stw r0, 0x54(r31)
/* 8002D064 00029E64  90 1F 00 58 */	stw r0, 0x58(r31)
/* 8002D068 00029E68  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 8002D06C 00029E6C  90 1F 00 60 */	stw r0, 0x60(r31)
/* 8002D070 00029E70  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8002D074 00029E74  90 1F 00 68 */	stw r0, 0x68(r31)
/* 8002D078 00029E78  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 8002D07C 00029E7C  90 1F 00 70 */	stw r0, 0x70(r31)
/* 8002D080 00029E80  90 1F 00 74 */	stw r0, 0x74(r31)
/* 8002D084 00029E84  90 1F 00 78 */	stw r0, 0x78(r31)
/* 8002D088 00029E88  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 8002D08C 00029E8C  90 1F 00 80 */	stw r0, 0x80(r31)
/* 8002D090 00029E90  90 1F 00 84 */	stw r0, 0x84(r31)
/* 8002D094 00029E94  90 1F 00 88 */	stw r0, 0x88(r31)
/* 8002D098 00029E98  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8002D09C 00029E9C  90 1F 00 90 */	stw r0, 0x90(r31)
/* 8002D0A0 00029EA0  90 1F 00 94 */	stw r0, 0x94(r31)
/* 8002D0A4 00029EA4  90 1F 00 98 */	stw r0, 0x98(r31)
/* 8002D0A8 00029EA8  90 1F 00 9C */	stw r0, 0x9c(r31)
/* 8002D0AC 00029EAC  90 1F 00 A0 */	stw r0, 0xa0(r31)
/* 8002D0B0 00029EB0  90 1F 00 A4 */	stw r0, 0xa4(r31)
/* 8002D0B4 00029EB4  4B FD C4 B1 */	bl xBinioLoadCreate__FPCc
/* 8002D0B8 00029EB8  28 03 00 00 */	cmplwi r3, 0
/* 8002D0BC 00029EBC  41 82 00 38 */	beq lbl_8002D0F4
/* 8002D0C0 00029EC0  90 7F 00 00 */	stw r3, 0(r31)
/* 8002D0C4 00029EC4  28 1D 00 00 */	cmplwi r29, 0
/* 8002D0C8 00029EC8  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8002D0CC 00029ECC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8002D0D0 00029ED0  41 82 00 30 */	beq lbl_8002D100
/* 8002D0D4 00029ED4  2C 1E 00 00 */	cmpwi r30, 0
/* 8002D0D8 00029ED8  40 81 00 28 */	ble lbl_8002D100
/* 8002D0DC 00029EDC  81 83 00 30 */	lwz r12, 0x30(r3)
/* 8002D0E0 00029EE0  7F A4 EB 78 */	mr r4, r29
/* 8002D0E4 00029EE4  7F C5 F3 78 */	mr r5, r30
/* 8002D0E8 00029EE8  7D 89 03 A6 */	mtctr r12
/* 8002D0EC 00029EEC  4E 80 04 21 */	bctrl 
/* 8002D0F0 00029EF0  48 00 00 10 */	b lbl_8002D100
lbl_8002D0F4:
/* 8002D0F4 00029EF4  7F E3 FB 78 */	mr r3, r31
/* 8002D0F8 00029EF8  48 00 00 21 */	bl func_8002D118
/* 8002D0FC 00029EFC  3B E0 00 00 */	li r31, 0
lbl_8002D100:
/* 8002D100 00029F00  7F E3 FB 78 */	mr r3, r31
/* 8002D104 00029F04  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8002D108 00029F08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002D10C 00029F0C  7C 08 03 A6 */	mtlr r0
/* 8002D110 00029F10  38 21 00 20 */	addi r1, r1, 0x20
/* 8002D114 00029F14  4E 80 00 20 */	blr 

.global func_8002D118
func_8002D118:
/* 8002D118 00029F18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D11C 00029F1C  7C 08 02 A6 */	mflr r0
/* 8002D120 00029F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D124 00029F24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D128 00029F28  93 C1 00 08 */	stw r30, 8(r1)
/* 8002D12C 00029F2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8002D130 00029F30  41 82 00 44 */	beq lbl_8002D174
/* 8002D134 00029F34  80 7E 00 00 */	lwz r3, 0(r30)
/* 8002D138 00029F38  28 03 00 00 */	cmplwi r3, 0
/* 8002D13C 00029F3C  41 82 00 10 */	beq lbl_8002D14C
/* 8002D140 00029F40  81 83 00 00 */	lwz r12, 0(r3)
/* 8002D144 00029F44  7D 89 03 A6 */	mtctr r12
/* 8002D148 00029F48  4E 80 04 21 */	bctrl 
lbl_8002D14C:
/* 8002D14C 00029F4C  83 FE 00 04 */	lwz r31, 4(r30)
/* 8002D150 00029F50  7F C3 F3 78 */	mr r3, r30
/* 8002D154 00029F54  38 80 00 00 */	li r4, 0
/* 8002D158 00029F58  38 A0 00 A8 */	li r5, 0xa8
/* 8002D15C 00029F5C  4B FD 62 FD */	bl memset
/* 8002D160 00029F60  38 00 00 01 */	li r0, 1
/* 8002D164 00029F64  80 6D 89 90 */	lwz r3, lbl_803CB290-_SDA_BASE_(r13)
/* 8002D168 00029F68  7C 00 F8 30 */	slw r0, r0, r31
/* 8002D16C 00029F6C  7C 60 00 78 */	andc r0, r3, r0
/* 8002D170 00029F70  90 0D 89 90 */	stw r0, lbl_803CB290-_SDA_BASE_(r13)
lbl_8002D174:
/* 8002D174 00029F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D178 00029F78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D17C 00029F7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002D180 00029F80  7C 08 03 A6 */	mtlr r0
/* 8002D184 00029F84  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D188 00029F88  4E 80 00 20 */	blr 
/* 8002D18C 00029F8C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8002D190 00029F90  4E 80 00 20 */	blr 
/* 8002D194 00029F94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002D198 00029F98  7C 08 02 A6 */	mflr r0
/* 8002D19C 00029F9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002D1A0 00029FA0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002D1A4 00029FA4  7C BF 2B 78 */	mr r31, r5
/* 8002D1A8 00029FA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002D1AC 00029FAC  7C 9E 23 78 */	mr r30, r4
/* 8002D1B0 00029FB0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002D1B4 00029FB4  7C 7D 1B 78 */	mr r29, r3
/* 8002D1B8 00029FB8  80 63 00 00 */	lwz r3, 0(r3)
/* 8002D1BC 00029FBC  81 83 00 34 */	lwz r12, 0x34(r3)
/* 8002D1C0 00029FC0  7D 89 03 A6 */	mtctr r12
/* 8002D1C4 00029FC4  4E 80 04 21 */	bctrl 
/* 8002D1C8 00029FC8  2C 1E 00 00 */	cmpwi r30, 0
/* 8002D1CC 00029FCC  41 82 00 18 */	beq lbl_8002D1E4
/* 8002D1D0 00029FD0  80 1D 00 08 */	lwz r0, 8(r29)
/* 8002D1D4 00029FD4  2C 00 00 00 */	cmpwi r0, 0
/* 8002D1D8 00029FD8  41 82 00 0C */	beq lbl_8002D1E4
/* 8002D1DC 00029FDC  38 60 00 00 */	li r3, 0
/* 8002D1E0 00029FE0  48 00 00 70 */	b lbl_8002D250
lbl_8002D1E4:
/* 8002D1E4 00029FE4  2C 1E 00 00 */	cmpwi r30, 0
/* 8002D1E8 00029FE8  40 82 00 18 */	bne lbl_8002D200
/* 8002D1EC 00029FEC  80 1D 00 08 */	lwz r0, 8(r29)
/* 8002D1F0 00029FF0  2C 00 00 00 */	cmpwi r0, 0
/* 8002D1F4 00029FF4  40 82 00 0C */	bne lbl_8002D200
/* 8002D1F8 00029FF8  38 60 00 00 */	li r3, 0
/* 8002D1FC 00029FFC  48 00 00 54 */	b lbl_8002D250
lbl_8002D200:
/* 8002D200 0002A000  2C 1E 00 00 */	cmpwi r30, 0
/* 8002D204 0002A004  41 82 00 20 */	beq lbl_8002D224
/* 8002D208 0002A008  38 00 00 01 */	li r0, 1
/* 8002D20C 0002A00C  90 1D 00 08 */	stw r0, 8(r29)
/* 8002D210 0002A010  93 FD 00 14 */	stw r31, 0x14(r29)
/* 8002D214 0002A014  80 7D 00 00 */	lwz r3, 0(r29)
/* 8002D218 0002A018  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8002D21C 0002A01C  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8002D220 0002A020  48 00 00 2C */	b lbl_8002D24C
lbl_8002D224:
/* 8002D224 0002A024  80 7D 00 00 */	lwz r3, 0(r29)
/* 8002D228 0002A028  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 8002D22C 0002A02C  81 83 00 2C */	lwz r12, 0x2c(r3)
/* 8002D230 0002A030  7D 89 03 A6 */	mtctr r12
/* 8002D234 0002A034  4E 80 04 21 */	bctrl 
/* 8002D238 0002A038  38 60 00 00 */	li r3, 0
/* 8002D23C 0002A03C  38 00 FF FF */	li r0, -1
/* 8002D240 0002A040  90 7D 00 08 */	stw r3, 8(r29)
/* 8002D244 0002A044  90 7D 00 14 */	stw r3, 0x14(r29)
/* 8002D248 0002A048  90 1D 00 0C */	stw r0, 0xc(r29)
lbl_8002D24C:
/* 8002D24C 0002A04C  38 60 00 01 */	li r3, 1
lbl_8002D250:
/* 8002D250 0002A050  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002D254 0002A054  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002D258 0002A058  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002D25C 0002A05C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002D260 0002A060  7C 08 03 A6 */	mtlr r0
/* 8002D264 0002A064  38 21 00 20 */	addi r1, r1, 0x20
/* 8002D268 0002A068  4E 80 00 20 */	blr 
/* 8002D26C 0002A06C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D270 0002A070  7C 08 02 A6 */	mflr r0
/* 8002D274 0002A074  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D278 0002A078  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D27C 0002A07C  2C 00 00 00 */	cmpwi r0, 0
/* 8002D280 0002A080  41 82 00 18 */	beq lbl_8002D298
/* 8002D284 0002A084  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8002D288 0002A088  80 63 00 00 */	lwz r3, 0(r3)
/* 8002D28C 0002A08C  81 83 00 2C */	lwz r12, 0x2c(r3)
/* 8002D290 0002A090  7D 89 03 A6 */	mtctr r12
/* 8002D294 0002A094  4E 80 04 21 */	bctrl 
lbl_8002D298:
/* 8002D298 0002A098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D29C 0002A09C  7C 08 03 A6 */	mtlr r0
/* 8002D2A0 0002A0A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D2A4 0002A0A4  4E 80 00 20 */	blr 
/* 8002D2A8 0002A0A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002D2AC 0002A0AC  7C 08 02 A6 */	mflr r0
/* 8002D2B0 0002A0B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002D2B4 0002A0B4  38 00 00 00 */	li r0, 0
/* 8002D2B8 0002A0B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002D2BC 0002A0BC  7C 7F 1B 78 */	mr r31, r3
/* 8002D2C0 0002A0C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002D2C4 0002A0C4  90 01 00 08 */	stw r0, 8(r1)
/* 8002D2C8 0002A0C8  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D2CC 0002A0CC  2C 00 00 00 */	cmpwi r0, 0
/* 8002D2D0 0002A0D0  41 82 00 0C */	beq lbl_8002D2DC
/* 8002D2D4 0002A0D4  38 60 00 00 */	li r3, 0
/* 8002D2D8 0002A0D8  48 00 00 D0 */	b lbl_8002D3A8
lbl_8002D2DC:
/* 8002D2DC 0002A0DC  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 8002D2E0 0002A0E0  2C 00 00 00 */	cmpwi r0, 0
/* 8002D2E4 0002A0E4  41 80 00 20 */	blt lbl_8002D304
/* 8002D2E8 0002A0E8  54 00 20 36 */	slwi r0, r0, 4
/* 8002D2EC 0002A0EC  7C 7F 02 14 */	add r3, r31, r0
/* 8002D2F0 0002A0F0  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8002D2F4 0002A0F4  2C 00 00 00 */	cmpwi r0, 0
/* 8002D2F8 0002A0F8  41 81 00 0C */	bgt lbl_8002D304
/* 8002D2FC 0002A0FC  38 60 00 00 */	li r3, 0
/* 8002D300 0002A100  48 00 00 A8 */	b lbl_8002D3A8
lbl_8002D304:
/* 8002D304 0002A104  7F E3 FB 78 */	mr r3, r31
/* 8002D308 0002A108  38 81 00 0C */	addi r4, r1, 0xc
/* 8002D30C 0002A10C  38 A0 FF FF */	li r5, -1
/* 8002D310 0002A110  48 00 04 E9 */	bl func_8002D7F8
/* 8002D314 0002A114  2C 03 00 00 */	cmpwi r3, 0
/* 8002D318 0002A118  40 82 00 10 */	bne lbl_8002D328
/* 8002D31C 0002A11C  38 00 00 00 */	li r0, 0
/* 8002D320 0002A120  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002D324 0002A124  48 00 00 80 */	b lbl_8002D3A4
lbl_8002D328:
/* 8002D328 0002A128  7F E3 FB 78 */	mr r3, r31
/* 8002D32C 0002A12C  38 81 00 08 */	addi r4, r1, 8
/* 8002D330 0002A130  38 A0 FF FF */	li r5, -1
/* 8002D334 0002A134  48 00 04 C5 */	bl func_8002D7F8
/* 8002D338 0002A138  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 8002D33C 0002A13C  2C 00 00 00 */	cmpwi r0, 0
/* 8002D340 0002A140  41 80 00 1C */	blt lbl_8002D35C
/* 8002D344 0002A144  54 00 20 36 */	slwi r0, r0, 4
/* 8002D348 0002A148  80 81 00 08 */	lwz r4, 8(r1)
/* 8002D34C 0002A14C  7C 7F 02 14 */	add r3, r31, r0
/* 8002D350 0002A150  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8002D354 0002A154  7C 04 00 50 */	subf r0, r4, r0
/* 8002D358 0002A158  90 03 00 30 */	stw r0, 0x30(r3)
lbl_8002D35C:
/* 8002D35C 0002A15C  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8002D360 0002A160  38 00 00 00 */	li r0, 0
/* 8002D364 0002A164  38 63 00 01 */	addi r3, r3, 1
/* 8002D368 0002A168  90 7F 00 20 */	stw r3, 0x20(r31)
/* 8002D36C 0002A16C  54 63 20 36 */	slwi r3, r3, 4
/* 8002D370 0002A170  38 C3 00 28 */	addi r6, r3, 0x28
/* 8002D374 0002A174  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8002D378 0002A178  7C DF 32 14 */	add r6, r31, r6
/* 8002D37C 0002A17C  90 66 00 04 */	stw r3, 4(r6)
/* 8002D380 0002A180  80 61 00 08 */	lwz r3, 8(r1)
/* 8002D384 0002A184  90 66 00 08 */	stw r3, 8(r6)
/* 8002D388 0002A188  80 A6 00 08 */	lwz r5, 8(r6)
/* 8002D38C 0002A18C  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8002D390 0002A190  54 A3 07 FE */	clrlwi r3, r5, 0x1f
/* 8002D394 0002A194  7C 65 1A 14 */	add r3, r5, r3
/* 8002D398 0002A198  7C 64 1A 14 */	add r3, r4, r3
/* 8002D39C 0002A19C  90 66 00 00 */	stw r3, 0(r6)
/* 8002D3A0 0002A1A0  90 06 00 0C */	stw r0, 0xc(r6)
lbl_8002D3A4:
/* 8002D3A4 0002A1A4  80 61 00 0C */	lwz r3, 0xc(r1)
lbl_8002D3A8:
/* 8002D3A8 0002A1A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002D3AC 0002A1AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002D3B0 0002A1B0  7C 08 03 A6 */	mtlr r0
/* 8002D3B4 0002A1B4  38 21 00 20 */	addi r1, r1, 0x20
/* 8002D3B8 0002A1B8  4E 80 00 20 */	blr 
/* 8002D3BC 0002A1BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D3C0 0002A1C0  7C 08 02 A6 */	mflr r0
/* 8002D3C4 0002A1C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D3C8 0002A1C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D3CC 0002A1CC  93 C1 00 08 */	stw r30, 8(r1)
/* 8002D3D0 0002A1D0  7C 7E 1B 78 */	mr r30, r3
/* 8002D3D4 0002A1D4  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D3D8 0002A1D8  2C 00 00 00 */	cmpwi r0, 0
/* 8002D3DC 0002A1DC  40 82 00 3C */	bne lbl_8002D418
/* 8002D3E0 0002A1E0  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 8002D3E4 0002A1E4  38 03 FF FF */	addi r0, r3, -1
/* 8002D3E8 0002A1E8  54 63 20 36 */	slwi r3, r3, 4
/* 8002D3EC 0002A1EC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8002D3F0 0002A1F0  3B E3 00 28 */	addi r31, r3, 0x28
/* 8002D3F4 0002A1F4  80 7E 00 00 */	lwz r3, 0(r30)
/* 8002D3F8 0002A1F8  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8002D3FC 0002A1FC  7C 1E F8 2E */	lwzx r0, r30, r31
/* 8002D400 0002A200  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8002D404 0002A204  7C 84 00 50 */	subf r4, r4, r0
/* 8002D408 0002A208  7D 89 03 A6 */	mtctr r12
/* 8002D40C 0002A20C  4E 80 04 21 */	bctrl 
/* 8002D410 0002A210  7C 1E F8 2E */	lwzx r0, r30, r31
/* 8002D414 0002A214  90 1E 00 1C */	stw r0, 0x1c(r30)
lbl_8002D418:
/* 8002D418 0002A218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D41C 0002A21C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D420 0002A220  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002D424 0002A224  7C 08 03 A6 */	mtlr r0
/* 8002D428 0002A228  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D42C 0002A22C  4E 80 00 20 */	blr 

.global func_8002D430
func_8002D430:
/* 8002D430 0002A230  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002D434 0002A234  7C 08 02 A6 */	mflr r0
/* 8002D438 0002A238  38 E0 00 00 */	li r7, 0
/* 8002D43C 0002A23C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002D440 0002A240  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002D444 0002A244  7C 7F 1B 78 */	mr r31, r3
/* 8002D448 0002A248  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002D44C 0002A24C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002D450 0002A250  7C DD 33 78 */	mr r29, r6
/* 8002D454 0002A254  38 C0 00 00 */	li r6, 0
/* 8002D458 0002A258  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D45C 0002A25C  38 60 00 00 */	li r3, 0
/* 8002D460 0002A260  2C 00 00 00 */	cmpwi r0, 0
/* 8002D464 0002A264  41 82 00 0C */	beq lbl_8002D470
/* 8002D468 0002A268  38 60 00 00 */	li r3, 0
/* 8002D46C 0002A26C  48 00 00 F8 */	b lbl_8002D564
lbl_8002D470:
/* 8002D470 0002A270  2C 05 00 00 */	cmpwi r5, 0
/* 8002D474 0002A274  40 82 00 0C */	bne lbl_8002D480
/* 8002D478 0002A278  38 60 00 00 */	li r3, 0
/* 8002D47C 0002A27C  48 00 00 E8 */	b lbl_8002D564
lbl_8002D480:
/* 8002D480 0002A280  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 8002D484 0002A284  2C 00 00 00 */	cmpwi r0, 0
/* 8002D488 0002A288  40 80 00 0C */	bge lbl_8002D494
/* 8002D48C 0002A28C  3B C0 00 00 */	li r30, 0
/* 8002D490 0002A290  48 00 00 18 */	b lbl_8002D4A8
lbl_8002D494:
/* 8002D494 0002A294  54 06 20 36 */	slwi r6, r0, 4
/* 8002D498 0002A298  3B C6 00 28 */	addi r30, r6, 0x28
/* 8002D49C 0002A29C  7F DF F2 14 */	add r30, r31, r30
/* 8002D4A0 0002A2A0  80 1E 00 08 */	lwz r0, 8(r30)
/* 8002D4A4 0002A2A4  7C C0 EB D6 */	divw r6, r0, r29
lbl_8002D4A8:
/* 8002D4A8 0002A2A8  2C 05 00 00 */	cmpwi r5, 0
/* 8002D4AC 0002A2AC  40 80 00 20 */	bge lbl_8002D4CC
/* 8002D4B0 0002A2B0  28 1E 00 00 */	cmplwi r30, 0
/* 8002D4B4 0002A2B4  7C A5 00 D0 */	neg r5, r5
/* 8002D4B8 0002A2B8  38 E0 00 01 */	li r7, 1
/* 8002D4BC 0002A2BC  41 82 00 10 */	beq lbl_8002D4CC
/* 8002D4C0 0002A2C0  7C 05 30 00 */	cmpw r5, r6
/* 8002D4C4 0002A2C4  40 81 00 08 */	ble lbl_8002D4CC
/* 8002D4C8 0002A2C8  7C C5 33 78 */	mr r5, r6
lbl_8002D4CC:
/* 8002D4CC 0002A2CC  2C 07 00 00 */	cmpwi r7, 0
/* 8002D4D0 0002A2D0  40 82 00 10 */	bne lbl_8002D4E0
/* 8002D4D4 0002A2D4  7C 06 28 00 */	cmpw r6, r5
/* 8002D4D8 0002A2D8  40 80 00 08 */	bge lbl_8002D4E0
/* 8002D4DC 0002A2DC  7C C5 33 78 */	mr r5, r6
lbl_8002D4E0:
/* 8002D4E0 0002A2E0  2C 05 00 00 */	cmpwi r5, 0
/* 8002D4E4 0002A2E4  40 82 00 0C */	bne lbl_8002D4F0
/* 8002D4E8 0002A2E8  38 60 00 00 */	li r3, 0
/* 8002D4EC 0002A2EC  48 00 00 54 */	b lbl_8002D540
lbl_8002D4F0:
/* 8002D4F0 0002A2F0  2C 1D 00 01 */	cmpwi r29, 1
/* 8002D4F4 0002A2F4  40 82 00 18 */	bne lbl_8002D50C
/* 8002D4F8 0002A2F8  80 7F 00 00 */	lwz r3, 0(r31)
/* 8002D4FC 0002A2FC  81 83 00 04 */	lwz r12, 4(r3)
/* 8002D500 0002A300  7D 89 03 A6 */	mtctr r12
/* 8002D504 0002A304  4E 80 04 21 */	bctrl 
/* 8002D508 0002A308  48 00 00 38 */	b lbl_8002D540
lbl_8002D50C:
/* 8002D50C 0002A30C  2C 1D 00 02 */	cmpwi r29, 2
/* 8002D510 0002A310  40 82 00 18 */	bne lbl_8002D528
/* 8002D514 0002A314  80 7F 00 00 */	lwz r3, 0(r31)
/* 8002D518 0002A318  81 83 00 08 */	lwz r12, 8(r3)
/* 8002D51C 0002A31C  7D 89 03 A6 */	mtctr r12
/* 8002D520 0002A320  4E 80 04 21 */	bctrl 
/* 8002D524 0002A324  48 00 00 1C */	b lbl_8002D540
lbl_8002D528:
/* 8002D528 0002A328  2C 1D 00 04 */	cmpwi r29, 4
/* 8002D52C 0002A32C  40 82 00 14 */	bne lbl_8002D540
/* 8002D530 0002A330  80 7F 00 00 */	lwz r3, 0(r31)
/* 8002D534 0002A334  81 83 00 0C */	lwz r12, 0xc(r3)
/* 8002D538 0002A338  7D 89 03 A6 */	mtctr r12
/* 8002D53C 0002A33C  4E 80 04 21 */	bctrl 
lbl_8002D540:
/* 8002D540 0002A340  7C 63 E9 D6 */	mullw r3, r3, r29
/* 8002D544 0002A344  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8002D548 0002A348  28 1E 00 00 */	cmplwi r30, 0
/* 8002D54C 0002A34C  7C 00 1A 14 */	add r0, r0, r3
/* 8002D550 0002A350  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8002D554 0002A354  41 82 00 10 */	beq lbl_8002D564
/* 8002D558 0002A358  80 1E 00 08 */	lwz r0, 8(r30)
/* 8002D55C 0002A35C  7C 03 00 50 */	subf r0, r3, r0
/* 8002D560 0002A360  90 1E 00 08 */	stw r0, 8(r30)
lbl_8002D564:
/* 8002D564 0002A364  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002D568 0002A368  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002D56C 0002A36C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002D570 0002A370  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002D574 0002A374  7C 08 03 A6 */	mtlr r0
/* 8002D578 0002A378  38 21 00 20 */	addi r1, r1, 0x20
/* 8002D57C 0002A37C  4E 80 00 20 */	blr 

.global func_8002D580
func_8002D580:
/* 8002D580 0002A380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D584 0002A384  7C 08 02 A6 */	mflr r0
/* 8002D588 0002A388  7C 88 23 78 */	mr r8, r4
/* 8002D58C 0002A38C  7C A7 2B 78 */	mr r7, r5
/* 8002D590 0002A390  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D594 0002A394  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D598 0002A398  7C DF 33 78 */	mr r31, r6
/* 8002D59C 0002A39C  38 C0 00 00 */	li r6, 0
/* 8002D5A0 0002A3A0  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D5A4 0002A3A4  2C 00 00 00 */	cmpwi r0, 0
/* 8002D5A8 0002A3A8  40 82 00 0C */	bne lbl_8002D5B4
/* 8002D5AC 0002A3AC  38 60 00 00 */	li r3, 0
/* 8002D5B0 0002A3B0  48 00 00 A4 */	b lbl_8002D654
lbl_8002D5B4:
/* 8002D5B4 0002A3B4  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8002D5B8 0002A3B8  2C 00 00 00 */	cmpwi r0, 0
/* 8002D5BC 0002A3BC  41 82 00 1C */	beq lbl_8002D5D8
/* 8002D5C0 0002A3C0  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 8002D5C4 0002A3C4  7D 05 43 78 */	mr r5, r8
/* 8002D5C8 0002A3C8  7C E6 3B 78 */	mr r6, r7
/* 8002D5CC 0002A3CC  7F E7 FB 78 */	mr r7, r31
/* 8002D5D0 0002A3D0  48 00 00 99 */	bl func_8002D668
/* 8002D5D4 0002A3D4  48 00 00 80 */	b lbl_8002D654
lbl_8002D5D8:
/* 8002D5D8 0002A3D8  2C 07 00 00 */	cmpwi r7, 0
/* 8002D5DC 0002A3DC  40 82 00 0C */	bne lbl_8002D5E8
/* 8002D5E0 0002A3E0  38 60 00 00 */	li r3, 0
/* 8002D5E4 0002A3E4  48 00 00 70 */	b lbl_8002D654
lbl_8002D5E8:
/* 8002D5E8 0002A3E8  40 82 00 0C */	bne lbl_8002D5F4
/* 8002D5EC 0002A3EC  38 C0 00 00 */	li r6, 0
/* 8002D5F0 0002A3F0  48 00 00 60 */	b lbl_8002D650
lbl_8002D5F4:
/* 8002D5F4 0002A3F4  2C 1F 00 01 */	cmpwi r31, 1
/* 8002D5F8 0002A3F8  40 82 00 1C */	bne lbl_8002D614
/* 8002D5FC 0002A3FC  80 63 00 00 */	lwz r3, 0(r3)
/* 8002D600 0002A400  81 83 00 04 */	lwz r12, 4(r3)
/* 8002D604 0002A404  7D 89 03 A6 */	mtctr r12
/* 8002D608 0002A408  4E 80 04 21 */	bctrl 
/* 8002D60C 0002A40C  7C 66 1B 78 */	mr r6, r3
/* 8002D610 0002A410  48 00 00 40 */	b lbl_8002D650
lbl_8002D614:
/* 8002D614 0002A414  2C 1F 00 02 */	cmpwi r31, 2
/* 8002D618 0002A418  40 82 00 1C */	bne lbl_8002D634
/* 8002D61C 0002A41C  80 63 00 00 */	lwz r3, 0(r3)
/* 8002D620 0002A420  81 83 00 08 */	lwz r12, 8(r3)
/* 8002D624 0002A424  7D 89 03 A6 */	mtctr r12
/* 8002D628 0002A428  4E 80 04 21 */	bctrl 
/* 8002D62C 0002A42C  7C 66 1B 78 */	mr r6, r3
/* 8002D630 0002A430  48 00 00 20 */	b lbl_8002D650
lbl_8002D634:
/* 8002D634 0002A434  2C 1F 00 04 */	cmpwi r31, 4
/* 8002D638 0002A438  40 82 00 18 */	bne lbl_8002D650
/* 8002D63C 0002A43C  80 63 00 00 */	lwz r3, 0(r3)
/* 8002D640 0002A440  81 83 00 0C */	lwz r12, 0xc(r3)
/* 8002D644 0002A444  7D 89 03 A6 */	mtctr r12
/* 8002D648 0002A448  4E 80 04 21 */	bctrl 
/* 8002D64C 0002A44C  7C 66 1B 78 */	mr r6, r3
lbl_8002D650:
/* 8002D650 0002A450  7C 66 F9 D6 */	mullw r3, r6, r31
lbl_8002D654:
/* 8002D654 0002A454  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D658 0002A458  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D65C 0002A45C  7C 08 03 A6 */	mtlr r0
/* 8002D660 0002A460  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D664 0002A464  4E 80 00 20 */	blr 

.global func_8002D668
func_8002D668:
/* 8002D668 0002A468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D66C 0002A46C  7C 08 02 A6 */	mflr r0
/* 8002D670 0002A470  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D674 0002A474  38 00 FF FF */	li r0, -1
/* 8002D678 0002A478  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D67C 0002A47C  7C 7F 1B 78 */	mr r31, r3
/* 8002D680 0002A480  90 03 00 18 */	stw r0, 0x18(r3)
/* 8002D684 0002A484  80 63 00 00 */	lwz r3, 0(r3)
/* 8002D688 0002A488  81 83 00 3C */	lwz r12, 0x3c(r3)
/* 8002D68C 0002A48C  7D 89 03 A6 */	mtctr r12
/* 8002D690 0002A490  4E 80 04 21 */	bctrl 
/* 8002D694 0002A494  38 00 00 00 */	li r0, 0
/* 8002D698 0002A498  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8002D69C 0002A49C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D6A0 0002A4A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D6A4 0002A4A4  7C 08 03 A6 */	mtlr r0
/* 8002D6A8 0002A4A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D6AC 0002A4AC  4E 80 00 20 */	blr 
/* 8002D6B0 0002A4B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D6B4 0002A4B4  7C 08 02 A6 */	mflr r0
/* 8002D6B8 0002A4B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D6BC 0002A4BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D6C0 0002A4C0  3B E0 00 00 */	li r31, 0
/* 8002D6C4 0002A4C4  93 C1 00 08 */	stw r30, 8(r1)
/* 8002D6C8 0002A4C8  7C 7E 1B 78 */	mr r30, r3
/* 8002D6CC 0002A4CC  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D6D0 0002A4D0  2C 00 00 00 */	cmpwi r0, 0
/* 8002D6D4 0002A4D4  40 82 00 0C */	bne lbl_8002D6E0
/* 8002D6D8 0002A4D8  38 60 00 03 */	li r3, 3
/* 8002D6DC 0002A4DC  48 00 00 80 */	b lbl_8002D75C
lbl_8002D6E0:
/* 8002D6E0 0002A4E0  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 8002D6E4 0002A4E4  2C 00 00 00 */	cmpwi r0, 0
/* 8002D6E8 0002A4E8  40 82 00 0C */	bne lbl_8002D6F4
/* 8002D6EC 0002A4EC  38 60 00 04 */	li r3, 4
/* 8002D6F0 0002A4F0  48 00 00 6C */	b lbl_8002D75C
lbl_8002D6F4:
/* 8002D6F4 0002A4F4  80 7E 00 00 */	lwz r3, 0(r30)
/* 8002D6F8 0002A4F8  81 83 00 40 */	lwz r12, 0x40(r3)
/* 8002D6FC 0002A4FC  7D 89 03 A6 */	mtctr r12
/* 8002D700 0002A500  4E 80 04 21 */	bctrl 
/* 8002D704 0002A504  2C 03 00 01 */	cmpwi r3, 1
/* 8002D708 0002A508  41 82 00 20 */	beq lbl_8002D728
/* 8002D70C 0002A50C  40 80 00 10 */	bge lbl_8002D71C
/* 8002D710 0002A510  2C 03 FF FF */	cmpwi r3, -1
/* 8002D714 0002A514  41 82 00 2C */	beq lbl_8002D740
/* 8002D718 0002A518  48 00 00 38 */	b lbl_8002D750
lbl_8002D71C:
/* 8002D71C 0002A51C  2C 03 00 03 */	cmpwi r3, 3
/* 8002D720 0002A520  40 80 00 30 */	bge lbl_8002D750
/* 8002D724 0002A524  48 00 00 0C */	b lbl_8002D730
lbl_8002D728:
/* 8002D728 0002A528  3B E0 00 00 */	li r31, 0
/* 8002D72C 0002A52C  48 00 00 2C */	b lbl_8002D758
lbl_8002D730:
/* 8002D730 0002A530  38 00 FF FF */	li r0, -1
/* 8002D734 0002A534  3B E0 00 01 */	li r31, 1
/* 8002D738 0002A538  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8002D73C 0002A53C  48 00 00 1C */	b lbl_8002D758
lbl_8002D740:
/* 8002D740 0002A540  38 00 FF FF */	li r0, -1
/* 8002D744 0002A544  3B E0 00 02 */	li r31, 2
/* 8002D748 0002A548  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8002D74C 0002A54C  48 00 00 0C */	b lbl_8002D758
lbl_8002D750:
/* 8002D750 0002A550  38 00 FF FF */	li r0, -1
/* 8002D754 0002A554  90 1E 00 18 */	stw r0, 0x18(r30)
lbl_8002D758:
/* 8002D758 0002A558  7F E3 FB 78 */	mr r3, r31
lbl_8002D75C:
/* 8002D75C 0002A55C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D760 0002A560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D764 0002A564  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002D768 0002A568  7C 08 03 A6 */	mtlr r0
/* 8002D76C 0002A56C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D770 0002A570  4E 80 00 20 */	blr 
/* 8002D774 0002A574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D778 0002A578  7C 08 02 A6 */	mflr r0
/* 8002D77C 0002A57C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D780 0002A580  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D784 0002A584  2C 00 00 00 */	cmpwi r0, 0
/* 8002D788 0002A588  41 82 00 10 */	beq lbl_8002D798
/* 8002D78C 0002A58C  38 C0 00 01 */	li r6, 1
/* 8002D790 0002A590  4B FF FD F1 */	bl func_8002D580
/* 8002D794 0002A594  48 00 00 0C */	b lbl_8002D7A0
lbl_8002D798:
/* 8002D798 0002A598  38 C0 00 01 */	li r6, 1
/* 8002D79C 0002A59C  4B FF FC 95 */	bl func_8002D430
lbl_8002D7A0:
/* 8002D7A0 0002A5A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D7A4 0002A5A4  7C 08 03 A6 */	mtlr r0
/* 8002D7A8 0002A5A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D7AC 0002A5AC  4E 80 00 20 */	blr 
/* 8002D7B0 0002A5B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D7B4 0002A5B4  7C 08 02 A6 */	mflr r0
/* 8002D7B8 0002A5B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D7BC 0002A5BC  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D7C0 0002A5C0  2C 00 00 00 */	cmpwi r0, 0
/* 8002D7C4 0002A5C4  41 82 00 10 */	beq lbl_8002D7D4
/* 8002D7C8 0002A5C8  38 C0 00 02 */	li r6, 2
/* 8002D7CC 0002A5CC  4B FF FD B5 */	bl func_8002D580
/* 8002D7D0 0002A5D0  48 00 00 0C */	b lbl_8002D7DC
lbl_8002D7D4:
/* 8002D7D4 0002A5D4  38 C0 00 02 */	li r6, 2
/* 8002D7D8 0002A5D8  4B FF FC 59 */	bl func_8002D430
lbl_8002D7DC:
/* 8002D7DC 0002A5DC  54 60 0F FE */	srwi r0, r3, 0x1f
/* 8002D7E0 0002A5E0  7C 00 1A 14 */	add r0, r0, r3
/* 8002D7E4 0002A5E4  7C 03 0E 70 */	srawi r3, r0, 1
/* 8002D7E8 0002A5E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D7EC 0002A5EC  7C 08 03 A6 */	mtlr r0
/* 8002D7F0 0002A5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D7F4 0002A5F4  4E 80 00 20 */	blr 

.global func_8002D7F8
func_8002D7F8:
/* 8002D7F8 0002A5F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D7FC 0002A5FC  7C 08 02 A6 */	mflr r0
/* 8002D800 0002A600  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D804 0002A604  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D808 0002A608  2C 00 00 00 */	cmpwi r0, 0
/* 8002D80C 0002A60C  41 82 00 10 */	beq lbl_8002D81C
/* 8002D810 0002A610  38 C0 00 04 */	li r6, 4
/* 8002D814 0002A614  4B FF FD 6D */	bl func_8002D580
/* 8002D818 0002A618  48 00 00 0C */	b lbl_8002D824
lbl_8002D81C:
/* 8002D81C 0002A61C  38 C0 00 04 */	li r6, 4
/* 8002D820 0002A620  4B FF FC 11 */	bl func_8002D430
lbl_8002D824:
/* 8002D824 0002A624  7C 60 16 70 */	srawi r0, r3, 2
/* 8002D828 0002A628  7C 60 01 94 */	addze r3, r0
/* 8002D82C 0002A62C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D830 0002A630  7C 08 03 A6 */	mtlr r0
/* 8002D834 0002A634  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D838 0002A638  4E 80 00 20 */	blr 
/* 8002D83C 0002A63C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D840 0002A640  7C 08 02 A6 */	mflr r0
/* 8002D844 0002A644  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D848 0002A648  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D84C 0002A64C  2C 00 00 00 */	cmpwi r0, 0
/* 8002D850 0002A650  41 82 00 10 */	beq lbl_8002D860
/* 8002D854 0002A654  38 C0 00 04 */	li r6, 4
/* 8002D858 0002A658  4B FF FD 29 */	bl func_8002D580
/* 8002D85C 0002A65C  48 00 00 0C */	b lbl_8002D868
lbl_8002D860:
/* 8002D860 0002A660  38 C0 00 04 */	li r6, 4
/* 8002D864 0002A664  4B FF FB CD */	bl func_8002D430
lbl_8002D868:
/* 8002D868 0002A668  7C 60 16 70 */	srawi r0, r3, 2
/* 8002D86C 0002A66C  7C 60 01 94 */	addze r3, r0
/* 8002D870 0002A670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D874 0002A674  7C 08 03 A6 */	mtlr r0
/* 8002D878 0002A678  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D87C 0002A67C  4E 80 00 20 */	blr 
/* 8002D880 0002A680  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002D884 0002A684  7C 08 02 A6 */	mflr r0
/* 8002D888 0002A688  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002D88C 0002A68C  38 00 00 00 */	li r0, 0
/* 8002D890 0002A690  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002D894 0002A694  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002D898 0002A698  3B C0 00 00 */	li r30, 0
/* 8002D89C 0002A69C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002D8A0 0002A6A0  7C 9D 23 78 */	mr r29, r4
/* 8002D8A4 0002A6A4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002D8A8 0002A6A8  7C 7C 1B 78 */	mr r28, r3
/* 8002D8AC 0002A6AC  98 01 00 08 */	stb r0, 8(r1)
/* 8002D8B0 0002A6B0  80 03 00 08 */	lwz r0, 8(r3)
/* 8002D8B4 0002A6B4  2C 00 00 00 */	cmpwi r0, 0
/* 8002D8B8 0002A6B8  41 82 00 90 */	beq lbl_8002D948
/* 8002D8BC 0002A6BC  48 00 00 34 */	b lbl_8002D8F0
lbl_8002D8C0:
/* 8002D8C0 0002A6C0  88 1F 00 00 */	lbz r0, 0(r31)
/* 8002D8C4 0002A6C4  28 00 00 00 */	cmplwi r0, 0
/* 8002D8C8 0002A6C8  40 82 00 24 */	bne lbl_8002D8EC
/* 8002D8CC 0002A6CC  57 C0 07 FF */	clrlwi. r0, r30, 0x1f
/* 8002D8D0 0002A6D0  40 82 00 98 */	bne lbl_8002D968
/* 8002D8D4 0002A6D4  7F 83 E3 78 */	mr r3, r28
/* 8002D8D8 0002A6D8  38 81 00 08 */	addi r4, r1, 8
/* 8002D8DC 0002A6DC  38 A0 00 01 */	li r5, 1
/* 8002D8E0 0002A6E0  38 C0 00 01 */	li r6, 1
/* 8002D8E4 0002A6E4  4B FF FC 9D */	bl func_8002D580
/* 8002D8E8 0002A6E8  48 00 00 80 */	b lbl_8002D968
lbl_8002D8EC:
/* 8002D8EC 0002A6EC  3B DE 00 01 */	addi r30, r30, 1
lbl_8002D8F0:
/* 8002D8F0 0002A6F0  7F FD F2 14 */	add r31, r29, r30
/* 8002D8F4 0002A6F4  7F 83 E3 78 */	mr r3, r28
/* 8002D8F8 0002A6F8  7F E4 FB 78 */	mr r4, r31
/* 8002D8FC 0002A6FC  38 A0 00 01 */	li r5, 1
/* 8002D900 0002A700  38 C0 00 01 */	li r6, 1
/* 8002D904 0002A704  4B FF FC 7D */	bl func_8002D580
/* 8002D908 0002A708  2C 03 00 00 */	cmpwi r3, 0
/* 8002D90C 0002A70C  40 82 FF B4 */	bne lbl_8002D8C0
/* 8002D910 0002A710  48 00 00 58 */	b lbl_8002D968
/* 8002D914 0002A714  48 00 00 34 */	b lbl_8002D948
lbl_8002D918:
/* 8002D918 0002A718  88 1F 00 00 */	lbz r0, 0(r31)
/* 8002D91C 0002A71C  28 00 00 00 */	cmplwi r0, 0
/* 8002D920 0002A720  40 82 00 24 */	bne lbl_8002D944
/* 8002D924 0002A724  57 C0 07 FF */	clrlwi. r0, r30, 0x1f
/* 8002D928 0002A728  40 82 00 40 */	bne lbl_8002D968
/* 8002D92C 0002A72C  7F 83 E3 78 */	mr r3, r28
/* 8002D930 0002A730  38 81 00 08 */	addi r4, r1, 8
/* 8002D934 0002A734  38 A0 00 01 */	li r5, 1
/* 8002D938 0002A738  38 C0 00 01 */	li r6, 1
/* 8002D93C 0002A73C  4B FF FA F5 */	bl func_8002D430
/* 8002D940 0002A740  48 00 00 28 */	b lbl_8002D968
lbl_8002D944:
/* 8002D944 0002A744  3B DE 00 01 */	addi r30, r30, 1
lbl_8002D948:
/* 8002D948 0002A748  7F FD F2 14 */	add r31, r29, r30
/* 8002D94C 0002A74C  7F 83 E3 78 */	mr r3, r28
/* 8002D950 0002A750  7F E4 FB 78 */	mr r4, r31
/* 8002D954 0002A754  38 A0 00 01 */	li r5, 1
/* 8002D958 0002A758  38 C0 00 01 */	li r6, 1
/* 8002D95C 0002A75C  4B FF FA D5 */	bl func_8002D430
/* 8002D960 0002A760  2C 03 00 00 */	cmpwi r3, 0
/* 8002D964 0002A764  40 82 FF B4 */	bne lbl_8002D918
lbl_8002D968:
/* 8002D968 0002A768  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002D96C 0002A76C  7F C3 F3 78 */	mr r3, r30
/* 8002D970 0002A770  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002D974 0002A774  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002D978 0002A778  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002D97C 0002A77C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002D980 0002A780  7C 08 03 A6 */	mtlr r0
/* 8002D984 0002A784  38 21 00 20 */	addi r1, r1, 0x20
/* 8002D988 0002A788  4E 80 00 20 */	blr 
