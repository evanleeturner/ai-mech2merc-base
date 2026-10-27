/* SPDX-License-Identifier: MIT */
/* mercsw 10065ebf */
int __cdecl FixedMul16(int a, int b);

int __cdecl MapRectIntoRect(int frame, int source, int out)
{
    int iVar1;
    int height;
    int iVar3;

    iVar1 = (int)((unsigned int)*(int *)(frame + 0xc) - (unsigned int)*(int *)(frame + 4));
    height = (int)((unsigned int)*(int *)(frame + 0x10) - (unsigned int)*(int *)(frame + 8));
    iVar3 = FixedMul16(*(int *)(source + 4), iVar1);
    *(int *)(out + 4) = iVar3;
    iVar3 = FixedMul16(*(int *)(source + 8), height);
    *(int *)(out + 8) = iVar3;
    iVar1 = FixedMul16(*(int *)(source + 0xc), iVar1);
    *(int *)(out + 0xc) = iVar1;
    iVar1 = FixedMul16(*(int *)(source + 0x10), height);
    *(int *)(out + 0x10) = iVar1;
    *(int *)(out + 4) = (int)((unsigned int)*(int *)(out + 4) + (unsigned int)*(int *)(frame + 4));
    *(int *)(out + 8) = (int)((unsigned int)*(int *)(out + 8) + (unsigned int)*(int *)(frame + 8));
    *(int *)(out + 0xc) = (int)((unsigned int)*(int *)(out + 0xc) + (unsigned int)*(int *)(frame + 4));
    *(int *)(out + 0x10) = (int)((unsigned int)*(int *)(out + 0x10) + (unsigned int)*(int *)(frame + 8));
    return out;
}
