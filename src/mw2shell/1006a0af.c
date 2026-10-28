/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a0af */
int __cdecl FUN_1006a0af(int param_1)
{
    int iVar1;
    unsigned char b;
    int result;

    iVar1 = param_1 + 0xd;
    __builtin_memcpy(&b, (void *)(param_1 + 0xa), 1);
    if ((b & 0x80) != 0) {
        int shift = (b & 7) + 1;
        int add = (1 << shift) * 3;
        iVar1 = iVar1 + add;
    }
    __builtin_memcpy(&result, (void *)(iVar1 + 5), 4);
    return result;
}
