/* SPDX-License-Identifier: MIT */
/* mercsw 1008699d */
undefined4 * __cdecl FUN_1008699d(undefined4 *param_1, undefined1 param_2, uint param_3)
{
    uint uVar1;
    undefined4 *puVar2;
    
    puVar2 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = (undefined4)param_2 | ((undefined4)param_2 << 8) | ((undefined4)param_2 << 16) | ((undefined4)param_2 << 24);
        puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar2 = param_2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    return param_1;
}
