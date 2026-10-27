/* SPDX-License-Identifier: MIT */
/* mercsw 10019d07 */
extern void (__cdecl *DAT_100aafd4)(int, unsigned int *, unsigned int);

void __cdecl FUN_10019d07(unsigned int param_1, unsigned int param_2, unsigned int param_3,
                          unsigned int param_4, unsigned int param_5, unsigned int param_6,
                          unsigned int param_7, unsigned int param_8, unsigned int param_9)
{
    /* 0x5c-byte buffer starting at local_64; slots 2,5,8,11,14,17,20 are never written */
    unsigned int local_64[23];

    local_64[3]  = param_1;
    local_64[0]  = param_1;
    local_64[4]  = param_2;
    local_64[1]  = param_2;
    local_64[9]  = param_3;
    local_64[6]  = param_3;
    local_64[10] = param_4;
    local_64[7]  = param_4;
    local_64[15] = param_5;
    local_64[12] = param_5;
    local_64[16] = param_6;
    local_64[13] = param_6;
    local_64[21] = param_7;
    local_64[18] = param_7;
    local_64[22] = param_8;
    local_64[19] = param_8;
    (*DAT_100aafd4)(4, local_64, param_9);
}
