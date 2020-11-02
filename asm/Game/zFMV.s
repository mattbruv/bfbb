.include "macros.inc"

.section .rodata

.balign 8

.global zFMVStrings
zFMVStrings:
	.incbin "baserom.dol", 0x258A00, 0x10

.section .data

/*
.global zFMVFileTable
zFMVFileTable:
	.incbin "baserom.dol", 0x28BE78, 0x148
*/