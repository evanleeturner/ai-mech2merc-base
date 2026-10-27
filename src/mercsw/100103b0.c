/* SPDX-License-Identifier: MIT */
/* mercsw 100103b0 */
int __cdecl FUN_100103b0(unsigned char *param_1)
{
    unsigned int uVar2;
    unsigned short sVar1;

    uVar2 = 0;
    for (; *param_1 != 0; param_1 = param_1 + 1) {
        uVar2 = uVar2 + (unsigned int)(*param_1 | 0x20);
        sVar1 = (unsigned short)uVar2;
        uVar2 = (uVar2 & 0xffff0000U) |
                (unsigned int)(unsigned short)((unsigned short)(sVar1 << 1) | (unsigned short)(sVar1 >> 15));
    }
    return (int)uVar2;
}
