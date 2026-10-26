/* SPDX-License-Identifier: MIT */
/* mercsw 1005b104 */
unsigned int __cdecl FUN_1005b104(int param_1)
{
    unsigned short uVar1;
    unsigned short uVar2;

    uVar1 = (unsigned short)((unsigned int)(int)*(short *)(param_1 + 8) -
                             (unsigned int)(int)*(short *)(param_1 + 4) + 1u);
    uVar2 = (unsigned short)((unsigned int)(int)*(short *)(param_1 + 10) -
                             (unsigned int)(int)*(short *)(param_1 + 6) + 1u);
    return ((unsigned int)uVar1 << 16) | (unsigned int)uVar2;
}
