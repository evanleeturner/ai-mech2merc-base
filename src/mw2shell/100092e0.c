/* SPDX-License-Identifier: MIT */
/* mw2shell 100092e0 */
extern void *DAT_100ad4c8;
void __fastcall FUN_1005f880(void *param_1);

void __stdcall FUN_100092e0(void)
{
    if (DAT_100ad4c8 != (void *)0x0) {
        FUN_1005f880(DAT_100ad4c8);
        DAT_100ad4c8 = (void *)0x0;
    }
    return;
}
