/* SPDX-License-Identifier: MIT */
/* mercsw 100663e5 */
int __cdecl FixedMul16(int a, int b);

int __cdecl ScaleRectAboutCenter(int source, int out, int scaleX, int scaleY)
{
    int centerX;
    int centerY;
    int iVar3;

    centerX = (int)((unsigned int)*(int *)(source + 0xc) - (unsigned int)*(int *)(source + 4) + 1U) >> 1;
    centerX = (int)((unsigned int)centerX + (unsigned int)*(int *)(source + 4));
    centerY = (int)((unsigned int)*(int *)(source + 0x10) - (unsigned int)*(int *)(source + 8) + 1U) >> 1;
    centerY = (int)((unsigned int)centerY + (unsigned int)*(int *)(source + 8));
    *(int *)(out + 4) = (int)((unsigned int)*(int *)(source + 4) - (unsigned int)centerX);
    *(int *)(out + 8) = (int)((unsigned int)*(int *)(source + 8) - (unsigned int)centerY);
    *(int *)(out + 0xc) = (int)((unsigned int)*(int *)(source + 0xc) - (unsigned int)centerX);
    *(int *)(out + 0x10) = (int)((unsigned int)*(int *)(source + 0x10) - (unsigned int)centerY);
    iVar3 = FixedMul16(*(int *)(out + 4), scaleX);
    *(int *)(out + 4) = iVar3;
    iVar3 = FixedMul16(*(int *)(out + 8), scaleY);
    *(int *)(out + 8) = iVar3;
    iVar3 = FixedMul16(*(int *)(out + 0xc), scaleX);
    *(int *)(out + 0xc) = iVar3;
    iVar3 = FixedMul16(*(int *)(out + 0x10), scaleY);
    *(int *)(out + 0x10) = iVar3;
    *(int *)(out + 4) = (int)((unsigned int)*(int *)(out + 4) + (unsigned int)centerX);
    *(int *)(out + 8) = (int)((unsigned int)*(int *)(out + 8) + (unsigned int)centerY);
    *(int *)(out + 0xc) = (int)((unsigned int)*(int *)(out + 0xc) + (unsigned int)centerX);
    *(int *)(out + 0x10) = (int)((unsigned int)*(int *)(out + 0x10) + (unsigned int)centerY);
    return out;
}
