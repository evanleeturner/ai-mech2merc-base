/* SPDX-License-Identifier: MIT */
/* mercsw 10045f36 */
void __cdecl FUN_10045f36(int param_1, int param_2)
{
    *(int *)(param_1 + 0xa4) = param_2;
    *(short *)(param_1 + 0xb4) = (short)*(unsigned int *)(param_2 + 4);
    *(short *)(param_1 + 0xb6) = (short)*(unsigned int *)(param_2 + 8);
    *(short *)(param_1 + 0xb8) =
        (short)(unsigned short)((unsigned short)((unsigned short)*(unsigned int *)(param_2 + 0xc) -
                                                 (unsigned short)*(unsigned int *)(param_2 + 4)) + 1);
    *(short *)(param_1 + 0xba) =
        (short)(unsigned short)((unsigned short)((unsigned short)*(unsigned int *)(param_2 + 0x10) -
                                                 (unsigned short)*(unsigned int *)(param_2 + 8)) + 1);
}
