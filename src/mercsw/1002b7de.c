/* SPDX-License-Identifier: MIT */
/* mercsw 1002b7de */
extern void __cdecl FUN_1002b120(int param_1);
extern void __cdecl FUN_1002b855(int param_1, int param_2);

void __cdecl FUN_1002b7de(int param_1, short *param_2)
{
    if (param_2 == NULL || *param_2 == 0) {
        FUN_1002b120(param_1);
    }
    else if (*param_2 == 7) {
        FUN_1002b855(param_1, ((unsigned int)(unsigned short)((unsigned int)param_2 >> 0x10) << 16) | (unsigned int)(unsigned short)param_2[1]);
    }
    return;
}
