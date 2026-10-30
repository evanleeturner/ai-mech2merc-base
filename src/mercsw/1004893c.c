/* SPDX-License-Identifier: MIT */
/* mercsw 1004893c */
extern int *DAT_100b06b8[11];
extern unsigned char DAT_101f5300[];

void __cdecl FUN_10048402(int *param_1);

void __stdcall FUN_1004893c(void)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned int uVar5;
    int local_1c;
    int local_14;
    unsigned int local_8;

    for (local_14 = 0; local_14 < 0xb; local_14 = (int)((unsigned int)local_14 + 1u)) {
        piVar1 = DAT_100b06b8[local_14];
        if (piVar1 != (int *)0x0) {
            local_8 = 0;
            if ((*piVar1 != 0) && (piVar1[6] != 0)) {
                *(unsigned int *)piVar1[6] = (unsigned int)DAT_101f5300;
                *(unsigned int *)*piVar1 = *(unsigned int *)piVar1[6];
                FUN_10048402(piVar1);
                iVar2 = piVar1[0x1a];
                if (iVar2 != 0) {
                    local_8 = 1;
                    if (*(int *)(iVar2 + 0x14) != 0) {
                        local_8 = (unsigned int)(**(int (__cdecl **)(int *, int))(iVar2 + 0x14))(piVar1, iVar2);
                        local_8 = local_8 & 1;
                    }
                    iVar3 = *(int *)(iVar2 + 0xc);
                    for (local_1c = 0; local_1c < iVar3; local_1c = (int)((unsigned int)local_1c + 1u)) {
                        iVar4 = *(int *)((unsigned int)local_1c * 0x14u + 0x28u + (unsigned int)iVar2);
                        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x14) != 0)) {
                            uVar5 = (unsigned int)(**(int (__cdecl **)(int *, int))(iVar4 + 0x14))(piVar1, iVar4);
                            local_8 = local_8 & uVar5;
                        }
                    }
                }
            }
            if (local_8 != 1) {
                DAT_100b06b8[local_14] = (int *)0;
            }
        }
    }
    return;
}
