/* SPDX-License-Identifier: MIT */
/* mercsw 1004db2b */
extern int DAT_100eef40[];
extern unsigned char DAT_101600e0[];
extern int DAT_100aa1ac;
extern int DAT_100adf38;
extern unsigned char DAT_10215670[];
extern unsigned char DAT_10215680[];
extern unsigned char DAT_10215688[];
extern unsigned char DAT_1021568c[];
extern unsigned char DAT_10215690[];
extern unsigned char DAT_10215694[];
extern unsigned char DAT_10215696[];
extern unsigned char DAT_100ef030[];
extern unsigned char DAT_100ef034[];

extern int __cdecl IsWithinRadius3_Likely(int param_1, int param_2, int param_3, int param_4);
extern void __cdecl FUN_1000dde1(int param_1, int *param_2, int *param_3, int *param_4);
extern void __cdecl FUN_10003742(int param_1, int param_2, int param_3, int param_4, int param_5);

unsigned int __cdecl FUN_1004db2b(unsigned char *param_1, int param_2)
{
    unsigned short uVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    unsigned int iVar4;
    int iVar5;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    unsigned char *local_18;
    int local_14;
    unsigned int local_10;
    int local_8;

    uVar1 = (unsigned short)param_1[0];
    local_10 = (unsigned int)param_1[1] << 8;
    local_8 = DAT_100eef40[*(int *)(DAT_101600e0 + (unsigned int)param_2 * 0x3c)];
    if ((*(int *)(DAT_101600e0 + (unsigned int)param_2 * 0x3c) < 0) && (DAT_100aa1ac == 0)) {
        uVar2 = 0;
    } else {
        uVar3 = local_10 & 0xffff;
        if (uVar3 == 0x100) {
            iVar4 = (unsigned int)uVar1 * 0x54;
            local_28 = *(int *)(DAT_10215680 + iVar4);
            if (local_28 < 1) {
                local_28 = 20000;
            }
            iVar5 = IsWithinRadius3_Likely(
                (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x50) - (unsigned int)*(int *)(DAT_10215688 + iVar4)),
                (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x54) - (unsigned int)*(int *)(DAT_1021568c + iVar4)),
                (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x58) - (unsigned int)*(int *)(DAT_10215690 + iVar4)),
                local_28);
            if (iVar5 == 0) {
                uVar2 = 0;
            } else {
                if ((((*(int *)(DAT_101600e0 + (unsigned int)param_2 * 0x3c) == DAT_100adf38) &&
                      ((*(unsigned short *)((unsigned char *)local_8 + 0x14) & 0x2000) != 0)) &&
                     ((*(unsigned short *)(DAT_10215694 + iVar4) & 0x20) == 0)) &&
                    (*(int *)(DAT_10215670 + iVar4) != 0)) {
                    *(unsigned short *)(DAT_10215694 + iVar4) = *(unsigned short *)(DAT_10215694 + iVar4) | 0x20;
                    *(unsigned short *)(DAT_10215696 + iVar4) =
                        (unsigned short)(1u << (*((unsigned char *)local_8 + 8) & 0x1f)) |
                        *(unsigned short *)(DAT_10215696 + iVar4);
                    FUN_10003742(0xfc, 100, 0x40, 5, 0x50);
                }
                uVar2 = 1;
            }
        } else if (uVar3 == 0x200) {
            local_14 = DAT_100eef40[uVar1];
            if (((*(unsigned short *)((unsigned char *)local_14 + 0x14) & 6) == 0) &&
                (iVar5 = IsWithinRadius3_Likely(
                     (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x50) - (unsigned int)*(int *)((unsigned char *)local_14 + 0x50)),
                     (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x54) - (unsigned int)*(int *)((unsigned char *)local_14 + 0x54)),
                     (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x58) - (unsigned int)*(int *)((unsigned char *)local_14 + 0x58)),
                     20000),
                 iVar5 != 0)) {
                uVar2 = 1;
            } else {
                uVar2 = 0;
            }
        } else if (uVar3 == 0x400) {
            local_18 = DAT_100ef030 + (unsigned int)uVar1 * 0x40;
            (void)local_18;
            FUN_1000dde1(*(int *)(DAT_100ef034 + (unsigned int)uVar1 * 0x40), &local_1c, &local_20, &local_24);
            uVar2 = (unsigned int)IsWithinRadius3_Likely(
                (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x50) - (unsigned int)local_1c),
                (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x54) - (unsigned int)local_20),
                (int)((unsigned int)*(int *)((unsigned char *)local_8 + 0x58) - (unsigned int)local_24),
                20000);
        } else {
            uVar2 = 0;
        }
    }
    return uVar2;
}
