/* SPDX-License-Identifier: MIT */
/* mercsw 10014b90 */
extern void *PTR_FUN_100aa4e0[];
extern void *PTR_FUN_100aa4e4[];
extern int DAT_100aa540;
extern int DAT_100aa544;
extern int DAT_100aa548;

/* Signatures unresolved; all assumed __cdecl, arguments inferred from the call sites. */
int __cdecl FUN_1002634e(int param_1);
void __cdecl FUN_100266c9(int *param_1, int param_2, int param_3, int param_4);
void __cdecl FUN_10014d06(int param_1, int *param_2, int param_3);

unsigned int __cdecl FUN_10014b90(int param_1, int *param_2, int param_3)
{
    int (__cdecl *pcVar1)(int, int, int, int);
    int iVar2;
    unsigned int uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int local_2c;
    int local_28;
    int local_18;
    int local_14;

    iVar2 = FUN_1002634e((int)param_2);
    if (iVar2 < 1) {
        uVar3 = 1;
    }
    else if (PTR_FUN_100aa4e4[(unsigned int)*(int *)(param_1 + 0x24) * 3u] == (void *)0) {
        pcVar1 = (int (__cdecl *)(int, int, int, int))PTR_FUN_100aa4e0[(unsigned int)*(int *)(param_1 + 0x24) * 3u];
        if (pcVar1 == (int (__cdecl *)(int, int, int, int))0) {
            FUN_10014d06(param_1, param_2, param_3);
            uVar3 = 1;
        }
        else {
            local_2c = *param_2;
            local_14 = param_2[1];
            local_18 = param_2[2];
            iVar2 = (int)((unsigned int)param_2[3] - (unsigned int)local_2c);
            iVar4 = (int)((unsigned int)param_2[4] - (unsigned int)local_14);
            iVar5 = (int)((unsigned int)param_2[5] - (unsigned int)local_18);
            for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                local_2c = (int)((unsigned int)local_2c + (unsigned int)(iVar2 >> 2));
                local_14 = (int)((unsigned int)local_14 + (unsigned int)(iVar4 >> 2));
                local_18 = (int)((unsigned int)local_18 + (unsigned int)(iVar5 >> 2));
                iVar6 = (*pcVar1)(param_1, local_2c, local_14, local_18);
                if (iVar6 != 0) {
                    FUN_100266c9(param_2, local_2c, local_14, local_18);
                    DAT_100aa540 = 0;
                    DAT_100aa544 = 0;
                    DAT_100aa548 = 0;
                    return 1;
                }
            }
            uVar3 = 0;
        }
    }
    else {
        uVar3 = ((unsigned int (__cdecl *)(int, int *))PTR_FUN_100aa4e4[(unsigned int)*(int *)(param_1 + 0x24) * 3u])(param_1, param_2);
    }
    return uVar3;
}
