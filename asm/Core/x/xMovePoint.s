.include "macros.inc"

.if 0

.section .text  # 0x80035494 - 0x80035A00

.global xMovePointSplineSetup__FP10xMovePoint
xMovePointSplineSetup__FP10xMovePoint:
/* 80035640 00032440  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80035644 00032444  7C 08 02 A6 */	mflr r0
/* 80035648 00032448  90 01 00 54 */	stw r0, 0x54(r1)
/* 8003564C 0003244C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80035650 00032450  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80035654 00032454  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80035658 00032458  7C 7D 1B 78 */	mr r29, r3
/* 8003565C 0003245C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80035660 00032460  88 03 00 17 */	lbz r0, 0x17(r3)
/* 80035664 00032464  28 00 00 01 */	cmplwi r0, 1
/* 80035668 00032468  40 82 01 1C */	bne lbl_80035784
/* 8003566C 0003246C  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 80035670 00032470  28 00 00 00 */	cmplwi r0, 0
/* 80035674 00032474  40 82 01 10 */	bne lbl_80035784
/* 80035678 00032478  83 FD 00 1C */	lwz r31, 0x1c(r29)
/* 8003567C 0003247C  38 61 00 20 */	addi r3, r1, 0x20
/* 80035680 00032480  80 BD 00 18 */	lwz r5, 0x18(r29)
/* 80035684 00032484  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80035688 00032488  83 C5 00 00 */	lwz r30, 0(r5)
/* 8003568C 0003248C  4B FD 5B D9 */	bl __as__5xVec3FRC5xVec3
/* 80035690 00032490  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80035694 00032494  88 03 00 17 */	lbz r0, 0x17(r3)
/* 80035698 00032498  28 00 00 00 */	cmplwi r0, 0
/* 8003569C 0003249C  41 82 00 34 */	beq lbl_800356D0
/* 800356A0 000324A0  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 800356A4 000324A4  38 61 00 14 */	addi r3, r1, 0x14
/* 800356A8 000324A8  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 800356AC 000324AC  83 E5 00 00 */	lwz r31, 0(r5)
/* 800356B0 000324B0  4B FD 5B B5 */	bl __as__5xVec3FRC5xVec3
/* 800356B4 000324B4  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 800356B8 000324B8  38 61 00 08 */	addi r3, r1, 8
/* 800356BC 000324BC  4B FD 5B A9 */	bl __as__5xVec3FRC5xVec3
/* 800356C0 000324C0  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 800356C4 000324C4  38 61 00 2C */	addi r3, r1, 0x2c
/* 800356C8 000324C8  4B FD 5B 9D */	bl __as__5xVec3FRC5xVec3
/* 800356CC 000324CC  48 00 00 8C */	b lbl_80035758
lbl_800356D0:
/* 800356D0 000324D0  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 800356D4 000324D4  38 61 00 2C */	addi r3, r1, 0x2c
/* 800356D8 000324D8  80 BF 00 14 */	lwz r5, 0x14(r31)
/* 800356DC 000324DC  C0 A2 85 54 */	lfs f5, xMovePoint_float_twothirds-_SDA2_BASE_(r2)
/* 800356E0 000324E0  C0 84 00 00 */	lfs f4, 0(r4)
/* 800356E4 000324E4  C0 C2 85 50 */	lfs f6, xMovePoint_float_onethird-_SDA2_BASE_(r2)
/* 800356E8 000324E8  EC 05 01 32 */	fmuls f0, f5, f4
/* 800356EC 000324EC  C0 25 00 00 */	lfs f1, 0(r5)
/* 800356F0 000324F0  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 800356F4 000324F4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 800356F8 000324F8  C0 64 00 04 */	lfs f3, 4(r4)
/* 800356FC 000324FC  C0 25 00 04 */	lfs f1, 4(r5)
/* 80035700 00032500  EC 05 00 F2 */	fmuls f0, f5, f3
/* 80035704 00032504  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 80035708 00032508  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8003570C 0003250C  C0 24 00 08 */	lfs f1, 8(r4)
/* 80035710 00032510  C0 45 00 08 */	lfs f2, 8(r5)
/* 80035714 00032514  EC 05 00 72 */	fmuls f0, f5, f1
/* 80035718 00032518  EC 06 00 BA */	fmadds f0, f6, f2, f0
/* 8003571C 0003251C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80035720 00032520  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 80035724 00032524  C0 04 00 00 */	lfs f0, 0(r4)
/* 80035728 00032528  EC 06 00 32 */	fmuls f0, f6, f0
/* 8003572C 0003252C  EC 05 01 3A */	fmadds f0, f5, f4, f0
/* 80035730 00032530  D0 01 00 08 */	stfs f0, 8(r1)
/* 80035734 00032534  C0 04 00 04 */	lfs f0, 4(r4)
/* 80035738 00032538  EC 06 00 32 */	fmuls f0, f6, f0
/* 8003573C 0003253C  EC 05 00 FA */	fmadds f0, f5, f3, f0
/* 80035740 00032540  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80035744 00032544  C0 04 00 08 */	lfs f0, 8(r4)
/* 80035748 00032548  EC 06 00 32 */	fmuls f0, f6, f0
/* 8003574C 0003254C  EC 05 00 7A */	fmadds f0, f5, f1, f0
/* 80035750 00032550  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80035754 00032554  4B FD 5B 11 */	bl __as__5xVec3FRC5xVec3
lbl_80035758:
/* 80035758 00032558  38 61 00 20 */	addi r3, r1, 0x20
/* 8003575C 0003255C  38 E1 00 14 */	addi r7, r1, 0x14
/* 80035760 00032560  39 01 00 08 */	addi r8, r1, 8
/* 80035764 00032564  38 80 00 00 */	li r4, 0
/* 80035768 00032568  38 A0 00 02 */	li r5, 2
/* 8003576C 0003256C  38 C0 00 00 */	li r6, 0
/* 80035770 00032570  48 01 58 41 */	bl xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3
/* 80035774 00032574  90 7D 00 2C */	stw r3, 0x2c(r29)
/* 80035778 00032578  38 80 00 14 */	li r4, 0x14
/* 8003577C 0003257C  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80035780 00032580  48 01 55 C5 */	bl xSpline3_ArcInit__FP8xSpline3Ui
lbl_80035784:
/* 80035784 00032584  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80035788 00032588  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8003578C 0003258C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80035790 00032590  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80035794 00032594  7C 08 03 A6 */	mtlr r0
/* 80035798 00032598  38 21 00 50 */	addi r1, r1, 0x50
/* 8003579C 0003259C  4E 80 00 20 */	blr 

.global xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3:
/* 800357B8 000325B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800357BC 000325BC  7C 08 02 A6 */	mflr r0
/* 800357C0 000325C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800357C4 000325C4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 800357C8 000325C8  7C 7B 1B 78 */	mr r27, r3
/* 800357CC 000325CC  80 63 00 10 */	lwz r3, 0x10(r3)
/* 800357D0 000325D0  7C 9C 23 78 */	mr r28, r4
/* 800357D4 000325D4  7C BD 2B 78 */	mr r29, r5
/* 800357D8 000325D8  7C DE 33 78 */	mr r30, r6
/* 800357DC 000325DC  A0 03 00 1A */	lhz r0, 0x1a(r3)
/* 800357E0 000325E0  28 00 00 01 */	cmplwi r0, 1
/* 800357E4 000325E4  40 80 00 14 */	bge lbl_800357F8
/* 800357E8 000325E8  38 00 00 00 */	li r0, 0
/* 800357EC 000325EC  90 1D 00 00 */	stw r0, 0(r29)
/* 800357F0 000325F0  C0 22 85 58 */	lfs f1, xMovePoint_float_0-_SDA2_BASE_(r2)
/* 800357F4 000325F4  48 00 00 DC */	b lbl_800358D0
lbl_800357F8:
/* 800357F8 000325F8  3B E0 00 00 */	li r31, 0
/* 800357FC 000325FC  4B FF B4 6D */	bl xrand__Fv
/* 80035800 00032600  80 DB 00 20 */	lwz r6, 0x20(r27)
/* 80035804 00032604  39 00 00 00 */	li r8, 0
/* 80035808 00032608  80 BB 00 18 */	lwz r5, 0x18(r27)
/* 8003580C 0003260C  7C 03 33 96 */	divwu r0, r3, r6
/* 80035810 00032610  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 80035814 00032614  7C 00 31 D6 */	mullw r0, r0, r6
/* 80035818 00032618  7C E0 18 50 */	subf r7, r0, r3
/* 8003581C 0003261C  48 00 00 5C */	b lbl_80035878
lbl_80035820:
/* 80035820 00032620  55 00 13 BA */	rlwinm r0, r8, 2, 0xe, 0x1d
/* 80035824 00032624  7C 05 00 2E */	lwzx r0, r5, r0
/* 80035828 00032628  90 1D 00 00 */	stw r0, 0(r29)
/* 8003582C 0003262C  80 DD 00 00 */	lwz r6, 0(r29)
/* 80035830 00032630  80 66 00 10 */	lwz r3, 0x10(r6)
/* 80035834 00032634  88 06 00 24 */	lbz r0, 0x24(r6)
/* 80035838 00032638  A0 63 00 14 */	lhz r3, 0x14(r3)
/* 8003583C 0003263C  28 00 00 00 */	cmplwi r0, 0
/* 80035840 00032640  7C E3 38 50 */	subf r7, r3, r7
/* 80035844 00032644  40 82 00 10 */	bne lbl_80035854
/* 80035848 00032648  38 00 00 00 */	li r0, 0
/* 8003584C 0003264C  90 1D 00 00 */	stw r0, 0(r29)
/* 80035850 00032650  48 00 00 24 */	b lbl_80035874
lbl_80035854:
/* 80035854 00032654  7C 06 E0 40 */	cmplw r6, r28
/* 80035858 00032658  7C DF 33 78 */	mr r31, r6
/* 8003585C 0003265C  40 82 00 10 */	bne lbl_8003586C
/* 80035860 00032660  38 00 00 00 */	li r0, 0
/* 80035864 00032664  90 1D 00 00 */	stw r0, 0(r29)
/* 80035868 00032668  48 00 00 0C */	b lbl_80035874
lbl_8003586C:
/* 8003586C 0003266C  2C 07 00 00 */	cmpwi r7, 0
/* 80035870 00032670  41 80 00 18 */	blt lbl_80035888
lbl_80035874:
/* 80035874 00032674  39 08 00 01 */	addi r8, r8, 1
lbl_80035878:
/* 80035878 00032678  A0 04 00 1A */	lhz r0, 0x1a(r4)
/* 8003587C 0003267C  55 03 04 3E */	clrlwi r3, r8, 0x10
/* 80035880 00032680  7C 03 00 40 */	cmplw r3, r0
/* 80035884 00032684  41 80 FF 9C */	blt lbl_80035820
lbl_80035888:
/* 80035888 00032688  80 1D 00 00 */	lwz r0, 0(r29)
/* 8003588C 0003268C  28 00 00 00 */	cmplwi r0, 0
/* 80035890 00032690  40 82 00 1C */	bne lbl_800358AC
/* 80035894 00032694  28 1F 00 00 */	cmplwi r31, 0
/* 80035898 00032698  41 82 00 0C */	beq lbl_800358A4
/* 8003589C 0003269C  93 FD 00 00 */	stw r31, 0(r29)
/* 800358A0 000326A0  48 00 00 0C */	b lbl_800358AC
lbl_800358A4:
/* 800358A4 000326A4  C0 22 85 58 */	lfs f1, xMovePoint_float_0-_SDA2_BASE_(r2)
/* 800358A8 000326A8  48 00 00 28 */	b lbl_800358D0
lbl_800358AC:
/* 800358AC 000326AC  28 1E 00 00 */	cmplwi r30, 0
/* 800358B0 000326B0  41 82 00 1C */	beq lbl_800358CC
/* 800358B4 000326B4  80 BD 00 00 */	lwz r5, 0(r29)
/* 800358B8 000326B8  7F C3 F3 78 */	mr r3, r30
/* 800358BC 000326BC  80 9B 00 14 */	lwz r4, 0x14(r27)
/* 800358C0 000326C0  80 A5 00 14 */	lwz r5, 0x14(r5)
/* 800358C4 000326C4  48 00 00 29 */	bl xVec3Hdng__FP5xVec3PC5xVec3PC5xVec3
/* 800358C8 000326C8  48 00 00 08 */	b lbl_800358D0
lbl_800358CC:
/* 800358CC 000326CC  C0 22 85 58 */	lfs f1, xMovePoint_float_0-_SDA2_BASE_(r2)
lbl_800358D0:
/* 800358D0 000326D0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 800358D4 000326D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800358D8 000326D8  7C 08 03 A6 */	mtlr r0
/* 800358DC 000326DC  38 21 00 20 */	addi r1, r1, 0x20
/* 800358E0 000326E0  4E 80 00 20 */	blr 

.global xVec3Hdng__FP5xVec3PC5xVec3PC5xVec3
xVec3Hdng__FP5xVec3PC5xVec3PC5xVec3:
/* 800358EC 000326EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800358F0 000326F0  7C 08 02 A6 */	mflr r0
/* 800358F4 000326F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 800358F8 000326F8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800358FC 000326FC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80035900 00032700  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80035904 00032704  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80035908 00032708  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8003590C 0003270C  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 80035910 00032710  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80035914 00032714  C0 25 00 04 */	lfs f1, 4(r5)
/* 80035918 00032718  7C 7F 1B 78 */	mr r31, r3
/* 8003591C 0003271C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80035920 00032720  C0 65 00 00 */	lfs f3, 0(r5)
/* 80035924 00032724  EF E1 00 28 */	fsubs f31, f1, f0
/* 80035928 00032728  C0 04 00 00 */	lfs f0, 0(r4)
/* 8003592C 0003272C  C0 45 00 08 */	lfs f2, 8(r5)
/* 80035930 00032730  EF C3 00 28 */	fsubs f30, f3, f0
/* 80035934 00032734  C0 04 00 08 */	lfs f0, 8(r4)
/* 80035938 00032738  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 8003593C 0003273C  EF A2 00 28 */	fsubs f29, f2, f0
/* 80035940 00032740  C0 02 85 5C */	lfs f0, xMovePoint_float_0p35-_SDA2_BASE_(r2)
/* 80035944 00032744  C0 42 85 60 */	lfs f2, lbl_803CCEE0-_SDA2_BASE_(r2)
/* 80035948 00032748  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 8003594C 0003274C  EC 3D 0F 7A */	fmadds f1, f29, f29, f1
/* 80035950 00032750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80035954 00032754  FC 00 02 10 */	fabs f0, f0
/* 80035958 00032758  FC 00 00 18 */	frsp f0, f0
/* 8003595C 0003275C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80035960 00032760  4C 40 13 82 */	cror 2, 0, 2
/* 80035964 00032764  40 82 00 18 */	bne lbl_8003597C
/* 80035968 00032768  D3 DF 00 00 */	stfs f30, 0(r31)
/* 8003596C 0003276C  D3 FF 00 04 */	stfs f31, 4(r31)
/* 80035970 00032770  D3 BF 00 08 */	stfs f29, 8(r31)
/* 80035974 00032774  C0 22 85 5C */	lfs f1, xMovePoint_float_0p35-_SDA2_BASE_(r2)
/* 80035978 00032778  48 00 00 5C */	b lbl_800359D4
lbl_8003597C:
/* 8003597C 0003277C  FC 00 0A 10 */	fabs f0, f1
/* 80035980 00032780  FC 00 00 18 */	frsp f0, f0
/* 80035984 00032784  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80035988 00032788  4C 40 13 82 */	cror 2, 0, 2
/* 8003598C 0003278C  40 82 00 24 */	bne lbl_800359B0
/* 80035990 00032790  C0 02 85 58 */	lfs f0, xMovePoint_float_0-_SDA2_BASE_(r2)
/* 80035994 00032794  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80035998 00032798  C0 02 85 5C */	lfs f0, xMovePoint_float_0p35-_SDA2_BASE_(r2)
/* 8003599C 0003279C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 800359A0 000327A0  C0 02 85 58 */	lfs f0, xMovePoint_float_0-_SDA2_BASE_(r2)
/* 800359A4 000327A4  D0 1F 00 08 */	stfs f0, 8(r31)
/* 800359A8 000327A8  C0 22 85 58 */	lfs f1, xMovePoint_float_0-_SDA2_BASE_(r2)
/* 800359AC 000327AC  48 00 00 28 */	b lbl_800359D4
lbl_800359B0:
/* 800359B0 000327B0  4B FD 4E 4D */	bl xsqrt__Ff
/* 800359B4 000327B4  C0 02 85 5C */	lfs f0, xMovePoint_float_0p35-_SDA2_BASE_(r2)
/* 800359B8 000327B8  EC 00 08 24 */	fdivs f0, f0, f1
/* 800359BC 000327BC  EC 7E 00 32 */	fmuls f3, f30, f0
/* 800359C0 000327C0  EC 5F 00 32 */	fmuls f2, f31, f0
/* 800359C4 000327C4  EC 1D 00 32 */	fmuls f0, f29, f0
/* 800359C8 000327C8  D0 7F 00 00 */	stfs f3, 0(r31)
/* 800359CC 000327CC  D0 5F 00 04 */	stfs f2, 4(r31)
/* 800359D0 000327D0  D0 1F 00 08 */	stfs f0, 8(r31)
lbl_800359D4:
/* 800359D4 000327D4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 800359D8 000327D8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800359DC 000327DC  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 800359E0 000327E0  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 800359E4 000327E4  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 800359E8 000327E8  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 800359EC 000327EC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800359F0 000327F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800359F4 000327F4  7C 08 03 A6 */	mtlr r0
/* 800359F8 000327F8  38 21 00 40 */	addi r1, r1, 0x40
/* 800359FC 000327FC  4E 80 00 20 */	blr 

.endif

.section .sdata2
/* = 0.333...f */
.global xMovePoint_float_onethird
xMovePoint_float_onethird:
	.incbin "baserom.dol", 0x2B6770, 0x4

/* = 0.666...f */
.global xMovePoint_float_twothirds
xMovePoint_float_twothirds:
	.incbin "baserom.dol", 0x2B6774, 0x4

/* = 0.0f */
.global xMovePoint_float_0
xMovePoint_float_0:
	.incbin "baserom.dol", 0x2B6778, 0x4

/* = 0.35f */
.global xMovePoint_float_0p35
xMovePoint_float_0p35:
	.incbin "baserom.dol", 0x2B677C, 0x4

lbl_803CCEE0:
	.incbin "baserom.dol", 0x2B6780, 0x8
