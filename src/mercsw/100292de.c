/* SPDX-License-Identifier: MIT */
/* mercsw 100292de */
int __cdecl FUN_100292de(int param_1)
{
    int local_8;
    
    local_8 = (*(unsigned short *)(param_1 + 0x17a) << 16) | *(unsigned short *)(param_1 + 0x176);
    if (*(short *)(param_1 + 0x16c) == 0) {
        *(int *)(param_1 + 0x154) = local_8;
    }
    else {
        *(int *)(param_1 + 0x154 + (unsigned int)*(unsigned short *)(param_1 + 0x16c) * 4) = local_8;
        *(short *)(param_1 + 0x16c) = *(short *)(param_1 + 0x16c) + 1;
    }
    return 1;
}
