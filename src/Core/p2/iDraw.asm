Analyzing: C:\Users\MattP.MATTPITTS\Documents\bfbbdecomp\obj\src\Core\p2\iDraw.o
Header idenfication: 0x7f, ELF, 32 bit MSB v1
    type:           1, machine:         20
    version: 00000001, entry:     00000000, phoff:  00000000
    shoff:   000005f0, flags:     80000000, ehsize:       52, phentsize:  0
    phnum:          0, shentsize:       40, shnum:        13, shstrndx:  11


==> .shstrtab
    [  1]	.text
    [  7]	.line
    [ 13]	.debug
    [ 20]	.mwcats.text
    [ 33]	.rela.text
    [ 44]	.rela.line
    [ 55]	.rela.debug
    [ 67]	.rela.mwcats.text
    [ 85]	.symtab
    [ 93]	.strtab
    [ 101]	.shstrtab
    [ 111]	.comment

==> .text [1]: Section Header
    type:    00000001, flags:  00000006
    address: 00000000, offset: 00000034, size: 00000070
    link:    00000000, info:   00000000, alignment: 4, entry size: 0


==> .line [2]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 000000a4, size: 0000009e
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .debug [3]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 00000144, size: 00000178
    link:    00000000, info:   00000000, alignment: 4, entry size: 1


==> .mwcats.text [4]: Section Header
    type:    ca2a82c2, flags:  00000000
    address: 00000000, offset: 000002bc, size: 00000018
    link:    00000001, info:   00000000, alignment: 4, entry size: 1


==> .rela.text [5]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 000002d4, size: 00000030
    link:    00000009, info:   00000001, alignment: 4, entry size: 12


==> .rela.line [6]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000304, size: 0000000c
    link:    00000009, info:   00000002, alignment: 4, entry size: 12


==> .rela.debug [7]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000310, size: 000000b4
    link:    00000009, info:   00000003, alignment: 4, entry size: 12


==> .rela.mwcats.text [8]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 000003c4, size: 00000024
    link:    00000009, info:   00000004, alignment: 4, entry size: 12


==> .symtab [9]: Section Header
    type:    00000002, flags:  00000000
    address: 00000000, offset: 000003e8, size: 000000b0
    link:    0000000a, info:   00000006, alignment: 4, entry size: 16


==> .strtab [10]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 00000498, size: 0000005b
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .shstrtab [11]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 000004f3, size: 00000078
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .comment [12]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 0000056b, size: 00000084
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .strtab
    [  1]	iDraw.cp
    [ 10]	GXSetAlphaUpdate
    [ 27]	GXSetColorUpdate
    [ 44]	iDrawSetFBMSK__FUi
    [ 63]	iDrawBegin__Fv
    [ 78]	iDrawEnd__Fv

==> .symtab
    entry  spndx   value      size   bind   type  other    shndx         name
    [   0]     0   00000000      0   LOC    NULL      0    UND           
    [   1]     1   00000000      0   LOC    FILE      0    ABS           iDraw.cp
    [   2]     0   00000000      0   LOC    SECT      0    .text         .text
    [   3]     0   00000000      0   LOC    SECT      0    .line         .line
    [   4]     0   00000000      0   LOC    SECT      0    .debug        .debug
    [   5]     0   00000000      0   LOC    SECT      0    .mwcats.text  .mwcats.text
    [   6]    10   00000000      0   GLOB   NULL      0    UND           GXSetAlphaUpdate
    [   7]    27   00000000      0   GLOB   NULL      0    UND           GXSetColorUpdate
    [   8]    44   00000000    104   GLOB   FUNC      0    .text         iDrawSetFBMSK__FUi
    [   9]    63   00000068      4   GLOB   FUNC      0    .text         iDrawBegin__Fv
    [  10]    78   0000006c      4   GLOB   FUNC      0    .text         iDrawEnd__Fv

==> .rela.text
    entry  offset   addend   type name(symbol id)
    [   0] 00000020 00000000   10 GXSetAlphaUpdate(6)
    [   1] 00000034 00000000   10 GXSetAlphaUpdate(6)
    [   2] 00000044 00000000   10 GXSetColorUpdate(7)
    [   3] 00000050 00000000   10 GXSetColorUpdate(7)

==> .text

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="iDrawSetFBMSK__FUi"  Size=104
00000000: 9421FFF0  stwu     rsp,-16(rsp)
00000004: 7C0802A6  mflr     r0
00000008: 90010014  stw      r0,20(rsp)
0000000C: 5460463F  srwi.    r0,r3,24
00000010: 93E1000C  stw      r31,12(rsp)
00000014: 7C7F1B78  mr       r31,r3
00000018: 40820010  bne      *+16                    ; 0x00000028
0000001C: 38600001  li       r3,1
00000020: 48000001  bl       GXSetAlphaUpdate
00000024: 48000014  b        *+20                    ; 0x00000038
00000028: 280000FF  cmplwi   r0,0x00ff
0000002C: 4082000C  bne      *+12                    ; 0x00000038
00000030: 38600000  li       r3,0
00000034: 48000001  bl       GXSetAlphaUpdate
00000038: 57E0023F  clrlwi.  r0,r31,8
0000003C: 40820010  bne      *+16                    ; 0x0000004C
00000040: 38600001  li       r3,1
00000044: 48000001  bl       GXSetColorUpdate
00000048: 4800000C  b        *+12                    ; 0x00000054
0000004C: 38600000  li       r3,0
00000050: 48000001  bl       GXSetColorUpdate
00000054: 80010014  lwz      r0,20(rsp)
00000058: 83E1000C  lwz      r31,12(rsp)
0000005C: 7C0803A6  mtlr     r0
00000060: 38210010  addi     rsp,rsp,16
00000064: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="iDrawBegin__Fv"  Size=4
00000068: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="iDrawEnd__Fv"  Size=4
0000006C: 4E800020  blr

==> .rela.mwcats.text
    entry  offset   addend   type name(symbol id)
    [   0] 00000004 00000000    1 iDrawSetFBMSK__FUi(8)
    [   1] 0000000c 00000000    1 iDrawBegin__Fv(9)
    [   2] 00000014 00000000    1 iDrawEnd__Fv(10)

==> .mwcats.text
    entry   offset    type size     addr     procexits
    [   0]  00000000     2 0068     00000000         0
    [   1]  00000008     2 0004     00000000         0
    [   2]  00000010     2 0004     00000000         0

==> .comment
MagicWord: CodeWarrior
Comment section version: 10
Compiler version: 2.4.7
CW Compiler generated
Pooled data: true
PPC EABI compliant
FP Support: Hardware
Processor: Unknown CPU
