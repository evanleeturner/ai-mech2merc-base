/* SPDX-License-Identifier: MIT */
/* mercsw 100428b0 */
int __cdecl FUN_100428b0(short *param_1, short param_2)
{
    short local_8 = 0;
    while (1) {
        if (*param_1 <= local_8) {
            return ((int)(*param_1 >> 0xf) << 16) | 0xffff;
        }
        short sVar1 = *(short *)(local_8 * 0x12 + *(int *)(param_1 + 2));
        if (sVar1 == param_2) {
            return ((int)(sVar1 >> 0xf) << 16) | local_8;
        }
        local_8++;
    }
}
