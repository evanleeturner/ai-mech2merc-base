/* SPDX-License-Identifier: MIT */
/* mercsw 10060134 */
extern uint __cdecl FUN_10025c83(int *, int, int *);

uint __cdecl FUN_10060134(int param_1, int *param_2)
{
    uint uVar1;
    
    uVar1 = FUN_10025c83(*(int **)(param_1 + 0x4c), *(int *)(param_1 + 0x1c), param_2);
    return uVar1 & 1;
}
