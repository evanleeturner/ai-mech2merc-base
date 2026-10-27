/* SPDX-License-Identifier: MIT */
/* mercsw 100660e1 */
/* Parameter and return types of the callee are inferred from the call site only. */
int __cdecl FixedMul16(int a, int b);

int * __cdecl ScalePointBySize(int frame, int *source, int *out)
{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = *(int *)(frame + 0x10);
    iVar1 = *(int *)(frame + 8);
    iVar2 = FixedMul16((int)((unsigned int)*(int *)(frame + 0xc) - (unsigned int)*(int *)(frame + 4)), *source);
    *out = iVar2;
    iVar3 = FixedMul16((int)((unsigned int)iVar3 - (unsigned int)iVar1), source[1]);
    out[1] = iVar3;
    return out;
}
