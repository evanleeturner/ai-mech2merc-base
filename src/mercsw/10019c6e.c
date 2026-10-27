/* SPDX-License-Identifier: MIT */
/* mercsw 10019c6e */
extern void (__cdecl *DAT_100aafd4)(int, unsigned int *, unsigned int);

void __cdecl FUN_10019c6e(unsigned int param_1, unsigned int param_2, unsigned int param_3,
                          unsigned int param_4, unsigned int param_5, unsigned int param_6,
                          unsigned int param_7, unsigned int param_8, unsigned int param_9,
                          unsigned int param_10, unsigned int param_11)
{
    /* 0x78-byte buffer at stack -0x7c; slots 2,5,8,11,14,17,20,23,26,29 are never written */
    unsigned int local_7c[30];

    local_7c[3]  = param_1;
    local_7c[0]  = param_1;
    local_7c[4]  = param_2;
    local_7c[1]  = param_2;
    local_7c[9]  = param_3;
    local_7c[6]  = param_3;
    local_7c[10] = param_4;
    local_7c[7]  = param_4;
    local_7c[15] = param_5;
    local_7c[12] = param_5;
    local_7c[16] = param_6;
    local_7c[13] = param_6;
    local_7c[21] = param_7;
    local_7c[18] = param_7;
    local_7c[22] = param_8;
    local_7c[19] = param_8;
    local_7c[27] = param_9;
    local_7c[24] = param_9;
    local_7c[28] = param_10;
    local_7c[25] = param_10;
    (*DAT_100aafd4)(5, local_7c, param_11);
}
