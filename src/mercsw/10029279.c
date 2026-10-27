/* SPDX-License-Identifier: MIT */
/* mercsw 10029279 */
extern void FUN_10041cb0(int *param_1, ushort param_2);

void __cdecl FUN_10029279(int *param_1, ushort param_2)
{
    *(unsigned char *)(param_1[0x13] + 0x25) = 0;
    *(unsigned char *)(param_1[0x13] + 0x27) = 0;
    FUN_10041cb0(param_1, param_2);
    return;
}
