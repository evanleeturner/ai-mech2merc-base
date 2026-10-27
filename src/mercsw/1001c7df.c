/* SPDX-License-Identifier: MIT */
/* mercsw 1001c7df */
undefined2 * __cdecl FUN_1001c7df(int param_1, undefined2 param_2, int param_3)
{
    int iVar1;
    undefined2 *puVar2;

    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
        puVar2 = (undefined2 *)0;
    }
    else {
        puVar2 = (undefined2 *)((unsigned int)*(int *)(iVar1 + 8) + (unsigned int)iVar1 +
                                (unsigned int)((int)*(short *)(iVar1 + 6)) * 0x24u);
        *(unsigned int *)(puVar2 + 2) = ((unsigned int)param_3 - (unsigned int)puVar2) & 0xffffu;
        *(int *)(puVar2 + 0x10) = param_1;
        *puVar2 = param_2;
        puVar2[1] = 0;
        *(short *)(iVar1 + 6) = (short)((unsigned int)(int)*(short *)(iVar1 + 6) + 1u);
    }
    return puVar2;
}
