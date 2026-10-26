/* SPDX-License-Identifier: MIT */
/* mercsw 1001ddf0 */
extern int DAT_100ab4c0[];
extern char *PTR_s_bwd_100ab5a0_0x8c_100ab398[];
extern char s_unknown_100ab2ac[];

char * __cdecl FUN_1001ddf0(int param_1)
{
    int local_8;
    char *pcVar1;

    for (local_8 = 0; (local_8 < 0x5b && (DAT_100ab4c0[local_8] != param_1)); local_8 = local_8 + 1) {
    }
    if (local_8 < 0x5b) {
        pcVar1 = PTR_s_bwd_100ab5a0_0x8c_100ab398[local_8];
    } else {
        pcVar1 = s_unknown_100ab2ac;
    }
    return pcVar1;
}
