/* SPDX-License-Identifier: MIT */
/* mercsw 10070800 */
extern int DAT_100ab094;
extern int DAT_100adf38;

void __cdecl FUN_1007078e(int param_1);
unsigned int * __cdecl FUN_100707b3(int param_1, int *param_2);
void __cdecl FUN_100037f0(unsigned int param_1, unsigned int param_2, unsigned int param_3, int param_4, int param_5);
void __cdecl FUN_100709b2(int param_1, int param_2, unsigned int *param_3);

void __cdecl FUN_10070800(int *param_1)
{
    int local_18;
    unsigned int local_14[3]; /* local_14, local_10, local_c are contiguous on the stack */
    unsigned int *local_8;

    local_8 = (unsigned int *)0;
    if (*(int *)(param_1[8] + 0x4c) < 0x421) {
        FUN_1007078e((int)param_1);
    }
    else {
        local_18 = (int)((unsigned int)*(int *)(param_1[8] + 0x4c) + 0xfffffc00u);
        if (local_18 < 0) {
            local_18 = 0;
        }
        param_1[0x22] = 0;
        if (local_18 < 0x100) {
            param_1[0x23] = 1;
        }
        else if (local_18 < 0x300) {
            param_1[0x23] = 2;
        }
        else {
            param_1[0x23] = 3;
            param_1[0x22] = 1;
        }
        if ((param_1[0x21] == 2) && (2 < param_1[0x23])) {
            param_1[0x23] = 2;
        }
        if (*(char *)(param_1[0x13] + 0x30) != '\0') {
            param_1[0x22] = 2;
        }
        if (*param_1 == 4) {
            param_1[0x21] = param_1[0x22];
        }
    }
    if ((param_1[0x24] != -1) && ((*(unsigned char *)(param_1 + 0x20) & 8) != 0)) {
        param_1[0x20] = param_1[0x20] & 0xfffffff7;
        local_8 = FUN_100707b3((int)param_1, (int *)&local_14[0]);
        FUN_100037f0(local_14[0], local_14[1], local_14[2], param_1[0x24], DAT_100ab094);
    }
    if (param_1[1] == DAT_100adf38) {
        FUN_100709b2((int)param_1, 0x100b47e8, local_8);
    }
    return;
}
