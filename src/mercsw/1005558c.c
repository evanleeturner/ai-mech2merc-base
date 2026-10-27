/* SPDX-License-Identifier: MIT */
/* mercsw 1005558c */
extern int DAT_10160ee8;
extern int DAT_10160eb8;
extern int DAT_10160ec4;
extern int DAT_10160eb4;

/* Parameter and return types of the two callees are inferred from the call sites only. */
unsigned int __cdecl ScaledDiffShift(int a, int b, int c, unsigned char d);
int __cdecl FUN_10055b90(int a, int b, int c, int d, int e);

int __cdecl FUN_1005558c(int param_1, int param_2, unsigned int param_3, int param_4, int param_5, int param_6)
{
    int local_14;
    int local_10;
    int local_8;

    local_14 = (int)((unsigned int)param_2 - (unsigned int)param_1);
    local_8 = (int)((unsigned int)param_6 - (unsigned int)param_5);
    if (local_8 < 0) {
        local_14 = (int)(0u - (unsigned int)local_14);
        local_8 = (int)(0u - (unsigned int)local_8);
        param_1 = param_2;
        param_5 = param_6;
    }
    if (param_4 == 0) {
        param_3 = ScaledDiffShift(DAT_10160ee8, (int)param_3, local_8, (unsigned char)DAT_10160eb8);
    }
    else {
        param_3 = ScaledDiffShift((int)param_3, DAT_10160ec4, local_8, (unsigned char)DAT_10160eb4);
    }
    if (param_3 - (unsigned int)local_14 == 0) {
        local_10 = param_5;
    }
    else {
        local_10 = FUN_10055b90(param_1, param_5, local_14, local_8, (int)(param_3 - (unsigned int)local_14));
    }
    return local_10;
}
