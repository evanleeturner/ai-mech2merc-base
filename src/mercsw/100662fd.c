/* SPDX-License-Identifier: MIT */
/* mercsw 100662fd */
/* Parameter and return types of the callee are inferred from the call sites only. */
unsigned int __cdecl FUN_10002570(unsigned int a, int b);

unsigned int * __cdecl PointFrom319x199(unsigned int *source, unsigned int *out)
{
    unsigned int uVar1;

    uVar1 = FUN_10002570(*source, 0x13f);
    *out = uVar1;
    uVar1 = FUN_10002570(source[1], 199);
    out[1] = uVar1;
    return out;
}
