/* SPDX-License-Identifier: MIT */
/* mercsw 1008984b */
extern void __cdecl FUN_1008975d(int *param_1);
extern int __cdecl FUN_10006b9a(int param_1);
extern int __cdecl FUN_10006b20(int param_1);
extern void __cdecl FUN_100891d0(int *param_1, int param_2);
extern void __cdecl FUN_10089643(int *param_1, int *param_2);

/* 64-bit signed product, shifted right 29 with rounding on bit 28 (unsigned result) */
#define FX_P(a, b) ((long long)(a) * (long long)(b))
#define FX(a, b) \
    ((((unsigned int)FX_P(a, b) >> 0x1d) | \
      ((unsigned int)((unsigned long long)FX_P(a, b) >> 0x20) << 3)) + \
     (unsigned int)((((unsigned int)FX_P(a, b) >> 0x1c) & 1) != 0))

void __cdecl
FUN_1008984b(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
             int param_7, unsigned int param_8)
{
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned int uVar5;
    int local_14;
    int local_10;
    int local_c;

    if (param_2 == 0) {
        if (param_3 == 0) {
            FUN_1008975d(param_1);
            if (param_4 != 0) {
                iVar2 = FUN_10006b9a(param_4);
                param_1[4] = iVar2;
                *param_1 = param_1[4];
                iVar2 = FUN_10006b20(param_4);
                param_1[3] = iVar2;
                param_1[1] = (int)(0u - (unsigned int)param_1[3]);
            }
            goto LAB_10089ca9;
        }
        if (param_4 == 0) {
            FUN_1008975d(param_1);
            iVar2 = FUN_10006b9a(param_3);
            param_1[8] = iVar2;
            *param_1 = param_1[8];
            iVar2 = FUN_10006b20(param_3);
            param_1[2] = iVar2;
            param_1[6] = (int)(0u - (unsigned int)param_1[2]);
            goto LAB_10089ca9;
        }
    }
    else if ((param_3 == 0) && (param_4 == 0)) {
        FUN_1008975d(param_1);
        iVar2 = FUN_10006b9a(param_2);
        param_1[8] = iVar2;
        param_1[4] = param_1[8];
        iVar2 = FUN_10006b20(param_2);
        param_1[7] = iVar2;
        param_1[5] = (int)(0u - (unsigned int)param_1[7]);
        goto LAB_10089ca9;
    }
    iVar2 = FUN_10006b9a(param_2);
    iVar3 = FUN_10006b9a(param_3);
    iVar4 = FUN_10006b9a(param_4);
    local_c = FUN_10006b20(param_2);
    local_10 = FUN_10006b20(param_3);
    local_14 = FUN_10006b20(param_4);
    if ((param_8 & 4) != 0) {
        local_c = (int)(0u - (unsigned int)local_c);
        local_10 = (int)(0u - (unsigned int)local_10);
        local_14 = (int)(0u - (unsigned int)local_14);
    }
    uVar5 = param_8 & 3;
    if (uVar5 == 0) {
        *param_1 = (int)(FX(iVar4, iVar3) + FX((int)FX(local_14, local_c), local_10));
        param_1[3] = (int)FX(iVar2, local_14);
        param_1[6] = (int)(FX((int)FX(iVar3, local_14), local_c) - FX(iVar4, local_10));
        param_1[2] = (int)FX(iVar2, local_10);
        param_1[5] = (int)(0u - (unsigned int)local_c);
        param_1[8] = (int)FX(iVar2, iVar3);
        FUN_100891d0(param_1, 1);
    }
    else if (uVar5 == 1) {
        *param_1 = (int)FX(iVar4, iVar3);
        param_1[3] = (int)(FX(iVar2, local_14) + FX((int)FX(iVar4, local_c), local_10));
        param_1[6] = (int)(FX(local_14, local_c) - FX((int)FX(iVar4, iVar2), local_10));
        param_1[2] = local_10;
        param_1[5] = (int)(0u - FX(iVar3, local_c));
        param_1[8] = (int)FX(iVar2, iVar3);
        FUN_100891d0(param_1, 1);
    }
    else if (uVar5 == 2) {
        *param_1 = (int)FX(iVar4, iVar3);
        param_1[3] = (int)(FX(local_c, local_10) + FX((int)FX(iVar2, iVar3), local_14));
        param_1[6] = (int)(FX((int)FX(iVar3, local_14), local_c) - FX(iVar2, local_10));
        param_1[1] = (int)(0u - (unsigned int)local_14);
        param_1[4] = (int)FX(iVar4, iVar2);
        param_1[7] = (int)FX(iVar4, local_c);
        FUN_100891d0(param_1, 2);
    }
    if ((param_8 & 4) != 0) {
        FUN_10089643(param_1, param_1);
    }
LAB_10089ca9:
    param_1[9] = param_5;
    param_1[10] = param_6;
    param_1[0xb] = param_7;
    return;
}
