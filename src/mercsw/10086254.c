/* SPDX-License-Identifier: MIT */
/* mercsw 10086254 */
extern undefined4 DAT_100c9050;
extern undefined4 DAT_100c9054;
extern undefined4 DAT_100c9058;
extern undefined __stdcall FUN_1008605a(void);

undefined __stdcall FUN_10086254(void)
{
    DAT_100c9050 = 0;
    DAT_100c9054 = 0;
    DAT_100c9058 = 0;
    FUN_1008605a();
    return 0;
}
