/* SPDX-License-Identifier: MIT */
/* mercsw 10035e10 */
extern void *DAT_100adcf0;
extern void __cdecl FUN_100869d5(void *param_1);

void __stdcall FUN_10035e10(void)
{
    if (DAT_100adcf0 != (void *)0x0) {
        FUN_100869d5(DAT_100adcf0);
        DAT_100adcf0 = (void *)0x0;
    }
    return;
}
