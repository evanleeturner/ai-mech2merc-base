/* SPDX-License-Identifier: MIT */
/* mercsw 1000e511 */
extern unsigned int DAT_100a75e4;
extern char *DAT_100b3c9c;

void __cdecl FUN_1000e511(unsigned int param_1, unsigned int param_2)
{
    DAT_100a75e4 = param_2;
    *(unsigned int *)(DAT_100b3c9c + 0x24) = param_2;
    return;
}
