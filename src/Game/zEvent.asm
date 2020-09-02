Analyzing: C:\Users\MattP.MATTPITTS\Documents\bfbbdecomp\obj\src\Game\zEvent.o
Header idenfication: 0x7f, ELF, 32 bit MSB v1
    type:           1, machine:         20
    version: 00000001, entry:     00000000, phoff:  00000000
    shoff:   000006e0, flags:     80000000, ehsize:       52, phentsize:  0
    phnum:          0, shentsize:       40, shnum:        16, shstrndx:  14


==> .shstrtab
    [  1]	.text
    [  7]	.data
    [ 13]	.line
    [ 19]	.debug
    [ 26]	.sdata
    [ 33]	.mwcats.text
    [ 46]	.rela.text
    [ 57]	.rela.data
    [ 68]	.rela.line
    [ 79]	.rela.debug
    [ 91]	.rela.mwcats.text
    [ 109]	.symtab
    [ 117]	.strtab
    [ 125]	.shstrtab
    [ 135]	.comment

==> .text [1]: Section Header
    type:    00000001, flags:  00000006
    address: 00000000, offset: 00000034, size: 00000014
    link:    00000000, info:   00000000, alignment: 4, entry size: 0


==> .data [2]: Section Header
    type:    00000001, flags:  00000003
    address: 00000000, offset: 00000048, size: 00000060
    link:    00000000, info:   00000000, alignment: 8, entry size: 0


==> .line [3]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 000000a8, size: 0000001c
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .debug [4]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 000000c4, size: 0000018c
    link:    00000000, info:   00000000, alignment: 4, entry size: 1


==> .sdata [5]: Section Header
    type:    00000001, flags:  00000003
    address: 00000000, offset: 00000250, size: 0000003c
    link:    00000000, info:   00000000, alignment: 8, entry size: 0


==> .mwcats.text [6]: Section Header
    type:    ca2a82c2, flags:  00000000
    address: 00000000, offset: 0000028c, size: 00000008
    link:    00000001, info:   00000000, alignment: 4, entry size: 1


==> .rela.text [7]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000294, size: 00000018
    link:    0000000c, info:   00000001, alignment: 4, entry size: 12


==> .rela.data [8]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 000002ac, size: 0000006c
    link:    0000000c, info:   00000002, alignment: 4, entry size: 12


==> .rela.line [9]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000318, size: 0000000c
    link:    0000000c, info:   00000003, alignment: 4, entry size: 12


==> .rela.debug [10]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000324, size: 000000cc
    link:    0000000c, info:   00000004, alignment: 4, entry size: 12


==> .rela.mwcats.text [11]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 000003f0, size: 0000000c
    link:    0000000c, info:   00000006, alignment: 4, entry size: 12


==> .symtab [12]: Section Header
    type:    00000002, flags:  00000000
    address: 00000000, offset: 000003fc, size: 00000140
    link:    0000000d, info:   00000011, alignment: 4, entry size: 16


==> .strtab [13]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 0000053c, size: 00000046
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .shstrtab [14]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 00000582, size: 00000090
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .comment [15]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 00000612, size: 000000cc
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .strtab
    [  1]	zEvent.cp
    [ 11]	@1
    [ 14]	@2
    [ 17]	@3
    [ 20]	@4
    [ 23]	@5
    [ 26]	@6
    [ 29]	@7
    [ 32]	@8
    [ 35]	@9
    [ 38]	foo
    [ 42]	sEventTable
    [ 54]	zEventName__FUi

==> .symtab
    entry  spndx   value      size   bind   type  other    shndx         name
    [   0]     0   00000000      0   LOC    NULL      0    UND           
    [   1]     1   00000000      0   LOC    FILE      0    ABS           zEvent.cp
    [   2]     0   00000000      0   LOC    SECT      0    .text         .text
    [   3]     0   00000000      0   LOC    SECT      0    .data         .data
    [   4]     0   00000000      0   LOC    SECT      0    .line         .line
    [   5]     0   00000000      0   LOC    SECT      0    .debug        .debug
    [   6]     0   00000000      0   LOC    SECT      0    .sdata        .sdata
    [   7]     0   00000000      0   LOC    SECT      0    .mwcats.text  .mwcats.text
    [   8]    11   00000000      8   LOC    OBJ       0    .sdata        @1
    [   9]    14   00000008      7   LOC    OBJ       0    .sdata        @2
    [  10]    17   00000010      6   LOC    OBJ       0    .sdata        @3
    [  11]    20   00000000     57   LOC    OBJ       0    .data         @4
    [  12]    23   00000018      6   LOC    OBJ       0    .sdata        @5
    [  13]    26   00000020      6   LOC    OBJ       0    .sdata        @6
    [  14]    29   00000028      7   LOC    OBJ       0    .sdata        @7
    [  15]    32   00000030      5   LOC    OBJ       0    .sdata        @8
    [  16]    35   00000038      4   LOC    OBJ       0    .sdata        @9
    [  17]    38   0000003c     36   GLOB   OBJ       0    .data         foo
    [  18]    42   00000000      0   GLOB   NULL      0    UND           sEventTable
    [  19]    54   00000000     20   GLOB   FUNC      0    .text         zEventName__FUi

==> .rela.text
    entry  offset   addend   type name(symbol id)
    [   0] 00000002 00000000    6 sEventTable(18)
    [   1] 0000000a 00000000    4 sEventTable(18)

==> .text

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="zEventName__FUi"  Size=20
00000000: 3C800000  lis      r4,sEventTable@ha
00000004: 5460103A  slwi     r0,r3,2
00000008: 38640000  addi     r3,r4,sEventTable@l
0000000C: 7C63002E  lwzx     r3,r3,r0
00000010: 4E800020  blr

==> .rela.data
    entry  offset   addend   type name(symbol id)
    [   0] 0000005c 00000000    1 @9(16)
    [   1] 00000058 00000000    1 @8(15)
    [   2] 00000054 00000000    1 @7(14)
    [   3] 00000050 00000000    1 @6(13)
    [   4] 0000004c 00000000    1 @5(12)
    [   5] 00000048 00000000    1 @4(11)
    [   6] 00000044 00000000    1 @3(10)
    [   7] 00000040 00000000    1 @2(9)
    [   8] 0000003c 00000000    1 @1(8)

==> .data
@4:
00000000: 7065656E  61736466  616A736B  64666B6C 'peenasdfajskdfkl'
00000010: 61736466  6C6B6173  6A64663B  6C6B6A61 'asdflkasjdf;lkja'
00000020: 733B6C66  6B616473  3B66736B  6A736C6A 's;lfkads;fskjslj'
00000030: 736C646C  6C616432  00000000           'sldllad2....    '
foo:
0000003C:                               00000000 '            ....'
00000040: 00000000  00000000  00000000  00000000 '................'
00000050: 00000000  00000000  00000000  00000000 '................'

==> .sdata
@1:
00000000: 74657374  696E6700                     'testing.        '
@2:
00000008:                     464F4F42  41520000 '        FOOBAR..'
@3:
00000010: 7065656E  31000000                     'peen1...        '
@5:
00000018:                     7065656E  6A000000 '        peenj...'
@6:
00000020: 70656533  31000000                     'pee31...        '
@7:
00000028:                     70656568  68680000 '        peehhh..'
@8:
00000030: 70656E31  00000000                     'pen1....        '
@9:
00000038:                     70653100           '        pe1.    '

==> .rela.mwcats.text
    entry  offset   addend   type name(symbol id)
    [   0] 00000004 00000000    1 zEventName__FUi(19)

==> .mwcats.text
    entry   offset    type size     addr     procexits
    [   0]  00000000     2 0014     00000000         0

==> .comment
MagicWord: CodeWarrior
Comment section version: 10
Compiler version: 2.4.7
CW Compiler generated
Pooled data: true
PPC EABI compliant
FP Support: Hardware
Processor: Unknown CPU
