/* SPDX-License-Identifier: MIT */
/* mercsw 1002a3e0 */
extern void __cdecl FUN_1002a4e0(int param_1, short param_2, unsigned short param_3, int param_4);

void __cdecl FUN_1002a3e0(int param_1, short param_2, unsigned short param_3)
{
    unsigned int local_8;
    
    if (*(short *)(param_1 + 0x16c) == 0) {
        FUN_1002a4e0(param_1, param_2, param_3, 0);
    }
    else {
        local_8 = (unsigned int)param_3 << 16 | (unsigned int)(unsigned short)param_2;
        *(unsigned int *)(param_1 + 0x154 + (unsigned int)*(unsigned short *)(param_1 + 0x16c) * 4) = local_8;
    }
    return;
}
