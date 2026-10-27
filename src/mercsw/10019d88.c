/* SPDX-License-Identifier: MIT */
/* mercsw 10019d88 */
extern void (__cdecl *DAT_100aafd4)(int, unsigned int *, unsigned int);

void __cdecl FUN_10019d88(unsigned int param_1, unsigned int param_2, unsigned int param_3,
                          unsigned int param_4, unsigned int param_5, unsigned int param_6,
                          unsigned int param_7)
{
    /* 0x44-byte buffer starting at local_4c; slots 2,5,8,11,14 are never written */
    unsigned int local_4c[17];

    local_4c[3]  = param_1;
    local_4c[0]  = param_1;
    local_4c[4]  = param_2;
    local_4c[1]  = param_2;
    local_4c[9]  = param_3;
    local_4c[6]  = param_3;
    local_4c[10] = param_4;
    local_4c[7]  = param_4;
    local_4c[15] = param_5;
    local_4c[12] = param_5;
    local_4c[16] = param_6;
    local_4c[13] = param_6;
    (*DAT_100aafd4)(3, local_4c, param_7);
}
