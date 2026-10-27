/* SPDX-License-Identifier: MIT */
/* mercsw 1006604b */
/* Parameter and return types of the callee are inferred from the call site only. */
int __cdecl FixedMul16(int a, int b);

int * __cdecl ScaleRectBareBySize(int frame, int *source, int *out)
{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = (int)((unsigned int)*(int *)(frame + 0xc) - (unsigned int)*(int *)(frame + 4));
    iVar2 = (int)((unsigned int)*(int *)(frame + 0x10) - (unsigned int)*(int *)(frame + 8));
    iVar3 = FixedMul16(iVar1, *source);
    *out = iVar3;
    iVar3 = FixedMul16(iVar2, source[1]);
    out[1] = iVar3;
    iVar1 = FixedMul16(iVar1, source[2]);
    out[2] = iVar1;
    iVar1 = FixedMul16(iVar2, source[3]);
    out[3] = iVar1;
    return out;
}
