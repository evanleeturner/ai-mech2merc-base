/* SPDX-License-Identifier: MIT */
/* mercsw 10068d4e */
extern unsigned int DAT_100b3998;
extern unsigned int DAT_100b399c;
extern unsigned int DAT_100b39a0;

void __cdecl FUN_10068d4e(int param_1, int param_2, int param_3)
{
    DAT_100b3998 = param_1;
    if (param_1 == 0) {
        DAT_100b3998 = 1;
    }
    DAT_100b399c = param_2;
    if (param_2 == 0) {
        DAT_100b399c = 1;
    }
    DAT_100b39a0 = param_3;
    if (param_3 == 0) {
        DAT_100b39a0 = 1;
    }
    return;
}
