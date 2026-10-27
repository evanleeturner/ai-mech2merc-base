/* SPDX-License-Identifier: MIT */
/* mercsw 1002628c */
int __cdecl FixedMul16(int segment, int param_2);

void __cdecl SetSegmentFromDirection(int *segment, int param_2, int param_3, int param_4,
                          int param_5, int param_6, int param_7, int length)
{
    int iVar1;

    *segment = param_2;
    segment[1] = param_3;
    segment[2] = param_4;
    segment[9] = param_5;
    segment[10] = param_6;
    segment[0xb] = param_7;
    iVar1 = FixedMul16(length, param_5);
    segment[6] = iVar1;
    iVar1 = FixedMul16(length, param_6);
    segment[7] = iVar1;
    iVar1 = FixedMul16(length, param_7);
    segment[8] = iVar1;
    segment[3] = (int)((unsigned int)segment[6] + (unsigned int)param_2);
    segment[4] = (int)((unsigned int)segment[7] + (unsigned int)param_3);
    segment[5] = (int)((unsigned int)segment[8] + (unsigned int)param_4);
    segment[0xc] = length;
    segment[0xd] = 1;
    return;
}
