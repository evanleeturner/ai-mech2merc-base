/* SPDX-License-Identifier: MIT */
/* mercsw 10067ce5 */
int __cdecl FUN_10067ce5(int param_1, int param_2)
{
    int iVar1;
    int local_c;

    iVar1 = *(int *)(param_1 + 0x10) >> 1;
    local_c = param_2 % *(int *)(param_1 + 0x10);
    if (iVar1 < local_c) {
        local_c = (int)((unsigned int)local_c - (unsigned int)*(int *)(param_1 + 0x10));
    }
    else if ((int)(0u - (unsigned int)local_c) != iVar1 &&
             local_c <= (int)(0u - (unsigned int)iVar1)) {
        local_c = (int)((unsigned int)local_c + (unsigned int)*(int *)(param_1 + 0x10));
    }
    *(int *)(param_1 + 4) = local_c;
    return local_c;
}
