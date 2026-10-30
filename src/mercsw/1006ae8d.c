/* SPDX-License-Identifier: MIT */
/* mercsw 1006ae8d */
void __cdecl StopAllSamples(int);
void __stdcall FUN_10007e2a(void);
void __stdcall FUN_1006ab7b(void);
void __stdcall MuteMidiChannel(void);

void __stdcall FUN_1006ae8d(void)
{
    StopAllSamples(0);
    FUN_10007e2a();
    FUN_1006ab7b();
    MuteMidiChannel();
    return;
}
