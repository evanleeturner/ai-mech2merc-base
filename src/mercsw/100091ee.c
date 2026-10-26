/* SPDX-License-Identifier: MIT */
/* mercsw 100091ee */
unsigned int __cdecl FUN_100091ee(int param_1, unsigned char param_2)
{
    unsigned int uVar1;

    if (((*(unsigned short *)(param_1 + 0x24) & 0x20) == 0) ||
        (*(short *)(param_1 + 0x26) == 0 && (1u << (param_2 & 0x1f)) == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}
