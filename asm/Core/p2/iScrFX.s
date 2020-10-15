.include "macros.inc"

.if 0

.section .text  # 0x800CF34C - 0x800CF92C

.global iScrFxInit__Fv
iScrFxInit__Fv:
/* 800CF34C 000CC14C  4E 80 00 20 */	blr 

.global iScrFxBegin__Fv
iScrFxBegin__Fv:
/* 800CF350 000CC150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF354 000CC154  7C 08 02 A6 */	mflr r0
/* 800CF358 000CC158  38 60 00 09 */	li r3, 9
/* 800CF35C 000CC15C  38 80 00 01 */	li r4, 1
/* 800CF360 000CC160  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF364 000CC164  48 16 04 79 */	bl RwRenderStateSet
/* 800CF368 000CC168  38 60 00 0E */	li r3, 0xe
/* 800CF36C 000CC16C  38 80 00 00 */	li r4, 0
/* 800CF370 000CC170  48 16 04 6D */	bl RwRenderStateSet
/* 800CF374 000CC174  38 60 00 06 */	li r3, 6
/* 800CF378 000CC178  38 80 00 00 */	li r4, 0
/* 800CF37C 000CC17C  48 16 04 61 */	bl RwRenderStateSet
/* 800CF380 000CC180  38 60 00 08 */	li r3, 8
/* 800CF384 000CC184  38 80 00 00 */	li r4, 0
/* 800CF388 000CC188  48 16 04 55 */	bl RwRenderStateSet
/* 800CF38C 000CC18C  38 60 00 01 */	li r3, 1
/* 800CF390 000CC190  38 80 00 00 */	li r4, 0
/* 800CF394 000CC194  48 16 04 49 */	bl RwRenderStateSet
/* 800CF398 000CC198  38 60 00 0C */	li r3, 0xc
/* 800CF39C 000CC19C  38 80 00 01 */	li r4, 1
/* 800CF3A0 000CC1A0  48 16 04 3D */	bl RwRenderStateSet
/* 800CF3A4 000CC1A4  38 60 00 0A */	li r3, 0xa
/* 800CF3A8 000CC1A8  38 80 00 05 */	li r4, 5
/* 800CF3AC 000CC1AC  48 16 04 31 */	bl RwRenderStateSet
/* 800CF3B0 000CC1B0  38 60 00 0B */	li r3, 0xb
/* 800CF3B4 000CC1B4  38 80 00 06 */	li r4, 6
/* 800CF3B8 000CC1B8  48 16 04 25 */	bl RwRenderStateSet
/* 800CF3BC 000CC1BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF3C0 000CC1C0  7C 08 03 A6 */	mtlr r0
/* 800CF3C4 000CC1C4  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF3C8 000CC1C8  4E 80 00 20 */	blr 

.global iScrFxEnd__Fv
iScrFxEnd__Fv:
/* 800CF3CC 000CC1CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF3D0 000CC1D0  7C 08 02 A6 */	mflr r0
/* 800CF3D4 000CC1D4  38 60 00 0E */	li r3, 0xe
/* 800CF3D8 000CC1D8  38 80 00 00 */	li r4, 0
/* 800CF3DC 000CC1DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF3E0 000CC1E0  48 16 03 FD */	bl RwRenderStateSet
/* 800CF3E4 000CC1E4  38 60 00 06 */	li r3, 6
/* 800CF3E8 000CC1E8  38 80 00 01 */	li r4, 1
/* 800CF3EC 000CC1EC  48 16 03 F1 */	bl RwRenderStateSet
/* 800CF3F0 000CC1F0  38 60 00 08 */	li r3, 8
/* 800CF3F4 000CC1F4  38 80 00 01 */	li r4, 1
/* 800CF3F8 000CC1F8  48 16 03 E5 */	bl RwRenderStateSet
/* 800CF3FC 000CC1FC  38 60 00 01 */	li r3, 1
/* 800CF400 000CC200  38 80 00 00 */	li r4, 0
/* 800CF404 000CC204  48 16 03 D9 */	bl RwRenderStateSet
/* 800CF408 000CC208  38 60 00 0C */	li r3, 0xc
/* 800CF40C 000CC20C  38 80 00 00 */	li r4, 0
/* 800CF410 000CC210  48 16 03 CD */	bl RwRenderStateSet
/* 800CF414 000CC214  38 60 00 0A */	li r3, 0xa
/* 800CF418 000CC218  38 80 00 02 */	li r4, 2
/* 800CF41C 000CC21C  48 16 03 C1 */	bl RwRenderStateSet
/* 800CF420 000CC220  38 60 00 0B */	li r3, 0xb
/* 800CF424 000CC224  38 80 00 01 */	li r4, 1
/* 800CF428 000CC228  48 16 03 B5 */	bl RwRenderStateSet
/* 800CF42C 000CC22C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF430 000CC230  7C 08 03 A6 */	mtlr r0
/* 800CF434 000CC234  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF438 000CC238  4E 80 00 20 */	blr 

.global iScrFxDrawBox__FffffUcUcUcUc
iScrFxDrawBox__FffffUcUcUcUc:
/* 800CF43C 000CC23C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 800CF440 000CC240  7C 08 02 A6 */	mflr r0
/* 800CF444 000CC244  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 800CF448 000CC248  39 61 00 A0 */	addi r11, r1, 0xa0
/* 800CF44C 000CC24C  48 11 E0 25 */	bl func_801ED470
/* 800CF450 000CC250  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 800CF454 000CC254  93 C1 00 78 */	stw r30, 0x78(r1)
/* 800CF458 000CC258  93 A1 00 74 */	stw r29, 0x74(r1)
/* 800CF45C 000CC25C  93 81 00 70 */	stw r28, 0x70(r1)
/* 800CF460 000CC260  80 E2 97 EC */	lwz r7, lbl_803CE16C-_SDA2_BASE_(r2)
/* 800CF464 000CC264  FF 80 08 90 */	fmr f28, f1
/* 800CF468 000CC268  80 02 97 F0 */	lwz r0, lbl_803CE170-_SDA2_BASE_(r2)
/* 800CF46C 000CC26C  FF A0 10 90 */	fmr f29, f2
/* 800CF470 000CC270  FF C0 18 90 */	fmr f30, f3
/* 800CF474 000CC274  7C 7C 1B 78 */	mr r28, r3
/* 800CF478 000CC278  FF E0 20 90 */	fmr f31, f4
/* 800CF47C 000CC27C  90 E1 00 08 */	stw r7, 8(r1)
/* 800CF480 000CC280  7C 9D 23 78 */	mr r29, r4
/* 800CF484 000CC284  7C BE 2B 78 */	mr r30, r5
/* 800CF488 000CC288  90 01 00 0C */	stw r0, 0xc(r1)
/* 800CF48C 000CC28C  7C DF 33 78 */	mr r31, r6
/* 800CF490 000CC290  48 16 03 35 */	bl RwIm2DGetNearScreenZ
/* 800CF494 000CC294  D3 81 00 10 */	stfs f28, 0x10(r1)
/* 800CF498 000CC298  38 81 00 10 */	addi r4, r1, 0x10
/* 800CF49C 000CC29C  38 C1 00 08 */	addi r6, r1, 8
/* 800CF4A0 000CC2A0  38 60 00 04 */	li r3, 4
/* 800CF4A4 000CC2A4  D3 A1 00 14 */	stfs f29, 0x14(r1)
/* 800CF4A8 000CC2A8  38 A0 00 04 */	li r5, 4
/* 800CF4AC 000CC2AC  38 E0 00 04 */	li r7, 4
/* 800CF4B0 000CC2B0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 800CF4B4 000CC2B4  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 800CF4B8 000CC2B8  D3 A1 00 2C */	stfs f29, 0x2c(r1)
/* 800CF4BC 000CC2BC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 800CF4C0 000CC2C0  D3 81 00 40 */	stfs f28, 0x40(r1)
/* 800CF4C4 000CC2C4  D3 E1 00 44 */	stfs f31, 0x44(r1)
/* 800CF4C8 000CC2C8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 800CF4CC 000CC2CC  D3 C1 00 58 */	stfs f30, 0x58(r1)
/* 800CF4D0 000CC2D0  D3 E1 00 5C */	stfs f31, 0x5c(r1)
/* 800CF4D4 000CC2D4  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 800CF4D8 000CC2D8  9B 81 00 1C */	stb r28, 0x1c(r1)
/* 800CF4DC 000CC2DC  9B A1 00 1D */	stb r29, 0x1d(r1)
/* 800CF4E0 000CC2E0  9B C1 00 1E */	stb r30, 0x1e(r1)
/* 800CF4E4 000CC2E4  9B E1 00 1F */	stb r31, 0x1f(r1)
/* 800CF4E8 000CC2E8  9B 81 00 34 */	stb r28, 0x34(r1)
/* 800CF4EC 000CC2EC  9B A1 00 35 */	stb r29, 0x35(r1)
/* 800CF4F0 000CC2F0  9B C1 00 36 */	stb r30, 0x36(r1)
/* 800CF4F4 000CC2F4  9B E1 00 37 */	stb r31, 0x37(r1)
/* 800CF4F8 000CC2F8  9B 81 00 4C */	stb r28, 0x4c(r1)
/* 800CF4FC 000CC2FC  9B A1 00 4D */	stb r29, 0x4d(r1)
/* 800CF500 000CC300  9B C1 00 4E */	stb r30, 0x4e(r1)
/* 800CF504 000CC304  9B E1 00 4F */	stb r31, 0x4f(r1)
/* 800CF508 000CC308  9B 81 00 64 */	stb r28, 0x64(r1)
/* 800CF50C 000CC30C  9B A1 00 65 */	stb r29, 0x65(r1)
/* 800CF510 000CC310  9B C1 00 66 */	stb r30, 0x66(r1)
/* 800CF514 000CC314  9B E1 00 67 */	stb r31, 0x67(r1)
/* 800CF518 000CC318  48 16 03 A9 */	bl RwIm2DRenderIndexedPrimitive
/* 800CF51C 000CC31C  39 61 00 A0 */	addi r11, r1, 0xa0
/* 800CF520 000CC320  48 11 DF 9D */	bl func_801ED4BC
/* 800CF524 000CC324  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 800CF528 000CC328  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 800CF52C 000CC32C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 800CF530 000CC330  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 800CF534 000CC334  83 81 00 70 */	lwz r28, 0x70(r1)
/* 800CF538 000CC338  7C 08 03 A6 */	mtlr r0
/* 800CF53C 000CC33C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 800CF540 000CC340  4E 80 00 20 */	blr 

.global iCameraMotionBlurActivate__FUi
iCameraMotionBlurActivate__FUi:
/* 800CF544 000CC344  90 6D 92 B8 */	stw r3, lbl_803CBBB8-_SDA_BASE_(r13)
/* 800CF548 000CC348  4E 80 00 20 */	blr 

.global iCameraSetBlurriness__Ff
iCameraSetBlurriness__Ff:
/* 800CF54C 000CC34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF550 000CC350  C0 02 97 E8 */	lfs f0, lbl_803CE168-_SDA2_BASE_(r2)
/* 800CF554 000CC354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800CF558 000CC358  4C 40 13 82 */	cror 2, 0, 2
/* 800CF55C 000CC35C  40 82 00 10 */	bne lbl_800CF56C
/* 800CF560 000CC360  38 00 00 00 */	li r0, 0
/* 800CF564 000CC364  90 0D 92 B8 */	stw r0, lbl_803CBBB8-_SDA_BASE_(r13)
/* 800CF568 000CC368  48 00 00 3C */	b lbl_800CF5A4
lbl_800CF56C:
/* 800CF56C 000CC36C  C0 02 97 F4 */	lfs f0, lbl_803CE174-_SDA2_BASE_(r2)
/* 800CF570 000CC370  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800CF574 000CC374  40 81 00 08 */	ble lbl_800CF57C
/* 800CF578 000CC378  FC 20 00 90 */	fmr f1, f0
lbl_800CF57C:
/* 800CF57C 000CC37C  38 00 00 01 */	li r0, 1
/* 800CF580 000CC380  3C 60 80 29 */	lis r3, lbl_80292B00@ha
/* 800CF584 000CC384  90 0D 92 B8 */	stw r0, lbl_803CBBB8-_SDA_BASE_(r13)
/* 800CF588 000CC388  C0 42 97 FC */	lfs f2, lbl_803CE17C-_SDA2_BASE_(r2)
/* 800CF58C 000CC38C  C0 02 97 F8 */	lfs f0, lbl_803CE178-_SDA2_BASE_(r2)
/* 800CF590 000CC390  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 800CF594 000CC394  FC 00 00 1E */	fctiwz f0, f0
/* 800CF598 000CC398  D8 01 00 08 */	stfd f0, 8(r1)
/* 800CF59C 000CC39C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800CF5A0 000CC3A0  90 03 2B 00 */	stw r0, lbl_80292B00@l(r3)
lbl_800CF5A4:
/* 800CF5A4 000CC3A4  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF5A8 000CC3A8  4E 80 00 20 */	blr 

.global iScrFxCameraCreated__FP8RwCamera
iScrFxCameraCreated__FP8RwCamera:
/* 800CF5AC 000CC3AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF5B0 000CC3B0  7C 08 02 A6 */	mflr r0
/* 800CF5B4 000CC3B4  3C 80 80 29 */	lis r4, lbl_80292B00@ha
/* 800CF5B8 000CC3B8  38 A0 00 90 */	li r5, 0x90
/* 800CF5BC 000CC3BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF5C0 000CC3C0  38 C4 2B 00 */	addi r6, r4, lbl_80292B00@l
/* 800CF5C4 000CC3C4  38 00 00 00 */	li r0, 0
/* 800CF5C8 000CC3C8  38 E0 00 00 */	li r7, 0
/* 800CF5CC 000CC3CC  90 A6 00 00 */	stw r5, 0(r6)
/* 800CF5D0 000CC3D0  38 A0 00 01 */	li r5, 1
/* 800CF5D4 000CC3D4  38 80 00 02 */	li r4, 2
/* 800CF5D8 000CC3D8  90 06 00 04 */	stw r0, 4(r6)
/* 800CF5DC 000CC3DC  38 00 00 03 */	li r0, 3
/* 800CF5E0 000CC3E0  B0 E6 00 68 */	sth r7, 0x68(r6)
/* 800CF5E4 000CC3E4  B0 A6 00 6A */	sth r5, 0x6a(r6)
/* 800CF5E8 000CC3E8  B0 86 00 6C */	sth r4, 0x6c(r6)
/* 800CF5EC 000CC3EC  B0 E6 00 6E */	sth r7, 0x6e(r6)
/* 800CF5F0 000CC3F0  B0 86 00 70 */	sth r4, 0x70(r6)
/* 800CF5F4 000CC3F4  B0 06 00 72 */	sth r0, 0x72(r6)
/* 800CF5F8 000CC3F8  48 00 02 01 */	bl iScrFxMotionBlurOpen__FP8RwCamera
/* 800CF5FC 000CC3FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF600 000CC400  7C 08 03 A6 */	mtlr r0
/* 800CF604 000CC404  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF608 000CC408  4E 80 00 20 */	blr 

.global iScrFxCameraEndScene__FP8RwCamera
iScrFxCameraEndScene__FP8RwCamera:
/* 800CF60C 000CC40C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF610 000CC410  7C 08 02 A6 */	mflr r0
/* 800CF614 000CC414  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF618 000CC418  80 0D 92 B8 */	lwz r0, lbl_803CBBB8-_SDA_BASE_(r13)
/* 800CF61C 000CC41C  28 00 00 00 */	cmplwi r0, 0
/* 800CF620 000CC420  41 82 00 1C */	beq lbl_800CF63C
/* 800CF624 000CC424  3C 80 80 29 */	lis r4, lbl_80292B00@ha
/* 800CF628 000CC428  80 04 2B 00 */	lwz r0, lbl_80292B00@l(r4)
/* 800CF62C 000CC42C  2C 00 00 00 */	cmpwi r0, 0
/* 800CF630 000CC430  41 82 00 0C */	beq lbl_800CF63C
/* 800CF634 000CC434  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 800CF638 000CC438  48 00 02 1D */	bl iScrFxMotionBlurRender__FP8RwCameraUi
lbl_800CF63C:
/* 800CF63C 000CC43C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF640 000CC440  7C 08 03 A6 */	mtlr r0
/* 800CF644 000CC444  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF648 000CC448  4E 80 00 20 */	blr 

.global iScrFxPostCameraEnd__FP8RwCamera
iScrFxPostCameraEnd__FP8RwCamera:
/* 800CF64C 000CC44C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF650 000CC450  7C 08 02 A6 */	mflr r0
/* 800CF654 000CC454  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF658 000CC458  48 00 02 89 */	bl GCMB_SiphonFrameBuffer__FPC8RwCamera
/* 800CF65C 000CC45C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF660 000CC460  7C 08 03 A6 */	mtlr r0
/* 800CF664 000CC464  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF668 000CC468  4E 80 00 20 */	blr 

iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA:
/* 800CF66C 000CC46C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF670 000CC470  7C 08 02 A6 */	mflr r0
/* 800CF674 000CC474  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF678 000CC478  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800CF67C 000CC47C  7C BF 2B 78 */	mr r31, r5
/* 800CF680 000CC480  48 00 01 71 */	bl FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster
/* 800CF684 000CC484  3C 80 80 29 */	lis r4, lbl_80292B00@ha
/* 800CF688 000CC488  89 1F 00 00 */	lbz r8, 0(r31)
/* 800CF68C 000CC48C  38 E4 2B 00 */	addi r7, r4, lbl_80292B00@l
/* 800CF690 000CC490  88 DF 00 01 */	lbz r6, 1(r31)
/* 800CF694 000CC494  88 BF 00 02 */	lbz r5, 2(r31)
/* 800CF698 000CC498  38 80 00 01 */	li r4, 1
/* 800CF69C 000CC49C  88 1F 00 03 */	lbz r0, 3(r31)
/* 800CF6A0 000CC4A0  7C 7F 1B 78 */	mr r31, r3
/* 800CF6A4 000CC4A4  99 07 00 14 */	stb r8, 0x14(r7)
/* 800CF6A8 000CC4A8  38 60 00 09 */	li r3, 9
/* 800CF6AC 000CC4AC  98 C7 00 15 */	stb r6, 0x15(r7)
/* 800CF6B0 000CC4B0  98 A7 00 16 */	stb r5, 0x16(r7)
/* 800CF6B4 000CC4B4  98 07 00 17 */	stb r0, 0x17(r7)
/* 800CF6B8 000CC4B8  99 07 00 2C */	stb r8, 0x2c(r7)
/* 800CF6BC 000CC4BC  98 C7 00 2D */	stb r6, 0x2d(r7)
/* 800CF6C0 000CC4C0  98 A7 00 2E */	stb r5, 0x2e(r7)
/* 800CF6C4 000CC4C4  98 07 00 2F */	stb r0, 0x2f(r7)
/* 800CF6C8 000CC4C8  99 07 00 44 */	stb r8, 0x44(r7)
/* 800CF6CC 000CC4CC  98 C7 00 45 */	stb r6, 0x45(r7)
/* 800CF6D0 000CC4D0  98 A7 00 46 */	stb r5, 0x46(r7)
/* 800CF6D4 000CC4D4  98 07 00 47 */	stb r0, 0x47(r7)
/* 800CF6D8 000CC4D8  99 07 00 5C */	stb r8, 0x5c(r7)
/* 800CF6DC 000CC4DC  98 C7 00 5D */	stb r6, 0x5d(r7)
/* 800CF6E0 000CC4E0  98 A7 00 5E */	stb r5, 0x5e(r7)
/* 800CF6E4 000CC4E4  98 07 00 5F */	stb r0, 0x5f(r7)
/* 800CF6E8 000CC4E8  48 16 00 F5 */	bl RwRenderStateSet
/* 800CF6EC 000CC4EC  38 60 00 0E */	li r3, 0xe
/* 800CF6F0 000CC4F0  38 80 00 00 */	li r4, 0
/* 800CF6F4 000CC4F4  48 16 00 E9 */	bl RwRenderStateSet
/* 800CF6F8 000CC4F8  38 60 00 06 */	li r3, 6
/* 800CF6FC 000CC4FC  38 80 00 00 */	li r4, 0
/* 800CF700 000CC500  48 16 00 DD */	bl RwRenderStateSet
/* 800CF704 000CC504  38 60 00 08 */	li r3, 8
/* 800CF708 000CC508  38 80 00 00 */	li r4, 0
/* 800CF70C 000CC50C  48 16 00 D1 */	bl RwRenderStateSet
/* 800CF710 000CC510  7F E4 FB 78 */	mr r4, r31
/* 800CF714 000CC514  38 60 00 01 */	li r3, 1
/* 800CF718 000CC518  48 16 00 C5 */	bl RwRenderStateSet
/* 800CF71C 000CC51C  38 60 00 0C */	li r3, 0xc
/* 800CF720 000CC520  38 80 00 01 */	li r4, 1
/* 800CF724 000CC524  48 16 00 B9 */	bl RwRenderStateSet
/* 800CF728 000CC528  38 60 00 0A */	li r3, 0xa
/* 800CF72C 000CC52C  38 80 00 05 */	li r4, 5
/* 800CF730 000CC530  48 16 00 AD */	bl RwRenderStateSet
/* 800CF734 000CC534  38 60 00 0B */	li r3, 0xb
/* 800CF738 000CC538  38 80 00 06 */	li r4, 6
/* 800CF73C 000CC53C  48 16 00 A1 */	bl RwRenderStateSet
/* 800CF740 000CC540  28 1F 00 00 */	cmplwi r31, 0
/* 800CF744 000CC544  41 82 00 14 */	beq lbl_800CF758
/* 800CF748 000CC548  7F E3 FB 78 */	mr r3, r31
/* 800CF74C 000CC54C  38 80 00 00 */	li r4, 0
/* 800CF750 000CC550  38 A0 00 02 */	li r5, 2
/* 800CF754 000CC554  48 16 C2 7D */	bl RwRasterLock
lbl_800CF758:
/* 800CF758 000CC558  3C 80 80 29 */	lis r4, lbl_80292B00@ha
/* 800CF75C 000CC55C  38 60 00 03 */	li r3, 3
/* 800CF760 000CC560  38 C4 2B 00 */	addi r6, r4, lbl_80292B00@l
/* 800CF764 000CC564  38 A0 00 04 */	li r5, 4
/* 800CF768 000CC568  38 86 00 08 */	addi r4, r6, 8
/* 800CF76C 000CC56C  38 E0 00 06 */	li r7, 6
/* 800CF770 000CC570  38 C6 00 68 */	addi r6, r6, 0x68
/* 800CF774 000CC574  48 16 01 4D */	bl RwIm2DRenderIndexedPrimitive
/* 800CF778 000CC578  28 1F 00 00 */	cmplwi r31, 0
/* 800CF77C 000CC57C  41 82 00 0C */	beq lbl_800CF788
/* 800CF780 000CC580  7F E3 FB 78 */	mr r3, r31
/* 800CF784 000CC584  48 16 BE D5 */	bl RwRasterUnlock
lbl_800CF788:
/* 800CF788 000CC588  38 60 00 0E */	li r3, 0xe
/* 800CF78C 000CC58C  38 80 00 00 */	li r4, 0
/* 800CF790 000CC590  48 16 00 4D */	bl RwRenderStateSet
/* 800CF794 000CC594  38 60 00 06 */	li r3, 6
/* 800CF798 000CC598  38 80 00 01 */	li r4, 1
/* 800CF79C 000CC59C  48 16 00 41 */	bl RwRenderStateSet
/* 800CF7A0 000CC5A0  38 60 00 08 */	li r3, 8
/* 800CF7A4 000CC5A4  38 80 00 01 */	li r4, 1
/* 800CF7A8 000CC5A8  48 16 00 35 */	bl RwRenderStateSet
/* 800CF7AC 000CC5AC  38 60 00 01 */	li r3, 1
/* 800CF7B0 000CC5B0  38 80 00 00 */	li r4, 0
/* 800CF7B4 000CC5B4  48 16 00 29 */	bl RwRenderStateSet
/* 800CF7B8 000CC5B8  38 60 00 0C */	li r3, 0xc
/* 800CF7BC 000CC5BC  38 80 00 00 */	li r4, 0
/* 800CF7C0 000CC5C0  48 16 00 1D */	bl RwRenderStateSet
/* 800CF7C4 000CC5C4  38 60 00 0A */	li r3, 0xa
/* 800CF7C8 000CC5C8  38 80 00 05 */	li r4, 5
/* 800CF7CC 000CC5CC  48 16 00 11 */	bl RwRenderStateSet
/* 800CF7D0 000CC5D0  38 60 00 0B */	li r3, 0xb
/* 800CF7D4 000CC5D4  38 80 00 06 */	li r4, 6
/* 800CF7D8 000CC5D8  48 16 00 05 */	bl RwRenderStateSet
/* 800CF7DC 000CC5DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF7E0 000CC5E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800CF7E4 000CC5E4  7C 08 03 A6 */	mtlr r0
/* 800CF7E8 000CC5E8  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF7EC 000CC5EC  4E 80 00 20 */	blr 

.global FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster
FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster:
/* 800CF7F0 000CC5F0  7C 83 23 78 */	mr r3, r4
/* 800CF7F4 000CC5F4  4E 80 00 20 */	blr 

.global iScrFxMotionBlurOpen__FP8RwCamera
iScrFxMotionBlurOpen__FP8RwCamera:
/* 800CF7F8 000CC5F8  38 60 00 00 */	li r3, 0
/* 800CF7FC 000CC5FC  4E 80 00 20 */	blr 

.global iScrFxCameraDestroyed__FP8RwCamera
iScrFxCameraDestroyed__FP8RwCamera:
/* 800CF800 000CC600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF804 000CC604  7C 08 02 A6 */	mflr r0
/* 800CF808 000CC608  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF80C 000CC60C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800CF810 000CC610  48 00 00 99 */	bl GCMB_KillFrameBufferCopy__Fv
/* 800CF814 000CC614  3C 60 80 29 */	lis r3, lbl_80292B00@ha
/* 800CF818 000CC618  3B E3 2B 00 */	addi r31, r3, lbl_80292B00@l
/* 800CF81C 000CC61C  80 7F 00 04 */	lwz r3, 4(r31)
/* 800CF820 000CC620  28 03 00 00 */	cmplwi r3, 0
/* 800CF824 000CC624  41 82 00 18 */	beq lbl_800CF83C
/* 800CF828 000CC628  48 16 BE CD */	bl RwRasterDestroy
/* 800CF82C 000CC62C  38 00 00 00 */	li r0, 0
/* 800CF830 000CC630  38 60 00 01 */	li r3, 1
/* 800CF834 000CC634  90 1F 00 04 */	stw r0, 4(r31)
/* 800CF838 000CC638  48 00 00 08 */	b lbl_800CF840
lbl_800CF83C:
/* 800CF83C 000CC63C  38 60 00 00 */	li r3, 0
lbl_800CF840:
/* 800CF840 000CC640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF844 000CC644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800CF848 000CC648  7C 08 03 A6 */	mtlr r0
/* 800CF84C 000CC64C  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF850 000CC650  4E 80 00 20 */	blr 

.global iScrFxMotionBlurRender__FP8RwCameraUi
iScrFxMotionBlurRender__FP8RwCameraUi:
/* 800CF854 000CC654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF858 000CC658  7C 08 02 A6 */	mflr r0
/* 800CF85C 000CC65C  3C A0 80 29 */	lis r5, lbl_80292B00@ha
/* 800CF860 000CC660  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF864 000CC664  38 A5 2B 00 */	addi r5, r5, lbl_80292B00@l
/* 800CF868 000CC668  80 C5 00 04 */	lwz r6, 4(r5)
/* 800CF86C 000CC66C  28 06 00 00 */	cmplwi r6, 0
/* 800CF870 000CC670  41 82 00 24 */	beq lbl_800CF894
/* 800CF874 000CC674  80 02 98 00 */	lwz r0, lbl_803CE180-_SDA2_BASE_(r2)
/* 800CF878 000CC678  38 A1 00 08 */	addi r5, r1, 8
/* 800CF87C 000CC67C  90 01 00 0C */	stw r0, 0xc(r1)
/* 800CF880 000CC680  98 81 00 0F */	stb r4, 0xf(r1)
/* 800CF884 000CC684  7C C4 33 78 */	mr r4, r6
/* 800CF888 000CC688  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800CF88C 000CC68C  90 01 00 08 */	stw r0, 8(r1)
/* 800CF890 000CC690  4B FF FD DD */	bl iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA
lbl_800CF894:
/* 800CF894 000CC694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF898 000CC698  7C 08 03 A6 */	mtlr r0
/* 800CF89C 000CC69C  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF8A0 000CC6A0  4E 80 00 20 */	blr 

.global GCMB_MakeFrameBufferCopy__FPC8RwCamera
GCMB_MakeFrameBufferCopy__FPC8RwCamera:
/* 800CF8A4 000CC6A4  4E 80 00 20 */	blr 

.global GCMB_KillFrameBufferCopy__Fv
GCMB_KillFrameBufferCopy__Fv:
/* 800CF8A8 000CC6A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF8AC 000CC6AC  7C 08 02 A6 */	mflr r0
/* 800CF8B0 000CC6B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF8B4 000CC6B4  80 6D 92 BC */	lwz r3, lbl_803CBBBC-_SDA_BASE_(r13)
/* 800CF8B8 000CC6B8  28 03 00 00 */	cmplwi r3, 0
/* 800CF8BC 000CC6BC  41 82 00 08 */	beq lbl_800CF8C4
/* 800CF8C0 000CC6C0  48 16 BE 35 */	bl RwRasterDestroy
lbl_800CF8C4:
/* 800CF8C4 000CC6C4  38 00 00 00 */	li r0, 0
/* 800CF8C8 000CC6C8  90 0D 92 BC */	stw r0, lbl_803CBBBC-_SDA_BASE_(r13)
/* 800CF8CC 000CC6CC  90 0D 92 C0 */	stw r0, lbl_803CBBC0-_SDA_BASE_(r13)
/* 800CF8D0 000CC6D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF8D4 000CC6D4  7C 08 03 A6 */	mtlr r0
/* 800CF8D8 000CC6D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF8DC 000CC6DC  4E 80 00 20 */	blr 

.global GCMB_SiphonFrameBuffer__FPC8RwCamera
GCMB_SiphonFrameBuffer__FPC8RwCamera:
/* 800CF8E0 000CC6E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF8E4 000CC6E4  7C 08 02 A6 */	mflr r0
/* 800CF8E8 000CC6E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF8EC 000CC6EC  80 0D 92 BC */	lwz r0, lbl_803CBBBC-_SDA_BASE_(r13)
/* 800CF8F0 000CC6F0  28 00 00 00 */	cmplwi r0, 0
/* 800CF8F4 000CC6F4  40 82 00 14 */	bne lbl_800CF908
/* 800CF8F8 000CC6F8  80 0D 92 C0 */	lwz r0, lbl_803CBBC0-_SDA_BASE_(r13)
/* 800CF8FC 000CC6FC  2C 00 00 00 */	cmpwi r0, 0
/* 800CF900 000CC700  40 82 00 08 */	bne lbl_800CF908
/* 800CF904 000CC704  4B FF FF A1 */	bl GCMB_MakeFrameBufferCopy__FPC8RwCamera
lbl_800CF908:
/* 800CF908 000CC708  80 6D 92 BC */	lwz r3, lbl_803CBBBC-_SDA_BASE_(r13)
/* 800CF90C 000CC70C  28 03 00 00 */	cmplwi r3, 0
/* 800CF910 000CC710  41 82 00 0C */	beq lbl_800CF91C
/* 800CF914 000CC714  38 80 00 00 */	li r4, 0
/* 800CF918 000CC718  48 17 6E 79 */	bl RwGameCubeCameraTextureFlush
lbl_800CF91C:
/* 800CF91C 000CC71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF920 000CC720  7C 08 03 A6 */	mtlr r0
/* 800CF924 000CC724  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF928 000CC728  4E 80 00 20 */	blr 

.endif

.section .data
lbl_80292B00:
	.incbin "baserom.dol", 0x28FAE0, 0x88
/* SPECULATION: link order */
.global months
months:
	.incbin "baserom.dol", 0x28FB68, 0x30
/* SPECULATION: link order */
.global dotw
dotw:
	.incbin "baserom.dol", 0x28FB98, 0x20
/* SPECULATION: link order */
.global __vt__14zNPCGoalCommon
__vt__14zNPCGoalCommon:
	.incbin "baserom.dol", 0x28FBB8, 0x38
/* SPECULATION: link order */
.global __vt__15zNPCGoalDEVHero
__vt__15zNPCGoalDEVHero:
	.incbin "baserom.dol", 0x28FBF0, 0x34
/* SPECULATION: link order */
.global __vt__19zNPCGoalDEVAnimSpin
__vt__19zNPCGoalDEVAnimSpin:
	.incbin "baserom.dol", 0x28FC24, 0x34
/* SPECULATION: link order */
.global __vt__20zNPCGoalDEVAnimCycle
__vt__20zNPCGoalDEVAnimCycle:
	.incbin "baserom.dol", 0x28FC58, 0x34
/* SPECULATION: link order */
.global __vt__13zNPCGoalLimbo
__vt__13zNPCGoalLimbo:
	.incbin "baserom.dol", 0x28FC8C, 0x34
/* SPECULATION: link order */
.global __vt__12zNPCGoalDead
__vt__12zNPCGoalDead:
	.incbin "baserom.dol", 0x28FCC0, 0x34
/* SPECULATION: link order */
.global __vt__15zNPCGoalWaiting
__vt__15zNPCGoalWaiting:
	.incbin "baserom.dol", 0x28FCF4, 0x34
/* SPECULATION: link order */
.global __vt__14zNPCGoalWander
__vt__14zNPCGoalWander:
	.incbin "baserom.dol", 0x28FD28, 0x34
/* SPECULATION: link order */
.global __vt__14zNPCGoalFidget
__vt__14zNPCGoalFidget:
	.incbin "baserom.dol", 0x28FD5C, 0x34
/* SPECULATION: link order */
.global __vt__14zNPCGoalPatrol
__vt__14zNPCGoalPatrol:
	.incbin "baserom.dol", 0x28FD90, 0x34
/* SPECULATION: link order */
.global __vt__12zNPCGoalIdle
__vt__12zNPCGoalIdle:
	.incbin "baserom.dol", 0x28FDC4, 0x34
/* SPECULATION: link order */
.global __vt__16zNPCGoalLoopAnim
__vt__16zNPCGoalLoopAnim:
	.incbin "baserom.dol", 0x28FDF8, 0x34
/* SPECULATION: link order */
.global __vt__16zNPCGoalPushAnim
__vt__16zNPCGoalPushAnim:
	.incbin "baserom.dol", 0x28FE2C, 0x34
/* SPECULATION: link order */
.global __vt__17zNPCGoalNoManLand
__vt__17zNPCGoalNoManLand:
	.incbin "baserom.dol", 0x28FE60, 0x38

.section .sbss
lbl_803CBBB8:
	.skip 0x4
lbl_803CBBBC:
	.skip 0x4
lbl_803CBBC0:
	.skip 0x8
/* SPECULATION: link order */
.global ua_stream_buffer
ua_stream_buffer:
	.skip 0x4
/* SPECULATION: link order */
.global stream_buffer
stream_buffer:
	.skip 0x4
/* SPECULATION: link order */
.global silence_buffer
silence_buffer:
	.skip 0x4
/* SPECULATION: link order */
.global zero_point
zero_point:
	.skip 0x4
/* SPECULATION: link order */
.global zero_end
zero_end:
	.skip 0x4
/* SPECULATION: link order */
.global sinfo_array_max
sinfo_array_max:
	.skip 0x4
/* SPECULATION: link order */
.global SoundFlags
SoundFlags:
	.skip 0x4
/* SPECULATION: link order */
.global fc
fc:
	.skip 0x4

.section .sdata2
lbl_803CE168:
	.incbin "baserom.dol", 0x2B7A08, 0x4
lbl_803CE16C:
	.incbin "baserom.dol", 0x2B7A0C, 0x4
/* SPECULATION: link order */
.global lbl_803CE170
lbl_803CE170:
	.incbin "baserom.dol", 0x2B7A10, 0x4
lbl_803CE174:
	.incbin "baserom.dol", 0x2B7A14, 0x4
lbl_803CE178:
	.incbin "baserom.dol", 0x2B7A18, 0x4
lbl_803CE17C:
	.incbin "baserom.dol", 0x2B7A1C, 0x4
lbl_803CE180:
	.incbin "baserom.dol", 0x2B7A20, 0x8
