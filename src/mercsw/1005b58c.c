/* SPDX-License-Identifier: MIT */
/* mercsw 1005b58c */
int __cdecl FUN_1005b58c(int param_1, int param_2)
{
    int iVar1;
    
    iVar1 = *(int *)(param_1 + 8 + param_2 * 8) + param_1;
    return (((short)*(short *)(iVar1 + 0x10) - (short)*(short *)(iVar1 + 8) + 1) << 16) | 
           ((unsigned short)((short)*(short *)(iVar1 + 0x14) - (short)*(short *)(iVar1 + 0xc) + 1));
}
