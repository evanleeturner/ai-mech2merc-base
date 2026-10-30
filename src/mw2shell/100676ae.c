/* SPDX-License-Identifier: MIT */
/* mw2shell 100676ae */
extern byte DAT_100a8a81[4];
extern byte DAT_100a8a85[4];

int __cdecl FUN_10067837(int param_1, int param_2, int param_3);

void __cdecl FUN_100676ae(int param_1, byte param_2, int param_3)
{
    byte bVar1;
    byte bVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    byte *pbVar6;
    byte *pbVar7;
    int local_8;

    __builtin_memcpy(&pbVar6, DAT_100a8a81, 4);
    __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
    FUN_10067837(0, 0, param_3);
    local_8 = 5;
    if (param_1 == 0) {
        goto LAB_1006780c;
    }
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = param_1 + -1;
    iVar3 = (int)((uint)bVar2 << 8);
    uVar4 = 0;
    for (;;) {
        if (bVar2 == param_2) goto LAB_100677dd;
        for (;;) {
            local_8 = 1;
            if (iVar5 == 0) goto LAB_1006780c;
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            iVar5 = iVar5 + -1;
            bVar1 = (byte)(bVar2 ^ (byte)((uint)iVar3 >> 8));
            uVar4 = ((uint)bVar2 << 8) | (uint)bVar1;
            if (bVar1 == 0) break;
            if (bVar2 == param_2) {
                __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
                iVar3 = FUN_10067837(1, 1, param_3);
            } else {
                for (;;) {
                    pbVar7 = pbVar6;
                    iVar3 = iVar5;
                    pbVar6 = pbVar7;
                    if (iVar3 == 0) goto LAB_1006780c;
                    bVar2 = *pbVar7;
                    pbVar6 = pbVar7 + 1;
                    bVar1 = (byte)(bVar2 ^ (byte)(uVar4 >> 8));
                    if (bVar2 == param_2) break;
                    uVar4 = ((uint)bVar2 << 8) | (uint)bVar1;
                    iVar5 = iVar3 + -1;
                    if (bVar1 == 0) {
                        if (iVar3 + -1 == 0) goto LAB_1006780c;
                        bVar1 = *pbVar6;
                        pbVar6 = pbVar7 + 2;
                        __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
                        if (bVar1 == param_2) {
                            iVar3 = FUN_10067837(1, 1, param_3);
                            goto LAB_100677dd;
                        }
                        uVar4 = ((uint)bVar1 << 8) | (uint)(byte)(bVar1 ^ bVar2);
                        iVar5 = iVar3 + -2;
                        if ((byte)(bVar1 ^ bVar2) == 0) {
                            uVar4 = (uint)FUN_10067837(1, 3, param_3);
                            goto LAB_100677aa;
                        }
                    }
                }
                __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
                iVar5 = iVar3;
                iVar3 = FUN_10067837(1, 1, param_3);
            }
LAB_100677dd:
            do {
                local_8 = 3;
                if (iVar5 == 0) goto LAB_1006780c;
                bVar2 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                iVar5 = iVar5 + -1;
                bVar2 = (byte)(bVar2 ^ (byte)((uint)iVar3 >> 8));
                iVar3 = (int)((((uint)iVar3 >> 8) << 8) | (uint)bVar2);
            } while (bVar2 == 0);
            __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
            iVar3 = FUN_10067837(3, 1, param_3);
        }
LAB_100677aa:
        do {
            local_8 = 2;
            if (iVar5 == 0) goto LAB_1006780c;
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            iVar5 = iVar5 + -1;
            bVar2 = (byte)(bVar2 ^ (byte)(uVar4 >> 8));
            uVar4 = (((uVar4 >> 8) & 0xffffffu) << 8) | (uint)bVar2;
        } while (bVar2 == 0);
        __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
        iVar3 = FUN_10067837(2, 1, param_3);
        bVar2 = (byte)((uint)iVar3 >> 8);
    }

LAB_1006780c:
    __builtin_memcpy(DAT_100a8a85, &pbVar6, 4);
    FUN_10067837(local_8, 0, param_3);
    FUN_10067837(4, 0, param_3);
    return;
}
