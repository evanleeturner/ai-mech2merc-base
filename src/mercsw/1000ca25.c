/* SPDX-License-Identifier: MIT */
/* mercsw 1000ca25 */
extern unsigned char DAT_101f64a0[];
extern unsigned char DAT_101f64c0[];

/* Signatures unresolved; all assumed __cdecl, arguments inferred from the call sites. */
int __cdecl FUN_1000c8ee(int param_1);
int __cdecl FUN_1000c95b(int param_1);
int __cdecl FUN_10089cc9(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
void __cdecl FUN_100897ef(int *param_1, unsigned int *param_2);
int *__cdecl FUN_1002f010(int param_1, int param_2);
void __cdecl FUN_1000d659(void);

/* param_3..param_11 are the 9 dwords at stack +0x0c..+0x2c copied into the entry.
   param_14 (stack +0x38) is unused. */
int __cdecl FUN_1000ca25(int param_1, unsigned int param_2,
                         int param_3, int param_4, int param_5,
                         int param_6, int param_7, int param_8,
                         int param_9, int param_10, int param_11,
                         int param_12, int param_13, int param_14,
                         unsigned int param_15, unsigned int param_16,
                         unsigned int param_17)
{
    int *piVar1;
    unsigned int *local_c;
    int local_8;
    int local_3c[12];

    local_8 = FUN_1000c8ee(param_1);
    if (local_8 == -1) {
        local_8 = FUN_1000c95b(param_1);
    }
    if (local_8 != -1) {
        local_c = (unsigned int *)(DAT_101f64a0 + (unsigned int)local_8 * 0x7cu);
        FUN_10089cc9(local_3c, param_6, param_7, param_8, param_9, param_10, param_11);
        FUN_100897ef(local_3c, local_c + 0x12);
        local_c[9]  = (unsigned int)param_3;
        local_c[10] = (unsigned int)param_4;
        local_c[11] = (unsigned int)param_5;
        local_c[12] = (unsigned int)param_6;
        local_c[13] = (unsigned int)param_7;
        local_c[14] = (unsigned int)param_8;
        local_c[15] = (unsigned int)param_9;
        local_c[16] = (unsigned int)param_10;
        local_c[17] = (unsigned int)param_11;
        local_c[0] = param_2;
        local_c[2] = (unsigned int)param_13;
        local_c[1] = (unsigned int)param_12;
        local_c[7] = 0;
        if (param_13 == -2) {
            local_c[8] = 0;
        }
        else if (param_13 == -1) {
            piVar1 = FUN_1002f010(0, 10);
            local_c[8] = (unsigned int)piVar1;
        }
        else {
            piVar1 = FUN_1002f010(*(int *)(DAT_101f64c0 + (unsigned int)param_13 * 0x7cu), 10);
            local_c[8] = (unsigned int)piVar1;
        }
        local_c[3] = local_c[3] | (param_15 & 0x1ff);
        local_c[3] = local_c[3] | ((param_16 & 0xf) << 0xc);
        local_c[4] = param_17;
        FUN_1000d659();
    }
    return local_8;
}
