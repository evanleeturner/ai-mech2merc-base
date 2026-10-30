/* SPDX-License-Identifier: MIT */
/* mercsw 10027088 */
extern short (__cdecl *DAT_100ad378[8])(int, short, short);
extern int (__cdecl *PTR_FUN_100ad398[])(int, short *);

void __cdecl FUN_10027ad4(int param_1);
short __cdecl FUN_1002949b(short param_1, short param_2, short param_3, short param_4);
void __cdecl FUN_1002a4e0(int param_1, short param_2, unsigned short param_3, int param_4);

unsigned int __cdecl FUN_10027088(int param_1)
{
    short *psVar1;
    int bVar2;
    int bVar3;
    short sVar4;
    short sVar5;
    unsigned short uVar6;
    int iVar7;
    short local_18;
    short tmp7;
    short tmp9;

    local_18 = 0;
    bVar2 = 0;
    FUN_10027ad4(param_1);
LAB_100270aa:
    do {
        if (*(int *)(*(int *)(param_1 + 0x144) + local_18 * 4) == 0) {
            return 0;
        }
        psVar1 = *(short **)(*(int *)(param_1 + 0x144) + local_18 * 4);
        local_18 = (short)(local_18 + 1);
        sVar4 = FUN_1002949b(psVar1[1], *(short *)(param_1 + 0x17a), 0, *(short *)(param_1 + 0x178));
        sVar5 = FUN_1002949b(psVar1[2], *(short *)(param_1 + 0x17a), 0, *(short *)(param_1 + 0x178));
        if ((*(short *)(param_1 + 0x170) == *psVar1) &&
            ((unsigned int)*(unsigned short *)(param_1 + 0x172) == (unsigned int)(int)sVar4)) {
            bVar2 = 1;
            *(short *)(param_1 + 0x170) = 0;
        }
        if (!bVar2) {
            if ((*psVar1 < 8) &&
                (sVar4 = DAT_100ad378[*psVar1](param_1, sVar4, sVar5), sVar4 != 0)) {
                bVar3 = 1;
            } else {
                bVar3 = 0;
            }
            if (!bVar3) goto LAB_100270aa;
        }
        iVar7 = PTR_FUN_100ad398[*(unsigned char *)((char *)psVar1 + 6)](param_1, psVar1);
        if (iVar7 != 0) {
            iVar7 = 0;
            __builtin_memcpy(&tmp9, (char *)psVar1 + 9, 2);
            uVar6 = (unsigned short)FUN_1002949b(tmp9, *(short *)(param_1 + 0x17a), sVar4,
                                                 *(short *)(param_1 + 0x178));
            __builtin_memcpy(&tmp7, (char *)psVar1 + 7, 2);
            FUN_1002a4e0(param_1, tmp7, uVar6, iVar7);
            return 1;
        }
    } while (1);
}
