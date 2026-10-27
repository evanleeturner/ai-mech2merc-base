/* SPDX-License-Identifier: MIT */
/* mercsw 1000d016 */
extern int DAT_100a7590;

void __cdecl FUN_10089060(int *param_1, int *param_2, int *param_3, int *param_4);

void __cdecl FUN_1000d016(int *param_1)
{
    if (DAT_100a7590 != -1) {
        FUN_10089060((int *)((unsigned int)DAT_100a7590 * 0x7cU + 0x101f5568U),
                     param_1, param_1 + 1, param_1 + 2);
    }
    return;
}
