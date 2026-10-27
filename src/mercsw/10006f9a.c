/* SPDX-License-Identifier: MIT */
/* mercsw 10006f9a */
extern int *DAT_100aa208;
extern unsigned int DAT_100aa20c;

void __cdecl FUN_10006f9a(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
    (*(void (__stdcall **)(int *, unsigned int, unsigned int, int, unsigned int, unsigned int))
        (*DAT_100aa208 + 0x5c))(DAT_100aa208, DAT_100aa20c, param_1, 4, param_2, param_3);
}
