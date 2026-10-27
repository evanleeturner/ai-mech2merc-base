/* SPDX-License-Identifier: MIT */
/* mercsw 10066004 */
extern int DAT_101f52f4;
extern int DAT_101f52d4;

/* Parameter and return types of the callee are inferred from the call site only. */
int __cdecl FixedMul16(int a, int b);

int * __cdecl ScalePoint(undefined4 unusedArg1, int *source, int *out)
{
    int iVar1;

    iVar1 = FixedMul16(DAT_101f52f4, *source);
    *out = iVar1;
    iVar1 = FixedMul16(DAT_101f52d4, source[1]);
    out[1] = iVar1;
    return out;
}
