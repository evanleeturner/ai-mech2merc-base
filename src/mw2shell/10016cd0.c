/* SPDX-License-Identifier: MIT */
/* mw2shell 10016cd0 */
extern void (__cdecl *DAT_1008edfc)(int);

void __stdcall FUN_10016cd0(void)
{
    if (DAT_1008edfc != 0) {
        DAT_1008edfc(0);
    }
    return;
}
