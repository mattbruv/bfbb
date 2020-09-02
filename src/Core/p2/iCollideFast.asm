Analyzing: C:\Users\MattP.MATTPITTS\Documents\bfbbdecomp\obj\src\Core\p2\iCollideFast.o
Header idenfication: 0x7f, ELF, 32 bit MSB v1
    type:           1, machine:         20
    version: 00000001, entry:     00000000, phoff:  00000000
    shoff:   00000318, flags:     80000000, ehsize:       52, phentsize:  0
    phnum:          0, shentsize:       40, shnum:        12, shstrndx:  10


==> .shstrtab
    [  1]	.text
    [  7]	.line
    [ 13]	.debug
    [ 20]	.mwcats.text
    [ 33]	.rela.line
    [ 44]	.rela.debug
    [ 56]	.rela.mwcats.text
    [ 74]	.symtab
    [ 82]	.strtab
    [ 90]	.shstrtab
    [ 100]	.comment

==> .text [1]: Section Header
    type:    00000001, flags:  00000006
    address: 00000000, offset: 00000034, size: 00000004
    link:    00000000, info:   00000000, alignment: 4, entry size: 0


==> .line [2]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 00000038, size: 0000001c
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .debug [3]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 00000054, size: 000000e0
    link:    00000000, info:   00000000, alignment: 4, entry size: 1


==> .mwcats.text [4]: Section Header
    type:    ca2a82c2, flags:  00000000
    address: 00000000, offset: 00000134, size: 00000008
    link:    00000001, info:   00000000, alignment: 4, entry size: 1


==> .rela.line [5]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 0000013c, size: 0000000c
    link:    00000008, info:   00000002, alignment: 4, entry size: 12


==> .rela.debug [6]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 00000148, size: 00000054
    link:    00000008, info:   00000003, alignment: 4, entry size: 12


==> .rela.mwcats.text [7]: Section Header
    type:    00000004, flags:  00000000
    address: 00000000, offset: 0000019c, size: 0000000c
    link:    00000008, info:   00000004, alignment: 4, entry size: 12


==> .symtab [8]: Section Header
    type:    00000002, flags:  00000000
    address: 00000000, offset: 000001a8, size: 00000070
    link:    00000009, info:   00000006, alignment: 4, entry size: 16


==> .strtab [9]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 00000218, size: 0000002d
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .shstrtab [10]: Section Header
    type:    00000003, flags:  00000000
    address: 00000000, offset: 00000245, size: 0000006d
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .comment [11]: Section Header
    type:    00000001, flags:  00000000
    address: 00000000, offset: 000002b2, size: 00000064
    link:    00000000, info:   00000000, alignment: 1, entry size: 1


==> .strtab
    [  1]	iCollideFast.cp
    [ 17]	iCollideFastInit__FP6xScene

==> .symtab
    entry  spndx   value      size   bind   type  other    shndx         name
    [   0]     0   00000000      0   LOC    NULL      0    UND           
    [   1]     1   00000000      0   LOC    FILE      0    ABS           iCollideFast.cp
    [   2]     0   00000000      0   LOC    SECT      0    .text         .text
    [   3]     0   00000000      0   LOC    SECT      0    .line         .line
    [   4]     0   00000000      0   LOC    SECT      0    .debug        .debug
    [   5]     0   00000000      0   LOC    SECT      0    .mwcats.text  .mwcats.text
    [   6]    17   00000000      4   GLOB   FUNC      0    .text         iCollideFastInit__FP6xScene

==> .text

Hunk:	Kind=HUNK_GLOBAL_CODE     Name="iCollideFastInit__FP6xScene"  Size=4
00000000: 4E800020  blr

==> .rela.mwcats.text
    entry  offset   addend   type name(symbol id)
    [   0] 00000004 00000000    1 iCollideFastInit__FP6xScene(6)

==> .mwcats.text
    entry   offset    type size     addr     procexits
    [   0]  00000000     2 0004     00000000         0

==> .comment
MagicWord: CodeWarrior
Comment section version: 10
Compiler version: 2.4.7
CW Compiler generated
Pooled data: true
PPC EABI compliant
FP Support: Hardware
Processor: Unknown CPU
