/* SPDX-License-Identifier: MIT */
/* mercsw 1005b50f */
int __cdecl FUN_1005b50f(int param_1)
{
    int iVar1;
    int result;
    
    iVar1 = param_1 + 0xd;
    if ((*(unsigned char *)(param_1 + 10) & 0x80) != 0) {
        iVar1 = iVar1 + (1 << ((*(unsigned char *)(param_1 + 10) & 7) + 1)) * 3;
    }
    __builtin_memcpy(&result, (void *)(iVar1 + 5), 4);
    return result;
}
