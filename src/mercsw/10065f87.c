/* SPDX-License-Identifier: MIT */
/* mercsw 10065f87 */
extern int DAT_101f52f4;
extern int DAT_101f52d4;

/* Parameter and return types of the callee are inferred from the call site only. */
int __cdecl FixedMul16(int a, int b);

int * __cdecl ScaleRectBare(undefined4 unusedArg1, int *source, int *out)
{
    int iVar1;

    iVar1 = FixedMul16(DAT_101f52f4, *source);
    *out = iVar1;
    iVar1 = FixedMul16(DAT_101f52d4, source[1]);
    out[1] = iVar1;
    iVar1 = FixedMul16(DAT_101f52f4, source[2]);
    out[2] = iVar1;
    iVar1 = FixedMul16(DAT_101f52d4, source[3]);
    out[3] = iVar1;
    return out;
}
