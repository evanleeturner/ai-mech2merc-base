/* SPDX-License-Identifier: MIT */
/* mercsw 10081270 */
extern int DAT_100b98a0;
extern unsigned int DAT_100b98a4;
extern int DAT_100c8240[];
extern int DAT_100c8280[];

extern void __cdecl FUN_100816df(void);
extern int __cdecl FUN_100816ea(char *param_1);
extern void __cdecl FUN_100108a0(int param_1, char *param_2);
extern void __cdecl _qsort(void *base, unsigned int num, unsigned int width,
                           int (__cdecl *cmp)(const void *, const void *));
extern int __cdecl FUN_10086951(int param_1);
extern int __cdecl FUN_10081687(const void *a, const void *b);

int __cdecl FUN_10081270(char *param_1)
{
    int iVar1;
    int iVar2;
    int uVar3;
    int local_18;
    int *local_14;
    int local_10;
    int local_8;

    DAT_100b98a0 = 0;
    DAT_100b98a4 = 0;
    FUN_100816df();
    iVar2 = FUN_100816ea(param_1);
    if (iVar2 == 0) {
        FUN_100108a0(0x44, (char *)0);
        uVar3 = 0;
    } else {
        _qsort(DAT_100c8280, DAT_100b98a4, 0x14, FUN_10081687);
        for (local_8 = 0; local_8 < (int)DAT_100b98a4; local_8 = local_8 + 1) {
            iVar2 = local_8 * 5;
            local_18 = -1;
            for (local_10 = 0; local_10 < DAT_100b98a0; local_10 = local_10 + 1) {
                if (DAT_100c8280[iVar2 + 1] <= DAT_100c8240[local_10 * 3 + 2]) {
                    if (local_18 < 0) {
                        local_18 = local_10;
                    } else if (DAT_100c8240[local_10 * 3 + 2] < DAT_100c8240[local_18 * 3 + 2]) {
                        local_18 = local_10;
                    }
                }
            }
            if (local_18 == -1) {
                if (4 < DAT_100b98a0) {
                    FUN_100108a0(0x44, (char *)0);
                }
                iVar1 = DAT_100b98a0;
                local_14 = &DAT_100c8240[DAT_100b98a0 * 3];
                local_18 = DAT_100b98a0;
                DAT_100b98a0 = DAT_100b98a0 + 1;
                *local_14 = 0;
                DAT_100c8240[iVar1 * 3 + 2] = 0xffdc;
                DAT_100c8240[iVar1 * 3 + 1] = DAT_100c8240[iVar1 * 3 + 2];
            } else {
                local_14 = &DAT_100c8240[local_18 * 3];
            }
            DAT_100c8280[iVar2 + 4] = (int)((unsigned int)local_14[1] - (unsigned int)local_14[2]);
            DAT_100c8280[iVar2 + 3] = local_18;
            DAT_100c8280[iVar2 + 2] = 0;
            local_14[2] = (int)((unsigned int)local_14[2] - (unsigned int)DAT_100c8280[iVar2 + 1]);
        }
        for (local_8 = 0; local_8 < DAT_100b98a0; local_8 = local_8 + 1) {
            DAT_100c8240[local_8 * 3 + 1] =
                (int)((unsigned int)DAT_100c8240[local_8 * 3 + 1] -
                      (unsigned int)DAT_100c8240[local_8 * 3 + 2]);
            DAT_100c8240[local_8 * 3 + 2] = DAT_100c8240[local_8 * 3 + 1];
            iVar2 = FUN_10086951(DAT_100c8240[local_8 * 3 + 1]);
            DAT_100c8240[local_8 * 3] = iVar2;
            if (DAT_100c8240[local_8 * 3] == 0) {
                FUN_100108a0(0x45, (char *)0);
            }
        }
        uVar3 = 1;
    }
    return uVar3;
}
