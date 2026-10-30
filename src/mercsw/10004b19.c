/* SPDX-License-Identifier: MIT */
/* mercsw 10004b19 */
extern int DAT_100adf38;
extern int DAT_100adf34;
extern int DAT_100b3788;
extern int DAT_100eef40[];
extern int DAT_100aa1ac;
extern int DAT_100a40cc;
extern int DAT_100a4114;
extern int DAT_100b38fc;
extern unsigned char DAT_1016586d;
extern short DAT_101658a2;
extern char s__6ld___New_leader_for_group__d___100a411c[];

extern unsigned short _DAT_10165886;
extern unsigned short _DAT_10165884;
extern unsigned short _DAT_10165857;
extern unsigned short _DAT_10165859;
extern unsigned short _DAT_1016585b;
extern unsigned short _DAT_10165898;
extern unsigned short _DAT_10165894;
extern unsigned short _DAT_10165896;
extern unsigned short _DAT_10165872;
extern unsigned short _DAT_1016586e;
extern unsigned short _DAT_10165870;
extern unsigned short _DAT_1016589e;
extern unsigned short _DAT_1016589a;
extern unsigned short _DAT_1016589c;

void __cdecl FUN_100141b5(void);
void __cdecl FUN_1004e27d(void);
void __cdecl FUN_100082c4(int, int);
int __cdecl FUN_1004d5e3(int);
void __cdecl FUN_10026e24(unsigned int *);
int __cdecl FUN_1004d47f(int);
int __cdecl FUN_10027fed(int);
void __cdecl FUN_100285f0(int, unsigned int, unsigned short);
int __cdecl _sprintf(char *, const char *, ...);
void __cdecl FUN_1005dd5a(char *);
void __cdecl FUN_10008156(int, int);
void __cdecl FUN_10050389(int, int);
void __cdecl FUN_10030fd2(int);

void __cdecl FUN_10004b19(int param_1, int *param_2)
{
    int iVar1;
    char local_58[80];
    int local_8;
    unsigned short uVar2;

    if ((((*(int *)(*param_2 + 4) != DAT_100adf38) || (*(char *)(DAT_100adf34 + 1) == '\0')) ||
         (param_2[0xf5] == 7)) &&
        (((*(unsigned short *)(*param_2 + 0x14) & 2) == 0 &&
          ((*(unsigned short *)(*param_2 + 0x14) & 4) == 0)))) {
        if ((DAT_100b3788 != 0) &&
            (((*(unsigned short *)(DAT_100b3788 + 2) & 0x100) != 0 &&
              (*(unsigned int *)(*param_2 + 4) == (unsigned int)*(unsigned short *)(DAT_100b3788 + 0x14))))) {
            DAT_100b3788 = 0;
        }
        *(int *)(*param_2 + 0x13c) = param_1;
        if (*(int *)(DAT_100eef40[DAT_100adf38] + 8) == *(int *)(*param_2 + 8)) {
            if (param_2[0xf5] == 5) {
                _DAT_10165886 = (unsigned short)(_DAT_10165886 + 1);
            } else {
                _DAT_10165884 = (unsigned short)(_DAT_10165884 + 1);
            }
            if ((((*(int *)(*param_2 + 4) == DAT_100adf38) && (-1 < param_1)) && (param_1 < 8)) &&
                (DAT_100aa1ac != 0)) {
                short *ps = (short *)((unsigned char *)&DAT_101658a2 +
                                      ((unsigned int)DAT_100adf38 * 2u + (unsigned int)param_1 * 0x10u));
                *ps = (short)(*ps + 1);
                FUN_100141b5();
            }
        }
        FUN_1004e27d();
        if (param_2[0xf5] == 5) {
            if (DAT_100a40cc == 0) {
                if (*(int *)(*param_2 + 4) == DAT_100adf38) {
                    DAT_1016586d = 2;
                    FUN_100082c4(0xc, -1);
                }
            } else {
                if (*(int *)(*param_2 + 4) == DAT_100adf38) {
                    DAT_1016586d = 4;
                    FUN_100082c4(0x20, -1);
                }
                param_2[0xf5] = 4;
            }
        } else if (*(int *)(*param_2 + 4) == DAT_100adf38) {
            DAT_1016586d = 4;
        }
        if (DAT_100adf38 == param_1) {
            if (*(int *)*param_2 == 1) {
                iVar1 = FUN_1004d5e3(*(int *)(*param_2 + 4));
                if (iVar1 == 0) {
                    DAT_100a4114 = (int)((unsigned int)DAT_100a4114 - 1u);
                    __builtin_memcpy(&uVar2, &_DAT_1016585b, 2);
                    uVar2 = (unsigned short)(uVar2 + 1);
                    __builtin_memcpy(&_DAT_1016585b, &uVar2, 2);
                } else if (iVar1 == 1) {
                    DAT_100a4114 = (int)((unsigned int)DAT_100a4114 + 1u);
                    __builtin_memcpy(&uVar2, &_DAT_10165857, 2);
                    uVar2 = (unsigned short)(uVar2 + 1);
                    __builtin_memcpy(&_DAT_10165857, &uVar2, 2);
                } else if (iVar1 == 2) {
                    DAT_100a4114 = (int)((unsigned int)DAT_100a4114 + 1u);
                    __builtin_memcpy(&uVar2, &_DAT_10165859, 2);
                    uVar2 = (unsigned short)(uVar2 + 1);
                    __builtin_memcpy(&_DAT_10165859, &uVar2, 2);
                }
            } else {
                iVar1 = FUN_1004d5e3(*(int *)(*param_2 + 4));
                if (iVar1 == 0) {
                    _DAT_10165898 = (unsigned short)(_DAT_10165898 + 1);
                } else if (iVar1 == 1) {
                    _DAT_10165894 = (unsigned short)(_DAT_10165894 + 1);
                } else if (iVar1 == 2) {
                    _DAT_10165896 = (unsigned short)(_DAT_10165896 + 1);
                }
            }
        }
        if ((*(unsigned short *)(*param_2 + 0x14) & 0x1400) != 0) {
            if (*(int *)*param_2 == 1) {
                iVar1 = FUN_1004d5e3(*(int *)(*param_2 + 4));
                if (iVar1 == 0) {
                    _DAT_10165872 = (unsigned short)(_DAT_10165872 + 1);
                } else if (iVar1 == 1) {
                    _DAT_1016586e = (unsigned short)(_DAT_1016586e + 1);
                } else if (iVar1 == 2) {
                    _DAT_10165870 = (unsigned short)(_DAT_10165870 + 1);
                }
            } else {
                iVar1 = FUN_1004d5e3(*(int *)(*param_2 + 4));
                if (iVar1 == 0) {
                    _DAT_1016589e = (unsigned short)(_DAT_1016589e + 1);
                } else if (iVar1 == 1) {
                    _DAT_1016589a = (unsigned short)(_DAT_1016589a + 1);
                } else if (iVar1 == 2) {
                    _DAT_1016589c = (unsigned short)(_DAT_1016589c + 1);
                }
            }
        }
        iVar1 = FUN_1004d5e3(*(int *)(*param_2 + 4));
        if (iVar1 == 1) {
            switch (*(int *)*param_2) {
            case 1:
                FUN_100082c4(0x15, -1);
                break;
            case 2:
                FUN_100082c4(0x17, -1);
                break;
            case 3:
                FUN_100082c4(0x19, -1);
                break;
            case 4:
                FUN_100082c4(0x16, -1);
                break;
            case 5:
                FUN_100082c4(0x17, -1);
                break;
            case 6:
            case 7:
                break;
            case 8:
                FUN_100082c4(0x17, -1);
            }
        }
        *(unsigned short *)(*param_2 + 0x14) = (unsigned short)(*(unsigned short *)(*param_2 + 0x14) | 6);
        param_2[0xef] = 0;
        if (DAT_100aa1ac == 0) {
            if ((param_2[0xf5] != 5) || (*(int *)(*param_2 + 4) != DAT_100adf38)) {
                param_2[0xf5] = 4;
            }
            FUN_10026e24((unsigned int *)*param_2);
            iVar1 = FUN_1004d47f(*(int *)(*param_2 + 8));
            if (iVar1 == *(int *)(*param_2 + 4)) {
                local_8 = FUN_10027fed(*(int *)(*param_2 + 8));
                FUN_100285f0(*(int *)(*param_2 + 8), *(unsigned int *)(*param_2 + 4), (unsigned short)local_8);
                _sprintf(local_58, s__6ld___New_leader_for_group__d___100a411c, DAT_100b38fc,
                         *(int *)(*param_2 + 8), local_8);
                FUN_1005dd5a(local_58);
            }
        } else {
            param_2[0xf5] = 4;
        }
        if (((DAT_100aa1ac == 0) && (*(int *)(*param_2 + 4) != DAT_100adf38)) &&
            (iVar1 = FUN_1004d47f(*(int *)(*param_2 + 8)), iVar1 == DAT_100adf38)) {
            FUN_10008156(6, *(int *)(*param_2 + 0xc));
        }
        FUN_10050389(*(int *)(*param_2 + 4), 1);
        FUN_10030fd2(*(int *)(*param_2 + 0x140));
        *(int *)(*param_2 + 0x140) = -1;
    }
    return;
}
