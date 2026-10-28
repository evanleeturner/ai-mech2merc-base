/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a12c */
int __cdecl FUN_1006a12c(int param_1, int param_2)
{
    int iVar1;
    short s_10, s_08, s_14, s_0c;
    int dim1, dim2;

    iVar1 = *(int *)(param_1 + 8 + param_2 * 8) + param_1;
    
    s_10 = *(short *)(iVar1 + 0x10);
    s_08 = *(short *)(iVar1 + 8);
    s_14 = *(short *)(iVar1 + 0x14);
    s_0c = *(short *)(iVar1 + 0xc);
    
    dim1 = (s_10 - s_08) + 1;
    dim2 = (s_14 - s_0c) + 1;
    
    return (dim1 << 16) | dim2;
}
