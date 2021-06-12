#include <stdio.h>
#include <stdlib.h>

#define BLANK ' '
#define SQRT 'r'

typedef struct {
    unsigned int bit1 : 1; // msb
    unsigned int bit2 : 1;
    unsigned int bit3 : 1;
    unsigned int bit4 : 1;
    unsigned int bit5 : 1;
    unsigned int bit6 : 1;
    unsigned int bit7 : 1;
    unsigned int bit8 : 1; // lsb
} reg;

reg reg1; // accumulator, general-purpose
reg reg2; // general-purpose
reg reg3; // general-purpose
reg reg4; // flag

void assign(reg * regx, unsigned int bit1, unsigned int bit2, unsigned int bit3, 
    unsigned int bit4, unsigned int bit5, unsigned int bit6, unsigned int bit7,  
    unsigned int bit8) {
    regx->bit1 = bit1;
    regx->bit2 = bit2;
    regx->bit3 = bit3;
    regx->bit4 = bit4;
    regx->bit5 = bit5;
    regx->bit6 = bit6;
    regx->bit7 = bit7;
    regx->bit8 = bit8;
}

// operator '+' digunakan hanya untuk print nilai ke stdout
#define to_int(R) ((R.bit1<<7) + (R.bit2<<6) + (R.bit3<<5) + (R.bit4<<4) + (R.bit5<<3) + (R.bit6<<2) + (R.bit7<<1) + (R.bit8))

void print_reg(reg regx) {
    printf("%d", regx.bit1);
    printf("%d", regx.bit2);
    printf("%d", regx.bit3);
    printf("%d", regx.bit4);
    printf("%d", regx.bit5);
    printf("%d", regx.bit6);
    printf("%d", regx.bit7);
    printf("%d", regx.bit8);
    printf("\n");
    printf("%d\n", to_int(regx));
}

#define assign_0(R) assign(&R, 0, 0, 0, 0, 0, 0, 0, 0)
#define assign_1(R) assign(&R, 0, 0, 0, 0, 0, 0, 0, 1)
#define assign_2(R) assign(&R, 0, 0, 0, 0, 0, 0, 1, 0)
#define assign_3(R) assign(&R, 0, 0, 0, 0, 0, 0, 1, 1)
#define assign_4(R) assign(&R, 0, 0, 0, 0, 0, 1, 0, 0)
#define assign_5(R) assign(&R, 0, 0, 0, 0, 0, 1, 0, 1)
#define assign_6(R) assign(&R, 0, 0, 0, 0, 0, 1, 1, 0)
#define assign_7(R) assign(&R, 0, 0, 0, 0, 0, 1, 1, 1)
#define assign_8(R) assign(&R, 0, 0, 0, 0, 1, 0, 0, 0)
#define assign_9(R) assign(&R, 0, 0, 0, 0, 1, 0, 0, 1)
#define assign_10(R) assign(&R, 0, 0, 0, 0, 1, 0, 1, 0)
#define assign_11(R) assign(&R, 0, 0, 0, 0, 1, 0, 1, 1)
#define assign_12(R) assign(&R, 0, 0, 0, 0, 1, 1, 0, 0)
#define assign_13(R) assign(&R, 0, 0, 0, 0, 1, 1, 0, 1)
#define assign_14(R) assign(&R, 0, 0, 0, 0, 1, 1, 1, 0)
#define assign_15(R) assign(&R, 0, 0, 0, 0, 1, 1, 1, 1)
#define assign_16(R) assign(&R, 0, 0, 0, 1, 0, 0, 0, 0)
#define assign_17(R) assign(&R, 0, 0, 0, 1, 0, 0, 0, 1)
#define assign_18(R) assign(&R, 0, 0, 0, 1, 0, 0, 1, 0)
#define assign_19(R) assign(&R, 0, 0, 0, 1, 0, 0, 1, 1)
#define assign_20(R) assign(&R, 0, 0, 0, 1, 0, 1, 0, 0)
#define assign_21(R) assign(&R, 0, 0, 0, 1, 0, 1, 0, 1)
#define assign_22(R) assign(&R, 0, 0, 0, 1, 0, 1, 1, 0)
#define assign_23(R) assign(&R, 0, 0, 0, 1, 0, 1, 1, 1)
#define assign_24(R) assign(&R, 0, 0, 0, 1, 1, 0, 0, 0)
#define assign_25(R) assign(&R, 0, 0, 0, 1, 1, 0, 0, 1)
#define assign_26(R) assign(&R, 0, 0, 0, 1, 1, 0, 1, 0)
#define assign_27(R) assign(&R, 0, 0, 0, 1, 1, 0, 1, 1)
#define assign_28(R) assign(&R, 0, 0, 0, 1, 1, 1, 0, 0)
#define assign_29(R) assign(&R, 0, 0, 0, 1, 1, 1, 0, 1)
#define assign_30(R) assign(&R, 0, 0, 0, 1, 1, 1, 1, 0)
#define assign_31(R) assign(&R, 0, 0, 0, 1, 1, 1, 1, 1)
#define assign_32(R) assign(&R, 0, 0, 1, 0, 0, 0, 0, 0)
#define assign_33(R) assign(&R, 0, 0, 1, 0, 0, 0, 0, 1)
#define assign_34(R) assign(&R, 0, 0, 1, 0, 0, 0, 1, 0)
#define assign_35(R) assign(&R, 0, 0, 1, 0, 0, 0, 1, 1)
#define assign_36(R) assign(&R, 0, 0, 1, 0, 0, 1, 0, 0)
#define assign_37(R) assign(&R, 0, 0, 1, 0, 0, 1, 0, 1)
#define assign_38(R) assign(&R, 0, 0, 1, 0, 0, 1, 1, 0)
#define assign_39(R) assign(&R, 0, 0, 1, 0, 0, 1, 1, 1)
#define assign_40(R) assign(&R, 0, 0, 1, 0, 1, 0, 0, 0)
#define assign_41(R) assign(&R, 0, 0, 1, 0, 1, 0, 0, 1)
#define assign_42(R) assign(&R, 0, 0, 1, 0, 1, 0, 1, 0)
#define assign_43(R) assign(&R, 0, 0, 1, 0, 1, 0, 1, 1)
#define assign_44(R) assign(&R, 0, 0, 1, 0, 1, 1, 0, 0)
#define assign_45(R) assign(&R, 0, 0, 1, 0, 1, 1, 0, 1)
#define assign_46(R) assign(&R, 0, 0, 1, 0, 1, 1, 1, 0)
#define assign_47(R) assign(&R, 0, 0, 1, 0, 1, 1, 1, 1)
#define assign_48(R) assign(&R, 0, 0, 1, 1, 0, 0, 0, 0)
#define assign_49(R) assign(&R, 0, 0, 1, 1, 0, 0, 0, 1)
#define assign_50(R) assign(&R, 0, 0, 1, 1, 0, 0, 1, 0)
#define assign_51(R) assign(&R, 0, 0, 1, 1, 0, 0, 1, 1)
#define assign_52(R) assign(&R, 0, 0, 1, 1, 0, 1, 0, 0)
#define assign_53(R) assign(&R, 0, 0, 1, 1, 0, 1, 0, 1)
#define assign_54(R) assign(&R, 0, 0, 1, 1, 0, 1, 1, 0)
#define assign_55(R) assign(&R, 0, 0, 1, 1, 0, 1, 1, 1)
#define assign_56(R) assign(&R, 0, 0, 1, 1, 1, 0, 0, 0)
#define assign_57(R) assign(&R, 0, 0, 1, 1, 1, 0, 0, 1)
#define assign_58(R) assign(&R, 0, 0, 1, 1, 1, 0, 1, 0)
#define assign_59(R) assign(&R, 0, 0, 1, 1, 1, 0, 1, 1)
#define assign_60(R) assign(&R, 0, 0, 1, 1, 1, 1, 0, 0)
#define assign_61(R) assign(&R, 0, 0, 1, 1, 1, 1, 0, 1)
#define assign_62(R) assign(&R, 0, 0, 1, 1, 1, 1, 1, 0)
#define assign_63(R) assign(&R, 0, 0, 1, 1, 1, 1, 1, 1)
#define assign_64(R) assign(&R, 0, 1, 0, 0, 0, 0, 0, 0)
#define assign_65(R) assign(&R, 0, 1, 0, 0, 0, 0, 0, 1)
#define assign_66(R) assign(&R, 0, 1, 0, 0, 0, 0, 1, 0)
#define assign_67(R) assign(&R, 0, 1, 0, 0, 0, 0, 1, 1)
#define assign_68(R) assign(&R, 0, 1, 0, 0, 0, 1, 0, 0)
#define assign_69(R) assign(&R, 0, 1, 0, 0, 0, 1, 0, 1)
#define assign_70(R) assign(&R, 0, 1, 0, 0, 0, 1, 1, 0)
#define assign_71(R) assign(&R, 0, 1, 0, 0, 0, 1, 1, 1)
#define assign_72(R) assign(&R, 0, 1, 0, 0, 1, 0, 0, 0)
#define assign_73(R) assign(&R, 0, 1, 0, 0, 1, 0, 0, 1)
#define assign_74(R) assign(&R, 0, 1, 0, 0, 1, 0, 1, 0)
#define assign_75(R) assign(&R, 0, 1, 0, 0, 1, 0, 1, 1)
#define assign_76(R) assign(&R, 0, 1, 0, 0, 1, 1, 0, 0)
#define assign_77(R) assign(&R, 0, 1, 0, 0, 1, 1, 0, 1)
#define assign_78(R) assign(&R, 0, 1, 0, 0, 1, 1, 1, 0)
#define assign_79(R) assign(&R, 0, 1, 0, 0, 1, 1, 1, 1)
#define assign_80(R) assign(&R, 0, 1, 0, 1, 0, 0, 0, 0)
#define assign_81(R) assign(&R, 0, 1, 0, 1, 0, 0, 0, 1)
#define assign_82(R) assign(&R, 0, 1, 0, 1, 0, 0, 1, 0)
#define assign_83(R) assign(&R, 0, 1, 0, 1, 0, 0, 1, 1)
#define assign_84(R) assign(&R, 0, 1, 0, 1, 0, 1, 0, 0)
#define assign_85(R) assign(&R, 0, 1, 0, 1, 0, 1, 0, 1)
#define assign_86(R) assign(&R, 0, 1, 0, 1, 0, 1, 1, 0)
#define assign_87(R) assign(&R, 0, 1, 0, 1, 0, 1, 1, 1)
#define assign_88(R) assign(&R, 0, 1, 0, 1, 1, 0, 0, 0)
#define assign_89(R) assign(&R, 0, 1, 0, 1, 1, 0, 0, 1)
#define assign_90(R) assign(&R, 0, 1, 0, 1, 1, 0, 1, 0)
#define assign_91(R) assign(&R, 0, 1, 0, 1, 1, 0, 1, 1)
#define assign_92(R) assign(&R, 0, 1, 0, 1, 1, 1, 0, 0)
#define assign_93(R) assign(&R, 0, 1, 0, 1, 1, 1, 0, 1)
#define assign_94(R) assign(&R, 0, 1, 0, 1, 1, 1, 1, 0)
#define assign_95(R) assign(&R, 0, 1, 0, 1, 1, 1, 1, 1)
#define assign_96(R) assign(&R, 0, 1, 1, 0, 0, 0, 0, 0)
#define assign_97(R) assign(&R, 0, 1, 1, 0, 0, 0, 0, 1)
#define assign_98(R) assign(&R, 0, 1, 1, 0, 0, 0, 1, 0)
#define assign_99(R) assign(&R, 0, 1, 1, 0, 0, 0, 1, 1)
#define assign_100(R) assign(&R, 0, 1, 1, 0, 0, 1, 0, 0)
#define assign_101(R) assign(&R, 0, 1, 1, 0, 0, 1, 0, 1)
#define assign_102(R) assign(&R, 0, 1, 1, 0, 0, 1, 1, 0)
#define assign_103(R) assign(&R, 0, 1, 1, 0, 0, 1, 1, 1)
#define assign_104(R) assign(&R, 0, 1, 1, 0, 1, 0, 0, 0)
#define assign_105(R) assign(&R, 0, 1, 1, 0, 1, 0, 0, 1)
#define assign_106(R) assign(&R, 0, 1, 1, 0, 1, 0, 1, 0)
#define assign_107(R) assign(&R, 0, 1, 1, 0, 1, 0, 1, 1)
#define assign_108(R) assign(&R, 0, 1, 1, 0, 1, 1, 0, 0)
#define assign_109(R) assign(&R, 0, 1, 1, 0, 1, 1, 0, 1)
#define assign_110(R) assign(&R, 0, 1, 1, 0, 1, 1, 1, 0)
#define assign_111(R) assign(&R, 0, 1, 1, 0, 1, 1, 1, 1)
#define assign_112(R) assign(&R, 0, 1, 1, 1, 0, 0, 0, 0)
#define assign_113(R) assign(&R, 0, 1, 1, 1, 0, 0, 0, 1)
#define assign_114(R) assign(&R, 0, 1, 1, 1, 0, 0, 1, 0)
#define assign_115(R) assign(&R, 0, 1, 1, 1, 0, 0, 1, 1)
#define assign_116(R) assign(&R, 0, 1, 1, 1, 0, 1, 0, 0)
#define assign_117(R) assign(&R, 0, 1, 1, 1, 0, 1, 0, 1)
#define assign_118(R) assign(&R, 0, 1, 1, 1, 0, 1, 1, 0)
#define assign_119(R) assign(&R, 0, 1, 1, 1, 0, 1, 1, 1)
#define assign_120(R) assign(&R, 0, 1, 1, 1, 1, 0, 0, 0)
#define assign_121(R) assign(&R, 0, 1, 1, 1, 1, 0, 0, 1)
#define assign_122(R) assign(&R, 0, 1, 1, 1, 1, 0, 1, 0)
#define assign_123(R) assign(&R, 0, 1, 1, 1, 1, 0, 1, 1)
#define assign_124(R) assign(&R, 0, 1, 1, 1, 1, 1, 0, 0)
#define assign_125(R) assign(&R, 0, 1, 1, 1, 1, 1, 0, 1)
#define assign_126(R) assign(&R, 0, 1, 1, 1, 1, 1, 1, 0)
#define assign_127(R) assign(&R, 0, 1, 1, 1, 1, 1, 1, 1)
#define assign_128(R) assign(&R, 1, 0, 0, 0, 0, 0, 0, 0)
#define assign_129(R) assign(&R, 1, 0, 0, 0, 0, 0, 0, 1)
#define assign_130(R) assign(&R, 1, 0, 0, 0, 0, 0, 1, 0)
#define assign_131(R) assign(&R, 1, 0, 0, 0, 0, 0, 1, 1)
#define assign_132(R) assign(&R, 1, 0, 0, 0, 0, 1, 0, 0)
#define assign_133(R) assign(&R, 1, 0, 0, 0, 0, 1, 0, 1)
#define assign_134(R) assign(&R, 1, 0, 0, 0, 0, 1, 1, 0)
#define assign_135(R) assign(&R, 1, 0, 0, 0, 0, 1, 1, 1)
#define assign_136(R) assign(&R, 1, 0, 0, 0, 1, 0, 0, 0)
#define assign_137(R) assign(&R, 1, 0, 0, 0, 1, 0, 0, 1)
#define assign_138(R) assign(&R, 1, 0, 0, 0, 1, 0, 1, 0)
#define assign_139(R) assign(&R, 1, 0, 0, 0, 1, 0, 1, 1)
#define assign_140(R) assign(&R, 1, 0, 0, 0, 1, 1, 0, 0)
#define assign_141(R) assign(&R, 1, 0, 0, 0, 1, 1, 0, 1)
#define assign_142(R) assign(&R, 1, 0, 0, 0, 1, 1, 1, 0)
#define assign_143(R) assign(&R, 1, 0, 0, 0, 1, 1, 1, 1)
#define assign_144(R) assign(&R, 1, 0, 0, 1, 0, 0, 0, 0)
#define assign_145(R) assign(&R, 1, 0, 0, 1, 0, 0, 0, 1)
#define assign_146(R) assign(&R, 1, 0, 0, 1, 0, 0, 1, 0)
#define assign_147(R) assign(&R, 1, 0, 0, 1, 0, 0, 1, 1)
#define assign_148(R) assign(&R, 1, 0, 0, 1, 0, 1, 0, 0)
#define assign_149(R) assign(&R, 1, 0, 0, 1, 0, 1, 0, 1)
#define assign_150(R) assign(&R, 1, 0, 0, 1, 0, 1, 1, 0)
#define assign_151(R) assign(&R, 1, 0, 0, 1, 0, 1, 1, 1)
#define assign_152(R) assign(&R, 1, 0, 0, 1, 1, 0, 0, 0)
#define assign_153(R) assign(&R, 1, 0, 0, 1, 1, 0, 0, 1)
#define assign_154(R) assign(&R, 1, 0, 0, 1, 1, 0, 1, 0)
#define assign_155(R) assign(&R, 1, 0, 0, 1, 1, 0, 1, 1)
#define assign_156(R) assign(&R, 1, 0, 0, 1, 1, 1, 0, 0)
#define assign_157(R) assign(&R, 1, 0, 0, 1, 1, 1, 0, 1)
#define assign_158(R) assign(&R, 1, 0, 0, 1, 1, 1, 1, 0)
#define assign_159(R) assign(&R, 1, 0, 0, 1, 1, 1, 1, 1)
#define assign_160(R) assign(&R, 1, 0, 1, 0, 0, 0, 0, 0)
#define assign_161(R) assign(&R, 1, 0, 1, 0, 0, 0, 0, 1)
#define assign_162(R) assign(&R, 1, 0, 1, 0, 0, 0, 1, 0)
#define assign_163(R) assign(&R, 1, 0, 1, 0, 0, 0, 1, 1)
#define assign_164(R) assign(&R, 1, 0, 1, 0, 0, 1, 0, 0)
#define assign_165(R) assign(&R, 1, 0, 1, 0, 0, 1, 0, 1)
#define assign_166(R) assign(&R, 1, 0, 1, 0, 0, 1, 1, 0)
#define assign_167(R) assign(&R, 1, 0, 1, 0, 0, 1, 1, 1)
#define assign_168(R) assign(&R, 1, 0, 1, 0, 1, 0, 0, 0)
#define assign_169(R) assign(&R, 1, 0, 1, 0, 1, 0, 0, 1)
#define assign_170(R) assign(&R, 1, 0, 1, 0, 1, 0, 1, 0)
#define assign_171(R) assign(&R, 1, 0, 1, 0, 1, 0, 1, 1)
#define assign_172(R) assign(&R, 1, 0, 1, 0, 1, 1, 0, 0)
#define assign_173(R) assign(&R, 1, 0, 1, 0, 1, 1, 0, 1)
#define assign_174(R) assign(&R, 1, 0, 1, 0, 1, 1, 1, 0)
#define assign_175(R) assign(&R, 1, 0, 1, 0, 1, 1, 1, 1)
#define assign_176(R) assign(&R, 1, 0, 1, 1, 0, 0, 0, 0)
#define assign_177(R) assign(&R, 1, 0, 1, 1, 0, 0, 0, 1)
#define assign_178(R) assign(&R, 1, 0, 1, 1, 0, 0, 1, 0)
#define assign_179(R) assign(&R, 1, 0, 1, 1, 0, 0, 1, 1)
#define assign_180(R) assign(&R, 1, 0, 1, 1, 0, 1, 0, 0)
#define assign_181(R) assign(&R, 1, 0, 1, 1, 0, 1, 0, 1)
#define assign_182(R) assign(&R, 1, 0, 1, 1, 0, 1, 1, 0)
#define assign_183(R) assign(&R, 1, 0, 1, 1, 0, 1, 1, 1)
#define assign_184(R) assign(&R, 1, 0, 1, 1, 1, 0, 0, 0)
#define assign_185(R) assign(&R, 1, 0, 1, 1, 1, 0, 0, 1)
#define assign_186(R) assign(&R, 1, 0, 1, 1, 1, 0, 1, 0)
#define assign_187(R) assign(&R, 1, 0, 1, 1, 1, 0, 1, 1)
#define assign_188(R) assign(&R, 1, 0, 1, 1, 1, 1, 0, 0)
#define assign_189(R) assign(&R, 1, 0, 1, 1, 1, 1, 0, 1)
#define assign_190(R) assign(&R, 1, 0, 1, 1, 1, 1, 1, 0)
#define assign_191(R) assign(&R, 1, 0, 1, 1, 1, 1, 1, 1)
#define assign_192(R) assign(&R, 1, 1, 0, 0, 0, 0, 0, 0)
#define assign_193(R) assign(&R, 1, 1, 0, 0, 0, 0, 0, 1)
#define assign_194(R) assign(&R, 1, 1, 0, 0, 0, 0, 1, 0)
#define assign_195(R) assign(&R, 1, 1, 0, 0, 0, 0, 1, 1)
#define assign_196(R) assign(&R, 1, 1, 0, 0, 0, 1, 0, 0)
#define assign_197(R) assign(&R, 1, 1, 0, 0, 0, 1, 0, 1)
#define assign_198(R) assign(&R, 1, 1, 0, 0, 0, 1, 1, 0)
#define assign_199(R) assign(&R, 1, 1, 0, 0, 0, 1, 1, 1)
#define assign_200(R) assign(&R, 1, 1, 0, 0, 1, 0, 0, 0)
#define assign_201(R) assign(&R, 1, 1, 0, 0, 1, 0, 0, 1)
#define assign_202(R) assign(&R, 1, 1, 0, 0, 1, 0, 1, 0)
#define assign_203(R) assign(&R, 1, 1, 0, 0, 1, 0, 1, 1)
#define assign_204(R) assign(&R, 1, 1, 0, 0, 1, 1, 0, 0)
#define assign_205(R) assign(&R, 1, 1, 0, 0, 1, 1, 0, 1)
#define assign_206(R) assign(&R, 1, 1, 0, 0, 1, 1, 1, 0)
#define assign_207(R) assign(&R, 1, 1, 0, 0, 1, 1, 1, 1)
#define assign_208(R) assign(&R, 1, 1, 0, 1, 0, 0, 0, 0)
#define assign_209(R) assign(&R, 1, 1, 0, 1, 0, 0, 0, 1)
#define assign_210(R) assign(&R, 1, 1, 0, 1, 0, 0, 1, 0)
#define assign_211(R) assign(&R, 1, 1, 0, 1, 0, 0, 1, 1)
#define assign_212(R) assign(&R, 1, 1, 0, 1, 0, 1, 0, 0)
#define assign_213(R) assign(&R, 1, 1, 0, 1, 0, 1, 0, 1)
#define assign_214(R) assign(&R, 1, 1, 0, 1, 0, 1, 1, 0)
#define assign_215(R) assign(&R, 1, 1, 0, 1, 0, 1, 1, 1)
#define assign_216(R) assign(&R, 1, 1, 0, 1, 1, 0, 0, 0)
#define assign_217(R) assign(&R, 1, 1, 0, 1, 1, 0, 0, 1)
#define assign_218(R) assign(&R, 1, 1, 0, 1, 1, 0, 1, 0)
#define assign_219(R) assign(&R, 1, 1, 0, 1, 1, 0, 1, 1)
#define assign_220(R) assign(&R, 1, 1, 0, 1, 1, 1, 0, 0)
#define assign_221(R) assign(&R, 1, 1, 0, 1, 1, 1, 0, 1)
#define assign_222(R) assign(&R, 1, 1, 0, 1, 1, 1, 1, 0)
#define assign_223(R) assign(&R, 1, 1, 0, 1, 1, 1, 1, 1)
#define assign_224(R) assign(&R, 1, 1, 1, 0, 0, 0, 0, 0)
#define assign_225(R) assign(&R, 1, 1, 1, 0, 0, 0, 0, 1)
#define assign_226(R) assign(&R, 1, 1, 1, 0, 0, 0, 1, 0)
#define assign_227(R) assign(&R, 1, 1, 1, 0, 0, 0, 1, 1)
#define assign_228(R) assign(&R, 1, 1, 1, 0, 0, 1, 0, 0)
#define assign_229(R) assign(&R, 1, 1, 1, 0, 0, 1, 0, 1)
#define assign_230(R) assign(&R, 1, 1, 1, 0, 0, 1, 1, 0)
#define assign_231(R) assign(&R, 1, 1, 1, 0, 0, 1, 1, 1)
#define assign_232(R) assign(&R, 1, 1, 1, 0, 1, 0, 0, 0)
#define assign_233(R) assign(&R, 1, 1, 1, 0, 1, 0, 0, 1)
#define assign_234(R) assign(&R, 1, 1, 1, 0, 1, 0, 1, 0)
#define assign_235(R) assign(&R, 1, 1, 1, 0, 1, 0, 1, 1)
#define assign_236(R) assign(&R, 1, 1, 1, 0, 1, 1, 0, 0)
#define assign_237(R) assign(&R, 1, 1, 1, 0, 1, 1, 0, 1)
#define assign_238(R) assign(&R, 1, 1, 1, 0, 1, 1, 1, 0)
#define assign_239(R) assign(&R, 1, 1, 1, 0, 1, 1, 1, 1)
#define assign_240(R) assign(&R, 1, 1, 1, 1, 0, 0, 0, 0)
#define assign_241(R) assign(&R, 1, 1, 1, 1, 0, 0, 0, 1)
#define assign_242(R) assign(&R, 1, 1, 1, 1, 0, 0, 1, 0)
#define assign_243(R) assign(&R, 1, 1, 1, 1, 0, 0, 1, 1)
#define assign_244(R) assign(&R, 1, 1, 1, 1, 0, 1, 0, 0)
#define assign_245(R) assign(&R, 1, 1, 1, 1, 0, 1, 0, 1)
#define assign_246(R) assign(&R, 1, 1, 1, 1, 0, 1, 1, 0)
#define assign_247(R) assign(&R, 1, 1, 1, 1, 0, 1, 1, 1)
#define assign_248(R) assign(&R, 1, 1, 1, 1, 1, 0, 0, 0)
#define assign_249(R) assign(&R, 1, 1, 1, 1, 1, 0, 0, 1)
#define assign_250(R) assign(&R, 1, 1, 1, 1, 1, 0, 1, 0)
#define assign_251(R) assign(&R, 1, 1, 1, 1, 1, 0, 1, 1)
#define assign_252(R) assign(&R, 1, 1, 1, 1, 1, 1, 0, 0)
#define assign_253(R) assign(&R, 1, 1, 1, 1, 1, 1, 0, 1)
#define assign_254(R) assign(&R, 1, 1, 1, 1, 1, 1, 1, 0)
#define assign_255(R) assign(&R, 1, 1, 1, 1, 1, 1, 1, 1)

#define is_zero(R) (!(R.bit1 || R.bit2 || R.bit3 || R.bit4 || R.bit5 || R.bit6 || R.bit7 || R.bit8))
#define is_max(R) (R.bit1 && R.bit2 && R.bit3 && R.bit4 && R.bit5 && R.bit6 && R.bit7 && R.bit8)

#define eq(R1, R2) (R1.bit1 == R2.bit1 && \
                    R1.bit2 == R2.bit2 && \
                    R1.bit3 == R2.bit3 && \
                    R1.bit4 == R2.bit4 && \
                    R1.bit5 == R2.bit5 && \
                    R1.bit6 == R2.bit6 && \
                    R1.bit7 == R2.bit7 && \
                    R1.bit8 == R2.bit8)

void lt(reg rega, reg regb) {
    if (rega.bit1 == regb.bit1) {
        if (rega.bit2 == regb.bit2) {
            if (rega.bit3 == regb.bit3) {
                if (rega.bit4 == regb.bit4) {
                    if (rega.bit5 == regb.bit5) {
                        if (rega.bit6 == regb.bit6) {
                            if (rega.bit7 == regb.bit7) {
                                reg4.bit1 = rega.bit8 < regb.bit8;
                            } else 
                                reg4.bit1 = rega.bit7 < regb.bit7;
                        } else 
                            reg4.bit1 = rega.bit6 < regb.bit6;
                    } else 
                        reg4.bit1 = rega.bit5 < regb.bit5;
                } else 
                    reg4.bit1 = rega.bit4 < regb.bit4;
            } else 
                reg4.bit1 = rega.bit3 < regb.bit3;
        } else 
            reg4.bit1 = rega.bit2 < regb.bit2;
    } else 
        reg4.bit1 = rega.bit1 < regb.bit1;
}

void le(reg rega, reg regb) {
    if (rega.bit1 == regb.bit1) {
        if (rega.bit2 == regb.bit2) {
            if (rega.bit3 == regb.bit3) {
                if (rega.bit4 == regb.bit4) {
                    if (rega.bit5 == regb.bit5) {
                        if (rega.bit6 == regb.bit6) {
                            if (rega.bit7 == regb.bit7) {
                                reg4.bit1 = rega.bit8 <= regb.bit8;
                            } else 
                                reg4.bit1 = rega.bit7 < regb.bit7;
                        } else 
                            reg4.bit1 = rega.bit6 < regb.bit6;
                    } else 
                        reg4.bit1 = rega.bit5 < regb.bit5;
                } else 
                    reg4.bit1 = rega.bit4 < regb.bit4;
            } else 
                reg4.bit1 = rega.bit3 < regb.bit3;
        } else 
            reg4.bit1 = rega.bit2 < regb.bit2;
    } else 
        reg4.bit1 = rega.bit1 < regb.bit1;
}

void gt(reg rega, reg regb) {
    le(regb, rega);
}

void ge(reg rega, reg regb) {
    lt(regb, rega);
}

// void bit_xor(unsigned int * bitx, unsigned int bit1, unsigned int bit2) {
//     *bitx = (bit1 || bit2) && !(bit2 && bit2);
// }

void and(reg rega, reg regb, reg * rego) {
    rego->bit1 = rega.bit1 && regb.bit1;
    rego->bit2 = rega.bit2 && regb.bit2;
    rego->bit3 = rega.bit3 && regb.bit3;
    rego->bit4 = rega.bit4 && regb.bit4;
    rego->bit5 = rega.bit5 && regb.bit5;
    rego->bit6 = rega.bit6 && regb.bit6;
    rego->bit7 = rega.bit7 && regb.bit7;
    rego->bit8 = rega.bit8 && regb.bit8;
}

void or(reg rega, reg regb, reg * rego) {
    rego->bit1 = rega.bit1 || regb.bit1;
    rego->bit2 = rega.bit2 || regb.bit2;
    rego->bit3 = rega.bit3 || regb.bit3;
    rego->bit4 = rega.bit4 || regb.bit4;
    rego->bit5 = rega.bit5 || regb.bit5;
    rego->bit6 = rega.bit6 || regb.bit6;
    rego->bit7 = rega.bit7 || regb.bit7;
    rego->bit8 = rega.bit8 || regb.bit8;
}

void xor(reg rega, reg regb, reg * rego) {
    rego->bit1 = rega.bit1 != regb.bit1;
    rego->bit2 = rega.bit2 != regb.bit2;
    rego->bit3 = rega.bit3 != regb.bit3;
    rego->bit4 = rega.bit4 != regb.bit4;
    rego->bit5 = rega.bit5 != regb.bit5;
    rego->bit6 = rega.bit6 != regb.bit6;
    rego->bit7 = rega.bit7 != regb.bit7;
    rego->bit8 = rega.bit8 != regb.bit8;
}

void not(reg regin, reg * regout) {
    regout->bit1 = !regin.bit1;
    regout->bit2 = !regin.bit2;
    regout->bit3 = !regin.bit3;
    regout->bit4 = !regin.bit4;
    regout->bit5 = !regin.bit5;
    regout->bit6 = !regin.bit6;
    regout->bit7 = !regin.bit7;
    regout->bit8 = !regin.bit8;
}

void cpy(reg regin, reg * regout) {
    regout->bit1 = regin.bit1;
    regout->bit2 = regin.bit2;
    regout->bit3 = regin.bit3;
    regout->bit4 = regin.bit4;
    regout->bit5 = regin.bit5;
    regout->bit6 = regin.bit6;
    regout->bit7 = regin.bit7;
    regout->bit8 = regin.bit8;
}

void incr(reg* regx) {
    if (regx->bit8) { // ada carry
        if (regx->bit7) {
            if (regx->bit6) {
                if (regx->bit5) {
                    if (regx->bit4) {
                        if (regx->bit3) {
                            if (regx->bit2) {
                                regx->bit1 = !regx->bit1;
                            }
                            regx->bit2 = !regx->bit2;
                        }
                        regx->bit3 = !regx->bit3;
                    }
                    regx->bit4 = !regx->bit4;
                }
                regx->bit5 = !regx->bit5;
            }
            regx->bit6 = !regx->bit6;
        }
        regx->bit7 = !regx->bit7;
    } 
    regx->bit8 = !regx->bit8;
}

void decr(reg* regx) {
    if (!regx->bit8) { // ada carry
        if (!regx->bit7) {
            if (!regx->bit6) {
                if (!regx->bit5) {
                    if (!regx->bit4) {
                        if (!regx->bit3) {
                            if (!regx->bit2) {
                                regx->bit1 = !regx->bit1;
                            }
                            regx->bit2 = !regx->bit2;
                        }
                        regx->bit3 = !regx->bit3;
                    }
                    regx->bit4 = !regx->bit4;
                }
                regx->bit5 = !regx->bit5;
            }
            regx->bit6 = !regx->bit6;
        }
        regx->bit7 = !regx->bit7;
    } 
    regx->bit8 = !regx->bit8;
}

void shl(reg * rega, reg fac) {
    if (!is_zero(fac)) {
        rega->bit1 = rega->bit2;
        rega->bit2 = rega->bit3;
        rega->bit3 = rega->bit4;
        rega->bit4 = rega->bit5;
        rega->bit5 = rega->bit6;
        rega->bit6 = rega->bit7;
        rega->bit7 = rega->bit8;
        rega->bit8 = 0;
        decr(&fac);
        shl(rega, fac);
    } 
}

void shr(reg * rega, reg fac) {
    if (!is_zero(fac)) {
        rega->bit8 = rega->bit7;
        rega->bit7 = rega->bit6;
        rega->bit6 = rega->bit5;
        rega->bit5 = rega->bit4;
        rega->bit4 = rega->bit3;
        rega->bit3 = rega->bit2;
        rega->bit2 = rega->bit1;
        rega->bit1 = 0;
        decr(&fac);
        shr(rega, fac);
    } 
}

void full_add(reg rega, reg regb, reg * sum) {
    sum->bit7 = (rega.bit8 && regb.bit8); // put carry first
    sum->bit8 = rega.bit8 != regb.bit8; // a xor b

    sum->bit6 = (rega.bit7 && regb.bit7) || (rega.bit7 || regb.bit7) && (sum->bit7); // (a and b) or (a or b) and carry
    sum->bit7 = rega.bit7 != regb.bit7 != sum->bit7; // a xor b xor carry 

    sum->bit5 = (rega.bit6 && regb.bit6) || (rega.bit6 || regb.bit6) && (sum->bit6);
    sum->bit6 = rega.bit6 != regb.bit6 != sum->bit6;

    sum->bit4 = (rega.bit5 && regb.bit5) || (rega.bit5 || regb.bit5) && (sum->bit5);
    sum->bit5 = rega.bit5 != regb.bit5 != sum->bit5;

    sum->bit3 = (rega.bit4 && regb.bit4) || (rega.bit4 || regb.bit4) && (sum->bit4);
    sum->bit4 = rega.bit4 != regb.bit4 != sum->bit4;

    sum->bit2 = (rega.bit3 && regb.bit3) || (rega.bit3 || regb.bit3) && (sum->bit3);
    sum->bit3 = rega.bit3 != regb.bit3 != sum->bit3;

    sum->bit1 = (rega.bit2 && regb.bit2) || (rega.bit2 || regb.bit2) && (sum->bit2);
    sum->bit2 = rega.bit2 != regb.bit2 != sum->bit2;

    sum->bit1 = rega.bit1 != regb.bit1 != sum->bit1;
}

void subtract(reg rega, reg regb, reg * diff) {
    assign_1(*diff);                // diff = 1
    not(regb, &regb);               // regb = ~regb
    full_add(*diff, rega, diff);    // diff = diff + rega
    full_add(*diff, regb, diff);    // diff = diff + regb
}

void mul(reg rega, reg regb, reg * res){
    assign_0(*res);                 // res = 0
    if (is_zero(rega) || is_zero(regb)) return;

    loop:                           // repeat:
        full_add(*res, rega, res);  //      res = res + rega
        decr(&regb);                //      regb--
    if (!is_zero(regb)) goto loop;  // until: regb == 0
}

void divs(reg rega, reg regb, reg * res) {
    assign_0(*res);                     // res = 0
    // asumsi selalu regb != 0
    
    loop:
        lt(rega, regb);                 // test rega < regb
        if (reg4.bit1) goto exit;       // if flag set, break
        subtract(rega, regb, &rega);    // rega = rega - regb
        incr(res);                      // res++
        goto loop;

    exit: return;
}

void mods(reg rega, reg regb, reg * res) {
    loop:
        lt(rega, regb);                 // test rega < regb
        if (reg4.bit1) goto exit;       // if flag set, break
        subtract(rega, regb, &rega);    // rega = rega - regb
        goto loop;
    exit:
        cpy(rega, res);                 // res = rega
}

void pows(reg rega, reg regb, reg * res) {
    assign_1(*res);                 // res = 1
    if (is_zero(rega) || is_zero(regb)) return;

    loop:                           // repeat:
        mul(*res, rega, res);       //      res = res * rega
        decr(&regb);                //      regb--
    if (!is_zero(regb)) goto loop;  // until: regb == 0
}

void sqrts(reg rega, reg temp, reg * res) {
    assign_0(*res);

    mul(*res, *res, &temp);

    loop:
        if (eq(temp, rega)) {
            goto exit;
        } 
        gt(temp, rega);
        if (reg4.bit1) {
            decr(res);
            goto exit;
        }
        incr(res);
        mul(*res, *res, &temp);
        if (is_zero(temp)) {    // ada overflow ketika res = 16,
            decr(res);          // looping dihentikan dengan res = 15;
            goto exit;
        }
        goto loop;
    exit: return;
}

void digit_to_reg(char c, reg * reg) {
    // asumsi : '0' < c < '9'
    switch (c)
    {
    case '0':
        assign_0(*reg);
        break;
    case '1':
        assign_1(*reg);
        break;
    case '2':
        assign_2(*reg);
        break;
    case '3':
        assign_3(*reg);
        break;
    case '4':
        assign_4(*reg);
        break;
    case '5':
        assign_5(*reg);
        break;
    case '6':
        assign_6(*reg);
        break;
    case '7':
        assign_7(*reg);
        break;
    case '8':
        assign_8(*reg);
        break;
    case '9':
        assign_9(*reg);
        break;
    default:
        break;
    }
}

void insert_digit(reg rega, char c, reg * regout) {
    cpy(rega, regout);                  // regout = rega
    assign_10(rega);                    // rega = 10
    mul(*regout, rega, regout);         // regout = regout * rega
    digit_to_reg(c, &rega);             // rega = int(c)
    full_add(*regout, rega, regout);    // regout = regout + rega
}

void set_operator(char c) {
    switch (c)
    {
    case '+':
        reg4.bit2 = 0;
        reg4.bit3 = 0;
        reg4.bit4 = 0;
        reg4.bit5 = 0;
        break;
    case '-':
        reg4.bit2 = 0;
        reg4.bit3 = 0;
        reg4.bit4 = 1;
        reg4.bit5 = 0;
        break;
    case '*':
        reg4.bit2 = 0;
        reg4.bit3 = 1;
        reg4.bit4 = 0;
        reg4.bit5 = 0;
        break;
    case '/':
        reg4.bit2 = 0;
        reg4.bit3 = 1;
        reg4.bit4 = 1;
        reg4.bit5 = 0;
        break;
    case '%':
        reg4.bit2 = 1;
        reg4.bit3 = 0;
        reg4.bit4 = 0;
        reg4.bit5 = 0;
        break;
    case '^':
        // reg4.bit2 = 1;
        // reg4.bit3 = 0;
        // reg4.bit4 = 1;
        reg4.bit5 = 1;
        break;
    // case 'r':
    //     reg4.bit2 = 1;
    //     reg4.bit3 = 1;
    //     reg4.bit4 = 0;
    //     break;
    default:
        break;
    }
}

#define is_add (!reg4.bit2 && !reg4.bit3 && !reg4.bit4)
#define is_sub (!reg4.bit2 && !reg4.bit3 && reg4.bit4)
#define is_mul (!reg4.bit2 && reg4.bit3 && !reg4.bit4)
#define is_div (!reg4.bit2 && reg4.bit3 && reg4.bit4)
#define is_mod (reg4.bit2 && !reg4.bit3 && !reg4.bit4)
#define is_pow (reg4.bit5)
// #define is_pow (reg4.bit2 && !reg4.bit3 && reg4.bit4)
// #define is_sqr (reg4.bit2 && reg4.bit3 && !reg4.bit4)

void debug() {
    printf("=== DEBUG ===\n");
                print_reg(reg1);
                print_reg(reg2);
                print_reg(reg3);
}

int main(int argc, char* argv[]){
    
    FILE *file = fopen(argv[1], "r");
    char c;

    if (file == NULL) {
        printf("File not found!\n");
        exit(1);
    }

    assign_0(reg1);

    while ((c = fgetc(file)) != BLANK && c != EOF) {
        insert_digit(reg1, c, &reg1);
    }

    cpy(reg1, &reg3);

    while ((c = fgetc(file)) != EOF) {
        while (c == BLANK && c != EOF) c = fgetc(file); // skip blank
        if (c != EOF) {
            set_operator(c);
            c = fgetc(file);
            while (c == BLANK && c != EOF) c = fgetc(file); // skip blank
            if (c != EOF) {
                if (is_pow) goto pow_calc;
                assign_0(reg3);
                if (c == 'r') goto sqrt_calc; // kalo ketemu 'r'
                while (c != BLANK && c != EOF) {
                    insert_digit(reg3, c, &reg3);
                    c = fgetc(file);
                }
                back_from_jump:
                cpy(reg1, &reg2);
                if (is_add) {
                    full_add(reg1, reg3, &reg1);
                } 
                else if (is_sub) {
                    subtract(reg1, reg3, &reg1);
                } 
                else if (is_mul) {
                    mul(reg1, reg3, &reg1);
                }
                else if (is_div) {
                    divs(reg1, reg3, &reg1);
                } 
                else if (is_mod) {
                    mods(reg1, reg3, &reg1);
                }
            }
        }
    }

    // tampilkan hasil
    print_reg(reg1);
    exit(0);

    // segmen kode di bawah dijalankan ketika pembacaan 'r'
    sqrt_calc:
        while ((c = fgetc(file)) != BLANK && c != EOF) {
            insert_digit(reg3, c, &reg3);
        }
        sqrts(reg3, reg2, &reg3);
        goto back_from_jump;

    // segmen kode di bawah ini dijalankan ketika pembacaan '^'.
    pow_calc:
        assign_0(reg1);
        while (c != BLANK && c != EOF) {
            insert_digit(reg1, c, &reg1);
            c = fgetc(file);
        }
        pows(reg3, reg1, &reg3);
        cpy(reg2, &reg1);
        reg4.bit5 = 0; // turn off flag
        goto back_from_jump;

    return 0;
}