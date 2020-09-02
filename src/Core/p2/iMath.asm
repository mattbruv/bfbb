Analyzing: C:\Users\MattP.MATTPITTS\Documents\bfbbdecomp\obj\src\Core\p2\iMath.o
Header idenfication: 0x7f, ELF, 32 bit MSB v1
    type:           1, machine:         20
    version: 00000001, entry:     00000000, phoff:  00000000
    shoff:   00000880, flags:     80000000, ehsize:       52, phentsize:  0
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
    address: 00000000, offset: 00000034, size: 000000cc
    link:    00000000, info:   00000000, alignment: 4, entry size: 0


==> .line [2]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 00000100, size: 0000008a
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .debug [3]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 0000018c, size: 00000270
    link:    00000000, info:   00000000, alignment: 4, entry size: 1


==> .mwcats.text [4]: Section Header
    type:    ca2a82c2, flags:  00000000
    address: 00000000, offset: 000003fc, size: 00000030
    link:    00000001, info:   00000000, alignment: 4, entry size: 1


==> .rela.text [5]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 0000042c, size: 00000048
    link:    00000009, info:   00000001, alignment: 4, entry size: 12


==> .rela.line [6]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000474, size: 0000000c
    link:    00000009, info:   00000002, alignment: 4, entry size: 12


==> .rela.debug [7]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000480, size: 00000150
    link:    00000009, info:   00000003, alignment: 4, entry size: 12


==> .rela.mwcats.text [8]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 000005d0, size: 00000048
    link:    00000009, info:   00000004, alignment: 4, entry size: 12


==> .symtab [9]: Section Header
    type:    00000002, flags:  00000000
    address: 00000000, offset: 00000618, size: 000000f0
    link:    0000000a, info:   00000006, alignment: 4, entry size: 16


==> .strtab [10]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 00000708, size: 00000058
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .shstrtab [11]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 00000760, size: 00000078
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .comment [12]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 000007d8, size: 000000a4
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .strtab
    [  1]	iMath.cp
    [ 10]	sinf__3stdFf
    [ 23]	isin__Ff
    [ 32]	sin
    [ 36]	cosf__3stdFf
    [ 49]	icos__Ff
    [ 58]	cos
    [ 62]	tanf__3stdFf
    [ 75]	itan__Ff
    [ 84]	tan

==> .symtab
    entry  spndx   value      size   bind   type  other    shndx         name
    [   0]     0   00000000      0   LOC    NULL      0    UND           
    [   1]     1   00000000      0   LOC    FILE      0    ABS           iMath.cp
    [   2]     0   00000000      0   LOC    SECT      0    .text         .text
    [   3]     0   00000000      0   LOC    SECT      0    .line         .line
    [   4]     0   00000000      0   LOC    SECT      0    .debug        .debug
    [   5]     0   00000000      0   LOC    SECT      0    .mwcats.text  .mwcats.text
    [   6]    10   00000020     36   WEAK   FUNC      0    .text         sinf__3stdFf
    [   7]    23   00000000     32   GLOB   FUNC      0    .text         isin__Ff
    [   8]    32   00000000      0   GLOB   NULL      0    UND           sin
    [   9]    36   00000064     36   WEAK   FUNC      0    .text         cosf__3stdFf
    [  10]    49   00000044     32   GLOB   FUNC      0    .text         icos__Ff
    [  11]    58   00000000      0   GLOB   NULL      0    UND           cos
    [  12]    62   000000a8     36   WEAK   FUNC      0    .text         tanf__3stdFf
    [  13]    75   00000088     32   GLOB   FUNC      0    .text         itan__Ff
    [  14]    84   00000000      0   GLOB   NULL      0    UND           tan

==> .rela.text
    entry  offset   addend   type name(symbol id)
    [   0] 0000000c 00000000   10 sinf__3stdFf(6)
    [   1] 0000002c 00000000   10 sin(8)
    [   2] 00000050 00000000   10 cosf__3stdFf(9)
    [   3] 00000070 00000000   10 cos(11)
    [   4] 00000094 00000000   10 tanf__3stdFf(12)
    [   5] 000000b4 00000000   10 tan(14)

==> .text

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="isin__Ff"  Size=32
00000000: 9421FFF0  stwu     rsp,-16(rsp)
00000004: 7C0802A6  mflr     r0
00000008: 90010014  stw      r0,20(rsp)
0000000C: 48000001  bl       sinf__3stdFf
00000010: 80010014  lwz      r0,20(rsp)
00000014: 7C0803A6  mtlr     r0
00000018: 38210010  addi     rsp,rsp,16
0000001C: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="sinf__3stdFf"  Size=36
00000020: 9421FFF0  stwu     rsp,-16(rsp)
00000024: 7C0802A6  mflr     r0
00000028: 90010014  stw      r0,20(rsp)
0000002C: 48000001  bl       sin
00000030: 80010014  lwz      r0,20(rsp)
00000034: FC200818  frsp     fp1,fp1
00000038: 7C0803A6  mtlr     r0
0000003C: 38210010  addi     rsp,rsp,16
00000040: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="icos__Ff"  Size=32
00000044: 9421FFF0  stwu     rsp,-16(rsp)
00000048: 7C0802A6  mflr     r0
0000004C: 90010014  stw      r0,20(rsp)
00000050: 48000001  bl       cosf__3stdFf
00000054: 80010014  lwz      r0,20(rsp)
00000058: 7C0803A6  mtlr     r0
0000005C: 38210010  addi     rsp,rsp,16
00000060: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="cosf__3stdFf"  Size=36
00000064: 9421FFF0  stwu     rsp,-16(rsp)
00000068: 7C0802A6  mflr     r0
0000006C: 90010014  stw      r0,20(rsp)
00000070: 48000001  bl       cos
00000074: 80010014  lwz      r0,20(rsp)
00000078: FC200818  frsp     fp1,fp1
0000007C: 7C0803A6  mtlr     r0
00000080: 38210010  addi     rsp,rsp,16
00000084: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="itan__Ff"  Size=32
00000088: 9421FFF0  stwu     rsp,-16(rsp)
0000008C: 7C0802A6  mflr     r0
00000090: 90010014  stw      r0,20(rsp)
00000094: 48000001  bl       tanf__3stdFf
00000098: 80010014  lwz      r0,20(rsp)
0000009C: 7C0803A6  mtlr     r0
000000A0: 38210010  addi     rsp,rsp,16
000000A4: 4E800020  blr

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="tanf__3stdFf"  Size=36
000000A8: 9421FFF0  stwu     rsp,-16(rsp)
000000AC: 7C0802A6  mflr     r0
000000B0: 90010014  stw      r0,20(rsp)
000000B4: 48000001  bl       tan
000000B8: 80010014  lwz      r0,20(rsp)
000000BC: FC200818  frsp     fp1,fp1
000000C0: 7C0803A6  mtlr     r0
000000C4: 38210010  addi     rsp,rsp,16
000000C8: 4E800020  blr

==> .rela.mwcats.text
    entry  offset   addend   type name(symbol id)
    [   0] 00000004 00000000    1 isin__Ff(7)
    [   1] 0000000c 00000000    1 sinf__3stdFf(6)
    [   2] 00000014 00000000    1 icos__Ff(10)
    [   3] 0000001c 00000000    1 cosf__3stdFf(9)
    [   4] 00000024 00000000    1 itan__Ff(13)
    [   5] 0000002c 00000000    1 tanf__3stdFf(12)

==> .mwcats.text
    entry   offset    type size     addr     procexits
    [   0]  00000000     2 0020     00000000         0
    [   1]  00000008     2 0024     00000000         0
    [   2]  00000010     2 0020     00000000         0
    [   3]  00000018     2 0024     00000000         0
    [   4]  00000020     2 0020     00000000         0
    [   5]  00000028     2 0024     00000000         0

==> .comment
MagicWord: CodeWarrior
Comment section version: 10
Compiler version: 2.4.7
CW Compiler generated
Pooled data: true
PPC EABI compliant
FP Support: Hardware
Processor: Unknown CPU
