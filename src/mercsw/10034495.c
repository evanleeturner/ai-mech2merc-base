/* SPDX-License-Identifier: MIT */
/* mercsw 10034495 */
extern int DAT_100adc4c;
extern unsigned int DAT_100adc28;
extern int DAT_100adc2c;
extern int _DAT_100adc30;
extern int DAT_100adc34;
extern int DAT_100adc38;
extern int DAT_100adc3c;
extern int _DAT_100adc44;
extern int _DAT_100adc48;
extern unsigned int DAT_100adc50;
extern int DAT_100adc5c;
extern int DAT_100adc64;
extern unsigned int DAT_100adc78;
extern int DAT_100adc84;
extern int DAT_100adc8c;
extern int DAT_100b3904;
extern unsigned int DAT_101f52f8;
extern int DAT_101f52fc;

void __cdecl FUN_1003431f(unsigned int *param_1);

unsigned int __cdecl FUN_10034495(int param_1, int param_2, unsigned int param_3, int param_4, int param_5)
{
    int iVar1;
    unsigned int *puVar2;
    unsigned int *puVar3;

    if (DAT_100adc4c == param_2) {
        if (param_1 == 0) {
            puVar2 = &DAT_100adc50;
            puVar3 = &DAT_100adc78;
            for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
                *puVar3 = *puVar2;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
            }
            puVar2 = &DAT_100adc28;
            puVar3 = &DAT_100adc50;
            for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
                *puVar3 = *puVar2;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
            }
            if (0 < DAT_100adc34) {
                iVar1 = (int)((unsigned int)DAT_100adc38 * (unsigned int)DAT_100b3904) >> 0x10;
                DAT_100adc3c = (int)((unsigned int)DAT_100adc3c + 0xf) % 0x168;
                FUN_1003431f(&DAT_100adc28);
                _DAT_100adc30 = (int)((unsigned int)_DAT_100adc30 - (unsigned int)iVar1);
                DAT_100adc34 = (int)((unsigned int)DAT_100adc34 - (unsigned int)iVar1);
                DAT_100adc28 = param_3;
                DAT_100adc2c = param_4;
            }
            if (0 < DAT_100adc5c) {
                DAT_100adc64 = (int)((unsigned int)DAT_100adc64 + 0xf) % 0x168;
                FUN_1003431f(&DAT_100adc50);
            }
            if (DAT_100adc84 < 1) {
                return 1;
            }
            DAT_100adc8c = (int)((unsigned int)DAT_100adc8c + 0x1e) % 0x168;
            FUN_1003431f(&DAT_100adc78);
        }
    }
    else {
        DAT_100adc28 = DAT_101f52f8;
        DAT_100adc2c = DAT_101f52fc;
        _DAT_100adc30 = DAT_101f52fc;
        DAT_100adc34 = DAT_101f52fc;
        _DAT_100adc48 = 1;
        if (param_5 == 0) {
            _DAT_100adc44 = 0xe;
        }
        else if (param_5 == 2) {
            _DAT_100adc44 = 6;
        }
        else {
            _DAT_100adc44 = 10;
        }
        DAT_100adc4c = param_2;
        puVar2 = &DAT_100adc28;
        puVar3 = &DAT_100adc78;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
        puVar2 = &DAT_100adc78;
        puVar3 = &DAT_100adc50;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
        if (param_1 == 0) {
            FUN_1003431f(&DAT_100adc28);
        }
    }
    return 0;
}
