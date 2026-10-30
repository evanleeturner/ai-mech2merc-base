/* SPDX-License-Identifier: MIT */
/* mercsw 10068ea5 */
extern int DAT_100a1338;
extern int DAT_100c7fac;
extern int DAT_100c7fb4;
extern int _DAT_100b3984;
extern int DAT_100b3988;
extern int DAT_100c2dec;
extern unsigned char *PTR_DAT_100c2be0;
extern int _DAT_100b3980;
extern int DAT_100b3998;
extern int _DAT_100b398c;
extern int DAT_100b399c;
extern int _DAT_100b3990;
extern int DAT_100b39a0;
extern int _DAT_100b3994;
extern int DAT_100b39e4;

char *_strncpy(char *, const char *, unsigned int);
char *_strchr(const char *, int);
int __isctype(int, int);
int _atol(const char *);
unsigned short *FUN_1001c5d1(int, int, int, int *);
void FUN_1001c509(int, int);
int *FUN_1001c303(int, int, int, int, int, int *);
void FUN_1001c72d(int, int, int, int, int, int);
unsigned int FUN_100696b1(unsigned int);
unsigned short *FUN_1001c7df(int, short, int);
void FUN_1001c85e(int, int, char);
void FUN_1001cc6a(int);
int *FUN_1002ff96(int, int);
int *FUN_1002f010(int, int);
void FUN_1002f37a(int, int, int, int);
void FUN_1002f272(int, int);
void FUN_1001d5e1(int, int *);
void FUN_1002fbc0(int *);
void FUN_1003da99(unsigned short *);
void FUN_100141c0(unsigned short *, int);
void FUN_1001ca37(int, int);

unsigned int FUN_10068ea5(int param_1, int *param_2, int *param_3, int param_4, int *param_5)
{
    unsigned int uVar1;
    int *piVar2;
    unsigned short *puVar3;
    unsigned short *puVar4;
    int *piVar5;
    unsigned short *puVar6;
    unsigned int uVar7;
    unsigned int local_98;
    int *local_94;
    unsigned int local_8c;
    int local_7c;
    unsigned short *local_70;
    int local_6c;
    char local_68[40];
    int local_40;
    int local_3c;
    int local_38;
    int local_34;
    unsigned int local_30;
    int *local_2c;
    unsigned int local_28;
    int *local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    unsigned short *local_10;
    int local_c;
    char *local_8;
    int iVarSign;

    local_14 = 0;
    local_c = 0;
    if (*param_3 == 0) {
        DAT_100c7fac = 0;
        DAT_100c7fb4 = 0;
        _DAT_100b3984 = 0;
        DAT_100b3988 = 0;
    }
    piVar2 = (int *)(*param_2 + param_1);
    if (*piVar2 == DAT_100a1338) {
        if ((*(unsigned short *)(piVar2 + 7) & 0x2000) == 0) {
            if ((*(unsigned short *)(piVar2 + 7) & 0x1000) != 0) {
                DAT_100c7fb4 = 1;
            }
        } else {
            DAT_100c7fac = 1;
        }
        if ((*(unsigned short *)(piVar2 + 7) & 0xcfff) == 1) {
            _DAT_100b3984 = 0;
            DAT_100b3988 = 1;
        } else if ((*(unsigned short *)(piVar2 + 7) & 0xcfff) == 2) {
            DAT_100b3988 = 0;
            _DAT_100b3984 = 1;
        } else {
            DAT_100b3988 = 0;
            _DAT_100b3984 = 0;
        }
        iVarSign = (int)(char)piVar2[2];
        if (0x80 < iVarSign) {
            for (local_7c = 0; local_7c < 0x10; local_7c = local_7c + 1) {
                *(char *)(local_7c + 8 + (int)piVar2) =
                    (char)(0u - (unsigned int)(int)*(char *)(local_7c + 8 + (int)piVar2));
            }
        }
        _strncpy(local_68, (char *)(piVar2 + 2), 0x10);
        local_14 = 0;
        if ((DAT_100c7fb4 != 0) && (local_8 = _strchr(local_68, 0x5f), local_8 != (char *)0)) {
            *local_8 = '\0';
            local_8 = local_8 + 1;
            if (DAT_100c2dec < 2) {
                local_98 = *(unsigned short *)(PTR_DAT_100c2be0 + *local_8 * 2) & 4;
            } else {
                local_98 = (unsigned int)__isctype((int)*local_8, 4);
            }
            if (local_98 != 0) {
                local_14 = _atol(local_8);
            }
        }
        local_2c = piVar2 + 8;
        puVar3 = (unsigned short *)(local_2c + (short)piVar2[6] * 4);
        local_20 = 0;
        local_7c = (int)*(short *)((int)piVar2 + 0x1a);
        local_70 = puVar3;
        while (local_7c != 0) {
            local_28 = (unsigned int)local_70[1];
            if (local_28 < 5) {
                local_6c = 0xc;
            } else {
                local_6c = 0x12;
            }
            local_20 = (int)((unsigned int)local_20 + local_28 * 4u);
            local_70 = (unsigned short *)((int)local_70 + local_6c);
            local_7c = local_7c + -1;
        }
        if (DAT_100c7fac == 0) {
            local_38 = (int)(short)piVar2[6];
        } else {
            local_38 = (short)piVar2[6] + -1;
        }
        if ((*param_3 == 0) || (DAT_100c7fac != 0)) {
            puVar4 = FUN_1001c5d1(local_38, (int)*(short *)((int)piVar2 + 0x1a), local_20, &local_1c);
            *param_3 = (int)puVar4;
            if (*param_3 == 0) {
                _DAT_100b3980 = 0xfffffffe;
                return 0xffffffff;
            }
            FUN_1001c509(*param_3, local_14);
        } else if ((DAT_100c7fb4 != 0) &&
                   (piVar5 = FUN_1001c303(*param_3, local_14, local_38,
                                          (int)*(short *)((int)piVar2 + 0x1a), local_20, &local_1c),
                    piVar5 == (int *)0)) {
            _DAT_100b3980 = 0xfffffffe;
            return 0xffffffff;
        }
        for (local_7c = 0; local_7c < (short)piVar2[6]; local_7c = local_7c + 1) {
            local_94 = local_2c + local_7c * 4;
            local_40 = *local_94;
            local_34 = (int)(short)local_94[3];
            local_3c = (int)*(short *)((int)local_94 + 0xe);
            if (local_7c < local_38) {
                FUN_1001c72d(*param_3,
                             (int)((unsigned int)DAT_100b3998 * (unsigned int)local_40 + (unsigned int)_DAT_100b398c),
                             (int)((unsigned int)DAT_100b399c * (unsigned int)local_94[1] + (unsigned int)_DAT_100b3990),
                             (int)((unsigned int)local_94[2] * (unsigned int)DAT_100b39a0 + (unsigned int)_DAT_100b3994),
                             local_34, local_3c);
            }
            uVar1 = (unsigned int)local_c + (unsigned int)*local_94 + (unsigned int)local_94[1] +
                    (unsigned int)local_94[2] + (unsigned int)(int)(short)local_94[3] +
                    (unsigned int)(int)*(short *)((int)local_94 + 0xe);
            uVar7 = (unsigned int)((int)uVar1 >> 0x1f);
            local_c = (int)(((((uVar1 ^ uVar7) - uVar7) & 0xfffff) ^ uVar7) - uVar7);
        }
        local_18 = 0;
        local_7c = 0;
        local_70 = puVar3;
        while (1) {
            if (*(short *)((int)piVar2 + 0x1a) <= local_7c) {
                *param_2 = (int)((unsigned int)*param_2 + 0x20u);
                *param_2 = (int)((unsigned int)((short)piVar2[6] * 0x10) + (unsigned int)*param_2);
                *param_2 = (int)((unsigned int)*param_2 + (unsigned int)local_18);
                if (piVar2[1] != local_c) {
                    _DAT_100b3980 = 0xfffffffe;
                    return 0xffffffff;
                }
                FUN_1001cc6a(*param_3);
                _DAT_100b3980 = 0;
                if (DAT_100c7fac != 0) {
                    if (((param_4 == 0) ||
                         (local_24 = FUN_1002ff96(param_4, *param_5), local_24 == (int *)0)) &&
                        (local_24 = FUN_1002f010(param_4, 0x14), local_24 == (int *)0)) {
                        _DAT_100b3980 = 0xfffffffe;
                        return 0xffffffff;
                    }
                    if ((local_24[0x1b] != 0) &&
                        (local_24 = FUN_1002f010(param_4, 0xc), local_24 == (int *)0)) {
                        _DAT_100b3980 = 0xfffffffe;
                        return 0xffffffff;
                    }
                    FUN_1002f37a((int)local_24, *local_94, local_94[1], local_94[2]);
                    FUN_1002f272((int)local_24, *param_3);
                    FUN_1001d5e1(*param_3, local_24);
                    FUN_1002fbc0(local_24);
                    if (*param_5 != 0) {
                        FUN_1003da99((unsigned short *)*param_3);
                        FUN_100141c0((unsigned short *)*param_3, DAT_100b39e4);
                        FUN_1001ca37(*param_3, 0x50);
                    }
                    *param_5 = (int)((unsigned int)*param_5 + 1u);
                }
                return 0;
            }
            local_28 = (unsigned int)local_70[1];
            if (local_28 < 5) {
                local_6c = 0xc;
            } else {
                local_6c = 0x12;
            }
            local_30 = FUN_100696b1((unsigned int)*local_70);
            puVar6 = FUN_1001c7df(*param_3, (short)local_30, local_1c);
            if (puVar6 == (unsigned short *)0) break;
            local_1c = (int)((unsigned int)local_1c + local_28 * 4u);
            local_10 = local_70 + 2;
            for (local_8c = 0; (int)local_8c < (int)local_28; local_8c = local_8c + 1) {
                FUN_1001c85e(*param_3, (int)puVar6, (char)local_10[local_8c]);
                local_c = (int)((unsigned int)local_c + (unsigned int)local_10[local_8c]);
            }
            for (local_8c = local_28; (int)local_8c < 4; local_8c = local_8c + 1) {
                local_c = (int)((unsigned int)local_c + (unsigned int)local_10[local_8c]);
            }
            uVar1 = (unsigned int)local_c + (unsigned int)*local_70 + local_28;
            uVar7 = (unsigned int)((int)uVar1 >> 0x1f);
            local_c = (int)(((((uVar1 ^ uVar7) - uVar7) & 0xfffff) ^ uVar7) - uVar7);
            local_18 = (int)((unsigned int)local_18 + (unsigned int)local_6c);
            local_70 = (unsigned short *)((int)local_70 + local_6c);
            local_7c = local_7c + 1;
        }
        _DAT_100b3980 = 0xfffffff7;
        return 0xffffffff;
    }
    _DAT_100b3980 = 0xfffffffe;
    return 0xffffffff;
}
