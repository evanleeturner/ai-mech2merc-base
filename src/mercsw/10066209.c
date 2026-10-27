/* SPDX-License-Identifier: MIT */
/* mercsw 10066209 */
/* Parameter and return types of the callee are inferred from the call sites only. */
int __cdecl FUN_10002570(unsigned int a, int b);

int __cdecl RectFrom319x199(int source, int out)
{
    int iVar1;

    iVar1 = FUN_10002570(*(unsigned int *)(source + 4), 0x13f);
    *(int *)(out + 4) = iVar1;
    iVar1 = FUN_10002570(*(unsigned int *)(source + 8), 199);
    *(int *)(out + 8) = iVar1;
    iVar1 = FUN_10002570(*(unsigned int *)(source + 0xc), 0x13f);
    *(int *)(out + 0xc) = iVar1;
    iVar1 = FUN_10002570(*(unsigned int *)(source + 0x10), 199);
    *(int *)(out + 0x10) = iVar1;
    return out;
}
