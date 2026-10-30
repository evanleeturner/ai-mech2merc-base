/* SPDX-License-Identifier: MIT */
/* mercsw 10025a50 */
extern int __cdecl FUN_100150df(int param_1, int param_2, int param_3, int param_4);
extern int __cdecl FUN_100141fb(int param_1, int param_2, int param_3, int param_4, int param_5, int *param_6);
int __cdecl FUN_10025a50(int *param_1, int param_2, int param_3, int param_4, int param_5);

int __cdecl FUN_10025a50(int *param_1, int param_2, int param_3, int param_4, int param_5)
{
    int iVar2;
    int local_1c;
    int local_18;
    int local_14;
    int *local_10;
    int local_c;
    int local_8;

    if (param_1 == (int *)0) {
        local_8 = 0;
    } else if ((((param_3 < *param_1) || (param_1[1] < param_3)) || (param_5 < param_1[4])) ||
               (param_1[5] < param_5)) {
        local_8 = 0;
    } else if (param_1[3] < param_4) {
        local_8 = 2;
    } else if (param_4 < param_1[2]) {
        local_8 = 3;
    } else if (param_1[6] == 0) {
        local_8 = FUN_10025a50((int *)param_1[7], param_2, param_3, param_4, param_5);
        if (((local_8 == 0) &&
             (local_8 = FUN_10025a50((int *)param_1[8], param_2, param_3, param_4, param_5), local_8 == 0))
            && ((local_8 = FUN_10025a50((int *)param_1[9], param_2, param_3, param_4, param_5), local_8 == 0
                 && (local_8 = FUN_10025a50((int *)param_1[10], param_2, param_3, param_4, param_5),
                     local_8 == 0)))) {
            local_8 = 2;
        }
    } else {
        local_c = (int)((unsigned int)param_2 + 0x18u);
        local_10 = param_1 + 0xb;
        for (local_14 = 0; local_14 < param_1[6]; local_14 = local_14 + 1) {
            local_18 = *local_10;
            local_10 = local_10 + 1;
            if ((0 < *(int *)(local_18 + 0x18)) &&
                (iVar2 = FUN_100150df(local_18, local_c, param_3, param_5), iVar2 != 0)) {
                iVar2 = FUN_100141fb(local_18, local_c, param_3, param_4, param_5, &local_1c);
                if (iVar2 != 0) {
                    return 3;
                }
                return 2;
            }
        }
        local_8 = 2;
    }
    return local_8;
}
