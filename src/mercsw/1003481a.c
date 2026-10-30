/* SPDX-License-Identifier: MIT */
/* mercsw 1003481a */
extern int DAT_10114e20;
extern int DAT_100adc20;
extern int DAT_100adc24;
extern int DAT_100c6b74;
extern int DAT_100c6b78;
extern int DAT_100c6b7c;
extern int DAT_100c6b8c;
extern int DAT_100c6b90;
extern int DAT_100c6b98;

void __cdecl FUN_100351e7(int param_1, int param_2, int param_3, int param_4);
void __cdecl FUN_1003517a(int param_1, int param_2, int param_3, int *param_4);
int __cdecl FixedMul16(int param_1, int param_2);

void __cdecl FUN_1003481a(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;

    iVar3 = DAT_10114e20;
    piVar1 = *(int **)(DAT_10114e20 + 0xa4);
    if ((*(unsigned char *)(*param_1 + 0xdd) & 1) == 0) {
        param_4 = param_5;
    }
    if (param_1[0xfc] != 2) {
        if ((*(unsigned char *)(*param_1 + 0xdd) & 0xf) == 0) {
            return;
        }
        if ((*(unsigned char *)(*param_1 + 0xdd) & 0x10) != 0) {
            return;
        }
        if (-0x30000 < param_6) {
            FUN_100351e7(DAT_100adc20,
                         (int)(((unsigned int)DAT_100adc24 - (unsigned int)DAT_100c6b74) - (unsigned int)DAT_100c6b90),
                         0x25, (int)piVar1);
        }
        if (param_6 < 0x30000) {
            FUN_100351e7(DAT_100adc20,
                         (int)(((unsigned int)DAT_100c6b74 + (unsigned int)DAT_100adc24) + (unsigned int)DAT_100c6b98),
                         0x1c, (int)piVar1);
        }
    }
    if (param_4 == 0) {
        FUN_1003517a(DAT_100adc20, DAT_100adc24, 0x10, piVar1);
        FUN_1003517a(DAT_100adc20, DAT_100adc24, 0x16, piVar1);
    }
    else {
        iVar5 = 0xd;
        iVar4 = DAT_100adc24;
        piVar6 = piVar1;
        iVar2 = FixedMul16(DAT_100c6b8c, param_4);
        FUN_1003517a((int)((unsigned int)DAT_100adc20 + (unsigned int)iVar2), iVar4, iVar5, piVar6);
    }
    if (-3 < param_4) {
        iVar3 = (int)((unsigned int)(int)*(short *)(iVar3 + 0xb8) + (unsigned int)DAT_100c6b78);
        iVar4 = (int)((unsigned int)DAT_100adc24 + (unsigned int)(DAT_100c6b7c / 2));
        FUN_100351e7((int)((unsigned int)iVar3 + 0xFFFFFFFFu), iVar4, 0x22, (int)piVar1);
        if (0x5a < param_4) {
            FUN_100351e7(iVar3, iVar4, 0x22, (int)piVar1);
        }
    }
    if (param_4 < 3) {
        iVar3 = (int)(0u - (unsigned int)DAT_100c6b78);
        iVar4 = (int)((unsigned int)DAT_100adc24 + (unsigned int)(DAT_100c6b7c / 2));
        FUN_100351e7(iVar3, iVar4, 0x1f, (int)piVar1);
        if (param_4 < -0x5a) {
            FUN_100351e7((int)((unsigned int)iVar3 + 0xFFFFFFFFu), iVar4, 0x1f, (int)piVar1);
        }
    }
    return;
}
