/* SPDX-License-Identifier: MIT */
/* mercsw 10065e40 */
extern int DAT_101f52f4;
extern int DAT_101f52d4;

/* Parameter and return types of the callee are inferred from the call site only. */
int __cdecl FixedMul16(int a, int b);

int __cdecl ScaleRect(undefined4 unusedArg1, int source, int out)
{
    int iVar1;

    iVar1 = FixedMul16(DAT_101f52f4, *(int *)(source + 4));
    *(int *)(out + 4) = iVar1;
    iVar1 = FixedMul16(DAT_101f52d4, *(int *)(source + 8));
    *(int *)(out + 8) = iVar1;
    iVar1 = FixedMul16(DAT_101f52f4, *(int *)(source + 0xc));
    *(int *)(out + 0xc) = iVar1;
    iVar1 = FixedMul16(DAT_101f52d4, *(int *)(source + 0x10));
    *(int *)(out + 0x10) = iVar1;
    return out;
}
