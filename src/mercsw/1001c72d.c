/* SPDX-License-Identifier: MIT */
/* mercsw 1001c72d */
void __cdecl
FUN_1001c72d(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5,
             undefined4 param_6)
{
    undefined4 *puVar1;
    int iVar2;

    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 != 0) {
        puVar1 = (undefined4 *)((unsigned int)iVar2 + 0x18u +
                                (unsigned int)((int)*(short *)(iVar2 + 4) * 0x44));
        *puVar1 = param_2;
        puVar1[3] = *puVar1;
        puVar1[1] = param_3;
        puVar1[4] = puVar1[1];
        puVar1[2] = param_4;
        puVar1[5] = puVar1[2];
        puVar1[6] = param_5;
        puVar1[7] = param_6;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        *(short *)(iVar2 + 4) = (short)((unsigned int)(int)*(short *)(iVar2 + 4) + 1u);
    }
    return;
}
