/* SPDX-License-Identifier: MIT */
/* mercsw 1001d916 */
extern unsigned int DAT_100ab238;
extern unsigned int DAT_100b9a18;
extern char DAT_101e86b0[];

void __cdecl FUN_1001d916(unsigned int param_1)
{
    unsigned int uVar1;

    uVar1 = DAT_100ab238;
    DAT_100ab238 = param_1;
    (**(void (__cdecl **)(void *))(DAT_100b9a18 + 0x18u))(&DAT_101e86b0);
    DAT_100ab238 = uVar1;
    return;
}
