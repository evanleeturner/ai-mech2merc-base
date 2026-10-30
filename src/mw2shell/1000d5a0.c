/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d5a0 */
extern void __cdecl ShowMessageDialog(const char *param_1);
extern void __stdcall FUN_1000fe40(void);
extern void __cdecl FUN_1000e970(byte *param_1, int param_2, int param_3);

extern const char s_You_cannot_afford_even_the_cheap_1008d0b0[];
extern const char s_mpoorw_1008d0fc[];

void __stdcall FUN_1000d5a0(void)
{
    ShowMessageDialog(s_You_cannot_afford_even_the_cheap_1008d0b0);
    FUN_1000fe40();
    FUN_1000e970((byte *)s_mpoorw_1008d0fc, 0xc02b, 0xc01c);
    return;
}
