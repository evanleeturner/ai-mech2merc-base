/* SPDX-License-Identifier: MIT */
/* mercsw 10004190 */
extern int DAT_100adf38;
extern unsigned char DAT_10215680[];
extern unsigned char DAT_10215694[];
extern unsigned char DAT_10215696[];

/* Callee signatures are not in the evidence; __cdecl and these argument
   counts are assumed from the call sites. */
extern void __cdecl FUN_10083b74(int param_1, int param_2, int param_3);
extern void __cdecl FUN_1004fed5(void);
extern void __cdecl FUN_10003742(int param_1, int param_2, int param_3, int param_4, int param_5);
extern unsigned char __cdecl FUN_10044054(int *param_1);
extern void __cdecl FUN_100297b4(int param_1);

void __cdecl FUN_10004190(int *param_1)
{
    unsigned char bVar1;
    unsigned int uVar2;
    unsigned int local_8;

    if (param_1[0xfc] != 0) {
        if (param_1[0xfc] == 1) {
            if (((*(unsigned char *)(*param_1 + 0x105) & 1) == 0) ||
                ((*(unsigned char *)(*param_1 + 0x105) & 0x10) != 0)) {
                FUN_10083b74(*param_1, 0, 0);
                uVar2 = *(unsigned int *)(*param_1 + 0x104) & 0xff;
                local_8 = uVar2;
                while ((*(unsigned short *)(DAT_10215694 + local_8 * 0x54) & 0x20) != 0) {
                    FUN_10083b74(*param_1, 1, 0);
                    local_8 = *(unsigned int *)(*param_1 + 0x104) & 0xff;
                    if (local_8 == uVar2) {
                        *(unsigned int *)(*param_1 + 0x104) = *(unsigned int *)(*param_1 + 0x104) | 0x1000;
                        return;
                    }
                }
            }
            if ((((*(unsigned char *)(*param_1 + 0x105) & 1) != 0) &&
                 (uVar2 = *(unsigned int *)(*param_1 + 0x104) & 0xff,
                  *(int *)(*param_1 + 0xe8) < *(int *)(DAT_10215680 + uVar2 * 0x54))) &&
                (*(int *)(*param_1 + 4) == DAT_100adf38)) {
                if ((*(unsigned short *)(DAT_10215694 + uVar2 * 0x54) & 0x20) == 0) {
                    *(unsigned short *)(DAT_10215694 + uVar2 * 0x54) =
                        *(unsigned short *)(DAT_10215694 + uVar2 * 0x54) | 0x20;
                    *(unsigned short *)(DAT_10215696 + uVar2 * 0x54) =
                        *(unsigned short *)(DAT_10215696 + uVar2 * 0x54) |
                        (unsigned short)(1u << (*(unsigned char *)(*param_1 + 8) & 0x1f));
                    if ((*(unsigned short *)(DAT_10215694 + uVar2 * 0x54) & 0x40) != 0) {
                        FUN_1004fed5();
                    }
                    FUN_10003742(0xfc, 100, 0x40, 5, 0x50);
                }
                FUN_10083b74(*param_1, 1, 0);
                if ((*(unsigned int *)(*param_1 + 0x104) & 0xff) < uVar2) {
                    param_1[0xfc] = 0;
                    *(unsigned int *)(*param_1 + 0x104) = *(unsigned int *)(*param_1 + 0x104) | 0x1000;
                    *(int *)(*(int *)(*param_1 + 0x4c) + 8) = 0;
                    *(unsigned char *)(*(int *)(*param_1 + 0x4c) + 0x24) = 1;
                    return;
                }
            }
        }
        bVar1 = FUN_10044054((int *)*param_1);
        if (bVar1 == 0) {
            FUN_100297b4(*param_1);
            if (*(int *)(*param_1 + 0x1d8) == 1) {
                *(int *)(*(int *)(*param_1 + 0x4c) + 8) = *(int *)(*param_1 + 0x1d4);
                *(int *)(*param_1 + 0x1d8) = 0;
            }
            *(int *)(*param_1 + 0x1d4) = *(int *)(*(int *)(*param_1 + 0x4c) + 8);
        }
        else {
            *(int *)(*param_1 + 0x1d8) = 1;
        }
    }
    return;
}
