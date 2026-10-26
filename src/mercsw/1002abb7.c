/* SPDX-License-Identifier: MIT */
/* mercsw 1002abb7 */
void __cdecl FUN_1002abb7(int param_1, short param_2, unsigned short param_3)
{
    if (*(short *)(param_1 + 0x170) == 0) {
        *(short *)(param_1 + 0x170) = param_2;
        *(unsigned short *)(param_1 + 0x172) = param_3;
    }
}
